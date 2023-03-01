// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CrowdChoiceOnGameRoundStartedAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdChoiceOnGameRoundStartedAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FCrowdChoiceOnGameRoundStartedAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CrowdChoiceOnGameRoundStartedAnalytics"), sizeof(FCrowdChoiceOnGameRoundStartedAnalytics), Get_Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCrowdChoiceOnGameRoundStartedAnalytics>()
{
	return FCrowdChoiceOnGameRoundStartedAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics(FCrowdChoiceOnGameRoundStartedAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CrowdChoiceOnGameRoundStartedAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdChoiceOnGameRoundStartedAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdChoiceOnGameRoundStartedAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdChoiceOnGameRoundStartedAnalytics")),new UScriptStruct::TCppStructOps<FCrowdChoiceOnGameRoundStartedAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdChoiceOnGameRoundStartedAnalytics;
	struct Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PollId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceOnGameRoundStartedAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdChoiceOnGameRoundStartedAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceOnGameRoundStartedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceOnGameRoundStartedAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_PollId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceOnGameRoundStartedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_PollId = { "PollId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceOnGameRoundStartedAnalytics, PollId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_PollId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_PollId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::NewProp_PollId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CrowdChoiceOnGameRoundStartedAnalytics",
		sizeof(FCrowdChoiceOnGameRoundStartedAnalytics),
		alignof(FCrowdChoiceOnGameRoundStartedAnalytics),
		Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdChoiceOnGameRoundStartedAnalytics"), sizeof(FCrowdChoiceOnGameRoundStartedAnalytics), Get_Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdChoiceOnGameRoundStartedAnalytics_Hash() { return 3867846834U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
