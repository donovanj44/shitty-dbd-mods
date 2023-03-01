// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaNoiseIndicatorDistanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaNoiseIndicatorDistanceData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FAtlantaNoiseIndicatorDistanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaNoiseIndicatorDistanceData"), sizeof(FAtlantaNoiseIndicatorDistanceData), Get_Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaNoiseIndicatorDistanceData>()
{
	return FAtlantaNoiseIndicatorDistanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData(FAtlantaNoiseIndicatorDistanceData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaNoiseIndicatorDistanceData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaNoiseIndicatorDistanceData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaNoiseIndicatorDistanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaNoiseIndicatorDistanceData")),new UScriptStruct::TCppStructOps<FAtlantaNoiseIndicatorDistanceData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaNoiseIndicatorDistanceData;
	struct Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceForNoiseIndicatorToAppear_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceForNoiseIndicatorToAppear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaNoiseIndicatorDistanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaNoiseIndicatorDistanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_DistanceForNoiseIndicatorToAppear_MetaData[] = {
		{ "Category", "AtlantaNoiseIndicatorDistanceData" },
		{ "ModuleRelativePath", "Public/AtlantaNoiseIndicatorDistanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_DistanceForNoiseIndicatorToAppear = { "DistanceForNoiseIndicatorToAppear", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaNoiseIndicatorDistanceData, DistanceForNoiseIndicatorToAppear), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_DistanceForNoiseIndicatorToAppear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_DistanceForNoiseIndicatorToAppear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AtlantaNoiseIndicatorDistanceData" },
		{ "ModuleRelativePath", "Public/AtlantaNoiseIndicatorDistanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaNoiseIndicatorDistanceData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_DistanceForNoiseIndicatorToAppear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AtlantaNoiseIndicatorDistanceData",
		sizeof(FAtlantaNoiseIndicatorDistanceData),
		alignof(FAtlantaNoiseIndicatorDistanceData),
		Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaNoiseIndicatorDistanceData"), sizeof(FAtlantaNoiseIndicatorDistanceData), Get_Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaNoiseIndicatorDistanceData_Hash() { return 1181625645U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
