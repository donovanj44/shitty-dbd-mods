// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/BloodMarketTransactionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodMarketTransactionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FBloodMarketTransactionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("BloodMarketTransactionAnalytics"), sizeof(FBloodMarketTransactionAnalytics), Get_Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FBloodMarketTransactionAnalytics>()
{
	return FBloodMarketTransactionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodMarketTransactionAnalytics(FBloodMarketTransactionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("BloodMarketTransactionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFBloodMarketTransactionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFBloodMarketTransactionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodMarketTransactionAnalytics")),new UScriptStruct::TCppStructOps<FBloodMarketTransactionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFBloodMarketTransactionAnalytics;
	struct Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfItemsBoughtOnRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfItemsBoughtOnRow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNextRowUnlocked_MetaData[];
#endif
		static void NewProp_IsNextRowUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNextRowUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodMarketTransactionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodMarketTransactionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CharacterRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketTransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CharacterRole = { "CharacterRole", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketTransactionAnalytics, CharacterRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CharacterRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CharacterRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_RowIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketTransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketTransactionAnalytics, RowIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_RowIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_RowIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_NumberOfItemsBoughtOnRow_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketTransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_NumberOfItemsBoughtOnRow = { "NumberOfItemsBoughtOnRow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketTransactionAnalytics, NumberOfItemsBoughtOnRow), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_NumberOfItemsBoughtOnRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_NumberOfItemsBoughtOnRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_IsNextRowUnlocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketTransactionAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_IsNextRowUnlocked_SetBit(void* Obj)
	{
		((FBloodMarketTransactionAnalytics*)Obj)->IsNextRowUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_IsNextRowUnlocked = { "IsNextRowUnlocked", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBloodMarketTransactionAnalytics), &Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_IsNextRowUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_IsNextRowUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_IsNextRowUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketTransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyRemaining = { "CurrencyRemaining", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketTransactionAnalytics, CurrencyRemaining), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyCost_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketTransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyCost = { "CurrencyCost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketTransactionAnalytics, CurrencyCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketTransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyUsed = { "CurrencyUsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketTransactionAnalytics, CurrencyUsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_ItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketTransactionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketTransactionAnalytics, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CharacterRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_RowIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_NumberOfItemsBoughtOnRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_IsNextRowUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_CurrencyUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"BloodMarketTransactionAnalytics",
		sizeof(FBloodMarketTransactionAnalytics),
		alignof(FBloodMarketTransactionAnalytics),
		Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodMarketTransactionAnalytics"), sizeof(FBloodMarketTransactionAnalytics), Get_Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodMarketTransactionAnalytics_Hash() { return 3131803033U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
