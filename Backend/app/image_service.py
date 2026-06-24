from __future__ import annotations

import io
from pathlib import Path

from PIL import (
    Image,
    ImageDraw,
    ImageFont,
    ImageOps,
    UnidentifiedImageError,
)


class InvalidImageError(ValueError):
    """I byte ricevuti non rappresentano un'immagine valida."""


def _load_font(
    size: int,
    bold: bool = False,
) -> ImageFont.FreeTypeFont | ImageFont.ImageFont:
    windows_font_directory = Path("C:/Windows/Fonts")

    possible_font_names = (
        ("arialbd.ttf", "segoeuib.ttf")
        if bold
        else ("arial.ttf", "segoeui.ttf")
    )

    for font_name in possible_font_names:
        font_path = windows_font_directory / font_name

        if not font_path.exists():
            continue

        try:
            return ImageFont.truetype(
                str(font_path),
                size=size,
            )
        except OSError:
            continue

    return ImageFont.load_default()


def _draw_centered_text(
    draw: ImageDraw.ImageDraw,
    text: str,
    center_x: int,
    top_y: int,
    font: ImageFont.FreeTypeFont | ImageFont.ImageFont,
    fill: tuple[int, int, int],
) -> None:
    text_box = draw.textbbox(
        (0, 0),
        text,
        font=font,
    )

    text_width = text_box[2] - text_box[0]

    draw.text(
        (center_x - text_width // 2, top_y),
        text,
        font=font,
        fill=fill,
    )


def create_mock_result(
    source_image_bytes: bytes,
    preset_title: str,
    preset_id: str,
    output_width: int,
    output_height: int,
    jpeg_quality: int,
) -> bytes:
    if not source_image_bytes:
        raise InvalidImageError(
            "L'immagine ricevuta è vuota."
        )

    try:
        with Image.open(io.BytesIO(source_image_bytes)) as source_image:
            corrected_image = ImageOps.exif_transpose(source_image)
            rgb_image = corrected_image.convert("RGB")

            output_image = ImageOps.fit(
                image=rgb_image,
                size=(output_width, output_height),
                method=Image.Resampling.LANCZOS,
                centering=(0.5, 0.42),
            )

    except (
        UnidentifiedImageError,
        OSError,
        ValueError,
    ) as error:
        raise InvalidImageError(
            "Il file ricevuto non è un'immagine valida."
        ) from error

    draw = ImageDraw.Draw(
        output_image,
        mode="RGB",
    )

    border_width = max(8, output_width // 80)
    header_height = max(130, output_height // 10)
    footer_height = max(90, output_height // 14)

    draw.rectangle(
        (
            0,
            0,
            output_width - 1,
            output_height - 1,
        ),
        outline=(255, 255, 255),
        width=border_width,
    )

    draw.rectangle(
        (
            0,
            0,
            output_width,
            header_height,
        ),
        fill=(20, 20, 20),
    )

    draw.rectangle(
        (
            0,
            output_height - footer_height,
            output_width,
            output_height,
        ),
        fill=(20, 20, 20),
    )

    title_font = _load_font(
        size=max(30, output_width // 20),
        bold=True,
    )

    subtitle_font = _load_font(
        size=max(22, output_width // 30),
        bold=False,
    )

    _draw_centered_text(
        draw=draw,
        text="MOCK BACKEND",
        center_x=output_width // 2,
        top_y=max(12, header_height // 8),
        font=title_font,
        fill=(255, 255, 255),
    )

    _draw_centered_text(
        draw=draw,
        text=preset_title,
        center_x=output_width // 2,
        top_y=header_height // 2,
        font=subtitle_font,
        fill=(220, 220, 220),
    )

    _draw_centered_text(
        draw=draw,
        text=f"Preset ID: {preset_id}",
        center_x=output_width // 2,
        top_y=output_height - footer_height + footer_height // 3,
        font=subtitle_font,
        fill=(255, 255, 255),
    )

    output_buffer = io.BytesIO()

    output_image.save(
        output_buffer,
        format="JPEG",
        quality=jpeg_quality,
        optimize=True,
        progressive=False,
    )

    result_bytes = output_buffer.getvalue()

    if not result_bytes:
        raise InvalidImageError(
            "La creazione del JPEG mock non ha prodotto dati."
        )

    return result_bytes