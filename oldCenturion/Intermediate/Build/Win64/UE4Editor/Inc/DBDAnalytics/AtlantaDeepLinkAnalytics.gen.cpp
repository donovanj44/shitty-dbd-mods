// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaDeepLinkAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaDeepLinkAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaDeepLinkAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaDeepLinkAnalytics"), sizeof(FAtlantaDeepLinkAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaDeepLinkAnalytics>()
{
	return FAtlantaDeepLinkAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaDeepLinkAnalytics(FAtlantaDeepLinkAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaDeepLinkAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaDeepLinkAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaDeepLinkAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaDeepLinkAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaDeepLinkAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaDeepLinkAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CampaignName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CampaignName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepLinkURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeepLinkURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaDeepLinkAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaDeepLinkAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_CampaignName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaDeepLinkAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_CampaignName = { "CampaignName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDeepLinkAnalytics, CampaignName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_CampaignName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_CampaignName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_DeepLinkURL_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaDeepLinkAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_DeepLinkURL = { "DeepLinkURL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDeepLinkAnalytics, DeepLinkURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_DeepLinkURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_DeepLinkURL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_CampaignName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::NewProp_DeepLinkURL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaDeepLinkAnalytics",
		sizeof(FAtlantaDeepLinkAnalytics),
		alignof(FAtlantaDeepLinkAnalytics),
		Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaDeepLinkAnalytics"), sizeof(FAtlantaDeepLinkAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkAnalytics_Hash() { return 1570238784U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
