// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FiniteStateMachine/Public/EFiniteStateMachineStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFiniteStateMachineStatus() {}
// Cross Module References
	FINITESTATEMACHINE_API UEnum* Z_Construct_UEnum_FiniteStateMachine_EFiniteStateMachineStatus();
	UPackage* Z_Construct_UPackage__Script_FiniteStateMachine();
// End Cross Module References
	static UEnum* EFiniteStateMachineStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FiniteStateMachine_EFiniteStateMachineStatus, Z_Construct_UPackage__Script_FiniteStateMachine(), TEXT("EFiniteStateMachineStatus"));
		}
		return Singleton;
	}
	template<> FINITESTATEMACHINE_API UEnum* StaticEnum<EFiniteStateMachineStatus>()
	{
		return EFiniteStateMachineStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFiniteStateMachineStatus(EFiniteStateMachineStatus_StaticEnum, TEXT("/Script/FiniteStateMachine"), TEXT("EFiniteStateMachineStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FiniteStateMachine_EFiniteStateMachineStatus_Hash() { return 3091747409U; }
	UEnum* Z_Construct_UEnum_FiniteStateMachine_EFiniteStateMachineStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FiniteStateMachine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFiniteStateMachineStatus"), 0, Get_Z_Construct_UEnum_FiniteStateMachine_EFiniteStateMachineStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFiniteStateMachineStatus::Stopped", (int64)EFiniteStateMachineStatus::Stopped },
				{ "EFiniteStateMachineStatus::Running", (int64)EFiniteStateMachineStatus::Running },
				{ "EFiniteStateMachineStatus::Paused", (int64)EFiniteStateMachineStatus::Paused },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EFiniteStateMachineStatus.h" },
				{ "Paused.Name", "EFiniteStateMachineStatus::Paused" },
				{ "Running.Name", "EFiniteStateMachineStatus::Running" },
				{ "Stopped.Name", "EFiniteStateMachineStatus::Stopped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FiniteStateMachine,
				nullptr,
				"EFiniteStateMachineStatus",
				"EFiniteStateMachineStatus",
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
