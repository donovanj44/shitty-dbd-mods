// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EOfferingEffectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOfferingEffectType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EOfferingEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EOfferingEffectType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOfferingEffectType>()
	{
		return EOfferingEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOfferingEffectType(EOfferingEffectType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EOfferingEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType_Hash() { return 1550039841U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOfferingEffectType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOfferingEffectType::SlasherPointsAll", (int64)EOfferingEffectType::SlasherPointsAll },
				{ "EOfferingEffectType::PointsBrutality", (int64)EOfferingEffectType::PointsBrutality },
				{ "EOfferingEffectType::PointsDeviouness", (int64)EOfferingEffectType::PointsDeviouness },
				{ "EOfferingEffectType::PointsSacrice", (int64)EOfferingEffectType::PointsSacrice },
				{ "EOfferingEffectType::PointsHunting", (int64)EOfferingEffectType::PointsHunting },
				{ "EOfferingEffectType::CamperPointsAll", (int64)EOfferingEffectType::CamperPointsAll },
				{ "EOfferingEffectType::PointsObjective", (int64)EOfferingEffectType::PointsObjective },
				{ "EOfferingEffectType::PointsSurvival", (int64)EOfferingEffectType::PointsSurvival },
				{ "EOfferingEffectType::PointsAltruism", (int64)EOfferingEffectType::PointsAltruism },
				{ "EOfferingEffectType::PointsBoldness", (int64)EOfferingEffectType::PointsBoldness },
				{ "EOfferingEffectType::SurvivorCharacterXP", (int64)EOfferingEffectType::SurvivorCharacterXP },
				{ "EOfferingEffectType::KillerCharacterXP", (int64)EOfferingEffectType::KillerCharacterXP },
				{ "EOfferingEffectType::CamperItemLostPrevention", (int64)EOfferingEffectType::CamperItemLostPrevention },
				{ "EOfferingEffectType::KillerItemLostPrevention", (int64)EOfferingEffectType::KillerItemLostPrevention },
				{ "EOfferingEffectType::Luck", (int64)EOfferingEffectType::Luck },
				{ "EOfferingEffectType::IndustrialThemeSelectionModifier", (int64)EOfferingEffectType::IndustrialThemeSelectionModifier },
				{ "EOfferingEffectType::JunkyardThemeSelectionModifier", (int64)EOfferingEffectType::JunkyardThemeSelectionModifier },
				{ "EOfferingEffectType::FarmThemeSelectionModifier", (int64)EOfferingEffectType::FarmThemeSelectionModifier },
				{ "EOfferingEffectType::SwampThemeSelectionModifier", (int64)EOfferingEffectType::SwampThemeSelectionModifier },
				{ "EOfferingEffectType::MapModifier", (int64)EOfferingEffectType::MapModifier },
				{ "EOfferingEffectType::ChestCountModifier", (int64)EOfferingEffectType::ChestCountModifier },
				{ "EOfferingEffectType::PortableHookCountModifier", (int64)EOfferingEffectType::PortableHookCountModifier },
				{ "EOfferingEffectType::LairCountModifier", (int64)EOfferingEffectType::LairCountModifier },
				{ "EOfferingEffectType::PlayerGrouping", (int64)EOfferingEffectType::PlayerGrouping },
				{ "EOfferingEffectType::FarKiller", (int64)EOfferingEffectType::FarKiller },
				{ "EOfferingEffectType::KillAllowedModifier", (int64)EOfferingEffectType::KillAllowedModifier },
				{ "EOfferingEffectType::LightingModification", (int64)EOfferingEffectType::LightingModification },
				{ "EOfferingEffectType::FogModification", (int64)EOfferingEffectType::FogModification },
				{ "EOfferingEffectType::LivingWorldObjectCountModifier", (int64)EOfferingEffectType::LivingWorldObjectCountModifier },
				{ "EOfferingEffectType::LivingWorldObjectMultModifier", (int64)EOfferingEffectType::LivingWorldObjectMultModifier },
				{ "EOfferingEffectType::KillLastSurvivor", (int64)EOfferingEffectType::KillLastSurvivor },
				{ "EOfferingEffectType::SuburbsThemeSelectionModifier", (int64)EOfferingEffectType::SuburbsThemeSelectionModifier },
				{ "EOfferingEffectType::AsylumThemeSelectionModifier", (int64)EOfferingEffectType::AsylumThemeSelectionModifier },
				{ "EOfferingEffectType::KillerSelectionModifier", (int64)EOfferingEffectType::KillerSelectionModifier },
				{ "EOfferingEffectType::HospitalThemeSelectionModifier", (int64)EOfferingEffectType::HospitalThemeSelectionModifier },
				{ "EOfferingEffectType::KillAllowedAfterStrugglePhase", (int64)EOfferingEffectType::KillAllowedAfterStrugglePhase },
				{ "EOfferingEffectType::BorealThemeSelectionModifier", (int64)EOfferingEffectType::BorealThemeSelectionModifier },
				{ "EOfferingEffectType::SpringwoodThemeSelectionModifier", (int64)EOfferingEffectType::SpringwoodThemeSelectionModifier },
				{ "EOfferingEffectType::FinlandThemeSelectionModifier", (int64)EOfferingEffectType::FinlandThemeSelectionModifier },
				{ "EOfferingEffectType::JapaneseCountrySideSelectionModifier", (int64)EOfferingEffectType::JapaneseCountrySideSelectionModifier },
				{ "EOfferingEffectType::KenyaThemeSelectionModifier", (int64)EOfferingEffectType::KenyaThemeSelectionModifier },
				{ "EOfferingEffectType::QatarThemeSelectionModifier", (int64)EOfferingEffectType::QatarThemeSelectionModifier },
				{ "EOfferingEffectType::UkraineThemeSelectionModifier", (int64)EOfferingEffectType::UkraineThemeSelectionModifier },
				{ "EOfferingEffectType::WalesThemeSelectionModifier", (int64)EOfferingEffectType::WalesThemeSelectionModifier },
				{ "EOfferingEffectType::CancelThemeSelectionModifier", (int64)EOfferingEffectType::CancelThemeSelectionModifier },
				{ "EOfferingEffectType::BasementMainBuildingModifier", (int64)EOfferingEffectType::BasementMainBuildingModifier },
				{ "EOfferingEffectType::BasementShackModifier", (int64)EOfferingEffectType::BasementShackModifier },
				{ "EOfferingEffectType::HatchMainBuildingModifier", (int64)EOfferingEffectType::HatchMainBuildingModifier },
				{ "EOfferingEffectType::HatchShackModifier", (int64)EOfferingEffectType::HatchShackModifier },
				{ "EOfferingEffectType::EclipseThemeSelectionModifier", (int64)EOfferingEffectType::EclipseThemeSelectionModifier },
				{ "EOfferingEffectType::IonThemeSelectionModifier", (int64)EOfferingEffectType::IonThemeSelectionModifier },
				{ "EOfferingEffectType::SpecialEvent", (int64)EOfferingEffectType::SpecialEvent },
				{ "EOfferingEffectType::ObjectSubsitution", (int64)EOfferingEffectType::ObjectSubsitution },
				{ "EOfferingEffectType::ObjectAddition", (int64)EOfferingEffectType::ObjectAddition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AsylumThemeSelectionModifier.Name", "EOfferingEffectType::AsylumThemeSelectionModifier" },
				{ "BasementMainBuildingModifier.Name", "EOfferingEffectType::BasementMainBuildingModifier" },
				{ "BasementShackModifier.Name", "EOfferingEffectType::BasementShackModifier" },
				{ "BlueprintType", "true" },
				{ "BorealThemeSelectionModifier.Name", "EOfferingEffectType::BorealThemeSelectionModifier" },
				{ "CamperItemLostPrevention.Name", "EOfferingEffectType::CamperItemLostPrevention" },
				{ "CamperPointsAll.Name", "EOfferingEffectType::CamperPointsAll" },
				{ "CancelThemeSelectionModifier.Name", "EOfferingEffectType::CancelThemeSelectionModifier" },
				{ "ChestCountModifier.Name", "EOfferingEffectType::ChestCountModifier" },
				{ "EclipseThemeSelectionModifier.Name", "EOfferingEffectType::EclipseThemeSelectionModifier" },
				{ "FarKiller.Name", "EOfferingEffectType::FarKiller" },
				{ "FarmThemeSelectionModifier.Name", "EOfferingEffectType::FarmThemeSelectionModifier" },
				{ "FinlandThemeSelectionModifier.Name", "EOfferingEffectType::FinlandThemeSelectionModifier" },
				{ "FogModification.Name", "EOfferingEffectType::FogModification" },
				{ "HatchMainBuildingModifier.Name", "EOfferingEffectType::HatchMainBuildingModifier" },
				{ "HatchShackModifier.Name", "EOfferingEffectType::HatchShackModifier" },
				{ "HospitalThemeSelectionModifier.Name", "EOfferingEffectType::HospitalThemeSelectionModifier" },
				{ "IndustrialThemeSelectionModifier.Name", "EOfferingEffectType::IndustrialThemeSelectionModifier" },
				{ "IonThemeSelectionModifier.Name", "EOfferingEffectType::IonThemeSelectionModifier" },
				{ "JapaneseCountrySideSelectionModifier.Name", "EOfferingEffectType::JapaneseCountrySideSelectionModifier" },
				{ "JunkyardThemeSelectionModifier.Name", "EOfferingEffectType::JunkyardThemeSelectionModifier" },
				{ "KenyaThemeSelectionModifier.Name", "EOfferingEffectType::KenyaThemeSelectionModifier" },
				{ "KillAllowedAfterStrugglePhase.Name", "EOfferingEffectType::KillAllowedAfterStrugglePhase" },
				{ "KillAllowedModifier.Name", "EOfferingEffectType::KillAllowedModifier" },
				{ "KillerCharacterXP.Name", "EOfferingEffectType::KillerCharacterXP" },
				{ "KillerItemLostPrevention.Name", "EOfferingEffectType::KillerItemLostPrevention" },
				{ "KillerSelectionModifier.Name", "EOfferingEffectType::KillerSelectionModifier" },
				{ "KillLastSurvivor.Name", "EOfferingEffectType::KillLastSurvivor" },
				{ "LairCountModifier.Name", "EOfferingEffectType::LairCountModifier" },
				{ "LightingModification.Name", "EOfferingEffectType::LightingModification" },
				{ "LivingWorldObjectCountModifier.Name", "EOfferingEffectType::LivingWorldObjectCountModifier" },
				{ "LivingWorldObjectMultModifier.Name", "EOfferingEffectType::LivingWorldObjectMultModifier" },
				{ "Luck.Name", "EOfferingEffectType::Luck" },
				{ "MapModifier.Name", "EOfferingEffectType::MapModifier" },
				{ "ModuleRelativePath", "Public/EOfferingEffectType.h" },
				{ "ObjectAddition.Name", "EOfferingEffectType::ObjectAddition" },
				{ "ObjectSubsitution.Name", "EOfferingEffectType::ObjectSubsitution" },
				{ "PlayerGrouping.Name", "EOfferingEffectType::PlayerGrouping" },
				{ "PointsAltruism.Name", "EOfferingEffectType::PointsAltruism" },
				{ "PointsBoldness.Name", "EOfferingEffectType::PointsBoldness" },
				{ "PointsBrutality.Name", "EOfferingEffectType::PointsBrutality" },
				{ "PointsDeviouness.Name", "EOfferingEffectType::PointsDeviouness" },
				{ "PointsHunting.Name", "EOfferingEffectType::PointsHunting" },
				{ "PointsObjective.Name", "EOfferingEffectType::PointsObjective" },
				{ "PointsSacrice.Name", "EOfferingEffectType::PointsSacrice" },
				{ "PointsSurvival.Name", "EOfferingEffectType::PointsSurvival" },
				{ "PortableHookCountModifier.Name", "EOfferingEffectType::PortableHookCountModifier" },
				{ "QatarThemeSelectionModifier.Name", "EOfferingEffectType::QatarThemeSelectionModifier" },
				{ "SlasherPointsAll.Name", "EOfferingEffectType::SlasherPointsAll" },
				{ "SpecialEvent.Name", "EOfferingEffectType::SpecialEvent" },
				{ "SpringwoodThemeSelectionModifier.Name", "EOfferingEffectType::SpringwoodThemeSelectionModifier" },
				{ "SuburbsThemeSelectionModifier.Name", "EOfferingEffectType::SuburbsThemeSelectionModifier" },
				{ "SurvivorCharacterXP.Name", "EOfferingEffectType::SurvivorCharacterXP" },
				{ "SwampThemeSelectionModifier.Name", "EOfferingEffectType::SwampThemeSelectionModifier" },
				{ "UkraineThemeSelectionModifier.Name", "EOfferingEffectType::UkraineThemeSelectionModifier" },
				{ "WalesThemeSelectionModifier.Name", "EOfferingEffectType::WalesThemeSelectionModifier" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EOfferingEffectType",
				"EOfferingEffectType",
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
