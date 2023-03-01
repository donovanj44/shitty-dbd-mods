// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MobileCdnDownloadAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobileCdnDownloadAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FMobileCdnDownloadAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MobileCdnDownloadAnalytics"), sizeof(FMobileCdnDownloadAnalytics), Get_Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMobileCdnDownloadAnalytics>()
{
	return FMobileCdnDownloadAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMobileCdnDownloadAnalytics(FMobileCdnDownloadAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MobileCdnDownloadAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMobileCdnDownloadAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMobileCdnDownloadAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MobileCdnDownloadAnalytics")),new UScriptStruct::TCppStructOps<FMobileCdnDownloadAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMobileCdnDownloadAnalytics;
	struct Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CdnDownloadTimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CdnDownloadTimeInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CdnDownloadState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CdnDownloadState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileCdnDownloadAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMobileCdnDownloadAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadTimeInSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileCdnDownloadAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadTimeInSeconds = { "CdnDownloadTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobileCdnDownloadAnalytics, CdnDownloadTimeInSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadTimeInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadTimeInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadState_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileCdnDownloadAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadState = { "CdnDownloadState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobileCdnDownloadAnalytics, CdnDownloadState), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadTimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::NewProp_CdnDownloadState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"MobileCdnDownloadAnalytics",
		sizeof(FMobileCdnDownloadAnalytics),
		alignof(FMobileCdnDownloadAnalytics),
		Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MobileCdnDownloadAnalytics"), sizeof(FMobileCdnDownloadAnalytics), Get_Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMobileCdnDownloadAnalytics_Hash() { return 1140868883U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
