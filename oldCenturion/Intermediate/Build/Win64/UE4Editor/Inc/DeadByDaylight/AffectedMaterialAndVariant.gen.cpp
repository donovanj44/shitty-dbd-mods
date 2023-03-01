// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AffectedMaterialAndVariant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAffectedMaterialAndVariant() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAffectedMaterialAndVariant();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FAffectedMaterialAndVariant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAffectedMaterialAndVariant, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AffectedMaterialAndVariant"), sizeof(FAffectedMaterialAndVariant), Get_Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAffectedMaterialAndVariant>()
{
	return FAffectedMaterialAndVariant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAffectedMaterialAndVariant(FAffectedMaterialAndVariant::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AffectedMaterialAndVariant"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAffectedMaterialAndVariant
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAffectedMaterialAndVariant()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AffectedMaterialAndVariant")),new UScriptStruct::TCppStructOps<FAffectedMaterialAndVariant>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAffectedMaterialAndVariant;
	struct Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialVariant_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialVariant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AffectedMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AffectedMaterialAndVariant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAffectedMaterialAndVariant>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_MaterialVariant_MetaData[] = {
		{ "Category", "AffectedMaterialAndVariant" },
		{ "ModuleRelativePath", "Public/AffectedMaterialAndVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_MaterialVariant = { "MaterialVariant", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAffectedMaterialAndVariant, MaterialVariant), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_MaterialVariant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_MaterialVariant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_AffectedMaterial_MetaData[] = {
		{ "Category", "AffectedMaterialAndVariant" },
		{ "ModuleRelativePath", "Public/AffectedMaterialAndVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_AffectedMaterial = { "AffectedMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAffectedMaterialAndVariant, AffectedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_AffectedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_AffectedMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_MaterialVariant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::NewProp_AffectedMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AffectedMaterialAndVariant",
		sizeof(FAffectedMaterialAndVariant),
		alignof(FAffectedMaterialAndVariant),
		Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAffectedMaterialAndVariant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AffectedMaterialAndVariant"), sizeof(FAffectedMaterialAndVariant), Get_Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAffectedMaterialAndVariant_Hash() { return 902128252U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
