// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FreeTrialLoginAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreeTrialLoginAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FFreeTrialLoginAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FreeTrialLoginAnalytics"), sizeof(FFreeTrialLoginAnalytics), Get_Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFreeTrialLoginAnalytics>()
{
	return FFreeTrialLoginAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFreeTrialLoginAnalytics(FFreeTrialLoginAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FreeTrialLoginAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFreeTrialLoginAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFreeTrialLoginAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FreeTrialLoginAnalytics")),new UScriptStruct::TCppStructOps<FFreeTrialLoginAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFreeTrialLoginAnalytics;
	struct Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FreeTrialLoginAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFreeTrialLoginAnalytics>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"FreeTrialLoginAnalytics",
		sizeof(FFreeTrialLoginAnalytics),
		alignof(FFreeTrialLoginAnalytics),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FreeTrialLoginAnalytics"), sizeof(FFreeTrialLoginAnalytics), Get_Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFreeTrialLoginAnalytics_Hash() { return 1125639071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
