// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SettingsId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsId() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_SettingsId();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* SettingsId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_SettingsId, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SettingsId"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<SettingsId>()
	{
		return SettingsId_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SettingsId(SettingsId_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("SettingsId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_SettingsId_Hash() { return 516089946U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_SettingsId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SettingsId"), 0, Get_Z_Construct_UEnum_DeadByDaylight_SettingsId_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SettingsId::None", (int64)SettingsId::None },
				{ "SettingsId::Language", (int64)SettingsId::Language },
				{ "SettingsId::RevokeConsent", (int64)SettingsId::RevokeConsent },
				{ "SettingsId::BhvrAccount", (int64)SettingsId::BhvrAccount },
				{ "SettingsId::AllowCrossplayGeneric", (int64)SettingsId::AllowCrossplayGeneric },
				{ "SettingsId::AllowCrossplayLive", (int64)SettingsId::AllowCrossplayLive },
				{ "SettingsId::AutoDeclineFriendRequests", (int64)SettingsId::AutoDeclineFriendRequests },
				{ "SettingsId::PlayerId", (int64)SettingsId::PlayerId },
				{ "SettingsId::PartyPrivacy", (int64)SettingsId::PartyPrivacy },
				{ "SettingsId::Quality", (int64)SettingsId::Quality },
				{ "SettingsId::AutoAdjust", (int64)SettingsId::AutoAdjust },
				{ "SettingsId::Resolution", (int64)SettingsId::Resolution },
				{ "SettingsId::FullScreen", (int64)SettingsId::FullScreen },
				{ "SettingsId::MenuScaleFactor", (int64)SettingsId::MenuScaleFactor },
				{ "SettingsId::HudScaleFactor", (int64)SettingsId::HudScaleFactor },
				{ "SettingsId::SkillCheckScaleFactor", (int64)SettingsId::SkillCheckScaleFactor },
				{ "SettingsId::LargeText", (int64)SettingsId::LargeText },
				{ "SettingsId::HUDPlayerNamesVisibility", (int64)SettingsId::HUDPlayerNamesVisibility },
				{ "SettingsId::HUDKillerHookCountVisibility", (int64)SettingsId::HUDKillerHookCountVisibility },
				{ "SettingsId::HUDScoreEventsVisibility", (int64)SettingsId::HUDScoreEventsVisibility },
				{ "SettingsId::MainVolume", (int64)SettingsId::MainVolume },
				{ "SettingsId::MenuMusicVolume", (int64)SettingsId::MenuMusicVolume },
				{ "SettingsId::Headphones", (int64)SettingsId::Headphones },
				{ "SettingsId::MuteOnFocusLost", (int64)SettingsId::MuteOnFocusLost },
				{ "SettingsId::InvertYAxis", (int64)SettingsId::InvertYAxis },
				{ "SettingsId::SurvivorMouseSensitivity", (int64)SettingsId::SurvivorMouseSensitivity },
				{ "SettingsId::SurvivorControllerSensitivity", (int64)SettingsId::SurvivorControllerSensitivity },
				{ "SettingsId::KillerMouseSensitivity", (int64)SettingsId::KillerMouseSensitivity },
				{ "SettingsId::KillerControllerSensitivity", (int64)SettingsId::KillerControllerSensitivity },
				{ "SettingsId::ColorBarPalette", (int64)SettingsId::ColorBarPalette },
				{ "SettingsId::ColorBlindMode", (int64)SettingsId::ColorBlindMode },
				{ "SettingsId::ColorBlindModeIntensity", (int64)SettingsId::ColorBlindModeIntensity },
				{ "SettingsId::BeginnerMode", (int64)SettingsId::BeginnerMode },
				{ "SettingsId::Subtitles", (int64)SettingsId::Subtitles },
				{ "SettingsId::SubtitlesBackgroundOpacity", (int64)SettingsId::SubtitlesBackgroundOpacity },
				{ "SettingsId::SubtitlesSize", (int64)SettingsId::SubtitlesSize },
				{ "SettingsId::SurvivorCameraSensitivity", (int64)SettingsId::SurvivorCameraSensitivity },
				{ "SettingsId::KillerCameraSensitivity", (int64)SettingsId::KillerCameraSensitivity },
				{ "SettingsId::MenuMusicVolumeOn", (int64)SettingsId::MenuMusicVolumeOn },
				{ "SettingsId::MainVolumeOn", (int64)SettingsId::MainVolumeOn },
				{ "SettingsId::AimAssist", (int64)SettingsId::AimAssist },
				{ "SettingsId::SurvivorQuickTurn", (int64)SettingsId::SurvivorQuickTurn },
				{ "SettingsId::KillerQuickTurn", (int64)SettingsId::KillerQuickTurn },
				{ "SettingsId::FPSLimit", (int64)SettingsId::FPSLimit },
				{ "SettingsId::AutoQuality", (int64)SettingsId::AutoQuality },
				{ "SettingsId::ControlType", (int64)SettingsId::ControlType },
				{ "SettingsId::CustomizedControls", (int64)SettingsId::CustomizedControls },
				{ "SettingsId::DynamicResolution", (int64)SettingsId::DynamicResolution },
				{ "SettingsId::InvertYAxisSurvivor", (int64)SettingsId::InvertYAxisSurvivor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AimAssist.Name", "SettingsId::AimAssist" },
				{ "AllowCrossplayGeneric.Name", "SettingsId::AllowCrossplayGeneric" },
				{ "AllowCrossplayLive.Name", "SettingsId::AllowCrossplayLive" },
				{ "AutoAdjust.Name", "SettingsId::AutoAdjust" },
				{ "AutoDeclineFriendRequests.Name", "SettingsId::AutoDeclineFriendRequests" },
				{ "AutoQuality.Name", "SettingsId::AutoQuality" },
				{ "BeginnerMode.Name", "SettingsId::BeginnerMode" },
				{ "BhvrAccount.Name", "SettingsId::BhvrAccount" },
				{ "ColorBarPalette.Name", "SettingsId::ColorBarPalette" },
				{ "ColorBlindMode.Name", "SettingsId::ColorBlindMode" },
				{ "ColorBlindModeIntensity.Name", "SettingsId::ColorBlindModeIntensity" },
				{ "ControlType.Name", "SettingsId::ControlType" },
				{ "CustomizedControls.Name", "SettingsId::CustomizedControls" },
				{ "DynamicResolution.Name", "SettingsId::DynamicResolution" },
				{ "FPSLimit.Name", "SettingsId::FPSLimit" },
				{ "FullScreen.Name", "SettingsId::FullScreen" },
				{ "Headphones.Name", "SettingsId::Headphones" },
				{ "HUDKillerHookCountVisibility.Name", "SettingsId::HUDKillerHookCountVisibility" },
				{ "HUDPlayerNamesVisibility.Name", "SettingsId::HUDPlayerNamesVisibility" },
				{ "HudScaleFactor.Name", "SettingsId::HudScaleFactor" },
				{ "HUDScoreEventsVisibility.Name", "SettingsId::HUDScoreEventsVisibility" },
				{ "InvertYAxis.Name", "SettingsId::InvertYAxis" },
				{ "InvertYAxisSurvivor.Name", "SettingsId::InvertYAxisSurvivor" },
				{ "KillerCameraSensitivity.Name", "SettingsId::KillerCameraSensitivity" },
				{ "KillerControllerSensitivity.Name", "SettingsId::KillerControllerSensitivity" },
				{ "KillerMouseSensitivity.Name", "SettingsId::KillerMouseSensitivity" },
				{ "KillerQuickTurn.Name", "SettingsId::KillerQuickTurn" },
				{ "Language.Name", "SettingsId::Language" },
				{ "LargeText.Name", "SettingsId::LargeText" },
				{ "MainVolume.Name", "SettingsId::MainVolume" },
				{ "MainVolumeOn.Name", "SettingsId::MainVolumeOn" },
				{ "MenuMusicVolume.Name", "SettingsId::MenuMusicVolume" },
				{ "MenuMusicVolumeOn.Name", "SettingsId::MenuMusicVolumeOn" },
				{ "MenuScaleFactor.Name", "SettingsId::MenuScaleFactor" },
				{ "ModuleRelativePath", "Public/SettingsId.h" },
				{ "MuteOnFocusLost.Name", "SettingsId::MuteOnFocusLost" },
				{ "None.Name", "SettingsId::None" },
				{ "PartyPrivacy.Name", "SettingsId::PartyPrivacy" },
				{ "PlayerId.Name", "SettingsId::PlayerId" },
				{ "Quality.Name", "SettingsId::Quality" },
				{ "Resolution.Name", "SettingsId::Resolution" },
				{ "RevokeConsent.Name", "SettingsId::RevokeConsent" },
				{ "SkillCheckScaleFactor.Name", "SettingsId::SkillCheckScaleFactor" },
				{ "Subtitles.Name", "SettingsId::Subtitles" },
				{ "SubtitlesBackgroundOpacity.Name", "SettingsId::SubtitlesBackgroundOpacity" },
				{ "SubtitlesSize.Name", "SettingsId::SubtitlesSize" },
				{ "SurvivorCameraSensitivity.Name", "SettingsId::SurvivorCameraSensitivity" },
				{ "SurvivorControllerSensitivity.Name", "SettingsId::SurvivorControllerSensitivity" },
				{ "SurvivorMouseSensitivity.Name", "SettingsId::SurvivorMouseSensitivity" },
				{ "SurvivorQuickTurn.Name", "SettingsId::SurvivorQuickTurn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"SettingsId",
				"SettingsId",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
