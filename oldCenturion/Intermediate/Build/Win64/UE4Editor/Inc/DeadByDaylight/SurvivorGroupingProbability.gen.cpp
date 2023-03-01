// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorGroupingProbability.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorGroupingProbability() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivorGroupingProbability();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESurvivorGrouping();
// End Cross Module References
class UScriptStruct* FSurvivorGroupingProbability::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivorGroupingProbability, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SurvivorGroupingProbability"), sizeof(FSurvivorGroupingProbability), Get_Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSurvivorGroupingProbability>()
{
	return FSurvivorGroupingProbability::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSurvivorGroupingProbability(FSurvivorGroupingProbability::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SurvivorGroupingProbability"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorGroupingProbability
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorGroupingProbability()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SurvivorGroupingProbability")),new UScriptStruct::TCppStructOps<FSurvivorGroupingProbability>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorGroupingProbability;
	struct Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Probability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SurvivorGroupingProbability.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivorGroupingProbability>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "SurvivorGroupingProbability" },
		{ "ModuleRelativePath", "Public/SurvivorGroupingProbability.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorGroupingProbability, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Probability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "SurvivorGroupingProbability" },
		{ "ModuleRelativePath", "Public/SurvivorGroupingProbability.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorGroupingProbability, Type), Z_Construct_UEnum_DeadByDaylight_ESurvivorGrouping, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Probability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SurvivorGroupingProbability",
		sizeof(FSurvivorGroupingProbability),
		alignof(FSurvivorGroupingProbability),
		Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivorGroupingProbability()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SurvivorGroupingProbability"), sizeof(FSurvivorGroupingProbability), Get_Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSurvivorGroupingProbability_Hash() { return 1148984057U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
