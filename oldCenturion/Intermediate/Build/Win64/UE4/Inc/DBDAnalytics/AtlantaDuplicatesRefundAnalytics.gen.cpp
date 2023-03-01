// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaDuplicatesRefundAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaDuplicatesRefundAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaDuplicatesRefundAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaDuplicatesRefundAnalytics"), sizeof(FAtlantaDuplicatesRefundAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaDuplicatesRefundAnalytics>()
{
	return FAtlantaDuplicatesRefundAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics(FAtlantaDuplicatesRefundAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaDuplicatesRefundAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaDuplicatesRefundAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaDuplicatesRefundAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaDuplicatesRefundAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaDuplicatesRefundAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaDuplicatesRefundAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FromSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FragmentItemAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FragmentItemAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FragmentItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FragmentItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefundItemAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefundItemAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefundItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RefundItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuplicatesItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DuplicatesItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaDuplicatesRefundAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaDuplicatesRefundAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FromSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaDuplicatesRefundAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FromSystem = { "FromSystem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDuplicatesRefundAnalytics, FromSystem), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FromSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FromSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItemAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaDuplicatesRefundAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItemAmount = { "FragmentItemAmount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDuplicatesRefundAnalytics, FragmentItemAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItemAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItemAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaDuplicatesRefundAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItem = { "FragmentItem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDuplicatesRefundAnalytics, FragmentItem), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItemAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaDuplicatesRefundAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItemAmount = { "RefundItemAmount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDuplicatesRefundAnalytics, RefundItemAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItemAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItemAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaDuplicatesRefundAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItem = { "RefundItem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDuplicatesRefundAnalytics, RefundItem), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_DuplicatesItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaDuplicatesRefundAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_DuplicatesItems = { "DuplicatesItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDuplicatesRefundAnalytics, DuplicatesItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_DuplicatesItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_DuplicatesItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FromSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItemAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_FragmentItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItemAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_RefundItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::NewProp_DuplicatesItems,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaDuplicatesRefundAnalytics",
		sizeof(FAtlantaDuplicatesRefundAnalytics),
		alignof(FAtlantaDuplicatesRefundAnalytics),
		Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaDuplicatesRefundAnalytics"), sizeof(FAtlantaDuplicatesRefundAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaDuplicatesRefundAnalytics_Hash() { return 2503829549U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
