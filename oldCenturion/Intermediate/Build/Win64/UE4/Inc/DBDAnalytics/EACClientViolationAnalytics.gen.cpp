// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EACClientViolationAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEACClientViolationAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEACClientViolationAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEACAnalytics();
// End Cross Module References
class UScriptStruct* FEACClientViolationAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEACClientViolationAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EACClientViolationAnalytics"), sizeof(FEACClientViolationAnalytics), Get_Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FEACClientViolationAnalytics>()
{
	return FEACClientViolationAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEACClientViolationAnalytics(FEACClientViolationAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("EACClientViolationAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACClientViolationAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACClientViolationAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EACClientViolationAnalytics")),new UScriptStruct::TCppStructOps<FEACClientViolationAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFEACClientViolationAnalytics;
	struct Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViolationCase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ViolationCase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EACClientViolationAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEACClientViolationAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::NewProp_ViolationCase_MetaData[] = {
		{ "ModuleRelativePath", "Public/EACClientViolationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::NewProp_ViolationCase = { "ViolationCase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEACClientViolationAnalytics, ViolationCase), METADATA_PARAMS(Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::NewProp_ViolationCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::NewProp_ViolationCase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::NewProp_ViolationCase,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FEACAnalytics,
		&NewStructOps,
		"EACClientViolationAnalytics",
		sizeof(FEACClientViolationAnalytics),
		alignof(FEACClientViolationAnalytics),
		Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEACClientViolationAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EACClientViolationAnalytics"), sizeof(FEACClientViolationAnalytics), Get_Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEACClientViolationAnalytics_Hash() { return 305995152U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
