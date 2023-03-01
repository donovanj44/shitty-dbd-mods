// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/LevelLoadingStepAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelLoadingStepAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FLevelLoadingStepAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("LevelLoadingStepAnalytics"), sizeof(FLevelLoadingStepAnalytics), Get_Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FLevelLoadingStepAnalytics>()
{
	return FLevelLoadingStepAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelLoadingStepAnalytics(FLevelLoadingStepAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("LevelLoadingStepAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFLevelLoadingStepAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFLevelLoadingStepAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelLoadingStepAnalytics")),new UScriptStruct::TCppStructOps<FLevelLoadingStepAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFLevelLoadingStepAnalytics;
	struct Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTimeout_MetaData[];
#endif
		static void NewProp_IsTimeout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadingStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelLoadingStepAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelLoadingStepAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_IsTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelLoadingStepAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_IsTimeout_SetBit(void* Obj)
	{
		((FLevelLoadingStepAnalytics*)Obj)->IsTimeout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_IsTimeout = { "IsTimeout", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelLoadingStepAnalytics), &Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_IsTimeout_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_IsTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_IsTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_LoadingStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelLoadingStepAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_LoadingStep = { "LoadingStep", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelLoadingStepAnalytics, LoadingStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_LoadingStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_LoadingStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_TimeElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelLoadingStepAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_TimeElapsed = { "TimeElapsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelLoadingStepAnalytics, TimeElapsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_TimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_TimeElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_Seed_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelLoadingStepAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelLoadingStepAnalytics, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelLoadingStepAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelLoadingStepAnalytics, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelLoadingStepAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelLoadingStepAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_IsTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_LoadingStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_TimeElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"LevelLoadingStepAnalytics",
		sizeof(FLevelLoadingStepAnalytics),
		alignof(FLevelLoadingStepAnalytics),
		Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelLoadingStepAnalytics"), sizeof(FLevelLoadingStepAnalytics), Get_Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelLoadingStepAnalytics_Hash() { return 66283904U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
