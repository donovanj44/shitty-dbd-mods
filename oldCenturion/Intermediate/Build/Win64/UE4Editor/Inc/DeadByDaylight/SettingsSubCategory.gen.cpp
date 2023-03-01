// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SettingsSubCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsSubCategory() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_SettingsSubCategory();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* SettingsSubCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_SettingsSubCategory, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SettingsSubCategory"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<SettingsSubCategory>()
	{
		return SettingsSubCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SettingsSubCategory(SettingsSubCategory_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("SettingsSubCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_SettingsSubCategory_Hash() { return 1345072821U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_SettingsSubCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SettingsSubCategory"), 0, Get_Z_Construct_UEnum_DeadByDaylight_SettingsSubCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SettingsSubCategory::None", (int64)SettingsSubCategory::None },
				{ "SettingsSubCategory::Language", (int64)SettingsSubCategory::Language },
				{ "SettingsSubCategory::Tutorial", (int64)SettingsSubCategory::Tutorial },
				{ "SettingsSubCategory::Subtitles", (int64)SettingsSubCategory::Subtitles },
				{ "SettingsSubCategory::Privacy", (int64)SettingsSubCategory::Privacy },
				{ "SettingsSubCategory::Online", (int64)SettingsSubCategory::Online },
				{ "SettingsSubCategory::Graphics", (int64)SettingsSubCategory::Graphics },
				{ "SettingsSubCategory::UIHud", (int64)SettingsSubCategory::UIHud },
				{ "SettingsSubCategory::Audio", (int64)SettingsSubCategory::Audio },
				{ "SettingsSubCategory::CommonControls", (int64)SettingsSubCategory::CommonControls },
				{ "SettingsSubCategory::SurvivorControls", (int64)SettingsSubCategory::SurvivorControls },
				{ "SettingsSubCategory::KillerControls", (int64)SettingsSubCategory::KillerControls },
				{ "SettingsSubCategory::ColorBlindMode", (int64)SettingsSubCategory::ColorBlindMode },
				{ "SettingsSubCategory::Atlanta", (int64)SettingsSubCategory::Atlanta },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Atlanta.Name", "SettingsSubCategory::Atlanta" },
				{ "Audio.Name", "SettingsSubCategory::Audio" },
				{ "ColorBlindMode.Name", "SettingsSubCategory::ColorBlindMode" },
				{ "CommonControls.Name", "SettingsSubCategory::CommonControls" },
				{ "Graphics.Name", "SettingsSubCategory::Graphics" },
				{ "KillerControls.Name", "SettingsSubCategory::KillerControls" },
				{ "Language.Name", "SettingsSubCategory::Language" },
				{ "ModuleRelativePath", "Public/SettingsSubCategory.h" },
				{ "None.Name", "SettingsSubCategory::None" },
				{ "Online.Name", "SettingsSubCategory::Online" },
				{ "Privacy.Name", "SettingsSubCategory::Privacy" },
				{ "Subtitles.Name", "SettingsSubCategory::Subtitles" },
				{ "SurvivorControls.Name", "SettingsSubCategory::SurvivorControls" },
				{ "Tutorial.Name", "SettingsSubCategory::Tutorial" },
				{ "UIHud.Name", "SettingsSubCategory::UIHud" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"SettingsSubCategory",
				"SettingsSubCategory",
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
