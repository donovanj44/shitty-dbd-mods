// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FeaturedPurchaseOptionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeaturedPurchaseOptionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FFeaturedPurchaseOptionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FeaturedPurchaseOptionAnalytics"), sizeof(FFeaturedPurchaseOptionAnalytics), Get_Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFeaturedPurchaseOptionAnalytics>()
{
	return FFeaturedPurchaseOptionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFeaturedPurchaseOptionAnalytics(FFeaturedPurchaseOptionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FeaturedPurchaseOptionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedPurchaseOptionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedPurchaseOptionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FeaturedPurchaseOptionAnalytics")),new UScriptStruct::TCppStructOps<FFeaturedPurchaseOptionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedPurchaseOptionAnalytics;
	struct Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeaturedPurchaseOptionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeaturedPurchaseOptionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_price_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedPurchaseOptionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedPurchaseOptionAnalytics, price), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_itemID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedPurchaseOptionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedPurchaseOptionAnalytics, itemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_itemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_itemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::NewProp_itemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"FeaturedPurchaseOptionAnalytics",
		sizeof(FFeaturedPurchaseOptionAnalytics),
		alignof(FFeaturedPurchaseOptionAnalytics),
		Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FeaturedPurchaseOptionAnalytics"), sizeof(FFeaturedPurchaseOptionAnalytics), Get_Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeaturedPurchaseOptionAnalytics_Hash() { return 2494951396U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
