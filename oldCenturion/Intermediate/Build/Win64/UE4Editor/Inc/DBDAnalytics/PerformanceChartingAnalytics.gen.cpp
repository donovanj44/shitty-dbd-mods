// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PerformanceChartingAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerformanceChartingAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPerformanceChartingAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FPerformanceChartingAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("PerformanceChartingAnalytics"), sizeof(FPerformanceChartingAnalytics), Get_Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FPerformanceChartingAnalytics>()
{
	return FPerformanceChartingAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerformanceChartingAnalytics(FPerformanceChartingAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("PerformanceChartingAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFPerformanceChartingAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFPerformanceChartingAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerformanceChartingAnalytics")),new UScriptStruct::TCppStructOps<FPerformanceChartingAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFPerformanceChartingAnalytics;
	struct Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_texturegroups_guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_texturegroups_guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physical_memory_used_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_physical_memory_used;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physical_memory_peak_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_physical_memory_peak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_streaming_memory_used_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_streaming_memory_used;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_streaming_memory_peak_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_streaming_memory_peak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cpu_memory_used_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cpu_memory_used;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cpu_memory_peak_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cpu_memory_peak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_drawn_prims_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_drawn_prims_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_drawn_prims_max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_drawn_prims_max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_drawn_prims_avg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_drawn_prims_avg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_draw_calls_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_draw_calls_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_draw_calls_max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_draw_calls_max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_draw_calls_avg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_draw_calls_avg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gpu_bound_frames_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gpu_bound_frames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gpu_hitches_per_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gpu_hitches_per_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gpu_avg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gpu_avg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rhi_thread_bound_frames_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rhi_thread_bound_frames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rhi_thread_hitches_per_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rhi_thread_hitches_per_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rhi_thread_avg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rhi_thread_avg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_render_thread_bound_frames_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_render_thread_bound_frames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_render_thread_hitches_per_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_render_thread_hitches_per_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_render_thread_avg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_render_thread_avg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_game_thread_bound_frames_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_game_thread_bound_frames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_game_thread_hitches_per_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_game_thread_hitches_per_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_game_thread_avg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_game_thread_avg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frame_time_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frame_time_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frame_time_max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frame_time_max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frame_time_avg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frame_time_avg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avg_hitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_avg_hitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitches_per_minute_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hitches_per_minute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avg_fps_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_avg_fps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mvp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mvp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_measured_perf_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_measured_perf_time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_120_fps_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_target_120_fps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_60_fps_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_target_60_fps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_30_fps_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_target_30_fps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitch_times_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hitch_times;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_graphics_quality_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_graphics_quality_level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gpu_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gpu_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cpu_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cpu_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_character_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_character_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_match_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_match_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tile_spawn_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tile_spawn_count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_map_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_map_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theme_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_theme;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerformanceChartingAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_texturegroups_guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_texturegroups_guid = { "texturegroups_guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, texturegroups_guid), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_texturegroups_guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_texturegroups_guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_used_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_used = { "physical_memory_used", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, physical_memory_used), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_used_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_used_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_peak_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_peak = { "physical_memory_peak", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, physical_memory_peak), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_peak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_peak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_used_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_used = { "streaming_memory_used", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, streaming_memory_used), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_used_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_used_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_peak_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_peak = { "streaming_memory_peak", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, streaming_memory_peak), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_peak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_peak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_used_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_used = { "cpu_memory_used", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, cpu_memory_used), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_used_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_used_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_peak_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_peak = { "cpu_memory_peak", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, cpu_memory_peak), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_peak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_peak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_min_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_min = { "drawn_prims_min", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, drawn_prims_min), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_max_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_max = { "drawn_prims_max", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, drawn_prims_max), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_avg_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_avg = { "drawn_prims_avg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, drawn_prims_avg), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_avg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_avg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_min_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_min = { "draw_calls_min", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, draw_calls_min), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_max_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_max = { "draw_calls_max", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, draw_calls_max), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_avg_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_avg = { "draw_calls_avg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, draw_calls_avg), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_avg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_avg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_bound_frames_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_bound_frames = { "gpu_bound_frames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, gpu_bound_frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_bound_frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_bound_frames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_hitches_per_min_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_hitches_per_min = { "gpu_hitches_per_min", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, gpu_hitches_per_min), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_hitches_per_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_hitches_per_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_avg_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_avg = { "gpu_avg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, gpu_avg), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_avg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_avg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_bound_frames_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_bound_frames = { "rhi_thread_bound_frames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, rhi_thread_bound_frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_bound_frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_bound_frames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_hitches_per_min_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_hitches_per_min = { "rhi_thread_hitches_per_min", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, rhi_thread_hitches_per_min), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_hitches_per_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_hitches_per_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_avg_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_avg = { "rhi_thread_avg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, rhi_thread_avg), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_avg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_avg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_bound_frames_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_bound_frames = { "render_thread_bound_frames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, render_thread_bound_frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_bound_frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_bound_frames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_hitches_per_min_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_hitches_per_min = { "render_thread_hitches_per_min", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, render_thread_hitches_per_min), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_hitches_per_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_hitches_per_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_avg_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_avg = { "render_thread_avg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, render_thread_avg), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_avg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_avg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_bound_frames_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_bound_frames = { "game_thread_bound_frames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, game_thread_bound_frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_bound_frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_bound_frames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_hitches_per_min_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_hitches_per_min = { "game_thread_hitches_per_min", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, game_thread_hitches_per_min), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_hitches_per_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_hitches_per_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_avg_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_avg = { "game_thread_avg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, game_thread_avg), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_avg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_avg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_min_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_min = { "frame_time_min", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, frame_time_min), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_max_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_max = { "frame_time_max", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, frame_time_max), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_avg_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_avg = { "frame_time_avg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, frame_time_avg), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_avg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_avg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_hitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_hitch = { "avg_hitch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, avg_hitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_hitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_hitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitches_per_minute_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitches_per_minute = { "hitches_per_minute", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, hitches_per_minute), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitches_per_minute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitches_per_minute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_fps_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_fps = { "avg_fps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, avg_fps), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_fps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_fps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_mvp_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_mvp = { "mvp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, mvp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_mvp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_mvp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_measured_perf_time_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_measured_perf_time = { "measured_perf_time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, measured_perf_time), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_measured_perf_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_measured_perf_time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_120_fps_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_120_fps = { "target_120_fps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, target_120_fps), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_120_fps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_120_fps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_60_fps_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_60_fps = { "target_60_fps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, target_60_fps), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_60_fps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_60_fps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_30_fps_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_30_fps = { "target_30_fps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, target_30_fps), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_30_fps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_30_fps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitch_times_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitch_times = { "hitch_times", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, hitch_times), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitch_times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitch_times_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_graphics_quality_level_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_graphics_quality_level = { "graphics_quality_level", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, graphics_quality_level), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_graphics_quality_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_graphics_quality_level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_resolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, resolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_name_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_name = { "gpu_name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, gpu_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_name_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_name = { "cpu_name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, cpu_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_character_name_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_character_name = { "character_name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, character_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_character_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_character_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_match_id_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_match_id = { "match_id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, match_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_match_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_match_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_seed_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_tile_spawn_count_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_tile_spawn_count = { "tile_spawn_count", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, tile_spawn_count), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_tile_spawn_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_tile_spawn_count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_map_name_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_map_name = { "map_name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, map_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_map_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_map_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_theme_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_theme = { "theme", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, theme), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_theme_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_theme_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_scenario_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceChartingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_scenario = { "scenario", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerformanceChartingAnalytics, scenario), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_scenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_scenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_texturegroups_guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_used,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_physical_memory_peak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_used,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_streaming_memory_peak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_used,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_memory_peak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_drawn_prims_avg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_draw_calls_avg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_bound_frames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_hitches_per_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_avg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_bound_frames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_hitches_per_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_rhi_thread_avg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_bound_frames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_hitches_per_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_render_thread_avg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_bound_frames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_hitches_per_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_game_thread_avg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_frame_time_avg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_hitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitches_per_minute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_avg_fps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_mvp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_measured_perf_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_120_fps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_60_fps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_target_30_fps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_hitch_times,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_graphics_quality_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_gpu_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_cpu_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_character_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_match_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_tile_spawn_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_map_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_theme,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::NewProp_scenario,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"PerformanceChartingAnalytics",
		sizeof(FPerformanceChartingAnalytics),
		alignof(FPerformanceChartingAnalytics),
		Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerformanceChartingAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerformanceChartingAnalytics"), sizeof(FPerformanceChartingAnalytics), Get_Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerformanceChartingAnalytics_Hash() { return 2098604311U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
