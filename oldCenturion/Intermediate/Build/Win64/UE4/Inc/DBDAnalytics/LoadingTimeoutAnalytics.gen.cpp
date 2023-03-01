// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/LoadingTimeoutAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingTimeoutAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FLoadingTimeoutAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("LoadingTimeoutAnalytics"), sizeof(FLoadingTimeoutAnalytics), Get_Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FLoadingTimeoutAnalytics>()
{
	return FLoadingTimeoutAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadingTimeoutAnalytics(FLoadingTimeoutAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("LoadingTimeoutAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFLoadingTimeoutAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFLoadingTimeoutAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadingTimeoutAnalytics")),new UScriptStruct::TCppStructOps<FLoadingTimeoutAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFLoadingTimeoutAnalytics;
	struct Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transition_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_transition_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_current_map_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_current_map_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_total_load_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_total_load_time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeout_timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeout_timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lobby_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lobby_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_match_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_match_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingTimeoutAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingTimeoutAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_transition_id_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingTimeoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_transition_id = { "transition_id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingTimeoutAnalytics, transition_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_transition_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_transition_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_current_map_name_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingTimeoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_current_map_name = { "current_map_name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingTimeoutAnalytics, current_map_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_current_map_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_current_map_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_total_load_time_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingTimeoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_total_load_time = { "total_load_time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingTimeoutAnalytics, total_load_time), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_total_load_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_total_load_time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_timeout_timestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingTimeoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_timeout_timestamp = { "timeout_timestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingTimeoutAnalytics, timeout_timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_timeout_timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_timeout_timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_lobby_id_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingTimeoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_lobby_id = { "lobby_id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingTimeoutAnalytics, lobby_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_lobby_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_lobby_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_match_id_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingTimeoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_match_id = { "match_id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingTimeoutAnalytics, match_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_match_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_match_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_transition_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_current_map_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_total_load_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_timeout_timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_lobby_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::NewProp_match_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"LoadingTimeoutAnalytics",
		sizeof(FLoadingTimeoutAnalytics),
		alignof(FLoadingTimeoutAnalytics),
		Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadingTimeoutAnalytics"), sizeof(FLoadingTimeoutAnalytics), Get_Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadingTimeoutAnalytics_Hash() { return 1441487373U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
