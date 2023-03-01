// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAttackEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttackEventType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAttackEventType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAttackEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAttackEventType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAttackEventType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAttackEventType>()
	{
		return EAttackEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttackEventType(EAttackEventType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAttackEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAttackEventType_Hash() { return 1958710147U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAttackEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttackEventType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAttackEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttackEventType::VE_None", (int64)EAttackEventType::VE_None },
				{ "EAttackEventType::VE_BasicAttackAttempt", (int64)EAttackEventType::VE_BasicAttackAttempt },
				{ "EAttackEventType::VE_BasicAttackHit", (int64)EAttackEventType::VE_BasicAttackHit },
				{ "EAttackEventType::VE_SpecialAttackAttempt", (int64)EAttackEventType::VE_SpecialAttackAttempt },
				{ "EAttackEventType::VE_SpecialAttackHit", (int64)EAttackEventType::VE_SpecialAttackHit },
				{ "EAttackEventType::VE_MAX", (int64)EAttackEventType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAttackEventType.h" },
				{ "VE_BasicAttackAttempt.Name", "EAttackEventType::VE_BasicAttackAttempt" },
				{ "VE_BasicAttackHit.Name", "EAttackEventType::VE_BasicAttackHit" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EAttackEventType::VE_MAX" },
				{ "VE_None.Name", "EAttackEventType::VE_None" },
				{ "VE_SpecialAttackAttempt.Name", "EAttackEventType::VE_SpecialAttackAttempt" },
				{ "VE_SpecialAttackHit.Name", "EAttackEventType::VE_SpecialAttackHit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAttackEventType",
				"EAttackEventType",
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
