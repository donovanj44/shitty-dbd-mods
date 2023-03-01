// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/AnimSequenceSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceSelector() {}
// Cross Module References
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceSelector();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedAnimSequence();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimSequenceSelector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAnimSequenceSelector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequenceSelector, Z_Construct_UPackage__Script_AnimationUtilities(), TEXT("AnimSequenceSelector"), sizeof(FAnimSequenceSelector), Get_Z_Construct_UScriptStruct_FAnimSequenceSelector_Hash());
	}
	return Singleton;
}
template<> ANIMATIONUTILITIES_API UScriptStruct* StaticStruct<FAnimSequenceSelector>()
{
	return FAnimSequenceSelector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSequenceSelector(FAnimSequenceSelector::StaticStruct, TEXT("/Script/AnimationUtilities"), TEXT("AnimSequenceSelector"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationUtilities_StaticRegisterNativesFAnimSequenceSelector
{
	FScriptStruct_AnimationUtilities_StaticRegisterNativesFAnimSequenceSelector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSequenceSelector")),new UScriptStruct::TCppStructOps<FAnimSequenceSelector>);
	}
} ScriptStruct_AnimationUtilities_StaticRegisterNativesFAnimSequenceSelector;
	struct Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__taggedSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__taggedSequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedSequences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimSequenceSelector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequenceSelector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__taggedSequences_MetaData[] = {
		{ "Category", "AnimSequenceSelector" },
		{ "ModuleRelativePath", "Public/AnimSequenceSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__taggedSequences = { "_taggedSequences", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSequenceSelector, _taggedSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__taggedSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__taggedSequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__taggedSequences_Inner = { "_taggedSequences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTaggedAnimSequence, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__selected_MetaData[] = {
		{ "Category", "AnimSequenceSelector" },
		{ "ModuleRelativePath", "Public/AnimSequenceSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__selected = { "_selected", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSequenceSelector, _selected), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__selected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__selected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__taggedSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__taggedSequences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::NewProp__selected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
		nullptr,
		&NewStructOps,
		"AnimSequenceSelector",
		sizeof(FAnimSequenceSelector),
		alignof(FAnimSequenceSelector),
		Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceSelector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSequenceSelector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSequenceSelector"), sizeof(FAnimSequenceSelector), Get_Z_Construct_UScriptStruct_FAnimSequenceSelector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimSequenceSelector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSequenceSelector_Hash() { return 3252714571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
