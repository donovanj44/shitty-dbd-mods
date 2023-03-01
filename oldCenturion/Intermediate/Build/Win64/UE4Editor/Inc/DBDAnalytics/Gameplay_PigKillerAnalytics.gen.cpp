// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/Gameplay_PigKillerAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplay_PigKillerAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FGameplay_PigKillerAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("Gameplay_PigKillerAnalytics"), sizeof(FGameplay_PigKillerAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FGameplay_PigKillerAnalytics>()
{
	return FGameplay_PigKillerAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplay_PigKillerAnalytics(FGameplay_PigKillerAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("Gameplay_PigKillerAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_PigKillerAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_PigKillerAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Gameplay_PigKillerAnalytics")),new UScriptStruct::TCppStructOps<FGameplay_PigKillerAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_PigKillerAnalytics;
	struct Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtHookKill_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RbtHookKill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtExitKill_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RbtExitKill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rbt5GeneratorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rbt5GeneratorCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rbt4GeneratorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rbt4GeneratorCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rbt3GeneratorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rbt3GeneratorCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rbt2GeneratorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rbt2GeneratorCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rbt1GeneratorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rbt1GeneratorCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtKilledCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RbtKilledCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbushHitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmbushHitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplay_PigKillerAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtHookKill_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtHookKill = { "RbtHookKill", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, RbtHookKill), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtHookKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtHookKill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtExitKill_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtExitKill = { "RbtExitKill", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, RbtExitKill), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtExitKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtExitKill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_CrouchDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_CrouchDuration = { "CrouchDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, CrouchDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_CrouchDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_CrouchDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt5GeneratorCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt5GeneratorCount = { "Rbt5GeneratorCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, Rbt5GeneratorCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt5GeneratorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt5GeneratorCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt4GeneratorCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt4GeneratorCount = { "Rbt4GeneratorCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, Rbt4GeneratorCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt4GeneratorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt4GeneratorCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt3GeneratorCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt3GeneratorCount = { "Rbt3GeneratorCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, Rbt3GeneratorCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt3GeneratorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt3GeneratorCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt2GeneratorCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt2GeneratorCount = { "Rbt2GeneratorCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, Rbt2GeneratorCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt2GeneratorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt2GeneratorCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt1GeneratorCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt1GeneratorCount = { "Rbt1GeneratorCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, Rbt1GeneratorCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt1GeneratorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt1GeneratorCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtKilledCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtKilledCount = { "RbtKilledCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, RbtKilledCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtKilledCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtKilledCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_AmbushHitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_AmbushHitCount = { "AmbushHitCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, AmbushHitCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_AmbushHitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_AmbushHitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigKillerAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtHookKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtExitKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_CrouchDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt5GeneratorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt4GeneratorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt3GeneratorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt2GeneratorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_Rbt1GeneratorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_RbtKilledCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_AmbushHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"Gameplay_PigKillerAnalytics",
		sizeof(FGameplay_PigKillerAnalytics),
		alignof(FGameplay_PigKillerAnalytics),
		Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Gameplay_PigKillerAnalytics"), sizeof(FGameplay_PigKillerAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplay_PigKillerAnalytics_Hash() { return 2333664227U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
