// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/HeartbeatAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeartbeatAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FHeartbeatAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FHeartbeatAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FHeartbeatAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeartbeatAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("HeartbeatAnalytics"), sizeof(FHeartbeatAnalytics), Get_Z_Construct_UScriptStruct_FHeartbeatAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FHeartbeatAnalytics>()
{
	return FHeartbeatAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeartbeatAnalytics(FHeartbeatAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("HeartbeatAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFHeartbeatAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFHeartbeatAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HeartbeatAnalytics")),new UScriptStruct::TCppStructOps<FHeartbeatAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFHeartbeatAnalytics;
	struct Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeatTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BeatTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeartbeatAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeartbeatAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::NewProp_BeatTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeartbeatAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::NewProp_BeatTime = { "BeatTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeartbeatAnalytics, BeatTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::NewProp_BeatTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::NewProp_BeatTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::NewProp_BeatTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"HeartbeatAnalytics",
		sizeof(FHeartbeatAnalytics),
		alignof(FHeartbeatAnalytics),
		Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeartbeatAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHeartbeatAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeartbeatAnalytics"), sizeof(FHeartbeatAnalytics), Get_Z_Construct_UScriptStruct_FHeartbeatAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHeartbeatAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeartbeatAnalytics_Hash() { return 2176527586U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
