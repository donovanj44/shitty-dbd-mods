// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EndpointLatencyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndpointLatencyData() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEndpointLatencyData();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
class UScriptStruct* FEndpointLatencyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FEndpointLatencyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndpointLatencyData, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EndpointLatencyData"), sizeof(FEndpointLatencyData), Get_Z_Construct_UScriptStruct_FEndpointLatencyData_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FEndpointLatencyData>()
{
	return FEndpointLatencyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEndpointLatencyData(FEndpointLatencyData::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("EndpointLatencyData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFEndpointLatencyData
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFEndpointLatencyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EndpointLatencyData")),new UScriptStruct::TCppStructOps<FEndpointLatencyData>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFEndpointLatencyData;
	struct Z_Construct_UScriptStruct_FEndpointLatencyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latency_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Latency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EndpointLatencyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndpointLatencyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Latency_MetaData[] = {
		{ "ModuleRelativePath", "Public/EndpointLatencyData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Latency = { "Latency", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEndpointLatencyData, Latency), METADATA_PARAMS(Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Latency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Latency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/EndpointLatencyData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEndpointLatencyData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Latency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		nullptr,
		&NewStructOps,
		"EndpointLatencyData",
		sizeof(FEndpointLatencyData),
		alignof(FEndpointLatencyData),
		Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEndpointLatencyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEndpointLatencyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EndpointLatencyData"), sizeof(FEndpointLatencyData), Get_Z_Construct_UScriptStruct_FEndpointLatencyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEndpointLatencyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEndpointLatencyData_Hash() { return 2268292931U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
