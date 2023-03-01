// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/BaseBannerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBannerData() {}
// Cross Module References
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseBannerData();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
// End Cross Module References
class UScriptStruct* FBaseBannerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DYNAMICCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FBaseBannerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseBannerData, Z_Construct_UPackage__Script_DynamicContent(), TEXT("BaseBannerData"), sizeof(FBaseBannerData), Get_Z_Construct_UScriptStruct_FBaseBannerData_Hash());
	}
	return Singleton;
}
template<> DYNAMICCONTENT_API UScriptStruct* StaticStruct<FBaseBannerData>()
{
	return FBaseBannerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseBannerData(FBaseBannerData::StaticStruct, TEXT("/Script/DynamicContent"), TEXT("BaseBannerData"), false, nullptr, nullptr);
static struct FScriptStruct_DynamicContent_StaticRegisterNativesFBaseBannerData
{
	FScriptStruct_DynamicContent_StaticRegisterNativesFBaseBannerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseBannerData")),new UScriptStruct::TCppStructOps<FBaseBannerData>);
	}
} ScriptStruct_DynamicContent_StaticRegisterNativesFBaseBannerData;
	struct Z_Construct_UScriptStruct_FBaseBannerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannerContentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BannerContentId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TitleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBannerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseBannerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseBannerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_BannerContentId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_BannerContentId = { "BannerContentId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBannerData, BannerContentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_BannerContentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_BannerContentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_TitleId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBannerData, TitleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_TitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_TitleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBannerData, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseBannerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_BannerContentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_TitleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBannerData_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseBannerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
		nullptr,
		&NewStructOps,
		"BaseBannerData",
		sizeof(FBaseBannerData),
		alignof(FBaseBannerData),
		Z_Construct_UScriptStruct_FBaseBannerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBannerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBannerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBannerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseBannerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseBannerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DynamicContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseBannerData"), sizeof(FBaseBannerData), Get_Z_Construct_UScriptStruct_FBaseBannerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseBannerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseBannerData_Hash() { return 32109358U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
