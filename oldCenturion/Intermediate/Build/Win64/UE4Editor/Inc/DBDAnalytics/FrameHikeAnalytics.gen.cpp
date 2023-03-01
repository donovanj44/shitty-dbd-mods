// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FrameHikeAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrameHikeAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFrameHikeAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FFrameHikeAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFrameHikeAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrameHikeAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FrameHikeAnalytics"), sizeof(FFrameHikeAnalytics), Get_Z_Construct_UScriptStruct_FFrameHikeAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFrameHikeAnalytics>()
{
	return FFrameHikeAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrameHikeAnalytics(FFrameHikeAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FrameHikeAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFrameHikeAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFrameHikeAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FrameHikeAnalytics")),new UScriptStruct::TCppStructOps<FFrameHikeAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFrameHikeAnalytics;
	struct Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NetMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncLoadCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SyncLoadCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlushAsyncLoadingCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FlushAsyncLoadingCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlushAsyncLoadingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlushAsyncLoadingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KrakenMatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KrakenMatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentLogs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RecentLogs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousNavigationContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviousNavigationContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NavigationContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousGameFlowContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviousGameFlowContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGameFlowContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentGameFlowContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameFlowStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameFlowStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGameMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentGameMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOverConnectionTimeLimit_MetaData[];
#endif
		static void NewProp_IsOverConnectionTimeLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOverConnectionTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTimeoutThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTimeoutThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSinceApplicationStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSinceApplicationStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrameHikeAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NetMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NetMode = { "NetMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, NetMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NetMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameType_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameType = { "GameType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, GameType), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_SyncLoadCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_SyncLoadCount = { "SyncLoadCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, SyncLoadCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_SyncLoadCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_SyncLoadCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingCount = { "FlushAsyncLoadingCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, FlushAsyncLoadingCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingTime = { "FlushAsyncLoadingTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, FlushAsyncLoadingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_KrakenMatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_KrakenMatchId = { "KrakenMatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, KrakenMatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_KrakenMatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_KrakenMatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_RecentLogs_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_RecentLogs = { "RecentLogs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, RecentLogs), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_RecentLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_RecentLogs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousNavigationContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousNavigationContext = { "PreviousNavigationContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, PreviousNavigationContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousNavigationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousNavigationContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NavigationContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NavigationContext = { "NavigationContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, NavigationContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NavigationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NavigationContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousGameFlowContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousGameFlowContext = { "PreviousGameFlowContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, PreviousGameFlowContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousGameFlowContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousGameFlowContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameFlowContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameFlowContext = { "CurrentGameFlowContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, CurrentGameFlowContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameFlowContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameFlowContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameFlowStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameFlowStep = { "GameFlowStep", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, GameFlowStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameFlowStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameFlowStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameMap = { "CurrentGameMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, CurrentGameMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentMap = { "CurrentMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, CurrentMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_IsOverConnectionTimeLimit_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_IsOverConnectionTimeLimit_SetBit(void* Obj)
	{
		((FFrameHikeAnalytics*)Obj)->IsOverConnectionTimeLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_IsOverConnectionTimeLimit = { "IsOverConnectionTimeLimit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFrameHikeAnalytics), &Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_IsOverConnectionTimeLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_IsOverConnectionTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_IsOverConnectionTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentTimeoutThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentTimeoutThreshold = { "CurrentTimeoutThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, CurrentTimeoutThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentTimeoutThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentTimeoutThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_TimeSinceApplicationStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_TimeSinceApplicationStarted = { "TimeSinceApplicationStarted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, TimeSinceApplicationStarted), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_TimeSinceApplicationStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_TimeSinceApplicationStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FrameDeltaTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameHikeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FrameDeltaTime = { "FrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameHikeAnalytics, FrameDeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FrameDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FrameDeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_SyncLoadCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FlushAsyncLoadingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_KrakenMatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_RecentLogs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousNavigationContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_NavigationContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_PreviousGameFlowContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameFlowContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_GameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentGameMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_IsOverConnectionTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_CurrentTimeoutThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_TimeSinceApplicationStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::NewProp_FrameDeltaTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"FrameHikeAnalytics",
		sizeof(FFrameHikeAnalytics),
		alignof(FFrameHikeAnalytics),
		Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFrameHikeAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrameHikeAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrameHikeAnalytics"), sizeof(FFrameHikeAnalytics), Get_Z_Construct_UScriptStruct_FFrameHikeAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFrameHikeAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrameHikeAnalytics_Hash() { return 360470424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
