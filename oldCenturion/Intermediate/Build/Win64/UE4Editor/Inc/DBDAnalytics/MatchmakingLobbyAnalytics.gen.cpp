// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MatchmakingLobbyAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingLobbyAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingAnalytics();
// End Cross Module References
class UScriptStruct* FMatchmakingLobbyAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MatchmakingLobbyAnalytics"), sizeof(FMatchmakingLobbyAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMatchmakingLobbyAnalytics>()
{
	return FMatchmakingLobbyAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakingLobbyAnalytics(FMatchmakingLobbyAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MatchmakingLobbyAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingLobbyAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingLobbyAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchmakingLobbyAnalytics")),new UScriptStruct::TCppStructOps<FMatchmakingLobbyAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingLobbyAnalytics;
	struct Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KrakenMatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KrakenMatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingLobbyAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakingLobbyAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_KrakenMatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingLobbyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_KrakenMatchId = { "KrakenMatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingLobbyAnalytics, KrakenMatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_KrakenMatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_KrakenMatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingLobbyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyResult = { "LobbyResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingLobbyAnalytics, LobbyResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingLobbyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyEndTime = { "LobbyEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingLobbyAnalytics, LobbyEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingLobbyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyStartTime = { "LobbyStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingLobbyAnalytics, LobbyStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_KrakenMatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::NewProp_LobbyStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FMatchmakingAnalytics,
		&NewStructOps,
		"MatchmakingLobbyAnalytics",
		sizeof(FMatchmakingLobbyAnalytics),
		alignof(FMatchmakingLobbyAnalytics),
		Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakingLobbyAnalytics"), sizeof(FMatchmakingLobbyAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakingLobbyAnalytics_Hash() { return 2347482979U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
