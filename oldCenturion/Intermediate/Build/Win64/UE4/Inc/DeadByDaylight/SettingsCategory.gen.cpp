// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SettingsCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsCategory() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_SettingsCategory();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* SettingsCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_SettingsCategory, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SettingsCategory"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<SettingsCategory>()
	{
		return SettingsCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SettingsCategory(SettingsCategory_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("SettingsCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_SettingsCategory_Hash() { return 4239425057U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_SettingsCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SettingsCategory"), 0, Get_Z_Construct_UEnum_DeadByDaylight_SettingsCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SettingsCategory::None", (int64)SettingsCategory::None },
				{ "SettingsCategory::General", (int64)SettingsCategory::General },
				{ "SettingsCategory::Graphics", (int64)SettingsCategory::Graphics },
				{ "SettingsCategory::Audio", (int64)SettingsCategory::Audio },
				{ "SettingsCategory::Controls", (int64)SettingsCategory::Controls },
				{ "SettingsCategory::Atlanta", (int64)SettingsCategory::Atlanta },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Atlanta.Name", "SettingsCategory::Atlanta" },
				{ "Audio.Name", "SettingsCategory::Audio" },
				{ "Controls.Name", "SettingsCategory::Controls" },
				{ "General.Name", "SettingsCategory::General" },
				{ "Graphics.Name", "SettingsCategory::Graphics" },
				{ "ModuleRelativePath", "Public/SettingsCategory.h" },
				{ "None.Name", "SettingsCategory::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"SettingsCategory",
				"SettingsCategory",
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
