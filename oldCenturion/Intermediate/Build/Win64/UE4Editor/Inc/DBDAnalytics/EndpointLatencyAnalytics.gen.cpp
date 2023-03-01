// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EndpointLatencyAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndpointLatencyAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEndpointLatencyAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEndpointLatencyData();
// End Cross Module References
class UScriptStruct* FEndpointLatencyAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndpointLatencyAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EndpointLatencyAnalytics"), sizeof(FEndpointLatencyAnalytics), Get_Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FEndpointLatencyAnalytics>()
{
	return FEndpointLatencyAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEndpointLatencyAnalytics(FEndpointLatencyAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("EndpointLatencyAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFEndpointLatencyAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFEndpointLatencyAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EndpointLatencyAnalytics")),new UScriptStruct::TCppStructOps<FEndpointLatencyAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFEndpointLatencyAnalytics;
	struct Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Endpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Endpoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Endpoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndpointLatencyAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndpointLatencyAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::NewProp_Endpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/EndpointLatencyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::NewProp_Endpoints = { "Endpoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEndpointLatencyAnalytics, Endpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::NewProp_Endpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::NewProp_Endpoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::NewProp_Endpoints_Inner = { "Endpoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEndpointLatencyData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::NewProp_Endpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::NewProp_Endpoints_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"EndpointLatencyAnalytics",
		sizeof(FEndpointLatencyAnalytics),
		alignof(FEndpointLatencyAnalytics),
		Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEndpointLatencyAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EndpointLatencyAnalytics"), sizeof(FEndpointLatencyAnalytics), Get_Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEndpointLatencyAnalytics_Hash() { return 2516863738U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
