// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EmblemProgressionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmblemProgressionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionDetailsAnalytics();
// End Cross Module References
class UScriptStruct* FEmblemProgressionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EmblemProgressionAnalytics"), sizeof(FEmblemProgressionAnalytics), Get_Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FEmblemProgressionAnalytics>()
{
	return FEmblemProgressionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmblemProgressionAnalytics(FEmblemProgressionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("EmblemProgressionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFEmblemProgressionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFEmblemProgressionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmblemProgressionAnalytics")),new UScriptStruct::TCppStructOps<FEmblemProgressionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFEmblemProgressionAnalytics;
	struct Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgressionDetails;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionDetails_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmblemQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmblemValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmblemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EmblemProgressionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmblemProgressionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_ProgressionDetails_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmblemProgressionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_ProgressionDetails = { "ProgressionDetails", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionAnalytics, ProgressionDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_ProgressionDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_ProgressionDetails_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_ProgressionDetails_Inner = { "ProgressionDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEmblemProgressionDetailsAnalytics, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemQuality_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmblemProgressionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemQuality = { "EmblemQuality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionAnalytics, EmblemQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmblemProgressionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemValue = { "EmblemValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionAnalytics, EmblemValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmblemProgressionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemId = { "EmblemId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionAnalytics, EmblemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmblemProgressionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_ProgressionDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_ProgressionDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_EmblemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"EmblemProgressionAnalytics",
		sizeof(FEmblemProgressionAnalytics),
		alignof(FEmblemProgressionAnalytics),
		Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmblemProgressionAnalytics"), sizeof(FEmblemProgressionAnalytics), Get_Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionAnalytics_Hash() { return 3093492413U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
