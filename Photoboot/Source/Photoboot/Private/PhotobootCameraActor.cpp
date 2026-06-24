// Copyright Epic Games, Inc. All Rights Reserved.

#include "PhotobootCameraActor.h"

#include "MediaPlayer.h"
#include "Misc/MediaBlueprintFunctionLibrary.h"


DEFINE_LOG_CATEGORY_STATIC(
    LogPhotobootCamera,
    Log,
    All
);


APhotobootCameraActor::APhotobootCameraActor()
{
    PrimaryActorTick.bCanEverTick = false;

    MediaPlayer = nullptr;

    PreferredDeviceName = TEXT("");

    bFallbackToFirstDevice = true;
    bOpenOnBeginPlay = true;

    CurrentDeviceName = TEXT("");
    CurrentDeviceUrl = TEXT("");
}


void APhotobootCameraActor::BeginPlay()
{
    Super::BeginPlay();

    BindMediaPlayerEvents();

    if (bOpenOnBeginPlay)
    {
        StartCamera();
    }
}


void APhotobootCameraActor::EndPlay(
    const EEndPlayReason::Type EndPlayReason
)
{
    StopCamera();

    UnbindMediaPlayerEvents();

    Super::EndPlay(EndPlayReason);
}


bool APhotobootCameraActor::StartCamera()
{
    if (!IsValid(MediaPlayer))
    {
        ReportCameraError(
            TEXT(
                "Media Player non assegnato al "
                "PhotobootCameraActor."
            )
        );

        return false;
    }

    /*
     * Chiude una eventuale sessione precedente.
     */
    MediaPlayer->Close();

    CurrentDeviceName.Reset();
    CurrentDeviceUrl.Reset();

    /*
     * Recupera tutti i dispositivi di acquisizione
     * video disponibili sul computer.
     */
    TArray<FMediaCaptureDevice> AvailableDevices;

    UMediaBlueprintFunctionLibrary::
        EnumerateVideoCaptureDevices(
            AvailableDevices,
            -1
        );

    if (AvailableDevices.IsEmpty())
    {
        ReportCameraError(
            TEXT(
                "Nessun dispositivo video rilevato. "
                "Verifica che la webcam sia collegata "
                "e autorizzata nelle impostazioni di Windows."
            )
        );

        return false;
    }

    UE_LOG(
        LogPhotobootCamera,
        Display,
        TEXT(
            "Dispositivi video rilevati: %d"
        ),
        AvailableDevices.Num()
    );

    /*
     * Scrive nei log tutti i dispositivi rilevati.
     */
    for (
        int32 DeviceIndex = 0;
        DeviceIndex < AvailableDevices.Num();
        ++DeviceIndex
        )
    {
        const FMediaCaptureDevice& Device =
            AvailableDevices[DeviceIndex];

        UE_LOG(
            LogPhotobootCamera,
            Display,
            TEXT(
                "Dispositivo [%d] - Nome: %s - URL: %s"
            ),
            DeviceIndex,
            *Device.DisplayName.ToString(),
            *Device.Url
        );
    }

    int32 SelectedDeviceIndex = INDEX_NONE;

    /*
     * Se è stato specificato un nome preferito,
     * cerca una webcam il cui nome contenga
     * la stringa indicata.
     */
    if (!PreferredDeviceName.IsEmpty())
    {
        for (
            int32 DeviceIndex = 0;
            DeviceIndex < AvailableDevices.Num();
            ++DeviceIndex
            )
        {
            const FString DeviceDisplayName =
                AvailableDevices[DeviceIndex]
                .DisplayName
                .ToString();

            if (
                DeviceDisplayName.Contains(
                    PreferredDeviceName,
                    ESearchCase::IgnoreCase,
                    ESearchDir::FromStart
                )
                )
            {
                SelectedDeviceIndex = DeviceIndex;
                break;
            }
        }
    }

    /*
     * Se non è stata indicata una webcam preferita,
     * oppure se è consentito il fallback,
     * utilizza il primo dispositivo disponibile.
     */
    if (SelectedDeviceIndex == INDEX_NONE)
    {
        if (
            PreferredDeviceName.IsEmpty()
            || bFallbackToFirstDevice
            )
        {
            SelectedDeviceIndex = 0;
        }
        else
        {
            ReportCameraError(
                FString::Printf(
                    TEXT(
                        "La webcam preferita '%s' "
                        "non è stata trovata."
                    ),
                    *PreferredDeviceName
                )
            );

            return false;
        }
    }

    const FMediaCaptureDevice& SelectedDevice =
        AvailableDevices[SelectedDeviceIndex];

    CurrentDeviceName =
        SelectedDevice.DisplayName.ToString();

    CurrentDeviceUrl =
        SelectedDevice.Url;

    if (CurrentDeviceUrl.IsEmpty())
    {
        ReportCameraError(
            FString::Printf(
                TEXT(
                    "Il dispositivo '%s' non ha "
                    "restituito un URL Media valido."
                ),
                *CurrentDeviceName
            )
        );

        return false;
    }

    UE_LOG(
        LogPhotobootCamera,
        Display,
        TEXT(
            "Apertura webcam - Nome: %s - URL: %s"
        ),
        *CurrentDeviceName,
        *CurrentDeviceUrl
    );

    /*
     * Apre direttamente l'URL restituito
     * dal dispositivo di acquisizione.
     */
    const bool bOpenRequestAccepted =
        MediaPlayer->OpenUrl(CurrentDeviceUrl);

    if (!bOpenRequestAccepted)
    {
        ReportCameraError(
            FString::Printf(
                TEXT(
                    "Il Media Player ha rifiutato "
                    "l'apertura della webcam '%s'."
                ),
                *CurrentDeviceName
            )
        );

        return false;
    }

    return true;
}


