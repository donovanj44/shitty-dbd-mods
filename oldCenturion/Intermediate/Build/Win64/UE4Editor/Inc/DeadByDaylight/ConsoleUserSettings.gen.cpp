// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ConsoleUserSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleUserSettings() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FConsoleUserSettings();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
// End Cross Module References
class UScriptStruct* FConsoleUserSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FConsoleUserSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConsoleUserSettings, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ConsoleUserSettings"), sizeof(FConsoleUserSettings), Get_Z_Construct_UScriptStruct_FConsoleUserSettings_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FConsoleUserSettings>()
{
	return FConsoleUserSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConsoleUserSettings(FConsoleUserSettings::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ConsoleUserSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFConsoleUserSettings
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFConsoleUserSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConsoleUserSettings")),new UScriptStruct::TCppStructOps<FConsoleUserSettings>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFConsoleUserSettings;
	struct Z_Construct_UScriptStruct_FConsoleUserSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitlesSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesBackgroundOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitlesBackgroundOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static void NewProp_Subtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Subtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginnerMode_MetaData[];
#endif
		static void NewProp_BeginnerMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BeginnerMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBlindModeIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorBlindModeIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBlindMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorBlindMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyPrivacyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyPrivacyState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAcceptedCrossProgressionPopup_MetaData[];
#endif
		static void NewProp_HasAcceptedCrossProgressionPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAcceptedCrossProgressionPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAcceptedCrossplayPopup_MetaData[];
#endif
		static void NewProp_HasAcceptedCrossplayPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAcceptedCrossplayPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaCustomizedHuds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AtlantaCustomizedHuds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtlantaCustomizedHuds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAtlantaKillerQuickTurn_MetaData[];
#endif
		static void NewProp_UseAtlantaKillerQuickTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAtlantaKillerQuickTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAtlantaSurvivorQuickTurn_MetaData[];
#endif
		static void NewProp_UseAtlantaSurvivorQuickTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAtlantaSurvivorQuickTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAtlantaCustomizedHuds_MetaData[];
#endif
		static void NewProp_UseAtlantaCustomizedHuds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAtlantaCustomizedHuds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighestWeightSeenNews_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HighestWeightSeenNews;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorInvertY_MetaData[];
#endif
		static void NewProp_SurvivorInvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SurvivorInvertY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertY_MetaData[];
#endif
		static void NewProp_InvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorControllerSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorControllerSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerControllerSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillerControllerSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorMouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorMouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerMouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillerMouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuteOnFocusLost_MetaData[];
#endif
		static void NewProp_MuteOnFocusLost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MuteOnFocusLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHeadphones_MetaData[];
#endif
		static void NewProp_UseHeadphones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHeadphones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuMusicVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MenuMusicVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MainVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDKillerHookCountVisibility_MetaData[];
#endif
		static void NewProp_HUDKillerHookCountVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HUDKillerHookCountVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDScoreEventsVisibility_MetaData[];
#endif
		static void NewProp_HUDScoreEventsVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HUDScoreEventsVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDPlayerNamesVisibility_MetaData[];
#endif
		static void NewProp_HUDPlayerNamesVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HUDPlayerNamesVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeText_MetaData[];
#endif
		static void NewProp_LargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillCheckScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HudScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MenuScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConsoleUserSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesSize = { "SubtitlesSize", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, SubtitlesSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity = { "SubtitlesBackgroundOpacity", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, SubtitlesBackgroundOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Subtitles_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Subtitles_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->Subtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Subtitles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Subtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Subtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_BeginnerMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_BeginnerMode_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->BeginnerMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_BeginnerMode = { "BeginnerMode", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_BeginnerMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_BeginnerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_BeginnerMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindModeIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindModeIntensity = { "ColorBlindModeIntensity", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, ColorBlindModeIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindModeIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindModeIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindMode = { "ColorBlindMode", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, ColorBlindMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_PartyPrivacyState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_PartyPrivacyState = { "PartyPrivacyState", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, PartyPrivacyState), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_PartyPrivacyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_PartyPrivacyState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->HasAcceptedCrossProgressionPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup = { "HasAcceptedCrossProgressionPopup", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->HasAcceptedCrossplayPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup = { "HasAcceptedCrossplayPopup", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AtlantaCustomizedHuds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AtlantaCustomizedHuds = { "AtlantaCustomizedHuds", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, AtlantaCustomizedHuds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AtlantaCustomizedHuds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AtlantaCustomizedHuds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AtlantaCustomizedHuds_Inner = { "AtlantaCustomizedHuds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->UseAtlantaKillerQuickTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn = { "UseAtlantaKillerQuickTurn", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->UseAtlantaSurvivorQuickTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn = { "UseAtlantaSurvivorQuickTurn", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->UseAtlantaCustomizedHuds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds = { "UseAtlantaCustomizedHuds", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HighestWeightSeenNews_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HighestWeightSeenNews = { "HighestWeightSeenNews", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, HighestWeightSeenNews), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HighestWeightSeenNews_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HighestWeightSeenNews_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorInvertY_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorInvertY_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->SurvivorInvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorInvertY = { "SurvivorInvertY", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorInvertY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorInvertY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorInvertY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_InvertY_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_InvertY_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->InvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_InvertY = { "InvertY", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_InvertY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_InvertY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_InvertY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorControllerSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorControllerSensitivity = { "SurvivorControllerSensitivity", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, SurvivorControllerSensitivity), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorControllerSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorControllerSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerControllerSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerControllerSensitivity = { "KillerControllerSensitivity", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, KillerControllerSensitivity), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerControllerSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerControllerSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorMouseSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorMouseSensitivity = { "SurvivorMouseSensitivity", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, SurvivorMouseSensitivity), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorMouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorMouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerMouseSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerMouseSensitivity = { "KillerMouseSensitivity", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, KillerMouseSensitivity), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerMouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerMouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MuteOnFocusLost_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MuteOnFocusLost_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->MuteOnFocusLost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MuteOnFocusLost = { "MuteOnFocusLost", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MuteOnFocusLost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MuteOnFocusLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MuteOnFocusLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseHeadphones_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseHeadphones_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->UseHeadphones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseHeadphones = { "UseHeadphones", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseHeadphones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseHeadphones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseHeadphones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuMusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuMusicVolume = { "MenuMusicVolume", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, MenuMusicVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuMusicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuMusicVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MainVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MainVolume = { "MainVolume", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, MainVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MainVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MainVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->HUDKillerHookCountVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDKillerHookCountVisibility = { "HUDKillerHookCountVisibility", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDScoreEventsVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDScoreEventsVisibility_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->HUDScoreEventsVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDScoreEventsVisibility = { "HUDScoreEventsVisibility", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDScoreEventsVisibility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDScoreEventsVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDScoreEventsVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->HUDPlayerNamesVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDPlayerNamesVisibility = { "HUDPlayerNamesVisibility", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Gamma_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, Gamma), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_LargeText_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_LargeText_SetBit(void* Obj)
	{
		((FConsoleUserSettings*)Obj)->LargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_LargeText = { "LargeText", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConsoleUserSettings), &Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_LargeText_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_LargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_LargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SkillCheckScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SkillCheckScaleFactor = { "SkillCheckScaleFactor", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, SkillCheckScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SkillCheckScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SkillCheckScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HudScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HudScaleFactor = { "HudScaleFactor", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, HudScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HudScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HudScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuScaleFactor = { "MenuScaleFactor", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, MenuScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AxisMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleUserSettings, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ActionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_BeginnerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindModeIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ColorBlindMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_PartyPrivacyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AtlantaCustomizedHuds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AtlantaCustomizedHuds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HighestWeightSeenNews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorInvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_InvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorControllerSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerControllerSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SurvivorMouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_KillerMouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MuteOnFocusLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_UseHeadphones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuMusicVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MainVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDKillerHookCountVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDScoreEventsVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HUDPlayerNamesVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_Gamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_LargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_SkillCheckScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_HudScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_MenuScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AxisMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_AxisMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ActionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::NewProp_ActionMappings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ConsoleUserSettings",
		sizeof(FConsoleUserSettings),
		alignof(FConsoleUserSettings),
		Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConsoleUserSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConsoleUserSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConsoleUserSettings"), sizeof(FConsoleUserSettings), Get_Z_Construct_UScriptStruct_FConsoleUserSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConsoleUserSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConsoleUserSettings_Hash() { return 1526699733U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
