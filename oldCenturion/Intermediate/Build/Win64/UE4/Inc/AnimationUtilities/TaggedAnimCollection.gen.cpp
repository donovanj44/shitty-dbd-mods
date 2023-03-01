// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/TaggedAnimCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaggedAnimCollection() {}
// Cross Module References
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedAnimCollection();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimCollection_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FTaggedAnimCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FTaggedAnimCollection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaggedAnimCollection, Z_Construct_UPackage__Script_AnimationUtilities(), TEXT("TaggedAnimCollection"), sizeof(FTaggedAnimCollection), Get_Z_Construct_UScriptStruct_FTaggedAnimCollection_Hash());
	}
	return Singleton;
}
template<> ANIMATIONUTILITIES_API UScriptStruct* StaticStruct<FTaggedAnimCollection>()
{
	return FTaggedAnimCollection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaggedAnimCollection(FTaggedAnimCollection::StaticStruct, TEXT("/Script/AnimationUtilities"), TEXT("TaggedAnimCollection"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationUtilities_StaticRegisterNativesFTaggedAnimCollection
{
	FScriptStruct_AnimationUtilities_StaticRegisterNativesFTaggedAnimCollection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TaggedAnimCollection")),new UScriptStruct::TCppStructOps<FTaggedAnimCollection>);
	}
} ScriptStruct_AnimationUtilities_StaticRegisterNativesFTaggedAnimCollection;
	struct Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TaggedAnimCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaggedAnimCollection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_AnimCollection_MetaData[] = {
		{ "Category", "TaggedAnimCollection" },
		{ "ModuleRelativePath", "Public/TaggedAnimCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_AnimCollection = { "AnimCollection", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaggedAnimCollection, AnimCollection), Z_Construct_UClass_UAnimCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_AnimCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_AnimCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "TaggedAnimCollection" },
		{ "ModuleRelativePath", "Public/TaggedAnimCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaggedAnimCollection, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_AnimCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
		nullptr,
		&NewStructOps,
		"TaggedAnimCollection",
		sizeof(FTaggedAnimCollection),
		alignof(FTaggedAnimCollection),
		Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaggedAnimCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaggedAnimCollection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaggedAnimCollection"), sizeof(FTaggedAnimCollection), Get_Z_Construct_UScriptStruct_FTaggedAnimCollection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaggedAnimCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaggedAnimCollection_Hash() { return 1686462845U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
