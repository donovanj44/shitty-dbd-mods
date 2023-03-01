// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RarityPerRingDistribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRarityPerRingDistribution() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRarityPerRingDistribution();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FRarityPerRingDistribution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRarityPerRingDistribution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRarityPerRingDistribution, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RarityPerRingDistribution"), sizeof(FRarityPerRingDistribution), Get_Z_Construct_UScriptStruct_FRarityPerRingDistribution_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRarityPerRingDistribution>()
{
	return FRarityPerRingDistribution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRarityPerRingDistribution(FRarityPerRingDistribution::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RarityPerRingDistribution"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRarityPerRingDistribution
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRarityPerRingDistribution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RarityPerRingDistribution")),new UScriptStruct::TCppStructOps<FRarityPerRingDistribution>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRarityPerRingDistribution;
	struct Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCountList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxCountList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCountList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCountList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MinCountList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinCountList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeightList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RarityPerRingDistribution.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRarityPerRingDistribution>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MaxCountList_MetaData[] = {
		{ "Category", "RarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/RarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MaxCountList = { "MaxCountList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityPerRingDistribution, MaxCountList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MaxCountList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MaxCountList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MaxCountList_Inner = { "MaxCountList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MinCountList_MetaData[] = {
		{ "Category", "RarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/RarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MinCountList = { "MinCountList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityPerRingDistribution, MinCountList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MinCountList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MinCountList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MinCountList_Inner = { "MinCountList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_WeightList_MetaData[] = {
		{ "Category", "RarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/RarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_WeightList = { "WeightList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityPerRingDistribution, WeightList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_WeightList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_WeightList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_WeightList_Inner = { "WeightList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MaxCountList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MaxCountList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MinCountList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_MinCountList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_WeightList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::NewProp_WeightList_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"RarityPerRingDistribution",
		sizeof(FRarityPerRingDistribution),
		alignof(FRarityPerRingDistribution),
		Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRarityPerRingDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRarityPerRingDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RarityPerRingDistribution"), sizeof(FRarityPerRingDistribution), Get_Z_Construct_UScriptStruct_FRarityPerRingDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRarityPerRingDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRarityPerRingDistribution_Hash() { return 1708210395U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
