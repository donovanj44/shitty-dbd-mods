// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/GPUAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPUAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FGPUAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FGPUAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FGPUAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("GPUAnalytics"), sizeof(FGPUAnalytics), Get_Z_Construct_UScriptStruct_FGPUAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FGPUAnalytics>()
{
	return FGPUAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGPUAnalytics(FGPUAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("GPUAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFGPUAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFGPUAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GPUAnalytics")),new UScriptStruct::TCppStructOps<FGPUAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFGPUAnalytics;
	struct Z_Construct_UScriptStruct_FGPUAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StdDevMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StdDevMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Marker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Marker;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GPUAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_StdDevMs_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPUAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_StdDevMs = { "StdDevMs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUAnalytics, StdDevMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_StdDevMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_StdDevMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_AverageMS_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPUAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_AverageMS = { "AverageMS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUAnalytics, AverageMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_AverageMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_AverageMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_Marker_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPUAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUAnalytics, Marker), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_Marker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_Marker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPUAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUAnalytics, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPUAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_StdDevMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_AverageMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_Marker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"GPUAnalytics",
		sizeof(FGPUAnalytics),
		alignof(FGPUAnalytics),
		Z_Construct_UScriptStruct_FGPUAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGPUAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGPUAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GPUAnalytics"), sizeof(FGPUAnalytics), Get_Z_Construct_UScriptStruct_FGPUAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGPUAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGPUAnalytics_Hash() { return 2932704872U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
