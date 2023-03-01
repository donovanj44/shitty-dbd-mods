// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/af_survivor_tutorial_completionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeaf_survivor_tutorial_completionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* Faf_survivor_tutorial_completionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("af_survivor_tutorial_completionAnalytics"), sizeof(Faf_survivor_tutorial_completionAnalytics), Get_Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<Faf_survivor_tutorial_completionAnalytics>()
{
	return Faf_survivor_tutorial_completionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics(Faf_survivor_tutorial_completionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("af_survivor_tutorial_completionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFaf_survivor_tutorial_completionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFaf_survivor_tutorial_completionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("af_survivor_tutorial_completionAnalytics")),new UScriptStruct::TCppStructOps<Faf_survivor_tutorial_completionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFaf_survivor_tutorial_completionAnalytics;
	struct Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/af_survivor_tutorial_completionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<Faf_survivor_tutorial_completionAnalytics>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"af_survivor_tutorial_completionAnalytics",
		sizeof(Faf_survivor_tutorial_completionAnalytics),
		alignof(Faf_survivor_tutorial_completionAnalytics),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("af_survivor_tutorial_completionAnalytics"), sizeof(Faf_survivor_tutorial_completionAnalytics), Get_Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_Faf_survivor_tutorial_completionAnalytics_Hash() { return 1307164732U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
