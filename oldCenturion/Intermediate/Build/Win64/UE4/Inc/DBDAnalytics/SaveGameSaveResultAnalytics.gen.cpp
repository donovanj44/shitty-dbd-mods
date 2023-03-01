// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SaveGameSaveResultAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameSaveResultAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FSaveGameSaveResultAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SaveGameSaveResultAnalytics"), sizeof(FSaveGameSaveResultAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSaveGameSaveResultAnalytics>()
{
	return FSaveGameSaveResultAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveGameSaveResultAnalytics(FSaveGameSaveResultAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SaveGameSaveResultAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameSaveResultAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameSaveResultAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveGameSaveResultAnalytics")),new UScriptStruct::TCppStructOps<FSaveGameSaveResultAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameSaveResultAnalytics;
	struct Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSuccessful_MetaData[];
#endif
		static void NewProp_SaveSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameSaveResultAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameSaveResultAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_ResponseCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameSaveResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameSaveResultAnalytics, ResponseCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_ResponseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_ResponseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_SaveSuccessful_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameSaveResultAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_SaveSuccessful_SetBit(void* Obj)
	{
		((FSaveGameSaveResultAnalytics*)Obj)->SaveSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_SaveSuccessful = { "SaveSuccessful", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveGameSaveResultAnalytics), &Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_SaveSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_SaveSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_SaveSuccessful_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_ResponseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::NewProp_SaveSuccessful,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"SaveGameSaveResultAnalytics",
		sizeof(FSaveGameSaveResultAnalytics),
		alignof(FSaveGameSaveResultAnalytics),
		Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveGameSaveResultAnalytics"), sizeof(FSaveGameSaveResultAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveGameSaveResultAnalytics_Hash() { return 2574663216U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
