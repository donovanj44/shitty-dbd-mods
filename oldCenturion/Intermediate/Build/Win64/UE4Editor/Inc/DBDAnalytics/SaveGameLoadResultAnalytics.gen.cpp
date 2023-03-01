// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SaveGameLoadResultAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameLoadResultAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FSaveGameLoadResultAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SaveGameLoadResultAnalytics"), sizeof(FSaveGameLoadResultAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSaveGameLoadResultAnalytics>()
{
	return FSaveGameLoadResultAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveGameLoadResultAnalytics(FSaveGameLoadResultAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SaveGameLoadResultAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameLoadResultAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameLoadResultAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveGameLoadResultAnalytics")),new UScriptStruct::TCppStructOps<FSaveGameLoadResultAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameLoadResultAnalytics;
	struct Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadSuccessful_MetaData[];
#endif
		static void NewProp_LoadSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LoadSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameLoadResultAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameLoadResultAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameLoadResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameLoadResultAnalytics, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_LoadSuccessful_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameLoadResultAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_LoadSuccessful_SetBit(void* Obj)
	{
		((FSaveGameLoadResultAnalytics*)Obj)->LoadSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_LoadSuccessful = { "LoadSuccessful", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveGameLoadResultAnalytics), &Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_LoadSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_LoadSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_LoadSuccessful_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::NewProp_LoadSuccessful,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"SaveGameLoadResultAnalytics",
		sizeof(FSaveGameLoadResultAnalytics),
		alignof(FSaveGameLoadResultAnalytics),
		Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveGameLoadResultAnalytics"), sizeof(FSaveGameLoadResultAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveGameLoadResultAnalytics_Hash() { return 112939531U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