void APhotobootCameraActor::StopCamera()
{
    if (!IsValid(MediaPlayer))
    {
        return;
    }

    if (
        MediaPlayer->IsPlaying()
        || MediaPlayer->IsReady()
        )
    {
        UE_LOG(
            LogPhotobootCamera,
            Display,
            TEXT(
                "Chiusura della webcam: %s"
            ),
            *CurrentDeviceName
        );
    }

    MediaPlayer->Close();
}


bool APhotobootCameraActor::RestartCamera()
{
    StopCamera();

    return StartCamera();
}


bool APhotobootCameraActor::IsCameraReady() const
{
    return IsValid(MediaPlayer)
        && MediaPlayer->IsReady();
}


bool APhotobootCameraActor::IsCameraPlaying() const
{
    return IsValid(MediaPlayer)
        && MediaPlayer->IsPlaying();
}


FString APhotobootCameraActor::
GetCurrentDeviceName() const
{
    return CurrentDeviceName;
}


void APhotobootCameraActor::HandleMediaOpened(
    FString OpenedUrl
)
{
    if (!IsValid(MediaPlayer))
    {
        ReportCameraError(
            TEXT(
                "La webcam è stata aperta, "
                "ma il Media Player non è più valido."
            )
        );

        return;
    }

    /*
     * Per una sorgente live OnMediaOpened conferma
     * che il dispositivo è stato aperto.
     *
     * Il Media Player può avere Play On Open attivo
     * oppure può completare la transizione allo stato
     * Playing in modo asincrono.
     *
     * Per questo motivo Play() viene tentato, ma il suo
     * valore false non viene considerato un errore fatale.
     */
    if (!MediaPlayer->IsPlaying())
    {
        const bool bExplicitPlayAccepted =
            MediaPlayer->Play();

        if (bExplicitPlayAccepted)
        {
            UE_LOG(
                LogPhotobootCamera,
                Display,
                TEXT(
                    "Comando Play accettato "
                    "per la webcam '%s'."
                ),
                *CurrentDeviceName
            );
        }
        else
        {
            UE_LOG(
                LogPhotobootCamera,
                Warning,
                TEXT(
                    "Il comando Play esplicito non è stato "
                    "accettato dalla webcam '%s'. "
                    "La sorgente live risulta comunque aperta "
                    "e può essere gestita da Play On Open."
                ),
                *CurrentDeviceName
            );
        }
    }

    const int32 VideoTrackCount =
        MediaPlayer->GetNumTracks(
            EMediaPlayerTrack::Video
        );

    UE_LOG(
        LogPhotobootCamera,
        Display,
        TEXT(
            "Webcam aperta correttamente. "
            "Nome: %s - URL: %s"
        ),
        *CurrentDeviceName,
        *OpenedUrl
    );

    UE_LOG(
        LogPhotobootCamera,
        Display,
        TEXT(
            "Stato Media Player - "
            "Ready: %s - Playing: %s - "
            "Video Tracks: %d - Rate: %.2f"
        ),
        MediaPlayer->IsReady()
        ? TEXT("true")
        : TEXT("false"),
        MediaPlayer->IsPlaying()
        ? TEXT("true")
        : TEXT("false"),
        VideoTrackCount,
        MediaPlayer->GetRate()
    );

    /*
     * La sorgente è stata aperta: comunichiamo
     * il successo senza richiedere che IsPlaying()
     * sia già true nello stesso frame.
     */
    OnCameraOpened.Broadcast();
}


void APhotobootCameraActor::HandleMediaOpenFailed(
    FString FailedUrl
)
{
    ReportCameraError(
        FString::Printf(
            TEXT(
                "Impossibile aprire la webcam '%s'. "
                "URL: %s"
            ),
            *CurrentDeviceName,
            *FailedUrl
        )
    );
}


void APhotobootCameraActor::BindMediaPlayerEvents()
{
    if (!IsValid(MediaPlayer))
    {
        return;
    }

    MediaPlayer->OnMediaOpened.AddUniqueDynamic(
        this,
        &APhotobootCameraActor::HandleMediaOpened
    );

    MediaPlayer->OnMediaOpenFailed.AddUniqueDynamic(
        this,
        &APhotobootCameraActor::HandleMediaOpenFailed
    );
}


void APhotobootCameraActor::UnbindMediaPlayerEvents()
{
    if (!IsValid(MediaPlayer))
    {
        return;
    }

    MediaPlayer->OnMediaOpened.RemoveDynamic(
        this,
        &APhotobootCameraActor::HandleMediaOpened
    );

    MediaPlayer->OnMediaOpenFailed.RemoveDynamic(
        this,
        &APhotobootCameraActor::HandleMediaOpenFailed
    );
}


void APhotobootCameraActor::ReportCameraError(
    const FString& ErrorMessage
)
{
    UE_LOG(
        LogPhotobootCamera,
        Error,
        TEXT("%s"),
        *ErrorMessage
    );

    OnCameraError.Broadcast(ErrorMessage);
}