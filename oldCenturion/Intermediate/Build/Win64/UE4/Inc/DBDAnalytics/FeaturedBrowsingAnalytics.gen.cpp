// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FeaturedBrowsingAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeaturedBrowsingAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FFeaturedBrowsingAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FeaturedBrowsingAnalytics"), sizeof(FFeaturedBrowsingAnalytics), Get_Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFeaturedBrowsingAnalytics>()
{
	return FFeaturedBrowsingAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFeaturedBrowsingAnalytics(FFeaturedBrowsingAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FeaturedBrowsingAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedBrowsingAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedBrowsingAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FeaturedBrowsingAnalytics")),new UScriptStruct::TCppStructOps<FFeaturedBrowsingAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedBrowsingAnalytics;
	struct Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stringID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stringID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_startDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contentGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contentGroupID;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeaturedBrowsingAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeaturedBrowsingAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_stringID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedBrowsingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_stringID = { "stringID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedBrowsingAnalytics, stringID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_stringID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_stringID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_endDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedBrowsingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedBrowsingAnalytics, endDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_endDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_endDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_startDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedBrowsingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_startDate = { "startDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedBrowsingAnalytics, startDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_startDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_startDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_contentGroupID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedBrowsingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_contentGroupID = { "contentGroupID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedBrowsingAnalytics, contentGroupID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_contentGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_contentGroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_price_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedBrowsingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedBrowsingAnalytics, price), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_itemID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturedBrowsingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturedBrowsingAnalytics, itemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_itemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_itemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_stringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_startDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_contentGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::NewProp_itemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"FeaturedBrowsingAnalytics",
		sizeof(FFeaturedBrowsingAnalytics),
		alignof(FFeaturedBrowsingAnalytics),
		Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FeaturedBrowsingAnalytics"), sizeof(FFeaturedBrowsingAnalytics), Get_Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeaturedBrowsingAnalytics_Hash() { return 1163527285U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
