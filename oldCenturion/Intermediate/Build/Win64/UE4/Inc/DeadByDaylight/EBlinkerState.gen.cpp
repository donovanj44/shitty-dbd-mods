// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EBlinkerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBlinkerState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBlinkerState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EBlinkerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EBlinkerState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EBlinkerState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EBlinkerState>()
	{
		return EBlinkerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlinkerState(EBlinkerState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EBlinkerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EBlinkerState_Hash() { return 3788233138U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EBlinkerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlinkerState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EBlinkerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlinkerState::VE_Ready", (int64)EBlinkerState::VE_Ready },
				{ "EBlinkerState::VE_ChainBlink", (int64)EBlinkerState::VE_ChainBlink },
				{ "EBlinkerState::VE_AttackBlink", (int64)EBlinkerState::VE_AttackBlink },
				{ "EBlinkerState::VE_CooldownRequested", (int64)EBlinkerState::VE_CooldownRequested },
				{ "EBlinkerState::VE_Cooldown", (int64)EBlinkerState::VE_Cooldown },
				{ "EBlinkerState::VE_MAX", (int64)EBlinkerState::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EBlinkerState.h" },
				{ "VE_AttackBlink.Name", "EBlinkerState::VE_AttackBlink" },
				{ "VE_ChainBlink.Name", "EBlinkerState::VE_ChainBlink" },
				{ "VE_Cooldown.Name", "EBlinkerState::VE_Cooldown" },
				{ "VE_CooldownRequested.Name", "EBlinkerState::VE_CooldownRequested" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EBlinkerState::VE_MAX" },
				{ "VE_Ready.Name", "EBlinkerState::VE_Ready" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EBlinkerState",
				"EBlinkerState",
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
