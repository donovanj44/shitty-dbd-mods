// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EmblemProgressionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmblemProgressionData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FEmblemProgressionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmblemProgressionData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EmblemProgressionData"), sizeof(FEmblemProgressionData), Get_Z_Construct_UScriptStruct_FEmblemProgressionData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEmblemProgressionData>()
{
	return FEmblemProgressionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmblemProgressionData(FEmblemProgressionData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EmblemProgressionData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemProgressionData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemProgressionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmblemProgressionData")),new UScriptStruct::TCppStructOps<FEmblemProgressionData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemProgressionData;
	struct Z_Construct_UScriptStruct_FEmblemProgressionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressionPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProgressionText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EmblemProgressionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmblemProgressionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionPercent_MetaData[] = {
		{ "Category", "EmblemProgressionData" },
		{ "ModuleRelativePath", "Public/EmblemProgressionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionPercent = { "ProgressionPercent", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionData, ProgressionPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionText_MetaData[] = {
		{ "Category", "EmblemProgressionData" },
		{ "ModuleRelativePath", "Public/EmblemProgressionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionText = { "ProgressionText", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionData, ProgressionText), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::NewProp_ProgressionText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EmblemProgressionData",
		sizeof(FEmblemProgressionData),
		alignof(FEmblemProgressionData),
		Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmblemProgressionData"), sizeof(FEmblemProgressionData), Get_Z_Construct_UScriptStruct_FEmblemProgressionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmblemProgressionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionData_Hash() { return 2536350343U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
