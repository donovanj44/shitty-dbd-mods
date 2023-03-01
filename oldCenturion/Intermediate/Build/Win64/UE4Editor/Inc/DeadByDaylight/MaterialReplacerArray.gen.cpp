// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MaterialReplacerArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialReplacerArray() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialReplacerArray();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialReplacerData();
// End Cross Module References
class UScriptStruct* FMaterialReplacerArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMaterialReplacerArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialReplacerArray, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("MaterialReplacerArray"), sizeof(FMaterialReplacerArray), Get_Z_Construct_UScriptStruct_FMaterialReplacerArray_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FMaterialReplacerArray>()
{
	return FMaterialReplacerArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialReplacerArray(FMaterialReplacerArray::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("MaterialReplacerArray"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFMaterialReplacerArray
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFMaterialReplacerArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialReplacerArray")),new UScriptStruct::TCppStructOps<FMaterialReplacerArray>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFMaterialReplacerArray;
	struct Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialsMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialsMap_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialReplacerArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialReplacerArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::NewProp_MaterialsMap_MetaData[] = {
		{ "Category", "MaterialReplacerArray" },
		{ "ModuleRelativePath", "Public/MaterialReplacerArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::NewProp_MaterialsMap = { "MaterialsMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialReplacerArray, MaterialsMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::NewProp_MaterialsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::NewProp_MaterialsMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::NewProp_MaterialsMap_Inner = { "MaterialsMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialReplacerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::NewProp_MaterialsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::NewProp_MaterialsMap_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"MaterialReplacerArray",
		sizeof(FMaterialReplacerArray),
		alignof(FMaterialReplacerArray),
		Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialReplacerArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialReplacerArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialReplacerArray"), sizeof(FMaterialReplacerArray), Get_Z_Construct_UScriptStruct_FMaterialReplacerArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialReplacerArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialReplacerArray_Hash() { return 2604374881U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
