// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MatchmakingJoinSessionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingJoinSessionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FMatchmakingJoinSessionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MatchmakingJoinSessionAnalytics"), sizeof(FMatchmakingJoinSessionAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMatchmakingJoinSessionAnalytics>()
{
	return FMatchmakingJoinSessionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakingJoinSessionAnalytics(FMatchmakingJoinSessionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MatchmakingJoinSessionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingJoinSessionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingJoinSessionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchmakingJoinSessionAnalytics")),new UScriptStruct::TCppStructOps<FMatchmakingJoinSessionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingJoinSessionAnalytics;
	struct Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Log;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingJoinSessionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakingJoinSessionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::NewProp_Log_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingJoinSessionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::NewProp_Log = { "Log", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingJoinSessionAnalytics, Log), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::NewProp_Log_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::NewProp_Log_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::NewProp_Log,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"MatchmakingJoinSessionAnalytics",
		sizeof(FMatchmakingJoinSessionAnalytics),
		alignof(FMatchmakingJoinSessionAnalytics),
		Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakingJoinSessionAnalytics"), sizeof(FMatchmakingJoinSessionAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakingJoinSessionAnalytics_Hash() { return 2383167947U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
