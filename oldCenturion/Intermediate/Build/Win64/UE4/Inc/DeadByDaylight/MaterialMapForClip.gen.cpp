// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MaterialMapForClip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialMapForClip() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialMapForClip();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FMaterialMapForClip::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMaterialMapForClip_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialMapForClip, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("MaterialMapForClip"), sizeof(FMaterialMapForClip), Get_Z_Construct_UScriptStruct_FMaterialMapForClip_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FMaterialMapForClip>()
{
	return FMaterialMapForClip::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialMapForClip(FMaterialMapForClip::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("MaterialMapForClip"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFMaterialMapForClip
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFMaterialMapForClip()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialMapForClip")),new UScriptStruct::TCppStructOps<FMaterialMapForClip>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFMaterialMapForClip;
	struct Z_Construct_UScriptStruct_FMaterialMapForClip_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialMapForClip.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialMapForClip>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_DstMaterial_MetaData[] = {
		{ "Category", "MaterialMapForClip" },
		{ "ModuleRelativePath", "Public/MaterialMapForClip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_DstMaterial = { "DstMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialMapForClip, DstMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_DstMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_DstMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_SrcMaterial_MetaData[] = {
		{ "Category", "MaterialMapForClip" },
		{ "ModuleRelativePath", "Public/MaterialMapForClip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_SrcMaterial = { "SrcMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialMapForClip, SrcMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_SrcMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_SrcMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_DstMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::NewProp_SrcMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"MaterialMapForClip",
		sizeof(FMaterialMapForClip),
		alignof(FMaterialMapForClip),
		Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialMapForClip()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialMapForClip_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialMapForClip"), sizeof(FMaterialMapForClip), Get_Z_Construct_UScriptStruct_FMaterialMapForClip_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialMapForClip_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialMapForClip_Hash() { return 3097365790U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
