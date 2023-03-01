// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/MarketingBannerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarketingBannerData() {}
// Cross Module References
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FMarketingBannerData();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseBannerData();
// End Cross Module References
class UScriptStruct* FMarketingBannerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DYNAMICCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FMarketingBannerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarketingBannerData, Z_Construct_UPackage__Script_DynamicContent(), TEXT("MarketingBannerData"), sizeof(FMarketingBannerData), Get_Z_Construct_UScriptStruct_FMarketingBannerData_Hash());
	}
	return Singleton;
}
template<> DYNAMICCONTENT_API UScriptStruct* StaticStruct<FMarketingBannerData>()
{
	return FMarketingBannerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMarketingBannerData(FMarketingBannerData::StaticStruct, TEXT("/Script/DynamicContent"), TEXT("MarketingBannerData"), false, nullptr, nullptr);
static struct FScriptStruct_DynamicContent_StaticRegisterNativesFMarketingBannerData
{
	FScriptStruct_DynamicContent_StaticRegisterNativesFMarketingBannerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MarketingBannerData")),new UScriptStruct::TCppStructOps<FMarketingBannerData>);
	}
} ScriptStruct_DynamicContent_StaticRegisterNativesFMarketingBannerData;
	struct Z_Construct_UScriptStruct_FMarketingBannerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeepLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTitleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SubTitleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarketingBannerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MarketingBannerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarketingBannerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_DeepLink_MetaData[] = {
		{ "ModuleRelativePath", "Public/MarketingBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_DeepLink = { "DeepLink", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMarketingBannerData, DeepLink), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_DeepLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_DeepLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_SubTitleId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MarketingBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_SubTitleId = { "SubTitleId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMarketingBannerData, SubTitleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_SubTitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_SubTitleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarketingBannerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_DeepLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarketingBannerData_Statics::NewProp_SubTitleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarketingBannerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
		Z_Construct_UScriptStruct_FBaseBannerData,
		&NewStructOps,
		"MarketingBannerData",
		sizeof(FMarketingBannerData),
		alignof(FMarketingBannerData),
		Z_Construct_UScriptStruct_FMarketingBannerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarketingBannerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMarketingBannerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarketingBannerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMarketingBannerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMarketingBannerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DynamicContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MarketingBannerData"), sizeof(FMarketingBannerData), Get_Z_Construct_UScriptStruct_FMarketingBannerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMarketingBannerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMarketingBannerData_Hash() { return 349708897U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
