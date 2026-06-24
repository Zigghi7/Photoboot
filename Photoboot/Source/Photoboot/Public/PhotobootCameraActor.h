// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhotobootCameraActor.generated.h"


class UMediaPlayer;


/**
 * Evento emesso quando la webcam viene aperta correttamente.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(
    FPhotobootCameraOpened
);


/**
 * Evento emesso quando si verifica un errore relativo alla webcam.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
    FPhotobootCameraError,
    FString,
    ErrorMessage
);


/**
 * Actor responsabile del rilevamento, dell'apertura
 * e della chiusura della webcam.
 *
 * La webcam viene rilevata tramite Media Framework.
 * Se PreferredDeviceName è vuoto, viene utilizzato
 * il primo dispositivo video disponibile.
 */
UCLASS()
class PHOTOBOOT_API APhotobootCameraActor : public AActor
{
    GENERATED_BODY()

public:

    APhotobootCameraActor();


    /**
     * Media Player utilizzato per aprire e riprodurre
     * il flusso video della webcam.
     *
     * Verrà assegnato dall'Editor.
     */
    UPROPERTY(
        EditAnywhere,
        BlueprintReadOnly,
        Category = "Photoboot|Camera"
    )
    TObjectPtr<UMediaPlayer> MediaPlayer;


    /**
     * Parte del nome della webcam da utilizzare.
     *
     * Esempi:
     * Logitech
     * C920
     * OBS
     *
     * Il confronto non distingue maiuscole e minuscole.
     *
     * Se il campo è vuoto, viene utilizzata
     * la prima webcam disponibile.
     */
    UPROPERTY(
        EditAnywhere,
        BlueprintReadWrite,
        Category = "Photoboot|Camera"
    )
    FString PreferredDeviceName;


    /**
     * Se true e la webcam preferita non viene trovata,
     * viene utilizzato il primo dispositivo disponibile.
     *
     * Se false, l'assenza della webcam preferita
     * genera un errore.
     */
    UPROPERTY(
        EditAnywhere,
        BlueprintReadWrite,
        Category = "Photoboot|Camera"
    )
    bool bFallbackToFirstDevice;


    /**
     * Se true, la webcam viene aperta automaticamente
     * quando inizia il gioco.
     */
    UPROPERTY(
        EditAnywhere,
        BlueprintReadWrite,
        Category = "Photoboot|Camera"
    )
    bool bOpenOnBeginPlay;


    /**
     * Nome del dispositivo attualmente selezionato.
     */
    UPROPERTY(
        BlueprintReadOnly,
        Category = "Photoboot|Camera"
    )
    FString CurrentDeviceName;


    /**
     * URL Media Framework del dispositivo selezionato.
     *
     * Viene esposto per diagnostica.
     */
    UPROPERTY(
        BlueprintReadOnly,
        Category = "Photoboot|Camera"
    )
    FString CurrentDeviceUrl;


    /**
     * Evento Blueprint emesso quando la webcam
     * viene aperta correttamente.
     */
    UPROPERTY(
        BlueprintAssignable,
        Category = "Photoboot|Camera"
    )
    FPhotobootCameraOpened OnCameraOpened;


    /**
     * Evento Blueprint emesso quando la webcam
     * non può essere aperta.
     */
    UPROPERTY(
        BlueprintAssignable,
        Category = "Photoboot|Camera"
    )
    FPhotobootCameraError OnCameraError;


    /**
     * Cerca i dispositivi video disponibili
     * e tenta di aprire la webcam selezionata.
     *
     * @return true se la richiesta di apertura
     *         è stata accettata dal Media Player.
     *
     * Il risultato definitivo viene comunicato tramite:
     * - OnCameraOpened
     * - OnCameraError
     */
    UFUNCTION(
        BlueprintCallable,
        Category = "Photoboot|Camera"
    )
    bool StartCamera();


    /**
     * Chiude il flusso della webcam.
     */
    UFUNCTION(
        BlueprintCallable,
        Category = "Photoboot|Camera"
    )
    void StopCamera();


    /**
     * Chiude e riapre la webcam.
     */
    UFUNCTION(
        BlueprintCallable,
        Category = "Photoboot|Camera"
    )
    bool RestartCamera();


    /**
     * Restituisce true se il Media Player
     * è pronto.
     */
    UFUNCTION(
        BlueprintPure,
        Category = "Photoboot|Camera"
    )
    bool IsCameraReady() const;


    /**
     * Restituisce true se il Media Player
     * sta riproducendo il flusso video.
     */
    UFUNCTION(
        BlueprintPure,
        Category = "Photoboot|Camera"
    )
    bool IsCameraPlaying() const;


    /**
     * Restituisce il nome del dispositivo selezionato.
     */
    UFUNCTION(
        BlueprintPure,
        Category = "Photoboot|Camera"
    )
    FString GetCurrentDeviceName() const;


protected:

    virtual void BeginPlay() override;


    virtual void EndPlay(
        const EEndPlayReason::Type EndPlayReason
    ) override;


private:

    /**
     * Callback eseguita quando il Media Player
     * ha aperto correttamente la webcam.
     */
    UFUNCTION()
    void HandleMediaOpened(
        FString OpenedUrl
    );


    /**
     * Callback eseguita quando il Media Player
     * non riesce ad aprire la webcam.
     */
    UFUNCTION()
    void HandleMediaOpenFailed(
        FString FailedUrl
    );


    /**
     * Collega gli eventi del Media Player.
     */
    void BindMediaPlayerEvents();


    /**
     * Scollega gli eventi del Media Player.
     */
    void UnbindMediaPlayerEvents();


    /**
     * Comunica un errore ai log e ai Blueprint.
     */
    void ReportCameraError(
        const FString& ErrorMessage
    );
};