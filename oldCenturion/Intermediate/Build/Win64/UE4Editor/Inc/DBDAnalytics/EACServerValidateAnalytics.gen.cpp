// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EACServerValidateAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEACServerValidateAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEACServerValidateAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEACClientInitAnalytics();
// End Cross Module References
class UScriptStruct* FEACServerValidateAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEACServerValidateAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EACServerValidateAnalytics"), sizeof(FEACServerValidateAnalytics), Get_Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FEACServerValidateAnalytics>()
{
	return FEACServerValidateAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEACServerValidateAnalytics(FEACServerValidateAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("EACServerValidateAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACServerValidateAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACServerValidateAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EACServerValidateAnalytics")),new UScriptStruct::TCppStructOps<FEACServerValidateAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFEACServerValidateAnalytics;
	struct Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EACServerValidateAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEACServerValidateAnalytics>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FEACClientInitAnalytics,
		&NewStructOps,
		"EACServerValidateAnalytics",
		sizeof(FEACServerValidateAnalytics),
		alignof(FEACServerValidateAnalytics),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEACServerValidateAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EACServerValidateAnalytics"), sizeof(FEACServerValidateAnalytics), Get_Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEACServerValidateAnalytics_Hash() { return 339055264U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
