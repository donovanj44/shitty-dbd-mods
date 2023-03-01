// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EInteractionComparisonPriority.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInteractionComparisonPriority() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInteractionComparisonPriority();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EInteractionComparisonPriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EInteractionComparisonPriority, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EInteractionComparisonPriority"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInteractionComparisonPriority>()
	{
		return EInteractionComparisonPriority_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionComparisonPriority(EInteractionComparisonPriority_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EInteractionComparisonPriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EInteractionComparisonPriority_Hash() { return 3303219804U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EInteractionComparisonPriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionComparisonPriority"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EInteractionComparisonPriority_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionComparisonPriority::Lower", (int64)EInteractionComparisonPriority::Lower },
				{ "EInteractionComparisonPriority::Equal", (int64)EInteractionComparisonPriority::Equal },
				{ "EInteractionComparisonPriority::Higher", (int64)EInteractionComparisonPriority::Higher },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equal.Name", "EInteractionComparisonPriority::Equal" },
				{ "Higher.Name", "EInteractionComparisonPriority::Higher" },
				{ "Lower.Name", "EInteractionComparisonPriority::Lower" },
				{ "ModuleRelativePath", "Public/EInteractionComparisonPriority.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EInteractionComparisonPriority",
				"EInteractionComparisonPriority",
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
