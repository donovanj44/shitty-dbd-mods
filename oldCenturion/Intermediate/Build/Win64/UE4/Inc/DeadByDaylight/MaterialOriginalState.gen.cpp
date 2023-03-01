// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MaterialOriginalState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialOriginalState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialOriginalState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FMaterialOriginalState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMaterialOriginalState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialOriginalState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("MaterialOriginalState"), sizeof(FMaterialOriginalState), Get_Z_Construct_UScriptStruct_FMaterialOriginalState_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FMaterialOriginalState>()
{
	return FMaterialOriginalState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialOriginalState(FMaterialOriginalState::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("MaterialOriginalState"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFMaterialOriginalState
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFMaterialOriginalState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialOriginalState")),new UScriptStruct::TCppStructOps<FMaterialOriginalState>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFMaterialOriginalState;
	struct Z_Construct_UScriptStruct_FMaterialOriginalState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshWithChangedMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshWithChangedMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialOriginalState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialOriginalState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_OriginalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialOriginalState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialOriginalState, OriginalMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_OriginalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_OriginalMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_OriginalMaterial_Inner = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_MeshWithChangedMaterials_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MaterialOriginalState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_MeshWithChangedMaterials = { "MeshWithChangedMaterials", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialOriginalState, MeshWithChangedMaterials), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_MeshWithChangedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_MeshWithChangedMaterials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_OriginalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_OriginalMaterial_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::NewProp_MeshWithChangedMaterials,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"MaterialOriginalState",
		sizeof(FMaterialOriginalState),
		alignof(FMaterialOriginalState),
		Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialOriginalState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialOriginalState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialOriginalState"), sizeof(FMaterialOriginalState), Get_Z_Construct_UScriptStruct_FMaterialOriginalState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialOriginalState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialOriginalState_Hash() { return 2549110051U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
