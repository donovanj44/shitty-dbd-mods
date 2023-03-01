// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ScoreAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FScoreAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FScoreAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FScoreAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("ScoreAnalytics"), sizeof(FScoreAnalytics), Get_Z_Construct_UScriptStruct_FScoreAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FScoreAnalytics>()
{
	return FScoreAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScoreAnalytics(FScoreAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("ScoreAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFScoreAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFScoreAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScoreAnalytics")),new UScriptStruct::TCppStructOps<FScoreAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFScoreAnalytics;
	struct Z_Construct_UScriptStruct_FScoreAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreBloodwebPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreBloodwebPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreTypeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ScoreTypeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScoreAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreBloodwebPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreBloodwebPoints = { "ScoreBloodwebPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreAnalytics, ScoreBloodwebPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreBloodwebPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreBloodwebPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreCount = { "ScoreCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreAnalytics, ScoreCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreTypeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreTypeId = { "ScoreTypeId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreAnalytics, ScoreTypeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreTypeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreTypeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreBloodwebPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_ScoreTypeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"ScoreAnalytics",
		sizeof(FScoreAnalytics),
		alignof(FScoreAnalytics),
		Z_Construct_UScriptStruct_FScoreAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScoreAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScoreAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScoreAnalytics"), sizeof(FScoreAnalytics), Get_Z_Construct_UScriptStruct_FScoreAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScoreAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScoreAnalytics_Hash() { return 298084989U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
