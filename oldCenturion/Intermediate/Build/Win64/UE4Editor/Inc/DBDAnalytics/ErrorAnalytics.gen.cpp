// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ErrorAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrorAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FErrorAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FErrorAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FErrorAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FErrorAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("ErrorAnalytics"), sizeof(FErrorAnalytics), Get_Z_Construct_UScriptStruct_FErrorAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FErrorAnalytics>()
{
	return FErrorAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FErrorAnalytics(FErrorAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("ErrorAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFErrorAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFErrorAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ErrorAnalytics")),new UScriptStruct::TCppStructOps<FErrorAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFErrorAnalytics;
	struct Z_Construct_UScriptStruct_FErrorAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LogMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ErrorAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FErrorAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_LogMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/ErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_LogMessage = { "LogMessage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorAnalytics, LogMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_LogMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_LogMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_ErrorCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/ErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_ErrorCategory = { "ErrorCategory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorAnalytics, ErrorCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_ErrorCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_ErrorCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FErrorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_LogMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorAnalytics_Statics::NewProp_ErrorCategory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FErrorAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"ErrorAnalytics",
		sizeof(FErrorAnalytics),
		alignof(FErrorAnalytics),
		Z_Construct_UScriptStruct_FErrorAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FErrorAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FErrorAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ErrorAnalytics"), sizeof(FErrorAnalytics), Get_Z_Construct_UScriptStruct_FErrorAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FErrorAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FErrorAnalytics_Hash() { return 2460319581U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
