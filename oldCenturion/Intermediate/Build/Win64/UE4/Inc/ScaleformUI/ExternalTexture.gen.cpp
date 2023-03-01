// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/ExternalTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalTexture() {}
// Cross Module References
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FExternalTexture();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FExternalTexture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCALEFORMUI_API uint32 Get_Z_Construct_UScriptStruct_FExternalTexture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalTexture, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("ExternalTexture"), sizeof(FExternalTexture), Get_Z_Construct_UScriptStruct_FExternalTexture_Hash());
	}
	return Singleton;
}
template<> SCALEFORMUI_API UScriptStruct* StaticStruct<FExternalTexture>()
{
	return FExternalTexture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExternalTexture(FExternalTexture::StaticStruct, TEXT("/Script/ScaleformUI"), TEXT("ExternalTexture"), false, nullptr, nullptr);
static struct FScriptStruct_ScaleformUI_StaticRegisterNativesFExternalTexture
{
	FScriptStruct_ScaleformUI_StaticRegisterNativesFExternalTexture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExternalTexture")),new UScriptStruct::TCppStructOps<FExternalTexture>);
	}
} ScriptStruct_ScaleformUI_StaticRegisterNativesFExternalTexture;
	struct Z_Construct_UScriptStruct_FExternalTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Resource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExternalTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalTexture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExternalTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternalTexture, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Resource_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExternalTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternalTexture, Resource), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Resource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalTexture_Statics::NewProp_Resource,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
		nullptr,
		&NewStructOps,
		"ExternalTexture",
		sizeof(FExternalTexture),
		alignof(FExternalTexture),
		Z_Construct_UScriptStruct_FExternalTexture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalTexture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalTexture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExternalTexture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExternalTexture"), sizeof(FExternalTexture), Get_Z_Construct_UScriptStruct_FExternalTexture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExternalTexture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExternalTexture_Hash() { return 2634404400U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
