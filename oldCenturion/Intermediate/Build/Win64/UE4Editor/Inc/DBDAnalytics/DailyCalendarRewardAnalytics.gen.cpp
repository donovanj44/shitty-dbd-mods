// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DailyCalendarRewardAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyCalendarRewardAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FDailyCalendarRewardAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("DailyCalendarRewardAnalytics"), sizeof(FDailyCalendarRewardAnalytics), Get_Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FDailyCalendarRewardAnalytics>()
{
	return FDailyCalendarRewardAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDailyCalendarRewardAnalytics(FDailyCalendarRewardAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("DailyCalendarRewardAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFDailyCalendarRewardAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFDailyCalendarRewardAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DailyCalendarRewardAnalytics")),new UScriptStruct::TCppStructOps<FDailyCalendarRewardAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFDailyCalendarRewardAnalytics;
	struct Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfRewards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyCalendarRewardAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDailyCalendarRewardAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyCalendarRewardAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemAmount = { "ItemAmount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyCalendarRewardAnalytics, ItemAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_RewardIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyCalendarRewardAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_RewardIndex = { "RewardIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyCalendarRewardAnalytics, RewardIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_RewardIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_RewardIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_NumberOfRewards_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyCalendarRewardAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_NumberOfRewards = { "NumberOfRewards", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyCalendarRewardAnalytics, NumberOfRewards), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_NumberOfRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_NumberOfRewards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyCalendarRewardAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyCalendarRewardAnalytics, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_RewardIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_NumberOfRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"DailyCalendarRewardAnalytics",
		sizeof(FDailyCalendarRewardAnalytics),
		alignof(FDailyCalendarRewardAnalytics),
		Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DailyCalendarRewardAnalytics"), sizeof(FDailyCalendarRewardAnalytics), Get_Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDailyCalendarRewardAnalytics_Hash() { return 2553963324U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
