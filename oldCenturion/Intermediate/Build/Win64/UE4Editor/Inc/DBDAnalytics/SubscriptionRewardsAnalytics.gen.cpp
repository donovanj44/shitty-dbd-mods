// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SubscriptionRewardsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriptionRewardsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FSubscriptionRewardsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SubscriptionRewardsAnalytics"), sizeof(FSubscriptionRewardsAnalytics), Get_Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSubscriptionRewardsAnalytics>()
{
	return FSubscriptionRewardsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubscriptionRewardsAnalytics(FSubscriptionRewardsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SubscriptionRewardsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSubscriptionRewardsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSubscriptionRewardsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubscriptionRewardsAnalytics")),new UScriptStruct::TCppStructOps<FSubscriptionRewardsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSubscriptionRewardsAnalytics;
	struct Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventSourceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventSourceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyRewards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryRewards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubscriptionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubscriptionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubscriptionRewardsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubscriptionRewardsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_EventSourceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubscriptionRewardsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_EventSourceId = { "EventSourceId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionRewardsAnalytics, EventSourceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_EventSourceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_EventSourceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_CurrencyRewards_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubscriptionRewardsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_CurrencyRewards = { "CurrencyRewards", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionRewardsAnalytics, CurrencyRewards), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_CurrencyRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_CurrencyRewards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_InventoryRewards_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubscriptionRewardsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_InventoryRewards = { "InventoryRewards", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionRewardsAnalytics, InventoryRewards), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_InventoryRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_InventoryRewards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_SubscriptionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubscriptionRewardsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_SubscriptionId = { "SubscriptionId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionRewardsAnalytics, SubscriptionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_SubscriptionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_SubscriptionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_EventSourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_CurrencyRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_InventoryRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::NewProp_SubscriptionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"SubscriptionRewardsAnalytics",
		sizeof(FSubscriptionRewardsAnalytics),
		alignof(FSubscriptionRewardsAnalytics),
		Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubscriptionRewardsAnalytics"), sizeof(FSubscriptionRewardsAnalytics), Get_Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubscriptionRewardsAnalytics_Hash() { return 2757104783U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
