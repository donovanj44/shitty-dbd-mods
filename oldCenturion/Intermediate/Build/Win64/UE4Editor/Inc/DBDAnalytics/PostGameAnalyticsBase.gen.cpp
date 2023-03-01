// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PostGameAnalyticsBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostGameAnalyticsBase() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPostGameAnalyticsBase();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FPostGameAnalyticsBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostGameAnalyticsBase, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("PostGameAnalyticsBase"), sizeof(FPostGameAnalyticsBase), Get_Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FPostGameAnalyticsBase>()
{
	return FPostGameAnalyticsBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPostGameAnalyticsBase(FPostGameAnalyticsBase::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("PostGameAnalyticsBase"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFPostGameAnalyticsBase
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFPostGameAnalyticsBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PostGameAnalyticsBase")),new UScriptStruct::TCppStructOps<FPostGameAnalyticsBase>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFPostGameAnalyticsBase;
	struct Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchEndReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchEndReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipsGainedOrLost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PipsGainedOrLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GameDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodwebPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodwebPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostGameAnalyticsBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostGameAnalyticsBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_IsTutorialBotMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGameAnalyticsBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_IsTutorialBotMatch_SetBit(void* Obj)
	{
		((FPostGameAnalyticsBase*)Obj)->IsTutorialBotMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_IsTutorialBotMatch = { "IsTutorialBotMatch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPostGameAnalyticsBase), &Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_IsTutorialBotMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_IsTutorialBotMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_IsTutorialBotMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchEndReason_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGameAnalyticsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchEndReason = { "MatchEndReason", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGameAnalyticsBase, MatchEndReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchEndReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchEndReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_PipsGainedOrLost_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGameAnalyticsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_PipsGainedOrLost = { "PipsGainedOrLost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGameAnalyticsBase, PipsGainedOrLost), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_PipsGainedOrLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_PipsGainedOrLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_Rank_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGameAnalyticsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGameAnalyticsBase, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGameAnalyticsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGameAnalyticsBase, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_GameDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGameAnalyticsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_GameDuration = { "GameDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGameAnalyticsBase, GameDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_GameDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_GameDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_BloodwebPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGameAnalyticsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_BloodwebPoints = { "BloodwebPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGameAnalyticsBase, BloodwebPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_BloodwebPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_BloodwebPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGameAnalyticsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGameAnalyticsBase, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_IsTutorialBotMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchEndReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_PipsGainedOrLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_GameDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_BloodwebPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"PostGameAnalyticsBase",
		sizeof(FPostGameAnalyticsBase),
		alignof(FPostGameAnalyticsBase),
		Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostGameAnalyticsBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PostGameAnalyticsBase"), sizeof(FPostGameAnalyticsBase), Get_Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPostGameAnalyticsBase_Hash() { return 2732293737U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
