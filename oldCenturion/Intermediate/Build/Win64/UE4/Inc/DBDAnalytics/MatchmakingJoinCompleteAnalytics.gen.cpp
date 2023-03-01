// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MatchmakingJoinCompleteAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingJoinCompleteAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FMatchmakingJoinCompleteAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MatchmakingJoinCompleteAnalytics"), sizeof(FMatchmakingJoinCompleteAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMatchmakingJoinCompleteAnalytics>()
{
	return FMatchmakingJoinCompleteAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakingJoinCompleteAnalytics(FMatchmakingJoinCompleteAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MatchmakingJoinCompleteAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingJoinCompleteAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingJoinCompleteAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchmakingJoinCompleteAnalytics")),new UScriptStruct::TCppStructOps<FMatchmakingJoinCompleteAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingJoinCompleteAnalytics;
	struct Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingJoinCompleteAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakingJoinCompleteAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingJoinCompleteAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingJoinCompleteAnalytics, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_SessionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingJoinCompleteAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingJoinCompleteAnalytics, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_SessionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::NewProp_SessionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"MatchmakingJoinCompleteAnalytics",
		sizeof(FMatchmakingJoinCompleteAnalytics),
		alignof(FMatchmakingJoinCompleteAnalytics),
		Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakingJoinCompleteAnalytics"), sizeof(FMatchmakingJoinCompleteAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakingJoinCompleteAnalytics_Hash() { return 176316783U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
