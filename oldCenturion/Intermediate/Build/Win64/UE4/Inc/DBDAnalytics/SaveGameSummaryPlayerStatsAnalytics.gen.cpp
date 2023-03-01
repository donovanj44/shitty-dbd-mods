// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SaveGameSummaryPlayerStatsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameSummaryPlayerStatsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FSaveGameSummaryPlayerStatsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SaveGameSummaryPlayerStatsAnalytics"), sizeof(FSaveGameSummaryPlayerStatsAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSaveGameSummaryPlayerStatsAnalytics>()
{
	return FSaveGameSummaryPlayerStatsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics(FSaveGameSummaryPlayerStatsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SaveGameSummaryPlayerStatsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameSummaryPlayerStatsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameSummaryPlayerStatsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveGameSummaryPlayerStatsAnalytics")),new UScriptStruct::TCppStructOps<FSaveGameSummaryPlayerStatsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameSummaryPlayerStatsAnalytics;
	struct Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativePlaytime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_CumulativePlaytime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodwebPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodwebPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatsProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerStatsProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedPerks_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwnedPerks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameSummaryPlayerStatsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameSummaryPlayerStatsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_CumulativePlaytime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameSummaryPlayerStatsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_CumulativePlaytime = { "CumulativePlaytime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameSummaryPlayerStatsAnalytics, CumulativePlaytime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_CumulativePlaytime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_CumulativePlaytime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_BloodwebPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameSummaryPlayerStatsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_BloodwebPoints = { "BloodwebPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameSummaryPlayerStatsAnalytics, BloodwebPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_BloodwebPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_BloodwebPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_PlayerStatsProgression_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameSummaryPlayerStatsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_PlayerStatsProgression = { "PlayerStatsProgression", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameSummaryPlayerStatsAnalytics, PlayerStatsProgression), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_PlayerStatsProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_PlayerStatsProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_OwnedPerks_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameSummaryPlayerStatsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_OwnedPerks = { "OwnedPerks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameSummaryPlayerStatsAnalytics, OwnedPerks), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_OwnedPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_OwnedPerks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_CumulativePlaytime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_BloodwebPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_PlayerStatsProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::NewProp_OwnedPerks,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"SaveGameSummaryPlayerStatsAnalytics",
		sizeof(FSaveGameSummaryPlayerStatsAnalytics),
		alignof(FSaveGameSummaryPlayerStatsAnalytics),
		Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveGameSummaryPlayerStatsAnalytics"), sizeof(FSaveGameSummaryPlayerStatsAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveGameSummaryPlayerStatsAnalytics_Hash() { return 2115181219U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
