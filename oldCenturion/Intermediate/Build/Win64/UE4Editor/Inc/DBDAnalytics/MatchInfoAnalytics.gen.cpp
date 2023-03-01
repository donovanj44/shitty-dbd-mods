// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MatchInfoAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchInfoAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchInfoAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameType();
// End Cross Module References
class UScriptStruct* FMatchInfoAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMatchInfoAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchInfoAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MatchInfoAnalytics"), sizeof(FMatchInfoAnalytics), Get_Z_Construct_UScriptStruct_FMatchInfoAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMatchInfoAnalytics>()
{
	return FMatchInfoAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchInfoAnalytics(FMatchInfoAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MatchInfoAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchInfoAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchInfoAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchInfoAnalytics")),new UScriptStruct::TCppStructOps<FMatchInfoAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchInfoAnalytics;
	struct Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTutorialBotMatch_MetaData[];
#endif
		static void NewProp_IsTutorialBotMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTutorialBotMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ControllerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsingKeyboard_MetaData[];
#endif
		static void NewProp_IsUsingKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsingKeyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_archiveQuestCanProgress_MetaData[];
#endif
		static void NewProp_archiveQuestCanProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_archiveQuestCanProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasAnActiveArchiveQuest_MetaData[];
#endif
		static void NewProp_hasAnActiveArchiveQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasAnActiveArchiveQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExactPing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExactPing;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCountry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedCountry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KrakenMatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KrakenMatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyHostMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyHostMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipsTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PipsTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Pips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Prestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotDifficultyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BotDifficultyLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BotDifficultyLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsABot_MetaData[];
#endif
		static void NewProp_IsABot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsABot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchInfoAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsTutorialBotMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsTutorialBotMatch_SetBit(void* Obj)
	{
		((FMatchInfoAnalytics*)Obj)->IsTutorialBotMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsTutorialBotMatch = { "IsTutorialBotMatch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchInfoAnalytics), &Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsTutorialBotMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsTutorialBotMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsTutorialBotMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ControllerType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, ControllerType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ControllerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ControllerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsUsingKeyboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsUsingKeyboard_SetBit(void* Obj)
	{
		((FMatchInfoAnalytics*)Obj)->IsUsingKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsUsingKeyboard = { "IsUsingKeyboard", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchInfoAnalytics), &Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsUsingKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsUsingKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsUsingKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_archiveQuestCanProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_archiveQuestCanProgress_SetBit(void* Obj)
	{
		((FMatchInfoAnalytics*)Obj)->archiveQuestCanProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_archiveQuestCanProgress = { "archiveQuestCanProgress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchInfoAnalytics), &Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_archiveQuestCanProgress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_archiveQuestCanProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_archiveQuestCanProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_hasAnActiveArchiveQuest_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_hasAnActiveArchiveQuest_SetBit(void* Obj)
	{
		((FMatchInfoAnalytics*)Obj)->hasAnActiveArchiveQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_hasAnActiveArchiveQuest = { "hasAnActiveArchiveQuest", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchInfoAnalytics), &Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_hasAnActiveArchiveQuest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_hasAnActiveArchiveQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_hasAnActiveArchiveQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ExactPing_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ExactPing = { "ExactPing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, ExactPing), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ExactPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ExactPing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LastMatchTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LastMatchTimestamp = { "LastMatchTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, LastMatchTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LastMatchTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LastMatchTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsKiller = { "CumulativeMatchesAsKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, CumulativeMatchesAsKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor = { "CumulativeMatchesAsSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, CumulativeMatchesAsSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatches_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatches = { "CumulativeMatches", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, CumulativeMatches), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_FirstTimePlaying_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_FirstTimePlaying_SetBit(void* Obj)
	{
		((FMatchInfoAnalytics*)Obj)->FirstTimePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_FirstTimePlaying = { "FirstTimePlaying", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchInfoAnalytics), &Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_FirstTimePlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_FirstTimePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_FirstTimePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_SelectedCountry_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_SelectedCountry = { "SelectedCountry", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, SelectedCountry), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_SelectedCountry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_SelectedCountry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_KrakenMatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_KrakenMatchId = { "KrakenMatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, KrakenMatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_KrakenMatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_KrakenMatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LobbyId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartyHostMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartyHostMirrorsId = { "PartyHostMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, PartyHostMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartyHostMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartyHostMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapSeed = { "MapSeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, MapSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PipsTotal_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PipsTotal = { "PipsTotal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, PipsTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PipsTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PipsTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Pips_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Pips = { "Pips", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, Pips), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Pips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Pips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Prestige_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Prestige = { "Prestige", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, Prestige), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Prestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Prestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Rank_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartySize_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartySize = { "PartySize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, PartySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_BotDifficultyLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_BotDifficultyLevel = { "BotDifficultyLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, BotDifficultyLevel), Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_BotDifficultyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_BotDifficultyLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_BotDifficultyLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsABot_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsABot_SetBit(void* Obj)
	{
		((FMatchInfoAnalytics*)Obj)->IsABot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsABot = { "IsABot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchInfoAnalytics), &Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsABot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsABot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsABot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchInfoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchInfoAnalytics, GameMode), Z_Construct_UEnum_DeadByDaylight_EGameType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_GameMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsTutorialBotMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsUsingKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_archiveQuestCanProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_hasAnActiveArchiveQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_ExactPing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LastMatchTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatchesAsSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CumulativeMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_FirstTimePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_SelectedCountry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_KrakenMatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartyHostMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_MapSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PipsTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Pips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Prestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_PartySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_BotDifficultyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_BotDifficultyLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_IsABot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::NewProp_GameMode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"MatchInfoAnalytics",
		sizeof(FMatchInfoAnalytics),
		alignof(FMatchInfoAnalytics),
		Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchInfoAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchInfoAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchInfoAnalytics"), sizeof(FMatchInfoAnalytics), Get_Z_Construct_UScriptStruct_FMatchInfoAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchInfoAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchInfoAnalytics_Hash() { return 1522638835U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
