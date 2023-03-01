// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TransactionEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransactionEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTransactionEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FTransactionEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTransactionEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransactionEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TransactionEventData"), sizeof(FTransactionEventData), Get_Z_Construct_UScriptStruct_FTransactionEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTransactionEventData>()
{
	return FTransactionEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransactionEventData(FTransactionEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TransactionEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTransactionEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTransactionEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransactionEventData")),new UScriptStruct::TCppStructOps<FTransactionEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTransactionEventData;
	struct Z_Construct_UScriptStruct_FTransactionEventData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransactionEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionTriggeredLevelUp_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionTriggeredLevelUp_SetBit(void* Obj)
	{
		((FTransactionEventData*)Obj)->TransactionTriggeredLevelUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionTriggeredLevelUp = { "TransactionTriggeredLevelUp", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTransactionEventData), &Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionTriggeredLevelUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionTriggeredLevelUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionTriggeredLevelUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SelectedCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SelectedCharacter = { "SelectedCharacter", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, SelectedCharacter), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SelectedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SelectedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Rank_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_ItemIDAcquired_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_ItemIDAcquired = { "ItemIDAcquired", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, ItemIDAcquired), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_ItemIDAcquired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_ItemIDAcquired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Prestige_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Prestige = { "Prestige", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, Prestige), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Prestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Prestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_LevelAchieved_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_LevelAchieved = { "LevelAchieved", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, LevelAchieved), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_LevelAchieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_LevelAchieved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyBalance_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyBalance = { "CurrencyBalance", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, CurrencyBalance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyBalance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyBalance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyAmount = { "CurrencyAmount", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, CurrencyAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, CurrencyType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceTier_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceTier = { "SourceTier", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, SourceTier), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, SourceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionSource = { "TransactionSource", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, TransactionSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransactionEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionType = { "TransactionType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransactionEventData, TransactionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransactionEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionTriggeredLevelUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SelectedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_ItemIDAcquired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_Prestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_LevelAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionEventData_Statics::NewProp_TransactionType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransactionEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"TransactionEventData",
		sizeof(FTransactionEventData),
		alignof(FTransactionEventData),
		Z_Construct_UScriptStruct_FTransactionEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransactionEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransactionEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransactionEventData"), sizeof(FTransactionEventData), Get_Z_Construct_UScriptStruct_FTransactionEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransactionEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransactionEventData_Hash() { return 4100436236U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
