from __future__ import annotations

import os
from dataclasses import dataclass
from functools import lru_cache
from pathlib import Path

from dotenv import load_dotenv


BACKEND_ROOT = Path(__file__).resolve().parent.parent
ENV_FILE_PATH = BACKEND_ROOT / ".env"
PRESETS_FILE_PATH = BACKEND_ROOT / "presets" / "presets.json"

load_dotenv(ENV_FILE_PATH)


def _read_int_environment_variable(
    variable_name: str,
    default_value: int,
    minimum_value: int,
    maximum_value: int,
) -> int:
    raw_value = os.getenv(variable_name, str(default_value)).strip()

    try:
        parsed_value = int(raw_value)
    except ValueError as error:
        raise RuntimeError(
            f"La variabile {variable_name} deve contenere un numero intero."
        ) from error

    if not minimum_value <= parsed_value <= maximum_value:
        raise RuntimeError(
            f"La variabile {variable_name} deve essere compresa tra "
            f"{minimum_value} e {maximum_value}."
        )

    return parsed_value


@dataclass(frozen=True, slots=True)
class Settings:
    app_name: str
    app_version: str

    backend_host: str
    backend_port: int

    kiosk_token: str

    max_upload_mb: int

    mock_image_width: int
    mock_image_height: int
    mock_jpeg_quality: int

    presets_file_path: Path

    @property
    def max_upload_bytes(self) -> int:
        return self.max_upload_mb * 1024 * 1024


@lru_cache(maxsize=1)
def get_settings() -> Settings:
    kiosk_token = os.getenv(
        "PHOTOBOOTH_KIOSK_TOKEN",
        "",
    ).strip()

    if not kiosk_token:
        raise RuntimeError(
            "PHOTOBOOTH_KIOSK_TOKEN non è configurato nel file .env."
        )

    if not PRESETS_FILE_PATH.exists():
        raise RuntimeError(
            f"File dei preset non trovato: {PRESETS_FILE_PATH}"
        )

    return Settings(
        app_name="Photoboot Backend",
        app_version="0.1.0",
        backend_host=os.getenv(
            "BACKEND_HOST",
            "127.0.0.1",
        ).strip(),
        backend_port=_read_int_environment_variable(
            variable_name="BACKEND_PORT",
            default_value=8000,
            minimum_value=1,
            maximum_value=65535,
        ),
        kiosk_token=kiosk_token,
        max_upload_mb=_read_int_environment_variable(
            variable_name="MAX_UPLOAD_MB",
            default_value=15,
            minimum_value=1,
            maximum_value=100,
        ),
        mock_image_width=_read_int_environment_variable(
            variable_name="MOCK_IMAGE_WIDTH",
            default_value=1024,
            minimum_value=256,
            maximum_value=4096,
        ),
        mock_image_height=_read_int_environment_variable(
            variable_name="MOCK_IMAGE_HEIGHT",
            default_value=1536,
            minimum_value=256,
            maximum_value=4096,
        ),
        mock_jpeg_quality=_read_int_environment_variable(
            variable_name="MOCK_JPEG_QUALITY",
            default_value=92,
            minimum_value=50,
            maximum_value=100,
        ),
        presets_file_path=PRESETS_FILE_PATH,
    )