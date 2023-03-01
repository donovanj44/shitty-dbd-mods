// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EColorVisionDeficiency : uint8;
class UDBDGameUserSettings;
#ifdef DEADBYDAYLIGHT_DBDGameUserSettings_generated_h
#error "DBDGameUserSettings.generated.h already included, missing '#pragma once' in DBDGameUserSettings.h"
#endif
#define DEADBYDAYLIGHT_DBDGameUserSettings_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_13_DELEGATE \
static inline void FDBDGameUserSettingsOnSetCustomizedHudsTimestamp_DelegateWrapper(const FMulticastScriptDelegate& DBDGameUserSettingsOnSetCustomizedHudsTimestamp) \
{ \
	DBDGameUserSettingsOnSetCustomizedHudsTimestamp.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetColorBlindMode); \
	DECLARE_FUNCTION(execGetColorBlindModeIntensity); \
	DECLARE_FUNCTION(execGetDBDGameUserSettings); \
	DECLARE_FUNCTION(execGetHUDKillerHookCountVisibility); \
	DECLARE_FUNCTION(execGetHUDPlayerNamesVisibility); \
	DECLARE_FUNCTION(execGetHudScaleFactor); \
	DECLARE_FUNCTION(execGetHUDScoreEventsVisibility); \
	DECLARE_FUNCTION(execGetLargeText); \
	DECLARE_FUNCTION(execGetMenuScaleFactor); \
	DECLARE_FUNCTION(execGetSkillCheckScaleFactor);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColorBlindMode); \
	DECLARE_FUNCTION(execGetColorBlindModeIntensity); \
	DECLARE_FUNCTION(execGetDBDGameUserSettings); \
	DECLARE_FUNCTION(execGetHUDKillerHookCountVisibility); \
	DECLARE_FUNCTION(execGetHUDPlayerNamesVisibility); \
	DECLARE_FUNCTION(execGetHudScaleFactor); \
	DECLARE_FUNCTION(execGetHUDScoreEventsVisibility); \
	DECLARE_FUNCTION(execGetLargeText); \
	DECLARE_FUNCTION(execGetMenuScaleFactor); \
	DECLARE_FUNCTION(execGetSkillCheckScaleFactor);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDGameUserSettings(); \
	friend struct Z_Construct_UClass_UDBDGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UDBDGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDGameUserSettings)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDBDGameUserSettings(); \
	friend struct Z_Construct_UClass_UDBDGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UDBDGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDGameUserSettings)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDGameUserSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDGameUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDGameUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDGameUserSettings(UDBDGameUserSettings&&); \
	NO_API UDBDGameUserSettings(const UDBDGameUserSettings&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDGameUserSettings(UDBDGameUserSettings&&); \
	NO_API UDBDGameUserSettings(const UDBDGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDGameUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDGameUserSettings)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DeviceLoginTokenID() { return STRUCT_OFFSET(UDBDGameUserSettings, DeviceLoginTokenID); } \
	FORCEINLINE static uint32 __PPO__ScreenScaleForWindowedMode() { return STRUCT_OFFSET(UDBDGameUserSettings, ScreenScaleForWindowedMode); } \
	FORCEINLINE static uint32 __PPO__ScalabilityLevel() { return STRUCT_OFFSET(UDBDGameUserSettings, ScalabilityLevel); } \
	FORCEINLINE static uint32 __PPO__AutoScalabilitySet() { return STRUCT_OFFSET(UDBDGameUserSettings, AutoScalabilitySet); } \
	FORCEINLINE static uint32 __PPO__AutoAdjust() { return STRUCT_OFFSET(UDBDGameUserSettings, AutoAdjust); } \
	FORCEINLINE static uint32 __PPO__ScreenResolution() { return STRUCT_OFFSET(UDBDGameUserSettings, ScreenResolution); } \
	FORCEINLINE static uint32 __PPO__FullScreen() { return STRUCT_OFFSET(UDBDGameUserSettings, FullScreen); } \
	FORCEINLINE static uint32 __PPO__MenuScaleFactor() { return STRUCT_OFFSET(UDBDGameUserSettings, MenuScaleFactor); } \
	FORCEINLINE static uint32 __PPO__HudScaleFactor() { return STRUCT_OFFSET(UDBDGameUserSettings, HudScaleFactor); } \
	FORCEINLINE static uint32 __PPO__SkillCheckScaleFactor() { return STRUCT_OFFSET(UDBDGameUserSettings, SkillCheckScaleFactor); } \
	FORCEINLINE static uint32 __PPO__LargeText() { return STRUCT_OFFSET(UDBDGameUserSettings, LargeText); } \
	FORCEINLINE static uint32 __PPO__HUDPlayerNamesVisibility() { return STRUCT_OFFSET(UDBDGameUserSettings, HUDPlayerNamesVisibility); } \
	FORCEINLINE static uint32 __PPO__HUDKillerHookCountVisibility() { return STRUCT_OFFSET(UDBDGameUserSettings, HUDKillerHookCountVisibility); } \
	FORCEINLINE static uint32 __PPO__HUDScoreEventsVisibility() { return STRUCT_OFFSET(UDBDGameUserSettings, HUDScoreEventsVisibility); } \
	FORCEINLINE static uint32 __PPO__FPSLimit() { return STRUCT_OFFSET(UDBDGameUserSettings, FPSLimit); } \
	FORCEINLINE static uint32 __PPO__MainVolume() { return STRUCT_OFFSET(UDBDGameUserSettings, MainVolume); } \
	FORCEINLINE static uint32 __PPO__MainVolumeOn() { return STRUCT_OFFSET(UDBDGameUserSettings, MainVolumeOn); } \
	FORCEINLINE static uint32 __PPO__MenuMusicVolume() { return STRUCT_OFFSET(UDBDGameUserSettings, MenuMusicVolume); } \
	FORCEINLINE static uint32 __PPO__MenuMusicVolumeOn() { return STRUCT_OFFSET(UDBDGameUserSettings, MenuMusicVolumeOn); } \
	FORCEINLINE static uint32 __PPO__UseHeadphones() { return STRUCT_OFFSET(UDBDGameUserSettings, UseHeadphones); } \
	FORCEINLINE static uint32 __PPO__MuteOnFocusLost() { return STRUCT_OFFSET(UDBDGameUserSettings, MuteOnFocusLost); } \
	FORCEINLINE static uint32 __PPO__KillerCameraSensitivity() { return STRUCT_OFFSET(UDBDGameUserSettings, KillerCameraSensitivity); } \
	FORCEINLINE static uint32 __PPO__SurvivorCameraSensitivity() { return STRUCT_OFFSET(UDBDGameUserSettings, SurvivorCameraSensitivity); } \
	FORCEINLINE static uint32 __PPO__KillerMouseSensitivity() { return STRUCT_OFFSET(UDBDGameUserSettings, KillerMouseSensitivity); } \
	FORCEINLINE static uint32 __PPO__SurvivorMouseSensitivity() { return STRUCT_OFFSET(UDBDGameUserSettings, SurvivorMouseSensitivity); } \
	FORCEINLINE static uint32 __PPO__KillerControllerSensitivity() { return STRUCT_OFFSET(UDBDGameUserSettings, KillerControllerSensitivity); } \
	FORCEINLINE static uint32 __PPO__SurvivorControllerSensitivity() { return STRUCT_OFFSET(UDBDGameUserSettings, SurvivorControllerSensitivity); } \
	FORCEINLINE static uint32 __PPO__AimAssist() { return STRUCT_OFFSET(UDBDGameUserSettings, AimAssist); } \
	FORCEINLINE static uint32 __PPO__ControlType() { return STRUCT_OFFSET(UDBDGameUserSettings, ControlType); } \
	FORCEINLINE static uint32 __PPO__InvertY() { return STRUCT_OFFSET(UDBDGameUserSettings, InvertY); } \
	FORCEINLINE static uint32 __PPO__SurvivorInvertY() { return STRUCT_OFFSET(UDBDGameUserSettings, SurvivorInvertY); } \
	FORCEINLINE static uint32 __PPO__Language() { return STRUCT_OFFSET(UDBDGameUserSettings, Language); } \
	FORCEINLINE static uint32 __PPO__LanguageIsDefinedByPlayer() { return STRUCT_OFFSET(UDBDGameUserSettings, LanguageIsDefinedByPlayer); } \
	FORCEINLINE static uint32 __PPO__HighestWeightSeenNews() { return STRUCT_OFFSET(UDBDGameUserSettings, HighestWeightSeenNews); } \
	FORCEINLINE static uint32 __PPO__SharedLoginInformation() { return STRUCT_OFFSET(UDBDGameUserSettings, SharedLoginInformation); } \
	FORCEINLINE static uint32 __PPO__LastPanelContextId() { return STRUCT_OFFSET(UDBDGameUserSettings, LastPanelContextId); } \
	FORCEINLINE static uint32 __PPO__ArchivesAutoPlayVoiceOver() { return STRUCT_OFFSET(UDBDGameUserSettings, ArchivesAutoPlayVoiceOver); } \
	FORCEINLINE static uint32 __PPO__HasAcceptedCrossplayPopup() { return STRUCT_OFFSET(UDBDGameUserSettings, HasAcceptedCrossplayPopup); } \
	FORCEINLINE static uint32 __PPO__HasAcceptedCrossProgressionPopup() { return STRUCT_OFFSET(UDBDGameUserSettings, HasAcceptedCrossProgressionPopup); } \
	FORCEINLINE static uint32 __PPO__UseAtlantaCustomizedHuds() { return STRUCT_OFFSET(UDBDGameUserSettings, UseAtlantaCustomizedHuds); } \
	FORCEINLINE static uint32 __PPO__UseAtlantaSurvivorQuickTurn() { return STRUCT_OFFSET(UDBDGameUserSettings, UseAtlantaSurvivorQuickTurn); } \
	FORCEINLINE static uint32 __PPO__UseAtlantaKillerQuickTurn() { return STRUCT_OFFSET(UDBDGameUserSettings, UseAtlantaKillerQuickTurn); } \
	FORCEINLINE static uint32 __PPO__AtlantaCustomizedHuds() { return STRUCT_OFFSET(UDBDGameUserSettings, AtlantaCustomizedHuds); } \
	FORCEINLINE static uint32 __PPO__ShowPortraitBorder() { return STRUCT_OFFSET(UDBDGameUserSettings, ShowPortraitBorder); } \
	FORCEINLINE static uint32 __PPO__PartyPrivacyState() { return STRUCT_OFFSET(UDBDGameUserSettings, PartyPrivacyState); } \
	FORCEINLINE static uint32 __PPO__ColorBlindMode() { return STRUCT_OFFSET(UDBDGameUserSettings, ColorBlindMode); } \
	FORCEINLINE static uint32 __PPO__ColorBlindModeIntensity() { return STRUCT_OFFSET(UDBDGameUserSettings, ColorBlindModeIntensity); } \
	FORCEINLINE static uint32 __PPO__BeginnerMode() { return STRUCT_OFFSET(UDBDGameUserSettings, BeginnerMode); } \
	FORCEINLINE static uint32 __PPO__Subtitles() { return STRUCT_OFFSET(UDBDGameUserSettings, Subtitles); } \
	FORCEINLINE static uint32 __PPO__SubtitlesBackgroundOpacity() { return STRUCT_OFFSET(UDBDGameUserSettings, SubtitlesBackgroundOpacity); } \
	FORCEINLINE static uint32 __PPO__SubtitlesSize() { return STRUCT_OFFSET(UDBDGameUserSettings, SubtitlesSize); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_15_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDGameUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
