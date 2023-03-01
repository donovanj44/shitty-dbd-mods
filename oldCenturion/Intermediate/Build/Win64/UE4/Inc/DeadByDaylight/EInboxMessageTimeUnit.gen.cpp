// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EInboxMessageTimeUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInboxMessageTimeUnit() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInboxMessageTimeUnit();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EInboxMessageTimeUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EInboxMessageTimeUnit, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EInboxMessageTimeUnit"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInboxMessageTimeUnit>()
	{
		return EInboxMessageTimeUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInboxMessageTimeUnit(EInboxMessageTimeUnit_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EInboxMessageTimeUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EInboxMessageTimeUnit_Hash() { return 51042548U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EInboxMessageTimeUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInboxMessageTimeUnit"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EInboxMessageTimeUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInboxMessageTimeUnit::Days", (int64)EInboxMessageTimeUnit::Days },
				{ "EInboxMessageTimeUnit::Hours", (int64)EInboxMessageTimeUnit::Hours },
				{ "EInboxMessageTimeUnit::Minutes", (int64)EInboxMessageTimeUnit::Minutes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Days.Name", "EInboxMessageTimeUnit::Days" },
				{ "Hours.Name", "EInboxMessageTimeUnit::Hours" },
				{ "Minutes.Name", "EInboxMessageTimeUnit::Minutes" },
				{ "ModuleRelativePath", "Public/EInboxMessageTimeUnit.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EInboxMessageTimeUnit",
				"EInboxMessageTimeUnit",
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
