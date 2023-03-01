// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/TransactionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransactionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FTransactionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FTransactionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FTransactionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransactionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("TransactionAnalytics"), sizeof(FTransactionAnalytics), Get_Z_Construct_UScriptStruct_FTransactionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FTransactionAnalytics>()
{
	return FTransactionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransactionAnalytics(FTransactionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("TransactionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFTransactionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFTransactionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransactionAnalytics")),new UScriptStruct::TCppStructOps<FTransactionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFTransactionAnalytics;
	struct Z_Construct_UScriptStruct_FTransactionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionTriggeredLevelUp_MetaData[];
#endif
		static void NewProp_TransactionTriggeredLevelUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TransactionTriggeredLevelUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIDAcquired_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemIDAcquired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Prestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelAchieved_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelAchieved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyBalance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyBalance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransactionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionTriggeredLevelUp_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionTriggeredLevelUp_SetBit(void* Obj)
	{
		((FTransactionAnalytics*)Obj)->TransactionTriggeredLevelUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionTriggeredLevelUp = { "TransactionTriggeredLevelUp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTransactionAnalytics), &Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionTriggeredLevelUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionTriggeredLevelUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionTriggeredLevelUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SelectedCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SelectedCharacter = { "SelectedCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, SelectedCharacter), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SelectedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SelectedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Rank_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_ItemIDAcquired_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_ItemIDAcquired = { "ItemIDAcquired", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, ItemIDAcquired), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_ItemIDAcquired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_ItemIDAcquired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Prestige_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Prestige = { "Prestige", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, Prestige), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Prestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Prestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_LevelAchieved_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_LevelAchieved = { "LevelAchieved", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, LevelAchieved), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_LevelAchieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_LevelAchieved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyBalance_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyBalance = { "CurrencyBalance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, CurrencyBalance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyBalance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyBalance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyAmount = { "CurrencyAmount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, CurrencyAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, CurrencyType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceTier_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceTier = { "SourceTier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, SourceTier), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, SourceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionSource = { "TransactionSource", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, TransactionSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionType = { "TransactionType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionAnalytics, TransactionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionTriggeredLevelUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SelectedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_ItemIDAcquired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_Prestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_LevelAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::NewProp_TransactionType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"TransactionAnalytics",
		sizeof(FTransactionAnalytics),
		alignof(FTransactionAnalytics),
		Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransactionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransactionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransactionAnalytics"), sizeof(FTransactionAnalytics), Get_Z_Construct_UScriptStruct_FTransactionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransactionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransactionAnalytics_Hash() { return 2470647425U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
