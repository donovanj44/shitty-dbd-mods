// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CrowdPlayLobbyEventsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdPlayLobbyEventsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FCrowdPlayLobbyEventsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CrowdPlayLobbyEventsAnalytics"), sizeof(FCrowdPlayLobbyEventsAnalytics), Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCrowdPlayLobbyEventsAnalytics>()
{
	return FCrowdPlayLobbyEventsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics(FCrowdPlayLobbyEventsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CrowdPlayLobbyEventsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdPlayLobbyEventsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdPlayLobbyEventsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdPlayLobbyEventsAnalytics")),new UScriptStruct::TCppStructOps<FCrowdPlayLobbyEventsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdPlayLobbyEventsAnalytics;
	struct Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InviteId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InviteId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdPlayId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CrowdPlayId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyEventsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdPlayLobbyEventsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_PlayerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyEventsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdPlayLobbyEventsAnalytics, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_InviteId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyEventsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_InviteId = { "InviteId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdPlayLobbyEventsAnalytics, InviteId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_InviteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_InviteId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_LobbyEventName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyEventsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_LobbyEventName = { "LobbyEventName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdPlayLobbyEventsAnalytics, LobbyEventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_LobbyEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_LobbyEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_CrowdPlayId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdPlayLobbyEventsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_CrowdPlayId = { "CrowdPlayId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdPlayLobbyEventsAnalytics, CrowdPlayId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_CrowdPlayId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_CrowdPlayId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_InviteId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_LobbyEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::NewProp_CrowdPlayId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CrowdPlayLobbyEventsAnalytics",
		sizeof(FCrowdPlayLobbyEventsAnalytics),
		alignof(FCrowdPlayLobbyEventsAnalytics),
		Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdPlayLobbyEventsAnalytics"), sizeof(FCrowdPlayLobbyEventsAnalytics), Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdPlayLobbyEventsAnalytics_Hash() { return 406505162U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
