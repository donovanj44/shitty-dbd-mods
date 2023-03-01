// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/LightUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightUpdate() {}
// Cross Module References
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FLightUpdate();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FLightUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GFXUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FLightUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightUpdate, Z_Construct_UPackage__Script_GFXUtilities(), TEXT("LightUpdate"), sizeof(FLightUpdate), Get_Z_Construct_UScriptStruct_FLightUpdate_Hash());
	}
	return Singleton;
}
template<> GFXUTILITIES_API UScriptStruct* StaticStruct<FLightUpdate>()
{
	return FLightUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightUpdate(FLightUpdate::StaticStruct, TEXT("/Script/GFXUtilities"), TEXT("LightUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_GFXUtilities_StaticRegisterNativesFLightUpdate
{
	FScriptStruct_GFXUtilities_StaticRegisterNativesFLightUpdate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightUpdate")),new UScriptStruct::TCppStructOps<FLightUpdate>);
	}
} ScriptStruct_GFXUtilities_StaticRegisterNativesFLightUpdate;
	struct Z_Construct_UScriptStruct_FLightUpdate_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_light;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LightUpdate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_multiplier_MetaData[] = {
		{ "Category", "LightUpdate" },
		{ "ModuleRelativePath", "Public/LightUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightUpdate, multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_light_MetaData[] = {
		{ "Category", "LightUpdate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_light = { "light", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightUpdate, light), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_light_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_light_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightUpdate_Statics::NewProp_light,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
		nullptr,
		&NewStructOps,
		"LightUpdate",
		sizeof(FLightUpdate),
		alignof(FLightUpdate),
		Z_Construct_UScriptStruct_FLightUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GFXUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightUpdate"), sizeof(FLightUpdate), Get_Z_Construct_UScriptStruct_FLightUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightUpdate_Hash() { return 1498054601U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
