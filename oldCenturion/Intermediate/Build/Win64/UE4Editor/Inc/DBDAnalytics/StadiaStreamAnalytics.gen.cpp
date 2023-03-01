// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/StadiaStreamAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStadiaStreamAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FStadiaStreamAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FStadiaStreamAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStadiaStreamAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("StadiaStreamAnalytics"), sizeof(FStadiaStreamAnalytics), Get_Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FStadiaStreamAnalytics>()
{
	return FStadiaStreamAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStadiaStreamAnalytics(FStadiaStreamAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("StadiaStreamAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFStadiaStreamAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFStadiaStreamAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StadiaStreamAnalytics")),new UScriptStruct::TCppStructOps<FStadiaStreamAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFStadiaStreamAnalytics;
	struct Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentFramesBelow20FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentFramesBelow20FPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentFramesBelow30FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentFramesBelow30FPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentFramesBelow45FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentFramesBelow45FPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentFramesBelow60FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentFramesBelow60FPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentFramesAbove60FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentFramesAbove60FPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkDelayForVideoTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkDelayForVideoTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkDelayForInputTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkDelayForInputTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PixelDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DynamicRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStadiaStreamAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow20FPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow20FPS = { "PercentFramesBelow20FPS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, PercentFramesBelow20FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow20FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow20FPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow30FPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow30FPS = { "PercentFramesBelow30FPS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, PercentFramesBelow30FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow30FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow30FPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow45FPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow45FPS = { "PercentFramesBelow45FPS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, PercentFramesBelow45FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow45FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow45FPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow60FPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow60FPS = { "PercentFramesBelow60FPS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, PercentFramesBelow60FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow60FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow60FPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesAbove60FPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesAbove60FPS = { "PercentFramesAbove60FPS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, PercentFramesAbove60FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesAbove60FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesAbove60FPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForVideoTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForVideoTime = { "NetworkDelayForVideoTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, NetworkDelayForVideoTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForVideoTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForVideoTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForInputTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForInputTime = { "NetworkDelayForInputTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, NetworkDelayForInputTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForInputTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForInputTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_RenderResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_RenderResolution = { "RenderResolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, RenderResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_RenderResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_RenderResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PixelDensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PixelDensity = { "PixelDensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, PixelDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PixelDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PixelDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_DynamicRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_DynamicRange = { "DynamicRange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, DynamicRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_DynamicRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_DynamicRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaStreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStreamAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow20FPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow30FPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow45FPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesBelow60FPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PercentFramesAbove60FPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForVideoTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_NetworkDelayForInputTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_RenderResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_PixelDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_DynamicRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"StadiaStreamAnalytics",
		sizeof(FStadiaStreamAnalytics),
		alignof(FStadiaStreamAnalytics),
		Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStadiaStreamAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StadiaStreamAnalytics"), sizeof(FStadiaStreamAnalytics), Get_Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStadiaStreamAnalytics_Hash() { return 1403479281U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
