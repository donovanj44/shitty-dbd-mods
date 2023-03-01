#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAkResult.h"
#include "AkActionOnEventType.h"
#include "Engine/LatentActionManager.h"
#include "UObject/NoExportTypes.h"
#include "AkChannelConfiguration.h"
#include "UObject/NoExportTypes.h"
#include "AkMultiPositionType.h"
#include "UObject/NoExportTypes.h"
#include "PanningRule.h"
#include "Engine/EngineTypes.h"
#include "AkChannelMask.h"
#include "EAkCallbackType.h"
#include "AkExternalSourceInfo.h"
#include "ERTPCValueType.h"
#include "EAkCurveInterpolation.h"
#include "AkGameplayStatics.generated.h"

class UAkAudioBank;
class AActor;
class UAkAuxBus;
class UAkComponent;
class UObject;
class UAkAudioEvent;
class UAkSwitchValue;
class UAkStateValue;
class UAkRtpc;
class UAkCallbackInfo;
class UAkTrigger;
class UAkMediaAsset;
class USceneComponent;
class UAkAudioType;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FAkGameplayStaticsBankUnloadedCallback, EAkResult, Result);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAkGameplayStaticsPostEventCallback, EAkCallbackType, CallbackType, UAkCallbackInfo*, CallbackInfo);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FAkGameplayStaticsCompleted, bool, Succeeded);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FAkGameplayStaticsBankLoadedCallback, EAkResult, Result);

UCLASS(BlueprintType)
class AKAUDIO_API UAkGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UnloadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadBankAsync(UAkAudioBank* Bank, const FAkGameplayStaticsBankUnloadedCallback& BankUnloadedCallback);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopProfilerCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopOutputCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopAll();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartProfilerCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartOutputCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetState(UAkStateValue* StateValue, FName StateGroup, FName State);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, const FString& DeviceShareset);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, AActor* Actor, FName RTPC);
    
    UFUNCTION(BlueprintCallable)
    static void SetReflectionsOrder(int32 Order, bool RefreshPaths);
    
    UFUNCTION(BlueprintCallable)
    static void SetPanningRule(PanningRule PanRule);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOutputBusVolume(float BusVolume, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetOcclusionScalingFactor(float ScalingFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentAudioCultureAsync(const FString& AudioCulture, const FAkGameplayStaticsCompleted& Completed);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentAudioCulture(const FString& AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FAkGameplayStaticsPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    static void PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32& PlayingID, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, const FString& EventName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadInitBank();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable)
    static void LoadBankAsync(UAkAudioBank* Bank, const FAkGameplayStaticsBankLoadedCallback& BankLoadedCallback);
    
    UFUNCTION(BlueprintCallable)
    static void LoadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable)
    static void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, const FString& DeviceShareset);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GetRTPCValue(UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, AActor* Actor, FName RTPC);
    
    UFUNCTION(BlueprintCallable)
    static float GetOcclusionScalingFactor();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentAudioCulture();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAvailableAudioCultures();
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetAkMediaAssetUserData(const UAkMediaAsset* Instance, const UClass* Type);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* GetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetAkAudioTypeUserData(const UAkAudioType* Instance, const UClass* Type);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ExecuteActionOnEvent(UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ClearBanks();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void CancelEventCallback(const FAkGameplayStaticsPostEventCallback& PostEventCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void AddOutputCaptureMarker(const FString& MarkerText);
    
    UAkGameplayStatics();
};

