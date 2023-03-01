// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EOniAttackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOniAttackType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOniAttackType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EOniAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EOniAttackType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EOniAttackType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOniAttackType>()
	{
		return EOniAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOniAttackType(EOniAttackType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EOniAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EOniAttackType_Hash() { return 150703506U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EOniAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOniAttackType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EOniAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOniAttackType::VE_NotDemonMode", (int64)EOniAttackType::VE_NotDemonMode },
				{ "EOniAttackType::VE_DemonBasicAttack", (int64)EOniAttackType::VE_DemonBasicAttack },
				{ "EOniAttackType::VE_DemonPowerAttack", (int64)EOniAttackType::VE_DemonPowerAttack },
				{ "EOniAttackType::VE_DemonDashAttack", (int64)EOniAttackType::VE_DemonDashAttack },
				{ "EOniAttackType::VE_MAX", (int64)EOniAttackType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EOniAttackType.h" },
				{ "VE_DemonBasicAttack.Name", "EOniAttackType::VE_DemonBasicAttack" },
				{ "VE_DemonDashAttack.Name", "EOniAttackType::VE_DemonDashAttack" },
				{ "VE_DemonPowerAttack.Name", "EOniAttackType::VE_DemonPowerAttack" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EOniAttackType::VE_MAX" },
				{ "VE_NotDemonMode.Name", "EOniAttackType::VE_NotDemonMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EOniAttackType",
				"EOniAttackType",
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
