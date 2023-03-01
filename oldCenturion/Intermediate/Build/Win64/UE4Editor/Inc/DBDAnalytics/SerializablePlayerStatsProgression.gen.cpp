// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SerializablePlayerStatsProgression.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerializablePlayerStatsProgression() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FStatsProgressionData();
// End Cross Module References
class UScriptStruct* FSerializablePlayerStatsProgression::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SerializablePlayerStatsProgression"), sizeof(FSerializablePlayerStatsProgression), Get_Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSerializablePlayerStatsProgression>()
{
	return FSerializablePlayerStatsProgression::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSerializablePlayerStatsProgression(FSerializablePlayerStatsProgression::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SerializablePlayerStatsProgression"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSerializablePlayerStatsProgression
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSerializablePlayerStatsProgression()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SerializablePlayerStatsProgression")),new UScriptStruct::TCppStructOps<FSerializablePlayerStatsProgression>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSerializablePlayerStatsProgression;
	struct Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatsProgression;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatsProgression_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SerializablePlayerStatsProgression.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializablePlayerStatsProgression>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::NewProp_StatsProgression_MetaData[] = {
		{ "ModuleRelativePath", "Public/SerializablePlayerStatsProgression.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::NewProp_StatsProgression = { "StatsProgression", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSerializablePlayerStatsProgression, StatsProgression), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::NewProp_StatsProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::NewProp_StatsProgression_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::NewProp_StatsProgression_Inner = { "StatsProgression", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStatsProgressionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::NewProp_StatsProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::NewProp_StatsProgression_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		nullptr,
		&NewStructOps,
		"SerializablePlayerStatsProgression",
		sizeof(FSerializablePlayerStatsProgression),
		alignof(FSerializablePlayerStatsProgression),
		Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SerializablePlayerStatsProgression"), sizeof(FSerializablePlayerStatsProgression), Get_Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSerializablePlayerStatsProgression_Hash() { return 2377356682U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
