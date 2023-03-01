// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EACAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEACAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEACAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FEACAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FEACAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEACAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EACAnalytics"), sizeof(FEACAnalytics), Get_Z_Construct_UScriptStruct_FEACAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FEACAnalytics>()
{
	return FEACAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEACAnalytics(FEACAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("EACAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFEACAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EACAnalytics")),new UScriptStruct::TCppStructOps<FEACAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFEACAnalytics;
	struct Z_Construct_UScriptStruct_FEACAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LogMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEACAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EACAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEACAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEACAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEACAnalytics_Statics::NewProp_LogMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/EACAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEACAnalytics_Statics::NewProp_LogMessage = { "LogMessage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEACAnalytics, LogMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FEACAnalytics_Statics::NewProp_LogMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACAnalytics_Statics::NewProp_LogMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEACAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEACAnalytics_Statics::NewProp_LogMessage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEACAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"EACAnalytics",
		sizeof(FEACAnalytics),
		alignof(FEACAnalytics),
		Z_Construct_UScriptStruct_FEACAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEACAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEACAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEACAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEACAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EACAnalytics"), sizeof(FEACAnalytics), Get_Z_Construct_UScriptStruct_FEACAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEACAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEACAnalytics_Hash() { return 1803057371U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
