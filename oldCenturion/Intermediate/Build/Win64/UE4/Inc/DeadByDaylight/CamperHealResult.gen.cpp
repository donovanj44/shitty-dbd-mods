// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperHealResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperHealResult() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCamperHealResult();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
// End Cross Module References
class UScriptStruct* FCamperHealResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCamperHealResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCamperHealResult, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CamperHealResult"), sizeof(FCamperHealResult), Get_Z_Construct_UScriptStruct_FCamperHealResult_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCamperHealResult>()
{
	return FCamperHealResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCamperHealResult(FCamperHealResult::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CamperHealResult"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCamperHealResult
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCamperHealResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CamperHealResult")),new UScriptStruct::TCppStructOps<FCamperHealResult>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCamperHealResult;
	struct Z_Construct_UScriptStruct_FCamperHealResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Healers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Healers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Healers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HealAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDamageState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentDamageState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousDamageState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousDamageState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperHealResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CamperHealResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCamperHealResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_Healers_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperHealResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_Healers = { "Healers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperHealResult, Healers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_Healers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_Healers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_Healers_Inner = { "Healers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_HealAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperHealResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperHealResult, HealAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_HealAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_HealAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_CurrentDamageState_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperHealResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_CurrentDamageState = { "CurrentDamageState", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperHealResult, CurrentDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_CurrentDamageState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_CurrentDamageState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_CurrentDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_PreviousDamageState_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperHealResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_PreviousDamageState = { "PreviousDamageState", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperHealResult, PreviousDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_PreviousDamageState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_PreviousDamageState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_PreviousDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCamperHealResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_Healers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_Healers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_HealAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_CurrentDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_CurrentDamageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_PreviousDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperHealResult_Statics::NewProp_PreviousDamageState_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCamperHealResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CamperHealResult",
		sizeof(FCamperHealResult),
		alignof(FCamperHealResult),
		Z_Construct_UScriptStruct_FCamperHealResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperHealResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperHealResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperHealResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCamperHealResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCamperHealResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CamperHealResult"), sizeof(FCamperHealResult), Get_Z_Construct_UScriptStruct_FCamperHealResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCamperHealResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCamperHealResult_Hash() { return 3782484632U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
