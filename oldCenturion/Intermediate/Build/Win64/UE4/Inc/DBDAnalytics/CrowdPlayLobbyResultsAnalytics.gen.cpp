// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CrowdPlayLobbyResultsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdPlayLobbyResultsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FCrowdPlayLobbyResultsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CrowdPlayLobbyResultsAnalytics"), sizeof(FCrowdPlayLobbyResultsAnalytics), Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCrowdPlayLobbyResultsAnalytics>()
{
	return FCrowdPlayLobbyResultsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics(FCrowdPlayLobbyResultsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CrowdPlayLobbyResultsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdPlayLobbyResultsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdPlayLobbyResultsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdPlayLobbyResultsAnalytics")),new UScriptStruct::TCppStructOps<FCrowdPlayLobbyResultsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdPlayLobbyResultsAnalytics;
	struct Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbrGamesInSameSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbrGamesInSameSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbrQueueToPlayMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbrQueueToPlayMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdPlayId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CrowdPlayId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyResultsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdPlayLobbyResultsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrGamesInSameSession_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyResultsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrGamesInSameSession = { "NbrGamesInSameSession", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdPlayLobbyResultsAnalytics, NbrGamesInSameSession), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrGamesInSameSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrGamesInSameSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrQueueToPlayMembers_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyResultsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrQueueToPlayMembers = { "NbrQueueToPlayMembers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdPlayLobbyResultsAnalytics, NbrQueueToPlayMembers), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrQueueToPlayMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrQueueToPlayMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_PartySize_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyResultsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_PartySize = { "PartySize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdPlayLobbyResultsAnalytics, PartySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_PartySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_PartySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyResultsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdPlayLobbyResultsAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_CrowdPlayId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyResultsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_CrowdPlayId = { "CrowdPlayId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdPlayLobbyResultsAnalytics, CrowdPlayId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_CrowdPlayId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_CrowdPlayId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrGamesInSameSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_NbrQueueToPlayMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_PartySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::NewProp_CrowdPlayId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CrowdPlayLobbyResultsAnalytics",
		sizeof(FCrowdPlayLobbyResultsAnalytics),
		alignof(FCrowdPlayLobbyResultsAnalytics),
		Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdPlayLobbyResultsAnalytics"), sizeof(FCrowdPlayLobbyResultsAnalytics), Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyResultsAnalytics_Hash() { return 648176406U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
