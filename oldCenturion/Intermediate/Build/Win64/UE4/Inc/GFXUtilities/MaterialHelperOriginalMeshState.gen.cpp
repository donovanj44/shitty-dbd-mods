// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/MaterialHelperOriginalMeshState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialHelperOriginalMeshState() {}
// Cross Module References
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FMaterialHelperOriginalMeshState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GFXUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState, Z_Construct_UPackage__Script_GFXUtilities(), TEXT("MaterialHelperOriginalMeshState"), sizeof(FMaterialHelperOriginalMeshState), Get_Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Hash());
	}
	return Singleton;
}
template<> GFXUTILITIES_API UScriptStruct* StaticStruct<FMaterialHelperOriginalMeshState>()
{
	return FMaterialHelperOriginalMeshState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialHelperOriginalMeshState(FMaterialHelperOriginalMeshState::StaticStruct, TEXT("/Script/GFXUtilities"), TEXT("MaterialHelperOriginalMeshState"), false, nullptr, nullptr);
static struct FScriptStruct_GFXUtilities_StaticRegisterNativesFMaterialHelperOriginalMeshState
{
	FScriptStruct_GFXUtilities_StaticRegisterNativesFMaterialHelperOriginalMeshState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialHelperOriginalMeshState")),new UScriptStruct::TCppStructOps<FMaterialHelperOriginalMeshState>);
	}
} ScriptStruct_GFXUtilities_StaticRegisterNativesFMaterialHelperOriginalMeshState;
	struct Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__originalDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__originalDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__originalDynamicMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__originalMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__originalMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__originalMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialHelperOriginalMeshState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialHelperOriginalMeshState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialHelperOriginalMeshState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalDynamicMaterials = { "_originalDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialHelperOriginalMeshState, _originalDynamicMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalDynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalDynamicMaterials_Inner = { "_originalDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialHelperOriginalMeshState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalMaterials = { "_originalMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialHelperOriginalMeshState, _originalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalMaterials_Inner = { "_originalMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalDynamicMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::NewProp__originalMaterials_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
		nullptr,
		&NewStructOps,
		"MaterialHelperOriginalMeshState",
		sizeof(FMaterialHelperOriginalMeshState),
		alignof(FMaterialHelperOriginalMeshState),
		Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GFXUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialHelperOriginalMeshState"), sizeof(FMaterialHelperOriginalMeshState), Get_Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState_Hash() { return 1430599997U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
