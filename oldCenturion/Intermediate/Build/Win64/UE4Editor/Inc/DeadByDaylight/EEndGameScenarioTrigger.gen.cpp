// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EEndGameScenarioTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEndGameScenarioTrigger() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEndGameScenarioTrigger();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EEndGameScenarioTrigger_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EEndGameScenarioTrigger, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EEndGameScenarioTrigger"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEndGameScenarioTrigger>()
	{
		return EEndGameScenarioTrigger_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEndGameScenarioTrigger(EEndGameScenarioTrigger_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EEndGameScenarioTrigger"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EEndGameScenarioTrigger_Hash() { return 3453412558U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EEndGameScenarioTrigger()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEndGameScenarioTrigger"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EEndGameScenarioTrigger_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEndGameScenarioTrigger::ClosedHatch", (int64)EEndGameScenarioTrigger::ClosedHatch },
				{ "EEndGameScenarioTrigger::OpenedGate", (int64)EEndGameScenarioTrigger::OpenedGate },
				{ "EEndGameScenarioTrigger::CheatUsed", (int64)EEndGameScenarioTrigger::CheatUsed },
				{ "EEndGameScenarioTrigger::NotActivated", (int64)EEndGameScenarioTrigger::NotActivated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CheatUsed.Name", "EEndGameScenarioTrigger::CheatUsed" },
				{ "ClosedHatch.Name", "EEndGameScenarioTrigger::ClosedHatch" },
				{ "ModuleRelativePath", "Public/EEndGameScenarioTrigger.h" },
				{ "NotActivated.Name", "EEndGameScenarioTrigger::NotActivated" },
				{ "OpenedGate.Name", "EEndGameScenarioTrigger::OpenedGate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EEndGameScenarioTrigger",
				"EEndGameScenarioTrigger",
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
