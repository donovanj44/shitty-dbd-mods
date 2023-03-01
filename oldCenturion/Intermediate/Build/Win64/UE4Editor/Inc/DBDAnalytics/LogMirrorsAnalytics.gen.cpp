// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/LogMirrorsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogMirrorsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FLogMirrorsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FLogMirrorsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLogMirrorsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("LogMirrorsAnalytics"), sizeof(FLogMirrorsAnalytics), Get_Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FLogMirrorsAnalytics>()
{
	return FLogMirrorsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLogMirrorsAnalytics(FLogMirrorsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("LogMirrorsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFLogMirrorsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFLogMirrorsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LogMirrorsAnalytics")),new UScriptStruct::TCppStructOps<FLogMirrorsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFLogMirrorsAnalytics;
	struct Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogMirrors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LogMirrors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LogMirrorsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLogMirrorsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::NewProp_LogMirrors_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogMirrorsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::NewProp_LogMirrors = { "LogMirrors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLogMirrorsAnalytics, LogMirrors), METADATA_PARAMS(Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::NewProp_LogMirrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::NewProp_LogMirrors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::NewProp_LogMirrors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"LogMirrorsAnalytics",
		sizeof(FLogMirrorsAnalytics),
		alignof(FLogMirrorsAnalytics),
		Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLogMirrorsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LogMirrorsAnalytics"), sizeof(FLogMirrorsAnalytics), Get_Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLogMirrorsAnalytics_Hash() { return 3422328962U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
