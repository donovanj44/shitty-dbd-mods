// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FrameTravelTimeAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrameTravelTimeAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FFrameTravelTimeAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FrameTravelTimeAnalytics"), sizeof(FFrameTravelTimeAnalytics), Get_Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFrameTravelTimeAnalytics>()
{
	return FFrameTravelTimeAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrameTravelTimeAnalytics(FFrameTravelTimeAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FrameTravelTimeAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFrameTravelTimeAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFrameTravelTimeAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FrameTravelTimeAnalytics")),new UScriptStruct::TCppStructOps<FFrameTravelTimeAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFrameTravelTimeAnalytics;
	struct Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameFinishedEncodingToClientArrivalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameFinishedEncodingToClientArrivalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameEncodingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameEncodingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRenderingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameRenderingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameIssuedToBeginRenderingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameIssuedToBeginRenderingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameIssuedToClientArrivalTotalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameIssuedToClientArrivalTotalTime;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrameTravelTimeAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameFinishedEncodingToClientArrivalTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameFinishedEncodingToClientArrivalTime = { "FrameFinishedEncodingToClientArrivalTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameTravelTimeAnalytics, FrameFinishedEncodingToClientArrivalTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameFinishedEncodingToClientArrivalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameFinishedEncodingToClientArrivalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameEncodingTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameEncodingTime = { "FrameEncodingTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameTravelTimeAnalytics, FrameEncodingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameEncodingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameEncodingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameRenderingTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameRenderingTime = { "FrameRenderingTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameTravelTimeAnalytics, FrameRenderingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameRenderingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameRenderingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToBeginRenderingTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToBeginRenderingTime = { "FrameIssuedToBeginRenderingTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameTravelTimeAnalytics, FrameIssuedToBeginRenderingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToBeginRenderingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToBeginRenderingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToClientArrivalTotalTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToClientArrivalTotalTime = { "FrameIssuedToClientArrivalTotalTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameTravelTimeAnalytics, FrameIssuedToClientArrivalTotalTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToClientArrivalTotalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToClientArrivalTotalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_RenderResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_RenderResolution = { "RenderResolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameTravelTimeAnalytics, RenderResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_RenderResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_RenderResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_PixelDensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_PixelDensity = { "PixelDensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameTravelTimeAnalytics, PixelDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_PixelDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_PixelDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_DynamicRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_DynamicRange = { "DynamicRange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameTravelTimeAnalytics, DynamicRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_DynamicRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_DynamicRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrameTravelTimeAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameTravelTimeAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameFinishedEncodingToClientArrivalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameEncodingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameRenderingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToBeginRenderingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_FrameIssuedToClientArrivalTotalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_RenderResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_PixelDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_DynamicRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"FrameTravelTimeAnalytics",
		sizeof(FFrameTravelTimeAnalytics),
		alignof(FFrameTravelTimeAnalytics),
		Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrameTravelTimeAnalytics"), sizeof(FFrameTravelTimeAnalytics), Get_Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrameTravelTimeAnalytics_Hash() { return 1424915656U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
