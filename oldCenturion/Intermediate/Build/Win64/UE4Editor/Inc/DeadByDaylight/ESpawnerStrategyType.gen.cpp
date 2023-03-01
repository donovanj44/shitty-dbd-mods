// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ESpawnerStrategyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESpawnerStrategyType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESpawnerStrategyType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ESpawnerStrategyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ESpawnerStrategyType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ESpawnerStrategyType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESpawnerStrategyType>()
	{
		return ESpawnerStrategyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpawnerStrategyType(ESpawnerStrategyType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ESpawnerStrategyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ESpawnerStrategyType_Hash() { return 3727904834U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ESpawnerStrategyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpawnerStrategyType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ESpawnerStrategyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpawnerStrategyType::None", (int64)ESpawnerStrategyType::None },
				{ "ESpawnerStrategyType::NoAccumulation", (int64)ESpawnerStrategyType::NoAccumulation },
				{ "ESpawnerStrategyType::LimitAccumulation", (int64)ESpawnerStrategyType::LimitAccumulation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LimitAccumulation.Name", "ESpawnerStrategyType::LimitAccumulation" },
				{ "ModuleRelativePath", "Public/ESpawnerStrategyType.h" },
				{ "NoAccumulation.Name", "ESpawnerStrategyType::NoAccumulation" },
				{ "None.Name", "ESpawnerStrategyType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ESpawnerStrategyType",
				"ESpawnerStrategyType",
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
