// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SaveGameErrorAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameErrorAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameErrorAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FSaveGameErrorAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SaveGameErrorAnalytics"), sizeof(FSaveGameErrorAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSaveGameErrorAnalytics>()
{
	return FSaveGameErrorAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveGameErrorAnalytics(FSaveGameErrorAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SaveGameErrorAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameErrorAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameErrorAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveGameErrorAnalytics")),new UScriptStruct::TCppStructOps<FSaveGameErrorAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSaveGameErrorAnalytics;
	struct Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KrakenErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_KrakenErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameErrorAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameErrorAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_StateName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameErrorAnalytics, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_StateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_KrakenErrorCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_KrakenErrorCode = { "KrakenErrorCode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameErrorAnalytics, KrakenErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_KrakenErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_KrakenErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorDetails_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorDetails = { "ErrorDetails", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameErrorAnalytics, ErrorDetails), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameErrorAnalytics, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameErrorAnalytics, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_KrakenErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::NewProp_ErrorCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"SaveGameErrorAnalytics",
		sizeof(FSaveGameErrorAnalytics),
		alignof(FSaveGameErrorAnalytics),
		Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveGameErrorAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveGameErrorAnalytics"), sizeof(FSaveGameErrorAnalytics), Get_Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveGameErrorAnalytics_Hash() { return 4125177478U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
