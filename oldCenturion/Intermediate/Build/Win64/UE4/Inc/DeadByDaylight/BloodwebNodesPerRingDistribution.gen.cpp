// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebNodesPerRingDistribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebNodesPerRingDistribution() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FBloodwebNodesPerRingDistribution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BloodwebNodesPerRingDistribution"), sizeof(FBloodwebNodesPerRingDistribution), Get_Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBloodwebNodesPerRingDistribution>()
{
	return FBloodwebNodesPerRingDistribution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodwebNodesPerRingDistribution(FBloodwebNodesPerRingDistribution::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BloodwebNodesPerRingDistribution"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebNodesPerRingDistribution
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebNodesPerRingDistribution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodwebNodesPerRingDistribution")),new UScriptStruct::TCppStructOps<FBloodwebNodesPerRingDistribution>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebNodesPerRingDistribution;
	struct Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodwebNodesPerRingDistribution.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodwebNodesPerRingDistribution>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "BloodwebNodesPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebNodesPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNodesPerRingDistribution, MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MinCount_MetaData[] = {
		{ "Category", "BloodwebNodesPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebNodesPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MinCount = { "MinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNodesPerRingDistribution, MinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MinCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::NewProp_MinCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"BloodwebNodesPerRingDistribution",
		sizeof(FBloodwebNodesPerRingDistribution),
		alignof(FBloodwebNodesPerRingDistribution),
		Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodwebNodesPerRingDistribution"), sizeof(FBloodwebNodesPerRingDistribution), Get_Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodwebNodesPerRingDistribution_Hash() { return 879689819U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
