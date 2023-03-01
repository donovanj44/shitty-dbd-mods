// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/EditorAnimCollectionDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAnimCollectionDisplay() {}
// Cross Module References
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorCollectionMetadata();
// End Cross Module References
class UScriptStruct* FEditorAnimCollectionDisplay::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay, Z_Construct_UPackage__Script_AnimationUtilities(), TEXT("EditorAnimCollectionDisplay"), sizeof(FEditorAnimCollectionDisplay), Get_Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Hash());
	}
	return Singleton;
}
template<> ANIMATIONUTILITIES_API UScriptStruct* StaticStruct<FEditorAnimCollectionDisplay>()
{
	return FEditorAnimCollectionDisplay::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorAnimCollectionDisplay(FEditorAnimCollectionDisplay::StaticStruct, TEXT("/Script/AnimationUtilities"), TEXT("EditorAnimCollectionDisplay"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationUtilities_StaticRegisterNativesFEditorAnimCollectionDisplay
{
	FScriptStruct_AnimationUtilities_StaticRegisterNativesFEditorAnimCollectionDisplay()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorAnimCollectionDisplay")),new UScriptStruct::TCppStructOps<FEditorAnimCollectionDisplay>);
	}
} ScriptStruct_AnimationUtilities_StaticRegisterNativesFEditorAnimCollectionDisplay;
	struct Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__taggedAnimSelectorsMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__taggedAnimSelectorsMetadata;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimSelectorsMetadata_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimSelectorsMetadata_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__taggedAnimBlendspacesMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__taggedAnimBlendspacesMetadata;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimBlendspacesMetadata_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimBlendspacesMetadata_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__taggedAnimSequencesMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__taggedAnimSequencesMetadata;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimSequencesMetadata_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimSequencesMetadata_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorAnimCollectionDisplay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorAnimCollectionDisplay>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSelectorsMetadata_MetaData[] = {
		{ "Category", "EditorAnimCollectionDisplay" },
		{ "ModuleRelativePath", "Public/EditorAnimCollectionDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSelectorsMetadata = { "_taggedAnimSelectorsMetadata", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorAnimCollectionDisplay, _taggedAnimSelectorsMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSelectorsMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSelectorsMetadata_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSelectorsMetadata_Key_KeyProp = { "_taggedAnimSelectorsMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSelectorsMetadata_ValueProp = { "_taggedAnimSelectorsMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditorCollectionMetadata, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimBlendspacesMetadata_MetaData[] = {
		{ "Category", "EditorAnimCollectionDisplay" },
		{ "ModuleRelativePath", "Public/EditorAnimCollectionDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimBlendspacesMetadata = { "_taggedAnimBlendspacesMetadata", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorAnimCollectionDisplay, _taggedAnimBlendspacesMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimBlendspacesMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimBlendspacesMetadata_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimBlendspacesMetadata_Key_KeyProp = { "_taggedAnimBlendspacesMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimBlendspacesMetadata_ValueProp = { "_taggedAnimBlendspacesMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditorCollectionMetadata, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSequencesMetadata_MetaData[] = {
		{ "Category", "EditorAnimCollectionDisplay" },
		{ "ModuleRelativePath", "Public/EditorAnimCollectionDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSequencesMetadata = { "_taggedAnimSequencesMetadata", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorAnimCollectionDisplay, _taggedAnimSequencesMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSequencesMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSequencesMetadata_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSequencesMetadata_Key_KeyProp = { "_taggedAnimSequencesMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSequencesMetadata_ValueProp = { "_taggedAnimSequencesMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditorCollectionMetadata, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSelectorsMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSelectorsMetadata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSelectorsMetadata_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimBlendspacesMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimBlendspacesMetadata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimBlendspacesMetadata_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSequencesMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSequencesMetadata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::NewProp__taggedAnimSequencesMetadata_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
		nullptr,
		&NewStructOps,
		"EditorAnimCollectionDisplay",
		sizeof(FEditorAnimCollectionDisplay),
		alignof(FEditorAnimCollectionDisplay),
		Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorAnimCollectionDisplay"), sizeof(FEditorAnimCollectionDisplay), Get_Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorAnimCollectionDisplay_Hash() { return 1012157689U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
