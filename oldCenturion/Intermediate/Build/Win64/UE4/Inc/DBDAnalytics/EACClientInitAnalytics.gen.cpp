// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EACClientInitAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEACClientInitAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEACClientInitAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEACAnalytics();
// End Cross Module References
class UScriptStruct* FEACClientInitAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FEACClientInitAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEACClientInitAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EACClientInitAnalytics"), sizeof(FEACClientInitAnalytics), Get_Z_Construct_UScriptStruct_FEACClientInitAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FEACClientInitAnalytics>()
{
	return FEACClientInitAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEACClientInitAnalytics(FEACClientInitAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("EACClientInitAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACClientInitAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACClientInitAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EACClientInitAnalytics")),new UScriptStruct::TCppStructOps<FEACClientInitAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFEACClientInitAnalytics;
	struct Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidationErrorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValidationErrorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EACClientInitAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEACClientInitAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::NewProp_ValidationErrorType_MetaData[] = {
		{ "ModuleRelativePath", "Public/EACClientInitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::NewProp_ValidationErrorType = { "ValidationErrorType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEACClientInitAnalytics, ValidationErrorType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::NewProp_ValidationErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::NewProp_ValidationErrorType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::NewProp_ValidationErrorType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FEACAnalytics,
		&NewStructOps,
		"EACClientInitAnalytics",
		sizeof(FEACClientInitAnalytics),
		alignof(FEACClientInitAnalytics),
		Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEACClientInitAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEACClientInitAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EACClientInitAnalytics"), sizeof(FEACClientInitAnalytics), Get_Z_Construct_UScriptStruct_FEACClientInitAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEACClientInitAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEACClientInitAnalytics_Hash() { return 1135204570U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
