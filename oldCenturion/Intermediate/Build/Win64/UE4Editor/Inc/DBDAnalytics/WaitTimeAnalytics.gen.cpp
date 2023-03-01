// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/WaitTimeAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaitTimeAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FWaitTimeAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameType();
// End Cross Module References
class UScriptStruct* FWaitTimeAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FWaitTimeAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaitTimeAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("WaitTimeAnalytics"), sizeof(FWaitTimeAnalytics), Get_Z_Construct_UScriptStruct_FWaitTimeAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FWaitTimeAnalytics>()
{
	return FWaitTimeAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaitTimeAnalytics(FWaitTimeAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("WaitTimeAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFWaitTimeAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFWaitTimeAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WaitTimeAnalytics")),new UScriptStruct::TCppStructOps<FWaitTimeAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFWaitTimeAnalytics;
	struct Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DaysSinceReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DaysSinceReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartySize;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyWaitStopReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyWaitStopReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyWaitStopUtc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyWaitStopUtc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyWaitStartUtc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyWaitStartUtc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchWaitStopUtc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchWaitStopUtc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchWaitStartUtc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchWaitStartUtc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterMatchWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnterMatchWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterLobbyWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnterLobbyWaitTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaitTimeAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_DaysSinceReset_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_DaysSinceReset = { "DaysSinceReset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, DaysSinceReset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_DaysSinceReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_DaysSinceReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_RankDifference_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_RankDifference = { "RankDifference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, RankDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_RankDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_RankDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Rank_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_PartySize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_PartySize = { "PartySize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, PartySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_PartySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_PartySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, GameMode), Z_Construct_UEnum_DeadByDaylight_EGameType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_GameMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopReason_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopReason = { "LobbyWaitStopReason", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, LobbyWaitStopReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopUtc = { "LobbyWaitStopUtc", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, LobbyWaitStopUtc), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopUtc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopUtc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStartUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStartUtc = { "LobbyWaitStartUtc", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, LobbyWaitStartUtc), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStartUtc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStartUtc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStopUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStopUtc = { "MatchWaitStopUtc", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, MatchWaitStopUtc), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStopUtc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStopUtc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStartUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStartUtc = { "MatchWaitStartUtc", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, MatchWaitStartUtc), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStartUtc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStartUtc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterMatchWaitTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterMatchWaitTime = { "EnterMatchWaitTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, EnterMatchWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterMatchWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterMatchWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterLobbyWaitTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaitTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterLobbyWaitTime = { "EnterLobbyWaitTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaitTimeAnalytics, EnterLobbyWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterLobbyWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterLobbyWaitTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_DaysSinceReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_RankDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_PartySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_GameMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStopUtc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_LobbyWaitStartUtc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStopUtc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_MatchWaitStartUtc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterMatchWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::NewProp_EnterLobbyWaitTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"WaitTimeAnalytics",
		sizeof(FWaitTimeAnalytics),
		alignof(FWaitTimeAnalytics),
		Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaitTimeAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWaitTimeAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaitTimeAnalytics"), sizeof(FWaitTimeAnalytics), Get_Z_Construct_UScriptStruct_FWaitTimeAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWaitTimeAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaitTimeAnalytics_Hash() { return 3356053366U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
