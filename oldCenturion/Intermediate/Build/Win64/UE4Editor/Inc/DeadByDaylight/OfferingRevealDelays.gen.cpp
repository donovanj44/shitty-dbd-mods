// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingRevealDelays.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingRevealDelays() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingRevealDelays();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingSequenceState();
// End Cross Module References
class UScriptStruct* FOfferingRevealDelays::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOfferingRevealDelays_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOfferingRevealDelays, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OfferingRevealDelays"), sizeof(FOfferingRevealDelays), Get_Z_Construct_UScriptStruct_FOfferingRevealDelays_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOfferingRevealDelays>()
{
	return FOfferingRevealDelays::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOfferingRevealDelays(FOfferingRevealDelays::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OfferingRevealDelays"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingRevealDelays
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingRevealDelays()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OfferingRevealDelays")),new UScriptStruct::TCppStructOps<FOfferingRevealDelays>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingRevealDelays;
	struct Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevealState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RevealState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RevealState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OfferingRevealDelays.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOfferingRevealDelays>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "OfferingRevealDelays" },
		{ "ModuleRelativePath", "Public/OfferingRevealDelays.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingRevealDelays, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_RevealState_MetaData[] = {
		{ "Category", "OfferingRevealDelays" },
		{ "ModuleRelativePath", "Public/OfferingRevealDelays.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_RevealState = { "RevealState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingRevealDelays, RevealState), Z_Construct_UEnum_DeadByDaylight_EOfferingSequenceState, METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_RevealState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_RevealState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_RevealState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_RevealState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::NewProp_RevealState_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"OfferingRevealDelays",
		sizeof(FOfferingRevealDelays),
		alignof(FOfferingRevealDelays),
		Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOfferingRevealDelays()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOfferingRevealDelays_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OfferingRevealDelays"), sizeof(FOfferingRevealDelays), Get_Z_Construct_UScriptStruct_FOfferingRevealDelays_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOfferingRevealDelays_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOfferingRevealDelays_Hash() { return 3695274707U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
