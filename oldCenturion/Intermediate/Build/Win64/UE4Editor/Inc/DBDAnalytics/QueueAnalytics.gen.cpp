// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/QueueAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueueAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FQueueAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FQueueAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FQueueAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueueAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("QueueAnalytics"), sizeof(FQueueAnalytics), Get_Z_Construct_UScriptStruct_FQueueAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FQueueAnalytics>()
{
	return FQueueAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueueAnalytics(FQueueAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("QueueAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFQueueAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFQueueAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QueueAnalytics")),new UScriptStruct::TCppStructOps<FQueueAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFQueueAnalytics;
	struct Z_Construct_UScriptStruct_FQueueAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInOnlineLobbySurvivorGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInOnlineLobbySurvivorGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInOnlineLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInOnlineLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInOfflineLobbySurvivorGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInOfflineLobbySurvivorGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInOfflineLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInOfflineLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInHelpMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInHelpMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInGameMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInGameMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInTallyScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInTallyScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInFearMarket_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInFearMarket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInCustomizationMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInCustomizationMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInLoadoutMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInLoadoutMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInBloodwebMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInBloodwebMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInCharacterMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInCharacterMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativePlaytime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CumulativePlaytime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeSessions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeSessions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSessionTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastSessionTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionEndTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionEndTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionStartTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionStartTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMatchTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastMatchTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatches_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstTimePlaying_MetaData[];
#endif
		static void NewProp_FirstTimePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstTimePlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCountry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedCountry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchesAsKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchesAsKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchesAsSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchesAsSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimesQueuedKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimesQueuedKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimesQueuedSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimesQueuedSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueueAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobbySurvivorGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobbySurvivorGroup = { "TimeInOnlineLobbySurvivorGroup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInOnlineLobbySurvivorGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobbySurvivorGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobbySurvivorGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobby_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobby = { "TimeInOnlineLobby", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInOnlineLobby), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobbySurvivorGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobbySurvivorGroup = { "TimeInOfflineLobbySurvivorGroup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInOfflineLobbySurvivorGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobbySurvivorGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobbySurvivorGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobby_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobby = { "TimeInOfflineLobby", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInOfflineLobby), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInHelpMenu_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInHelpMenu = { "TimeInHelpMenu", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInHelpMenu), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInHelpMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInHelpMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInGameMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInGameMatch = { "TimeInGameMatch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInGameMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInGameMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInGameMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInTallyScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInTallyScreen = { "TimeInTallyScreen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInTallyScreen), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInTallyScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInTallyScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInFearMarket_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInFearMarket = { "TimeInFearMarket", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInFearMarket), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInFearMarket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInFearMarket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCustomizationMenu_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCustomizationMenu = { "TimeInCustomizationMenu", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInCustomizationMenu), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCustomizationMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCustomizationMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInLoadoutMenu_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInLoadoutMenu = { "TimeInLoadoutMenu", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInLoadoutMenu), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInLoadoutMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInLoadoutMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInBloodwebMenu_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInBloodwebMenu = { "TimeInBloodwebMenu", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInBloodwebMenu), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInBloodwebMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInBloodwebMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCharacterMenu_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCharacterMenu = { "TimeInCharacterMenu", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimeInCharacterMenu), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCharacterMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCharacterMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativePlaytime_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativePlaytime = { "CumulativePlaytime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, CumulativePlaytime), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativePlaytime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativePlaytime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeSessions_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeSessions = { "CumulativeSessions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, CumulativeSessions), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeSessions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastSessionTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastSessionTimestamp = { "LastSessionTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, LastSessionTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastSessionTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastSessionTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionEndTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionEndTimestamp = { "SessionEndTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, SessionEndTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionEndTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionEndTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionStartTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionStartTimestamp = { "SessionStartTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, SessionStartTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionStartTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionStartTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastMatchTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastMatchTimestamp = { "LastMatchTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, LastMatchTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastMatchTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastMatchTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsKiller = { "CumulativeMatchesAsKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, CumulativeMatchesAsKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor = { "CumulativeMatchesAsSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, CumulativeMatchesAsSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatches_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatches = { "CumulativeMatches", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, CumulativeMatches), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_FirstTimePlaying_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_FirstTimePlaying_SetBit(void* Obj)
	{
		((FQueueAnalytics*)Obj)->FirstTimePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_FirstTimePlaying = { "FirstTimePlaying", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQueueAnalytics), &Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_FirstTimePlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_FirstTimePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_FirstTimePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SelectedCountry_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SelectedCountry = { "SelectedCountry", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, SelectedCountry), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SelectedCountry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SelectedCountry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsKiller = { "MatchesAsKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, MatchesAsKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsSurvivor = { "MatchesAsSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, MatchesAsSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedKiller = { "TimesQueuedKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimesQueuedKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/QueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedSurvivor = { "TimesQueuedSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueAnalytics, TimesQueuedSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueueAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobbySurvivorGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOnlineLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobbySurvivorGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInOfflineLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInHelpMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInGameMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInTallyScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInFearMarket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCustomizationMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInLoadoutMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInBloodwebMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimeInCharacterMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativePlaytime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeSessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastSessionTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionEndTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SessionStartTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_LastMatchTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_CumulativeMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_FirstTimePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_SelectedCountry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_MatchesAsSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueAnalytics_Statics::NewProp_TimesQueuedSurvivor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueueAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"QueueAnalytics",
		sizeof(FQueueAnalytics),
		alignof(FQueueAnalytics),
		Z_Construct_UScriptStruct_FQueueAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueueAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueueAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueueAnalytics"), sizeof(FQueueAnalytics), Get_Z_Construct_UScriptStruct_FQueueAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQueueAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueueAnalytics_Hash() { return 3377438258U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
