// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RankNameData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankNameData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRankNameData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FRankNameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRankNameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRankNameData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RankNameData"), sizeof(FRankNameData), Get_Z_Construct_UScriptStruct_FRankNameData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRankNameData>()
{
	return FRankNameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRankNameData(FRankNameData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RankNameData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRankNameData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRankNameData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RankNameData")),new UScriptStruct::TCppStructOps<FRankNameData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRankNameData;
	struct Z_Construct_UScriptStruct_FRankNameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubRanks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubRanks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RankName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankNameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RankNameData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRankNameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRankNameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_SubRanks_MetaData[] = {
		{ "Category", "RankNameData" },
		{ "ModuleRelativePath", "Public/RankNameData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_SubRanks = { "SubRanks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankNameData, SubRanks), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_SubRanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_SubRanks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_RankName_MetaData[] = {
		{ "Category", "RankNameData" },
		{ "ModuleRelativePath", "Public/RankNameData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_RankName = { "RankName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankNameData, RankName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_RankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_RankName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRankNameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_SubRanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankNameData_Statics::NewProp_RankName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRankNameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"RankNameData",
		sizeof(FRankNameData),
		alignof(FRankNameData),
		Z_Construct_UScriptStruct_FRankNameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankNameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRankNameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankNameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRankNameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRankNameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RankNameData"), sizeof(FRankNameData), Get_Z_Construct_UScriptStruct_FRankNameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRankNameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRankNameData_Hash() { return 3403378074U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
