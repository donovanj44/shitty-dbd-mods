// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CurrencyBalanceAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyBalanceAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FCurrencyBalanceAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CurrencyBalanceAnalytics"), sizeof(FCurrencyBalanceAnalytics), Get_Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCurrencyBalanceAnalytics>()
{
	return FCurrencyBalanceAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrencyBalanceAnalytics(FCurrencyBalanceAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CurrencyBalanceAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCurrencyBalanceAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCurrencyBalanceAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurrencyBalanceAnalytics")),new UScriptStruct::TCppStructOps<FCurrencyBalanceAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCurrencyBalanceAnalytics;
	struct Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyBalance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyBalance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurrencyBalanceAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrencyBalanceAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyBalance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurrencyBalanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyBalance = { "CurrencyBalance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyBalanceAnalytics, CurrencyBalance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyBalance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyBalance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurrencyBalanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyName = { "CurrencyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyBalanceAnalytics, CurrencyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::NewProp_CurrencyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CurrencyBalanceAnalytics",
		sizeof(FCurrencyBalanceAnalytics),
		alignof(FCurrencyBalanceAnalytics),
		Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrencyBalanceAnalytics"), sizeof(FCurrencyBalanceAnalytics), Get_Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrencyBalanceAnalytics_Hash() { return 1678768240U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
