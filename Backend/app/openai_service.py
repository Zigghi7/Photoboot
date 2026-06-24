from __future__ import annotations


class OpenAIServiceNotConfiguredError(RuntimeError):
    """La generazione OpenAI verrà implementata in un passaggio successivo."""


def generate_image_with_openai() -> bytes:
    raise OpenAIServiceNotConfiguredError(
        "Il servizio OpenAI non è ancora configurato."
    )