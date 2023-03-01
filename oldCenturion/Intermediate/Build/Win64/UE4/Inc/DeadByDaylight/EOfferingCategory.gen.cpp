// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EOfferingCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOfferingCategory() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingCategory();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EOfferingCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EOfferingCategory, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EOfferingCategory"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOfferingCategory>()
	{
		return EOfferingCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOfferingCategory(EOfferingCategory_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EOfferingCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EOfferingCategory_Hash() { return 215747255U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOfferingCategory"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EOfferingCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOfferingCategory::None", (int64)EOfferingCategory::None },
				{ "EOfferingCategory::Bloodpoints", (int64)EOfferingCategory::Bloodpoints },
				{ "EOfferingCategory::Mapmods", (int64)EOfferingCategory::Mapmods },
				{ "EOfferingCategory::Realms", (int64)EOfferingCategory::Realms },
				{ "EOfferingCategory::Shrouds", (int64)EOfferingCategory::Shrouds },
				{ "EOfferingCategory::Wards", (int64)EOfferingCategory::Wards },
				{ "EOfferingCategory::CharacterXP", (int64)EOfferingCategory::CharacterXP },
				{ "EOfferingCategory::Luck", (int64)EOfferingCategory::Luck },
				{ "EOfferingCategory::Moris", (int64)EOfferingCategory::Moris },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bloodpoints.Name", "EOfferingCategory::Bloodpoints" },
				{ "BlueprintType", "true" },
				{ "CharacterXP.Name", "EOfferingCategory::CharacterXP" },
				{ "Luck.Name", "EOfferingCategory::Luck" },
				{ "Mapmods.Name", "EOfferingCategory::Mapmods" },
				{ "ModuleRelativePath", "Public/EOfferingCategory.h" },
				{ "Moris.Name", "EOfferingCategory::Moris" },
				{ "None.Name", "EOfferingCategory::None" },
				{ "Realms.Name", "EOfferingCategory::Realms" },
				{ "Shrouds.Name", "EOfferingCategory::Shrouds" },
				{ "Wards.Name", "EOfferingCategory::Wards" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EOfferingCategory",
				"EOfferingCategory",
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
