from __future__ import annotations

import json
from dataclasses import dataclass
from functools import lru_cache
from pathlib import Path
from typing import Any


class PresetConfigurationError(RuntimeError):
    """Errore nella configurazione del file presets.json."""


class PresetNotFoundError(KeyError):
    """Il preset richiesto non esiste."""


@dataclass(frozen=True, slots=True)
class Preset:
    preset_id: str
    title: str
    description: str
    prompt: str


def _validate_text_field(
    preset_id: str,
    preset_data: dict[str, Any],
    field_name: str,
) -> str:
    raw_value = preset_data.get(field_name)

    if not isinstance(raw_value, str):
        raise PresetConfigurationError(
            f"Il campo '{field_name}' del preset "
            f"'{preset_id}' deve essere una stringa."
        )

    normalized_value = raw_value.strip()

    if not normalized_value:
        raise PresetConfigurationError(
            f"Il campo '{field_name}' del preset "
            f"'{preset_id}' non può essere vuoto."
        )

    return normalized_value


@lru_cache(maxsize=8)
def load_presets(presets_file_path: Path) -> dict[str, Preset]:
    try:
        with presets_file_path.open(
            mode="r",
            encoding="utf-8",
        ) as presets_file:
            raw_presets = json.load(presets_file)

    except FileNotFoundError as error:
        raise PresetConfigurationError(
            f"File preset non trovato: {presets_file_path}"
        ) from error

    except json.JSONDecodeError as error:
        raise PresetConfigurationError(
            f"Il file {presets_file_path} contiene JSON non valido: "
            f"riga {error.lineno}, colonna {error.colno}."
        ) from error

    if not isinstance(raw_presets, dict):
        raise PresetConfigurationError(
            "La radice di presets.json deve essere un oggetto JSON."
        )

    parsed_presets: dict[str, Preset] = {}

    for raw_preset_id, raw_preset_data in raw_presets.items():
        if not isinstance(raw_preset_id, str):
            raise PresetConfigurationError(
                "Ogni ID preset deve essere una stringa."
            )

        preset_id = raw_preset_id.strip().lower()

        if not preset_id:
            raise PresetConfigurationError(
                "Un preset contiene un ID vuoto."
            )

        if not isinstance(raw_preset_data, dict):
            raise PresetConfigurationError(
                f"Il preset '{preset_id}' deve essere un oggetto JSON."
            )

        parsed_presets[preset_id] = Preset(
            preset_id=preset_id,
            title=_validate_text_field(
                preset_id,
                raw_preset_data,
                "title",
            ),
            description=_validate_text_field(
                preset_id,
                raw_preset_data,
                "description",
            ),
            prompt=_validate_text_field(
                preset_id,
                raw_preset_data,
                "prompt",
            ),
        )

    if not parsed_presets:
        raise PresetConfigurationError(
            "Il file presets.json non contiene alcun preset."
        )

    return parsed_presets


def get_preset(
    presets_file_path: Path,
    preset_id: str,
) -> Preset:
    normalized_preset_id = preset_id.strip().lower()

    presets = load_presets(presets_file_path)
    preset = presets.get(normalized_preset_id)

    if preset is None:
        raise PresetNotFoundError(normalized_preset_id)

    return preset