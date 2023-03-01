// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PerformanceAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerformanceAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPerformanceAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FPerformanceAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPerformanceAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerformanceAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("PerformanceAnalytics"), sizeof(FPerformanceAnalytics), Get_Z_Construct_UScriptStruct_FPerformanceAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FPerformanceAnalytics>()
{
	return FPerformanceAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerformanceAnalytics(FPerformanceAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("PerformanceAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFPerformanceAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFPerformanceAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerformanceAnalytics")),new UScriptStruct::TCppStructOps<FPerformanceAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFPerformanceAnalytics;
	struct Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GpuAdapter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GpuAdapter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cpu_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Cpu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileListCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileListCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Theme_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Theme;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Scenario;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FoliageQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EffectsQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShadowQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AntiAliasingQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewDistanceQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResolutionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMemoryUsedKilobytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMemoryUsedKilobytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitchesPerMinute12800ms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitchesPerMinute12800ms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitchesPerMinute6400ms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitchesPerMinute6400ms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitchesPerMinute3200ms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitchesPerMinute3200ms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitchesPerMinute1600ms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitchesPerMinute1600ms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitchesPerMinute800ms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitchesPerMinute800ms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitchesPerMinute400ms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitchesPerMinute400ms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitchesPerMinute200ms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitchesPerMinute200ms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitchesPerMinute100ms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitchesPerMinute100ms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitchesPerMinute50ms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitchesPerMinute50ms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveShadowMapPercentageOfFrameCapturingTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdaptiveShadowMapPercentageOfFrameCapturingTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveShadowMapAverageActiveLightsPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdaptiveShadowMapAverageActiveLightsPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageSlateDrawWindowTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageSlateDrawWindowTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageSlateRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageSlateRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageSlateTickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageSlateTickTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentHitchesGpuTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentHitchesGpuTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow17msGpuTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow17msGpuTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow34msGpuTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow34msGpuTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow47msGpuTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow47msGpuTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow60msGpuTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow60msGpuTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardDeviationGpuTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandardDeviationGpuTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGpuTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGpuTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGpuTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGpuTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageGpuTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageGpuTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentHitchesRhiThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentHitchesRhiThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow17msRhiThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow17msRhiThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow34msRhiThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow34msRhiThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow47msRhiThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow47msRhiThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow60msRhiThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow60msRhiThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardDeviationRhiThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandardDeviationRhiThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRhiThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRhiThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRhiThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRhiThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageRhiThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageRhiThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentHitchesGameThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentHitchesGameThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow17msGameThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow17msGameThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow34msGameThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow34msGameThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow47msGameThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow47msGameThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow60msGameThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow60msGameThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardDeviationGameThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandardDeviationGameThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGameThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGameThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGameThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGameThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageGameThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageGameThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentHitchesRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentHitchesRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow17msRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow17msRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow34msRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow34msRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow47msRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow47msRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow60msRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow60msRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardDeviationRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandardDeviationRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageRenderThreadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageRenderThreadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentHitchesFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentHitchesFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow17msFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow17msFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow34msFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow34msFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow47msFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow47msFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentBelow60msFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentBelow60msFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardDeviationFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandardDeviationFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageFPS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerformanceAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_GpuAdapter_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_GpuAdapter = { "GpuAdapter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, GpuAdapter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_GpuAdapter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_GpuAdapter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Cpu_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Cpu = { "Cpu", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, Cpu), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Cpu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Cpu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Seed_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TileListCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TileListCount = { "TileListCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, TileListCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TileListCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TileListCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Theme_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Theme = { "Theme", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, Theme), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Theme_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Theme_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Scenario_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Scenario = { "Scenario", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, Scenario), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Scenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Scenario_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_FoliageQuality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_FoliageQuality = { "FoliageQuality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, FoliageQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_FoliageQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_FoliageQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_EffectsQuality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_EffectsQuality = { "EffectsQuality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, EffectsQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_EffectsQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_EffectsQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TextureQuality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TextureQuality = { "TextureQuality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, TextureQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TextureQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TextureQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ShadowQuality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ShadowQuality = { "ShadowQuality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, ShadowQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ShadowQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ShadowQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AntiAliasingQuality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AntiAliasingQuality = { "AntiAliasingQuality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AntiAliasingQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AntiAliasingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AntiAliasingQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ViewDistanceQuality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ViewDistanceQuality = { "ViewDistanceQuality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, ViewDistanceQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ViewDistanceQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ViewDistanceQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ResolutionQuality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ResolutionQuality = { "ResolutionQuality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, ResolutionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ResolutionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ResolutionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TotalFrames_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TotalFrames = { "TotalFrames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, TotalFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TotalFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TotalFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchCount = { "MatchCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MatchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxMemoryUsedKilobytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxMemoryUsedKilobytes = { "MaxMemoryUsedKilobytes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MaxMemoryUsedKilobytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxMemoryUsedKilobytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxMemoryUsedKilobytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_DeviceProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_DeviceProfile = { "DeviceProfile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, DeviceProfile), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_DeviceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_DeviceProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute12800ms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute12800ms = { "HitchesPerMinute12800ms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, HitchesPerMinute12800ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute12800ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute12800ms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute6400ms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute6400ms = { "HitchesPerMinute6400ms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, HitchesPerMinute6400ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute6400ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute6400ms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute3200ms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute3200ms = { "HitchesPerMinute3200ms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, HitchesPerMinute3200ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute3200ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute3200ms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute1600ms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute1600ms = { "HitchesPerMinute1600ms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, HitchesPerMinute1600ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute1600ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute1600ms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute800ms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute800ms = { "HitchesPerMinute800ms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, HitchesPerMinute800ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute800ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute800ms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute400ms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute400ms = { "HitchesPerMinute400ms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, HitchesPerMinute400ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute400ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute400ms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute200ms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute200ms = { "HitchesPerMinute200ms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, HitchesPerMinute200ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute200ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute200ms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute100ms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute100ms = { "HitchesPerMinute100ms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, HitchesPerMinute100ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute100ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute100ms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute50ms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute50ms = { "HitchesPerMinute50ms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, HitchesPerMinute50ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute50ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute50ms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapPercentageOfFrameCapturingTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapPercentageOfFrameCapturingTiles = { "AdaptiveShadowMapPercentageOfFrameCapturingTiles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AdaptiveShadowMapPercentageOfFrameCapturingTiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapPercentageOfFrameCapturingTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapPercentageOfFrameCapturingTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageActiveLightsPerFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageActiveLightsPerFrame = { "AdaptiveShadowMapAverageActiveLightsPerFrame", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AdaptiveShadowMapAverageActiveLightsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageActiveLightsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageActiveLightsPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture = { "AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateDrawWindowTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateDrawWindowTime = { "AverageSlateDrawWindowTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AverageSlateDrawWindowTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateDrawWindowTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateDrawWindowTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateRenderThreadTime = { "AverageSlateRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AverageSlateRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateTickTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateTickTime = { "AverageSlateTickTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AverageSlateTickTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateTickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateTickTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGpuTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGpuTime = { "PercentHitchesGpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentHitchesGpuTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGpuTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGpuTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGpuTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGpuTime = { "PercentBelow17msGpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow17msGpuTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGpuTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGpuTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGpuTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGpuTime = { "PercentBelow34msGpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow34msGpuTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGpuTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGpuTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGpuTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGpuTime = { "PercentBelow47msGpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow47msGpuTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGpuTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGpuTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGpuTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGpuTime = { "PercentBelow60msGpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow60msGpuTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGpuTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGpuTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGpuTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGpuTime = { "StandardDeviationGpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, StandardDeviationGpuTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGpuTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGpuTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGpuTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGpuTime = { "MaxGpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MaxGpuTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGpuTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGpuTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGpuTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGpuTime = { "MinGpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MinGpuTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGpuTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGpuTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGpuTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGpuTime = { "AverageGpuTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AverageGpuTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGpuTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGpuTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRhiThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRhiThreadTime = { "PercentHitchesRhiThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentHitchesRhiThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRhiThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRhiThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRhiThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRhiThreadTime = { "PercentBelow17msRhiThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow17msRhiThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRhiThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRhiThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRhiThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRhiThreadTime = { "PercentBelow34msRhiThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow34msRhiThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRhiThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRhiThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRhiThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRhiThreadTime = { "PercentBelow47msRhiThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow47msRhiThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRhiThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRhiThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRhiThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRhiThreadTime = { "PercentBelow60msRhiThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow60msRhiThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRhiThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRhiThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRhiThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRhiThreadTime = { "StandardDeviationRhiThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, StandardDeviationRhiThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRhiThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRhiThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRhiThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRhiThreadTime = { "MaxRhiThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MaxRhiThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRhiThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRhiThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRhiThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRhiThreadTime = { "MinRhiThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MinRhiThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRhiThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRhiThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRhiThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRhiThreadTime = { "AverageRhiThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AverageRhiThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRhiThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRhiThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGameThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGameThreadTime = { "PercentHitchesGameThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentHitchesGameThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGameThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGameThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGameThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGameThreadTime = { "PercentBelow17msGameThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow17msGameThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGameThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGameThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGameThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGameThreadTime = { "PercentBelow34msGameThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow34msGameThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGameThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGameThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGameThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGameThreadTime = { "PercentBelow47msGameThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow47msGameThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGameThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGameThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGameThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGameThreadTime = { "PercentBelow60msGameThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow60msGameThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGameThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGameThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGameThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGameThreadTime = { "StandardDeviationGameThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, StandardDeviationGameThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGameThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGameThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGameThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGameThreadTime = { "MaxGameThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MaxGameThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGameThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGameThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGameThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGameThreadTime = { "MinGameThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MinGameThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGameThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGameThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGameThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGameThreadTime = { "AverageGameThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AverageGameThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGameThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGameThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRenderThreadTime = { "PercentHitchesRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentHitchesRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRenderThreadTime = { "PercentBelow17msRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow17msRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRenderThreadTime = { "PercentBelow34msRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow34msRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRenderThreadTime = { "PercentBelow47msRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow47msRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRenderThreadTime = { "PercentBelow60msRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow60msRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRenderThreadTime = { "StandardDeviationRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, StandardDeviationRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRenderThreadTime = { "MaxRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MaxRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRenderThreadTime = { "MinRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MinRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRenderThreadTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRenderThreadTime = { "AverageRenderThreadTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AverageRenderThreadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRenderThreadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRenderThreadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesFrameTime = { "PercentHitchesFrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentHitchesFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msFrameTime = { "PercentBelow17msFrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow17msFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msFrameTime = { "PercentBelow34msFrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow34msFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msFrameTime = { "PercentBelow47msFrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow47msFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msFrameTime = { "PercentBelow60msFrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, PercentBelow60msFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationFrameTime = { "StandardDeviationFrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, StandardDeviationFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFrameTime = { "MaxFrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MaxFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFrameTime = { "MinFrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MinFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFrameTime = { "AverageFrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AverageFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFPS = { "MaxFPS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MaxFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFPS = { "MinFPS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, MinFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFPS = { "AverageFPS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceAnalytics, AverageFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFPS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_GpuAdapter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Cpu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TileListCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Theme,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_Scenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_FoliageQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_EffectsQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TextureQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ShadowQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AntiAliasingQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ViewDistanceQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_ResolutionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_TotalFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MatchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxMemoryUsedKilobytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_DeviceProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute12800ms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute6400ms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute3200ms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute1600ms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute800ms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute400ms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute200ms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute100ms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_HitchesPerMinute50ms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapPercentageOfFrameCapturingTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageActiveLightsPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateDrawWindowTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageSlateTickTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGpuTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGpuTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGpuTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGpuTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGpuTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGpuTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGpuTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGpuTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGpuTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRhiThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRhiThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRhiThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRhiThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRhiThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRhiThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRhiThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRhiThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRhiThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesGameThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msGameThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msGameThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msGameThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msGameThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationGameThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxGameThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinGameThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageGameThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageRenderThreadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentHitchesFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow17msFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow34msFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow47msFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_PercentBelow60msFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_StandardDeviationFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MaxFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_MinFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::NewProp_AverageFPS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"PerformanceAnalytics",
		sizeof(FPerformanceAnalytics),
		alignof(FPerformanceAnalytics),
		Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerformanceAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerformanceAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerformanceAnalytics"), sizeof(FPerformanceAnalytics), Get_Z_Construct_UScriptStruct_FPerformanceAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerformanceAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerformanceAnalytics_Hash() { return 3438152679U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
