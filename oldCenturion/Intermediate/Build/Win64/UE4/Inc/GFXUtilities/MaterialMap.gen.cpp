// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/MaterialMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialMap() {}
// Cross Module References
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialMap();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FMaterialMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GFXUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FMaterialMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialMap, Z_Construct_UPackage__Script_GFXUtilities(), TEXT("MaterialMap"), sizeof(FMaterialMap), Get_Z_Construct_UScriptStruct_FMaterialMap_Hash());
	}
	return Singleton;
}
template<> GFXUTILITIES_API UScriptStruct* StaticStruct<FMaterialMap>()
{
	return FMaterialMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialMap(FMaterialMap::StaticStruct, TEXT("/Script/GFXUtilities"), TEXT("MaterialMap"), false, nullptr, nullptr);
static struct FScriptStruct_GFXUtilities_StaticRegisterNativesFMaterialMap
{
	FScriptStruct_GFXUtilities_StaticRegisterNativesFMaterialMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialMap")),new UScriptStruct::TCppStructOps<FMaterialMap>);
	}
} ScriptStruct_GFXUtilities_StaticRegisterNativesFMaterialMap;
	struct Z_Construct_UScriptStruct_FMaterialMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DstMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DstMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_DstMaterial_MetaData[] = {
		{ "Category", "MaterialMap" },
		{ "ModuleRelativePath", "Public/MaterialMap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_DstMaterial = { "DstMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialMap, DstMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_DstMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_DstMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_SrcMaterial_MetaData[] = {
		{ "Category", "MaterialMap" },
		{ "ModuleRelativePath", "Public/MaterialMap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_SrcMaterial = { "SrcMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialMap, SrcMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_SrcMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_SrcMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_DstMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_SrcMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
		nullptr,
		&NewStructOps,
		"MaterialMap",
		sizeof(FMaterialMap),
		alignof(FMaterialMap),
		Z_Construct_UScriptStruct_FMaterialMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GFXUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialMap"), sizeof(FMaterialMap), Get_Z_Construct_UScriptStruct_FMaterialMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialMap_Hash() { return 4171745679U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
