// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaRitualsAdsRefreshAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaRitualsAdsRefreshAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FAtlantaRitualsAdsRefreshAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaRitualsAdsRefreshAnalytics"), sizeof(FAtlantaRitualsAdsRefreshAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaRitualsAdsRefreshAnalytics>()
{
	return FAtlantaRitualsAdsRefreshAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics(FAtlantaRitualsAdsRefreshAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaRitualsAdsRefreshAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaRitualsAdsRefreshAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaRitualsAdsRefreshAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaRitualsAdsRefreshAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaRitualsAdsRefreshAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaRitualsAdsRefreshAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualsAdsRefreshAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaRitualsAdsRefreshAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_AdsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualsAdsRefreshAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_AdsId = { "AdsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualsAdsRefreshAnalytics, AdsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_AdsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_AdsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualsAdsRefreshAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualsAdsRefreshAnalytics, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_AdsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"AtlantaRitualsAdsRefreshAnalytics",
		sizeof(FAtlantaRitualsAdsRefreshAnalytics),
		alignof(FAtlantaRitualsAdsRefreshAnalytics),
		Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaRitualsAdsRefreshAnalytics"), sizeof(FAtlantaRitualsAdsRefreshAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualsAdsRefreshAnalytics_Hash() { return 478475835U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
