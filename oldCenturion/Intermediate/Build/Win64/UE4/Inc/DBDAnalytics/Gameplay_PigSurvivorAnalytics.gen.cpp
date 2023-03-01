// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/Gameplay_PigSurvivorAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplay_PigSurvivorAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FGameplay_PigSurvivorAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("Gameplay_PigSurvivorAnalytics"), sizeof(FGameplay_PigSurvivorAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FGameplay_PigSurvivorAnalytics>()
{
	return FGameplay_PigSurvivorAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplay_PigSurvivorAnalytics(FGameplay_PigSurvivorAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("Gameplay_PigSurvivorAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_PigSurvivorAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_PigSurvivorAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Gameplay_PigSurvivorAnalytics")),new UScriptStruct::TCppStructOps<FGameplay_PigSurvivorAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_PigSurvivorAnalytics;
	struct Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RbtDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtAverageTimeLeftBeforeDisable_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RbtAverageTimeLeftBeforeDisable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtChaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RbtChaseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtDisabledPostActivation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RbtDisabledPostActivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtDisabledPreActivation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RbtDisabledPreActivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtFailedSearchCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RbtFailedSearchCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtSuccessSearchCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RbtSuccessSearchCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedRbtTimerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActivatedRbtTimerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RbtAttachedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RbtAttachedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplay_PigSurvivorAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDuration = { "RbtDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, RbtDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAverageTimeLeftBeforeDisable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAverageTimeLeftBeforeDisable = { "RbtAverageTimeLeftBeforeDisable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, RbtAverageTimeLeftBeforeDisable), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAverageTimeLeftBeforeDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAverageTimeLeftBeforeDisable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtChaseDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtChaseDuration = { "RbtChaseDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, RbtChaseDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtChaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtChaseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPostActivation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPostActivation = { "RbtDisabledPostActivation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, RbtDisabledPostActivation), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPostActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPostActivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPreActivation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPreActivation = { "RbtDisabledPreActivation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, RbtDisabledPreActivation), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPreActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPreActivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtFailedSearchCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtFailedSearchCount = { "RbtFailedSearchCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, RbtFailedSearchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtFailedSearchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtFailedSearchCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtSuccessSearchCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtSuccessSearchCount = { "RbtSuccessSearchCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, RbtSuccessSearchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtSuccessSearchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtSuccessSearchCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_ActivatedRbtTimerCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_ActivatedRbtTimerCount = { "ActivatedRbtTimerCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, ActivatedRbtTimerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_ActivatedRbtTimerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_ActivatedRbtTimerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAttachedCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAttachedCount = { "RbtAttachedCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, RbtAttachedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAttachedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAttachedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_PigSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_PigSurvivorAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAverageTimeLeftBeforeDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtChaseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPostActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtDisabledPreActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtFailedSearchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtSuccessSearchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_ActivatedRbtTimerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_RbtAttachedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"Gameplay_PigSurvivorAnalytics",
		sizeof(FGameplay_PigSurvivorAnalytics),
		alignof(FGameplay_PigSurvivorAnalytics),
		Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Gameplay_PigSurvivorAnalytics"), sizeof(FGameplay_PigSurvivorAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplay_PigSurvivorAnalytics_Hash() { return 535090205U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
