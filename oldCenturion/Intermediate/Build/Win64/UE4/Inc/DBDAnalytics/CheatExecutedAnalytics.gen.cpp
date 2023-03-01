// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CheatExecutedAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheatExecutedAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCheatExecutedAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FCheatExecutedAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheatExecutedAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CheatExecutedAnalytics"), sizeof(FCheatExecutedAnalytics), Get_Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCheatExecutedAnalytics>()
{
	return FCheatExecutedAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCheatExecutedAnalytics(FCheatExecutedAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CheatExecutedAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCheatExecutedAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCheatExecutedAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CheatExecutedAnalytics")),new UScriptStruct::TCppStructOps<FCheatExecutedAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCheatExecutedAnalytics;
	struct Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Successful_MetaData[];
#endif
		static void NewProp_Successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Successful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Requester;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NetMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheatExecutedAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheatExecutedAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Successful_MetaData[] = {
		{ "ModuleRelativePath", "Public/CheatExecutedAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Successful_SetBit(void* Obj)
	{
		((FCheatExecutedAnalytics*)Obj)->Successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCheatExecutedAnalytics), &Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Successful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Successful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Command_MetaData[] = {
		{ "ModuleRelativePath", "Public/CheatExecutedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCheatExecutedAnalytics, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Requester_MetaData[] = {
		{ "ModuleRelativePath", "Public/CheatExecutedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCheatExecutedAnalytics, Requester), METADATA_PARAMS(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Requester_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Requester_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_NetMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/CheatExecutedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_NetMode = { "NetMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCheatExecutedAnalytics, NetMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_NetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_NetMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_Requester,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::NewProp_NetMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CheatExecutedAnalytics",
		sizeof(FCheatExecutedAnalytics),
		alignof(FCheatExecutedAnalytics),
		Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCheatExecutedAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CheatExecutedAnalytics"), sizeof(FCheatExecutedAnalytics), Get_Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCheatExecutedAnalytics_Hash() { return 2004476789U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
