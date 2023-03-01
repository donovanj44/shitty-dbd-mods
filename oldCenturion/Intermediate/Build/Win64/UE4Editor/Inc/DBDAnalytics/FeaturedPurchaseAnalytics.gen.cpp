// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FeaturedPurchaseAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeaturedPurchaseAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FFeaturedPurchaseAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FeaturedPurchaseAnalytics"), sizeof(FFeaturedPurchaseAnalytics), Get_Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFeaturedPurchaseAnalytics>()
{
	return FFeaturedPurchaseAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFeaturedPurchaseAnalytics(FFeaturedPurchaseAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FeaturedPurchaseAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedPurchaseAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedPurchaseAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FeaturedPurchaseAnalytics")),new UScriptStruct::TCppStructOps<FFeaturedPurchaseAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedPurchaseAnalytics;
	struct Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_price_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeaturedPurchaseAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeaturedPurchaseAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_price_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedPurchaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedPurchaseAnalytics, price), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_itemID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedPurchaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedPurchaseAnalytics, itemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_itemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_itemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::NewProp_itemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"FeaturedPurchaseAnalytics",
		sizeof(FFeaturedPurchaseAnalytics),
		alignof(FFeaturedPurchaseAnalytics),
		Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FeaturedPurchaseAnalytics"), sizeof(FFeaturedPurchaseAnalytics), Get_Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeaturedPurchaseAnalytics_Hash() { return 3080964027U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
