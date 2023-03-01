// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SaveGameSummaryCharacterStatsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameSummaryCharacterStatsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FSaveGameSummaryCharacterStatsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SaveGameSummaryCharacterStatsAnalytics"), sizeof(FSaveGameSummaryCharacterStatsAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSaveGameSummaryCharacterStatsAnalytics>()
{
	return FSaveGameSummaryCharacterStatsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics(FSaveGameSummaryCharacterStatsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SaveGameSummaryCharacterStatsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameSummaryCharacterStatsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameSummaryCharacterStatsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveGameSummaryCharacterStatsAnalytics")),new UScriptStruct::TCppStructOps<FSaveGameSummaryCharacterStatsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameSummaryCharacterStatsAnalytics;
	struct Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedCharacterStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavedCharacterStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameSummaryCharacterStatsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameSummaryCharacterStatsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::NewProp_SavedCharacterStats_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameSummaryCharacterStatsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::NewProp_SavedCharacterStats = { "SavedCharacterStats", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameSummaryCharacterStatsAnalytics, SavedCharacterStats), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::NewProp_SavedCharacterStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::NewProp_SavedCharacterStats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::NewProp_SavedCharacterStats,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"SaveGameSummaryCharacterStatsAnalytics",
		sizeof(FSaveGameSummaryCharacterStatsAnalytics),
		alignof(FSaveGameSummaryCharacterStatsAnalytics),
		Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveGameSummaryCharacterStatsAnalytics"), sizeof(FSaveGameSummaryCharacterStatsAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveGameSummaryCharacterStatsAnalytics_Hash() { return 1912559521U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
