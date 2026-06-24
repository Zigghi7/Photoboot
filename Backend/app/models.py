from __future__ import annotations

from pydantic import BaseModel, ConfigDict, Field


class HealthResponse(BaseModel):
    model_config = ConfigDict(extra="forbid")

    status: str = Field(
        description="Stato corrente del backend.",
    )

    service: str = Field(
        description="Nome del servizio.",
    )

    version: str = Field(
        description="Versione del backend.",
    )

    mock_mode: bool = Field(
        description="Indica che la generazione OpenAI non è ancora attiva.",
    )


class PresetSummary(BaseModel):
    model_config = ConfigDict(extra="forbid")

    preset_id: str
    title: str
    description: str


class PresetListResponse(BaseModel):
    model_config = ConfigDict(extra="forbid")

    presets: list[PresetSummary]