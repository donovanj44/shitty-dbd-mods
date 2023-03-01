// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ContentPerWebDistribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentPerWebDistribution() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FContentPerWebDistribution();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FContentPerWebDistribution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FContentPerWebDistribution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentPerWebDistribution, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ContentPerWebDistribution"), sizeof(FContentPerWebDistribution), Get_Z_Construct_UScriptStruct_FContentPerWebDistribution_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FContentPerWebDistribution>()
{
	return FContentPerWebDistribution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FContentPerWebDistribution(FContentPerWebDistribution::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ContentPerWebDistribution"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFContentPerWebDistribution
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFContentPerWebDistribution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ContentPerWebDistribution")),new UScriptStruct::TCppStructOps<FContentPerWebDistribution>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFContentPerWebDistribution;
	struct Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContentPerWebDistribution.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentPerWebDistribution>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "ContentPerWebDistribution" },
		{ "ModuleRelativePath", "Public/ContentPerWebDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContentPerWebDistribution, MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MinCount_MetaData[] = {
		{ "Category", "ContentPerWebDistribution" },
		{ "ModuleRelativePath", "Public/ContentPerWebDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MinCount = { "MinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContentPerWebDistribution, MinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ContentPerWebDistribution" },
		{ "ModuleRelativePath", "Public/ContentPerWebDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContentPerWebDistribution, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_CumulativeWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContentPerWebDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_CumulativeWeight = { "CumulativeWeight", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContentPerWebDistribution, CumulativeWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_CumulativeWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_CumulativeWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_MinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::NewProp_CumulativeWeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ContentPerWebDistribution",
		sizeof(FContentPerWebDistribution),
		alignof(FContentPerWebDistribution),
		Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentPerWebDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FContentPerWebDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ContentPerWebDistribution"), sizeof(FContentPerWebDistribution), Get_Z_Construct_UScriptStruct_FContentPerWebDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FContentPerWebDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FContentPerWebDistribution_Hash() { return 3060875208U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
