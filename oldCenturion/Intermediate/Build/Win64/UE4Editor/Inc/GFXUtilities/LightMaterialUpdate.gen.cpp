// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/LightMaterialUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightMaterialUpdate() {}
// Cross Module References
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FLightMaterialUpdate();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper_NoRegister();
// End Cross Module References
class UScriptStruct* FLightMaterialUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GFXUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FLightMaterialUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightMaterialUpdate, Z_Construct_UPackage__Script_GFXUtilities(), TEXT("LightMaterialUpdate"), sizeof(FLightMaterialUpdate), Get_Z_Construct_UScriptStruct_FLightMaterialUpdate_Hash());
	}
	return Singleton;
}
template<> GFXUTILITIES_API UScriptStruct* StaticStruct<FLightMaterialUpdate>()
{
	return FLightMaterialUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightMaterialUpdate(FLightMaterialUpdate::StaticStruct, TEXT("/Script/GFXUtilities"), TEXT("LightMaterialUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_GFXUtilities_StaticRegisterNativesFLightMaterialUpdate
{
	FScriptStruct_GFXUtilities_StaticRegisterNativesFLightMaterialUpdate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightMaterialUpdate")),new UScriptStruct::TCppStructOps<FLightMaterialUpdate>);
	}
} ScriptStruct_GFXUtilities_StaticRegisterNativesFLightMaterialUpdate;
	struct Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_propertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_propertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LightMaterialUpdate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightMaterialUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_multiplier_MetaData[] = {
		{ "Category", "LightMaterialUpdate" },
		{ "ModuleRelativePath", "Public/LightMaterialUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightMaterialUpdate, multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_propertyName_MetaData[] = {
		{ "Category", "LightMaterialUpdate" },
		{ "ModuleRelativePath", "Public/LightMaterialUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightMaterialUpdate, propertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_propertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_propertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_material_MetaData[] = {
		{ "Category", "LightMaterialUpdate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightMaterialUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightMaterialUpdate, material), Z_Construct_UClass_UMaterialHelper_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_propertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::NewProp_material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
		nullptr,
		&NewStructOps,
		"LightMaterialUpdate",
		sizeof(FLightMaterialUpdate),
		alignof(FLightMaterialUpdate),
		Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightMaterialUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightMaterialUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GFXUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightMaterialUpdate"), sizeof(FLightMaterialUpdate), Get_Z_Construct_UScriptStruct_FLightMaterialUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightMaterialUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightMaterialUpdate_Hash() { return 3651505952U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
