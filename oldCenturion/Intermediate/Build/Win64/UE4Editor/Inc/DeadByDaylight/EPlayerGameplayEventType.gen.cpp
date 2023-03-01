// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EPlayerGameplayEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerGameplayEventType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPlayerGameplayEventType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EPlayerGameplayEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EPlayerGameplayEventType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EPlayerGameplayEventType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPlayerGameplayEventType>()
	{
		return EPlayerGameplayEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerGameplayEventType(EPlayerGameplayEventType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EPlayerGameplayEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EPlayerGameplayEventType_Hash() { return 4033570337U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EPlayerGameplayEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerGameplayEventType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EPlayerGameplayEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerGameplayEventType::VE_UnhookedOther", (int64)EPlayerGameplayEventType::VE_UnhookedOther },
				{ "EPlayerGameplayEventType::VE_UntrappedOther", (int64)EPlayerGameplayEventType::VE_UntrappedOther },
				{ "EPlayerGameplayEventType::VE_HealedOther", (int64)EPlayerGameplayEventType::VE_HealedOther },
				{ "EPlayerGameplayEventType::VE_MAX", (int64)EPlayerGameplayEventType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EPlayerGameplayEventType.h" },
				{ "VE_HealedOther.Name", "EPlayerGameplayEventType::VE_HealedOther" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EPlayerGameplayEventType::VE_MAX" },
				{ "VE_UnhookedOther.Name", "EPlayerGameplayEventType::VE_UnhookedOther" },
				{ "VE_UntrappedOther.Name", "EPlayerGameplayEventType::VE_UntrappedOther" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EPlayerGameplayEventType",
				"EPlayerGameplayEventType",
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
