// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EACClientAuthInitAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEACClientAuthInitAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEACClientInitAnalytics();
// End Cross Module References
class UScriptStruct* FEACClientAuthInitAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EACClientAuthInitAnalytics"), sizeof(FEACClientAuthInitAnalytics), Get_Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FEACClientAuthInitAnalytics>()
{
	return FEACClientAuthInitAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEACClientAuthInitAnalytics(FEACClientAuthInitAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("EACClientAuthInitAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACClientAuthInitAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACClientAuthInitAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EACClientAuthInitAnalytics")),new UScriptStruct::TCppStructOps<FEACClientAuthInitAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFEACClientAuthInitAnalytics;
	struct Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EACClientAuthInitAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEACClientAuthInitAnalytics>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FEACClientInitAnalytics,
		&NewStructOps,
		"EACClientAuthInitAnalytics",
		sizeof(FEACClientAuthInitAnalytics),
		alignof(FEACClientAuthInitAnalytics),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EACClientAuthInitAnalytics"), sizeof(FEACClientAuthInitAnalytics), Get_Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEACClientAuthInitAnalytics_Hash() { return 359081523U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
