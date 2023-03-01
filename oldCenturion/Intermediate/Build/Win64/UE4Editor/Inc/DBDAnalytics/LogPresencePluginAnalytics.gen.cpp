// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/LogPresencePluginAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogPresencePluginAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FLogPresencePluginAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FLogPresencePluginAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLogPresencePluginAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("LogPresencePluginAnalytics"), sizeof(FLogPresencePluginAnalytics), Get_Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FLogPresencePluginAnalytics>()
{
	return FLogPresencePluginAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLogPresencePluginAnalytics(FLogPresencePluginAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("LogPresencePluginAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFLogPresencePluginAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFLogPresencePluginAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LogPresencePluginAnalytics")),new UScriptStruct::TCppStructOps<FLogPresencePluginAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFLogPresencePluginAnalytics;
	struct Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LogPresencePluginAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLogPresencePluginAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogPresencePluginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLogPresencePluginAnalytics, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogPresencePluginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLogPresencePluginAnalytics, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::NewProp_Context,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"LogPresencePluginAnalytics",
		sizeof(FLogPresencePluginAnalytics),
		alignof(FLogPresencePluginAnalytics),
		Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLogPresencePluginAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LogPresencePluginAnalytics"), sizeof(FLogPresencePluginAnalytics), Get_Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLogPresencePluginAnalytics_Hash() { return 447540956U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
