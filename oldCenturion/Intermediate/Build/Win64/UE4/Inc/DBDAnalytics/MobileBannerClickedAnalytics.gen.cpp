// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MobileBannerClickedAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobileBannerClickedAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FMobileBannerClickedAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MobileBannerClickedAnalytics"), sizeof(FMobileBannerClickedAnalytics), Get_Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMobileBannerClickedAnalytics>()
{
	return FMobileBannerClickedAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMobileBannerClickedAnalytics(FMobileBannerClickedAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MobileBannerClickedAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMobileBannerClickedAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMobileBannerClickedAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MobileBannerClickedAnalytics")),new UScriptStruct::TCppStructOps<FMobileBannerClickedAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMobileBannerClickedAnalytics;
	struct Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileBannerClickedAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMobileBannerClickedAnalytics>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"MobileBannerClickedAnalytics",
		sizeof(FMobileBannerClickedAnalytics),
		alignof(FMobileBannerClickedAnalytics),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MobileBannerClickedAnalytics"), sizeof(FMobileBannerClickedAnalytics), Get_Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMobileBannerClickedAnalytics_Hash() { return 3256244339U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
