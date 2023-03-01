// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EChargeableInteractionBarType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChargeableInteractionBarType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EChargeableInteractionBarType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EChargeableInteractionBarType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EChargeableInteractionBarType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EChargeableInteractionBarType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EChargeableInteractionBarType>()
	{
		return EChargeableInteractionBarType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChargeableInteractionBarType(EChargeableInteractionBarType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EChargeableInteractionBarType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EChargeableInteractionBarType_Hash() { return 2478674607U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EChargeableInteractionBarType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChargeableInteractionBarType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EChargeableInteractionBarType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChargeableInteractionBarType::VE_Normal", (int64)EChargeableInteractionBarType::VE_Normal },
				{ "EChargeableInteractionBarType::VE_ProgressPips", (int64)EChargeableInteractionBarType::VE_ProgressPips },
				{ "EChargeableInteractionBarType::VE_MAX", (int64)EChargeableInteractionBarType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EChargeableInteractionBarType.h" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EChargeableInteractionBarType::VE_MAX" },
				{ "VE_Normal.Name", "EChargeableInteractionBarType::VE_Normal" },
				{ "VE_ProgressPips.Name", "EChargeableInteractionBarType::VE_ProgressPips" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EChargeableInteractionBarType",
				"EChargeableInteractionBarType",
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
