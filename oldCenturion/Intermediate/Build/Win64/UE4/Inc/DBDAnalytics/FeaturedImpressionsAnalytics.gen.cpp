// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FeaturedImpressionsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeaturedImpressionsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FFeaturedImpressionsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FeaturedImpressionsAnalytics"), sizeof(FFeaturedImpressionsAnalytics), Get_Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFeaturedImpressionsAnalytics>()
{
	return FFeaturedImpressionsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFeaturedImpressionsAnalytics(FFeaturedImpressionsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FeaturedImpressionsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedImpressionsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedImpressionsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FeaturedImpressionsAnalytics")),new UScriptStruct::TCppStructOps<FFeaturedImpressionsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFeaturedImpressionsAnalytics;
	struct Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeaturedImpressionsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeaturedImpressionsAnalytics>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"FeaturedImpressionsAnalytics",
		sizeof(FFeaturedImpressionsAnalytics),
		alignof(FFeaturedImpressionsAnalytics),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FeaturedImpressionsAnalytics"), sizeof(FFeaturedImpressionsAnalytics), Get_Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeaturedImpressionsAnalytics_Hash() { return 3436035704U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
