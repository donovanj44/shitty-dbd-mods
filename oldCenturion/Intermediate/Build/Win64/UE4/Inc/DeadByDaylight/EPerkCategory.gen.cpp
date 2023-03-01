// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EPerkCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPerkCategory() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPerkCategory();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EPerkCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EPerkCategory, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EPerkCategory"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPerkCategory>()
	{
		return EPerkCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPerkCategory(EPerkCategory_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EPerkCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EPerkCategory_Hash() { return 1769144856U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EPerkCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPerkCategory"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EPerkCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPerkCategory::None", (int64)EPerkCategory::None },
				{ "EPerkCategory::Navigation", (int64)EPerkCategory::Navigation },
				{ "EPerkCategory::Perception", (int64)EPerkCategory::Perception },
				{ "EPerkCategory::Safeguard", (int64)EPerkCategory::Safeguard },
				{ "EPerkCategory::Concealment", (int64)EPerkCategory::Concealment },
				{ "EPerkCategory::Strategy", (int64)EPerkCategory::Strategy },
				{ "EPerkCategory::Support", (int64)EPerkCategory::Support },
				{ "EPerkCategory::Adaptation", (int64)EPerkCategory::Adaptation },
				{ "EPerkCategory::Chasing", (int64)EPerkCategory::Chasing },
				{ "EPerkCategory::Tracking", (int64)EPerkCategory::Tracking },
				{ "EPerkCategory::Cruelty", (int64)EPerkCategory::Cruelty },
				{ "EPerkCategory::Trickery", (int64)EPerkCategory::Trickery },
				{ "EPerkCategory::Obstruction", (int64)EPerkCategory::Obstruction },
				{ "EPerkCategory::Hinderance", (int64)EPerkCategory::Hinderance },
				{ "EPerkCategory::Enhancement", (int64)EPerkCategory::Enhancement },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Adaptation.Name", "EPerkCategory::Adaptation" },
				{ "Chasing.Name", "EPerkCategory::Chasing" },
				{ "Concealment.Name", "EPerkCategory::Concealment" },
				{ "Cruelty.Name", "EPerkCategory::Cruelty" },
				{ "Enhancement.Name", "EPerkCategory::Enhancement" },
				{ "Hinderance.Name", "EPerkCategory::Hinderance" },
				{ "ModuleRelativePath", "Public/EPerkCategory.h" },
				{ "Navigation.Name", "EPerkCategory::Navigation" },
				{ "None.Name", "EPerkCategory::None" },
				{ "Obstruction.Name", "EPerkCategory::Obstruction" },
				{ "Perception.Name", "EPerkCategory::Perception" },
				{ "Safeguard.Name", "EPerkCategory::Safeguard" },
				{ "Strategy.Name", "EPerkCategory::Strategy" },
				{ "Support.Name", "EPerkCategory::Support" },
				{ "Tracking.Name", "EPerkCategory::Tracking" },
				{ "Trickery.Name", "EPerkCategory::Trickery" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EPerkCategory",
				"EPerkCategory",
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
