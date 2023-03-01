// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/BloodMarketRefreshAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodMarketRefreshAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FBloodMarketRefreshAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("BloodMarketRefreshAnalytics"), sizeof(FBloodMarketRefreshAnalytics), Get_Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FBloodMarketRefreshAnalytics>()
{
	return FBloodMarketRefreshAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodMarketRefreshAnalytics(FBloodMarketRefreshAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("BloodMarketRefreshAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFBloodMarketRefreshAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFBloodMarketRefreshAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodMarketRefreshAnalytics")),new UScriptStruct::TCppStructOps<FBloodMarketRefreshAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFBloodMarketRefreshAnalytics;
	struct Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RefreshMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterRole;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodMarketRefreshAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodMarketRefreshAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_RefreshMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketRefreshAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_RefreshMethod = { "RefreshMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketRefreshAnalytics, RefreshMethod), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_RefreshMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_RefreshMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketRefreshAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyUsed = { "CurrencyUsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketRefreshAnalytics, CurrencyUsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyCost_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketRefreshAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyCost = { "CurrencyCost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketRefreshAnalytics, CurrencyCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CharacterRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodMarketRefreshAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CharacterRole = { "CharacterRole", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodMarketRefreshAnalytics, CharacterRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CharacterRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CharacterRole_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_RefreshMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CurrencyCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::NewProp_CharacterRole,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"BloodMarketRefreshAnalytics",
		sizeof(FBloodMarketRefreshAnalytics),
		alignof(FBloodMarketRefreshAnalytics),
		Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodMarketRefreshAnalytics"), sizeof(FBloodMarketRefreshAnalytics), Get_Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodMarketRefreshAnalytics_Hash() { return 879019648U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
