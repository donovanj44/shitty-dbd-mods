// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAkResult : uint8;
enum class EAkCallbackType : uint8;
class UAkCallbackInfo;
class UAkAudioEvent;
enum class AkActionOnEventType : uint8;
class AActor;
enum class EAkCurveInterpolation : uint8;
class UAkAudioType;
class UObject;
class USceneComponent;
struct FVector;
class UAkComponent;
class UAkMediaAsset;
class UAkRtpc;
enum class ERTPCValueType : uint8;
class UAkAudioBank;
struct FLatentActionInfo;
struct FAkExternalSourceInfo;
struct FRotator;
class UAkTrigger;
enum class AkChannelConfiguration : uint8;
struct FTransform;
enum class AkMultiPositionType : uint8;
struct FAkChannelMask;
enum class PanningRule : uint8;
class UAkStateValue;
class UAkSwitchValue;
class UAkAuxBus;
#ifdef AKAUDIO_AkGameplayStatics_generated_h
#error "AkGameplayStatics.generated.h already included, missing '#pragma once' in AkGameplayStatics.h"
#endif
#define AKAUDIO_AkGameplayStatics_generated_h

#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_39_DELEGATE \
struct _Script_AkAudio_eventAkGameplayStaticsBankLoadedCallback_Parms \
{ \
	EAkResult Result; \
}; \
static inline void FAkGameplayStaticsBankLoadedCallback_DelegateWrapper(const FScriptDelegate& AkGameplayStaticsBankLoadedCallback, EAkResult Result) \
{ \
	_Script_AkAudio_eventAkGameplayStaticsBankLoadedCallback_Parms Parms; \
	Parms.Result=Result; \
	AkGameplayStaticsBankLoadedCallback.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_38_DELEGATE \
struct _Script_AkAudio_eventAkGameplayStaticsCompleted_Parms \
{ \
	bool Succeeded; \
}; \
static inline void FAkGameplayStaticsCompleted_DelegateWrapper(const FScriptDelegate& AkGameplayStaticsCompleted, bool Succeeded) \
{ \
	_Script_AkAudio_eventAkGameplayStaticsCompleted_Parms Parms; \
	Parms.Succeeded=Succeeded ? true : false; \
	AkGameplayStaticsCompleted.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_37_DELEGATE \
struct _Script_AkAudio_eventAkGameplayStaticsPostEventCallback_Parms \
{ \
	EAkCallbackType CallbackType; \
	UAkCallbackInfo* CallbackInfo; \
}; \
static inline void FAkGameplayStaticsPostEventCallback_DelegateWrapper(const FScriptDelegate& AkGameplayStaticsPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) \
{ \
	_Script_AkAudio_eventAkGameplayStaticsPostEventCallback_Parms Parms; \
	Parms.CallbackType=CallbackType; \
	Parms.CallbackInfo=CallbackInfo; \
	AkGameplayStaticsPostEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_36_DELEGATE \
struct _Script_AkAudio_eventAkGameplayStaticsBankUnloadedCallback_Parms \
{ \
	EAkResult Result; \
}; \
static inline void FAkGameplayStaticsBankUnloadedCallback_DelegateWrapper(const FScriptDelegate& AkGameplayStaticsBankUnloadedCallback, EAkResult Result) \
{ \
	_Script_AkAudio_eventAkGameplayStaticsBankUnloadedCallback_Parms Parms; \
	Parms.Result=Result; \
	AkGameplayStaticsBankUnloadedCallback.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_SPARSE_DATA
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddOutputCaptureMarker); \
	DECLARE_FUNCTION(execCancelEventCallback); \
	DECLARE_FUNCTION(execClearBanks); \
	DECLARE_FUNCTION(execExecuteActionOnEvent); \
	DECLARE_FUNCTION(execExecuteActionOnPlayingID); \
	DECLARE_FUNCTION(execGetAkAudioTypeUserData); \
	DECLARE_FUNCTION(execGetAkComponent); \
	DECLARE_FUNCTION(execGetAkMediaAssetUserData); \
	DECLARE_FUNCTION(execGetAvailableAudioCultures); \
	DECLARE_FUNCTION(execGetCurrentAudioCulture); \
	DECLARE_FUNCTION(execGetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execGetSpeakerAngles); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execIsGame); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execLoadBankAsync); \
	DECLARE_FUNCTION(execLoadBankByName); \
	DECLARE_FUNCTION(execLoadBanks); \
	DECLARE_FUNCTION(execLoadInitBank); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEvent); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEventAsync); \
	DECLARE_FUNCTION(execPostEvent); \
	DECLARE_FUNCTION(execPostEventAtLocation); \
	DECLARE_FUNCTION(execPostEventAtLocationByName); \
	DECLARE_FUNCTION(execPostEventAttached); \
	DECLARE_FUNCTION(execPostEventByName); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execSetBusConfig); \
	DECLARE_FUNCTION(execSetCurrentAudioCulture); \
	DECLARE_FUNCTION(execSetCurrentAudioCultureAsync); \
	DECLARE_FUNCTION(execSetMultipleChannelEmitterPositions); \
	DECLARE_FUNCTION(execSetMultipleChannelMaskEmitterPositions); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execSetOcclusionRefreshInterval); \
	DECLARE_FUNCTION(execSetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetPanningRule); \
	DECLARE_FUNCTION(execSetReflectionsOrder); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSetSpeakerAngles); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execSpawnAkComponentAtLocation); \
	DECLARE_FUNCTION(execStartAllAmbientSounds); \
	DECLARE_FUNCTION(execStartOutputCapture); \
	DECLARE_FUNCTION(execStartProfilerCapture); \
	DECLARE_FUNCTION(execStopActor); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStopAllAmbientSounds); \
	DECLARE_FUNCTION(execStopOutputCapture); \
	DECLARE_FUNCTION(execStopProfilerCapture); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execUnloadBankAsync); \
	DECLARE_FUNCTION(execUnloadBankByName); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddOutputCaptureMarker); \
	DECLARE_FUNCTION(execCancelEventCallback); \
	DECLARE_FUNCTION(execClearBanks); \
	DECLARE_FUNCTION(execExecuteActionOnEvent); \
	DECLARE_FUNCTION(execExecuteActionOnPlayingID); \
	DECLARE_FUNCTION(execGetAkAudioTypeUserData); \
	DECLARE_FUNCTION(execGetAkComponent); \
	DECLARE_FUNCTION(execGetAkMediaAssetUserData); \
	DECLARE_FUNCTION(execGetAvailableAudioCultures); \
	DECLARE_FUNCTION(execGetCurrentAudioCulture); \
	DECLARE_FUNCTION(execGetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execGetSpeakerAngles); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execIsGame); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execLoadBankAsync); \
	DECLARE_FUNCTION(execLoadBankByName); \
	DECLARE_FUNCTION(execLoadBanks); \
	DECLARE_FUNCTION(execLoadInitBank); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEvent); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEventAsync); \
	DECLARE_FUNCTION(execPostEvent); \
	DECLARE_FUNCTION(execPostEventAtLocation); \
	DECLARE_FUNCTION(execPostEventAtLocationByName); \
	DECLARE_FUNCTION(execPostEventAttached); \
	DECLARE_FUNCTION(execPostEventByName); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execSetBusConfig); \
	DECLARE_FUNCTION(execSetCurrentAudioCulture); \
	DECLARE_FUNCTION(execSetCurrentAudioCultureAsync); \
	DECLARE_FUNCTION(execSetMultipleChannelEmitterPositions); \
	DECLARE_FUNCTION(execSetMultipleChannelMaskEmitterPositions); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execSetOcclusionRefreshInterval); \
	DECLARE_FUNCTION(execSetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetPanningRule); \
	DECLARE_FUNCTION(execSetReflectionsOrder); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSetSpeakerAngles); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execSpawnAkComponentAtLocation); \
	DECLARE_FUNCTION(execStartAllAmbientSounds); \
	DECLARE_FUNCTION(execStartOutputCapture); \
	DECLARE_FUNCTION(execStartProfilerCapture); \
	DECLARE_FUNCTION(execStopActor); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStopAllAmbientSounds); \
	DECLARE_FUNCTION(execStopOutputCapture); \
	DECLARE_FUNCTION(execStopProfilerCapture); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execUnloadBankAsync); \
	DECLARE_FUNCTION(execUnloadBankByName); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGameplayStatics(); \
	friend struct Z_Construct_UClass_UAkGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UAkGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameplayStatics)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUAkGameplayStatics(); \
	friend struct Z_Construct_UClass_UAkGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UAkGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameplayStatics)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameplayStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameplayStatics(UAkGameplayStatics&&); \
	NO_API UAkGameplayStatics(const UAkGameplayStatics&); \
public:


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameplayStatics(UAkGameplayStatics&&); \
	NO_API UAkGameplayStatics(const UAkGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameplayStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkGameplayStatics)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_41_PROLOG
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_INCLASS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
