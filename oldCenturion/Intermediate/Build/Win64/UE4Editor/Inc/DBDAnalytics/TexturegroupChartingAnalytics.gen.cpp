// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/TexturegroupChartingAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexturegroupChartingAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FTexturegroupChartingAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("TexturegroupChartingAnalytics"), sizeof(FTexturegroupChartingAnalytics), Get_Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FTexturegroupChartingAnalytics>()
{
	return FTexturegroupChartingAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTexturegroupChartingAnalytics(FTexturegroupChartingAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("TexturegroupChartingAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFTexturegroupChartingAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFTexturegroupChartingAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TexturegroupChartingAnalytics")),new UScriptStruct::TCppStructOps<FTexturegroupChartingAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFTexturegroupChartingAnalytics;
	struct Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_memory_non_streaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_max_memory_non_streaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avg_memory_non_streaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_avg_memory_non_streaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_qty_non_streaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_max_qty_non_streaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avg_qty_non_streaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_avg_qty_non_streaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_memory_streaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_max_memory_streaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avg_memory_streaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_avg_memory_streaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_qty_streaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_max_qty_streaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avg_qty_streaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_avg_qty_streaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_map_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_map_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_texturegroups_guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_texturegroups_guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_texturegroup_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_texturegroup_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturegroupChartingAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_non_streaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_non_streaming = { "max_memory_non_streaming", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, max_memory_non_streaming), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_non_streaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_non_streaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_non_streaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_non_streaming = { "avg_memory_non_streaming", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, avg_memory_non_streaming), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_non_streaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_non_streaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_non_streaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_non_streaming = { "max_qty_non_streaming", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, max_qty_non_streaming), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_non_streaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_non_streaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_non_streaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_non_streaming = { "avg_qty_non_streaming", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, avg_qty_non_streaming), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_non_streaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_non_streaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_streaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_streaming = { "max_memory_streaming", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, max_memory_streaming), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_streaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_streaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_streaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_streaming = { "avg_memory_streaming", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, avg_memory_streaming), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_streaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_streaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_streaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_streaming = { "max_qty_streaming", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, max_qty_streaming), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_streaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_streaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_streaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_streaming = { "avg_qty_streaming", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, avg_qty_streaming), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_streaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_streaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_map_name_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_map_name = { "map_name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, map_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_map_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_map_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroups_guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroups_guid = { "texturegroups_guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, texturegroups_guid), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroups_guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroups_guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroup_name_MetaData[] = {
		{ "ModuleRelativePath", "Public/TexturegroupChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroup_name = { "texturegroup_name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTexturegroupChartingAnalytics, texturegroup_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroup_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroup_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_non_streaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_non_streaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_non_streaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_non_streaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_memory_streaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_memory_streaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_max_qty_streaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_avg_qty_streaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_map_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroups_guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::NewProp_texturegroup_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"TexturegroupChartingAnalytics",
		sizeof(FTexturegroupChartingAnalytics),
		alignof(FTexturegroupChartingAnalytics),
		Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TexturegroupChartingAnalytics"), sizeof(FTexturegroupChartingAnalytics), Get_Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTexturegroupChartingAnalytics_Hash() { return 3146879424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
