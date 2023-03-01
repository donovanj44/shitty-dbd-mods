// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/EditorCollectionMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorCollectionMetadata() {}
// Cross Module References
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorCollectionMetadata();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
// End Cross Module References
class UScriptStruct* FEditorCollectionMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FEditorCollectionMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorCollectionMetadata, Z_Construct_UPackage__Script_AnimationUtilities(), TEXT("EditorCollectionMetadata"), sizeof(FEditorCollectionMetadata), Get_Z_Construct_UScriptStruct_FEditorCollectionMetadata_Hash());
	}
	return Singleton;
}
template<> ANIMATIONUTILITIES_API UScriptStruct* StaticStruct<FEditorCollectionMetadata>()
{
	return FEditorCollectionMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorCollectionMetadata(FEditorCollectionMetadata::StaticStruct, TEXT("/Script/AnimationUtilities"), TEXT("EditorCollectionMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationUtilities_StaticRegisterNativesFEditorCollectionMetadata
{
	FScriptStruct_AnimationUtilities_StaticRegisterNativesFEditorCollectionMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorCollectionMetadata")),new UScriptStruct::TCppStructOps<FEditorCollectionMetadata>);
	}
} ScriptStruct_AnimationUtilities_StaticRegisterNativesFEditorCollectionMetadata;
	struct Z_Construct_UScriptStruct_FEditorCollectionMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCollectionMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorCollectionMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorCollectionMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorCollectionMetadata>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorCollectionMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
		nullptr,
		&NewStructOps,
		"EditorCollectionMetadata",
		sizeof(FEditorCollectionMetadata),
		alignof(FEditorCollectionMetadata),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCollectionMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCollectionMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorCollectionMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorCollectionMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorCollectionMetadata"), sizeof(FEditorCollectionMetadata), Get_Z_Construct_UScriptStruct_FEditorCollectionMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorCollectionMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorCollectionMetadata_Hash() { return 3357246493U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
