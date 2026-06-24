from __future__ import annotations

import secrets
import uuid
from contextlib import asynccontextmanager
from typing import Annotated, AsyncIterator

from fastapi import (
    FastAPI,
    File,
    Form,
    Header,
    HTTPException,
    UploadFile,
    status,
)
from fastapi.responses import Response

from app.config import Settings, get_settings
from app.image_service import InvalidImageError, create_mock_result
from app.models import (
    HealthResponse,
    PresetListResponse,
    PresetSummary,
)
from app.preset_service import (
    PresetConfigurationError,
    PresetNotFoundError,
    get_preset,
    load_presets,
)


ALLOWED_IMAGE_CONTENT_TYPES = {
    "image/jpeg",
    "image/jpg",
    "image/png",
    "image/webp",
}


def _authorize_kiosk(
    authorization_header: str | None,
    settings: Settings,
) -> None:
    expected_authorization = (
        f"Bearer {settings.kiosk_token}"
    )

    received_authorization = (
        authorization_header or ""
    ).strip()

    if not secrets.compare_digest(
        received_authorization,
        expected_authorization,
    ):
        raise HTTPException(
            status_code=status.HTTP_401_UNAUTHORIZED,
            detail="Token kiosk mancante o non valido.",
            headers={
                "WWW-Authenticate": "Bearer",
            },
        )


async def _read_uploaded_file(
    upload_file: UploadFile,
    maximum_size_bytes: int,
) -> bytes:
    try:
        file_bytes = await upload_file.read(
            maximum_size_bytes + 1
        )
    finally:
        await upload_file.close()

    if not file_bytes:
        raise HTTPException(
            status_code=status.HTTP_400_BAD_REQUEST,
            detail="La fotografia caricata è vuota.",
        )

    if len(file_bytes) > maximum_size_bytes:
        raise HTTPException(
            status_code=status.HTTP_413_CONTENT_TOO_LARGE,
            detail="La fotografia supera il limite consentito.",
        )

    return file_bytes


@asynccontextmanager
async def application_lifespan(
    app: FastAPI,
) -> AsyncIterator[None]:
    settings = get_settings()

    try:
        load_presets(settings.presets_file_path)
    except PresetConfigurationError as error:
        raise RuntimeError(
            f"Configurazione dei preset non valida: {error}"
        ) from error

    yield


settings = get_settings()

app = FastAPI(
    title=settings.app_name,
    version=settings.app_version,
    description=(
        "Backend locale del progetto Photoboot. "
        "In questa versione la generazione è simulata."
    ),
    lifespan=application_lifespan,
)


@app.get(
    "/health",
    response_model=HealthResponse,
    tags=["System"],
)
async def health() -> HealthResponse:
    return HealthResponse(
        status="ok",
        service=settings.app_name,
        version=settings.app_version,
        mock_mode=True,
    )


@app.get(
    "/api/v1/presets",
    response_model=PresetListResponse,
    tags=["Presets"],
)
async def list_presets() -> PresetListResponse:
    presets = load_presets(
        settings.presets_file_path
    )

    preset_summaries = [
        PresetSummary(
            preset_id=preset.preset_id,
            title=preset.title,
            description=preset.description,
        )
        for preset in presets.values()
    ]

    return PresetListResponse(
        presets=preset_summaries
    )


@app.post(
    "/api/v1/generate-mock",
    response_class=Response,
    responses={
        200: {
            "content": {
                "image/jpeg": {}
            },
            "description": "JPEG verticale elaborato dal backend mock.",
        },
        400: {
            "description": "Richiesta non valida.",
        },
        401: {
            "description": "Token kiosk non valido.",
        },
        413: {
            "description": "File troppo grande.",
        },
    },
    tags=["Generation"],
)
async def generate_mock(
    preset_id: Annotated[
        str,
        Form(
            description=(
                "ID del preset, per esempio superhero."
            )
        ),
    ],
    photo: Annotated[
        UploadFile,
        File(
            description="Fotografia da elaborare."
        ),
    ],
    authorization: Annotated[
        str | None,
        Header(
            description=(
                "Token nel formato: "
                "Bearer dev-kiosk-token-change-me"
            )
        ),
    ] = None,
) -> Response:
    _authorize_kiosk(
        authorization_header=authorization,
        settings=settings,
    )

    request_id = uuid.uuid4().hex

    normalized_preset_id = preset_id.strip().lower()

    if not normalized_preset_id:
        raise HTTPException(
            status_code=status.HTTP_400_BAD_REQUEST,
            detail="preset_id non può essere vuoto.",
        )

    try:
        selected_preset = get_preset(
            presets_file_path=settings.presets_file_path,
            preset_id=normalized_preset_id,
        )
    except PresetNotFoundError as error:
        raise HTTPException(
            status_code=status.HTTP_400_BAD_REQUEST,
            detail=(
                f"Preset sconosciuto: "
                f"{normalized_preset_id}"
            ),
        ) from error

    received_content_type = (
        photo.content_type or ""
    ).strip().lower()

    if (
        received_content_type
        and received_content_type
        not in ALLOWED_IMAGE_CONTENT_TYPES
    ):
        raise HTTPException(
            status_code=status.HTTP_400_BAD_REQUEST,
            detail=(
                "Formato immagine non supportato. "
                "Sono consentiti JPEG, PNG e WEBP."
            ),
        )

    uploaded_image_bytes = await _read_uploaded_file(
        upload_file=photo,
        maximum_size_bytes=settings.max_upload_bytes,
    )

    try:
        mock_image_bytes = create_mock_result(
            source_image_bytes=uploaded_image_bytes,
            preset_title=selected_preset.title,
            preset_id=selected_preset.preset_id,
            output_width=settings.mock_image_width,
            output_height=settings.mock_image_height,
            jpeg_quality=settings.mock_jpeg_quality,
        )
    except InvalidImageError as error:
        raise HTTPException(
            status_code=status.HTTP_400_BAD_REQUEST,
            detail=str(error),
        ) from error

    return Response(
        content=mock_image_bytes,
        media_type="image/jpeg",
        headers={
            "Cache-Control": "no-store",
            "X-Photoboot-Request-ID": request_id,
            "X-Photoboot-Preset-ID": selected_preset.preset_id,
            "X-Photoboot-Mock": "true",
        },
    )