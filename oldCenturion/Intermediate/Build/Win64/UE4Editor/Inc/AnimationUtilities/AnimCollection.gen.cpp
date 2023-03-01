// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/AnimCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCollection() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimCollection_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimCollection();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceSelector();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void UAnimCollection::StaticRegisterNativesUAnimCollection()
	{
	}
	UClass* Z_Construct_UClass_UAnimCollection_NoRegister()
	{
		return UAnimCollection::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__children;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__taggedAnimSelectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__taggedAnimSelectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimSelectors_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimSelectors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__taggedAnimBlendspaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__taggedAnimBlendspaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimBlendspaces_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__taggedAnimBlendspaces_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__taggedAnimSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__taggedAnimSequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimSequences_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__taggedAnimSequences_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimCollection.h" },
		{ "ModuleRelativePath", "Public/AnimCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCollection_Statics::NewProp__children_MetaData[] = {
		{ "Category", "AnimCollection" },
		{ "ModuleRelativePath", "Public/AnimCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__children = { "_children", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCollection, _children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimCollection_Statics::NewProp__children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCollection_Statics::NewProp__children_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__children_Inner = { "_children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCollection_Statics::NewProp__parent_MetaData[] = {
		{ "Category", "AnimCollection" },
		{ "ModuleRelativePath", "Public/AnimCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__parent = { "_parent", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCollection, _parent), Z_Construct_UClass_UAnimCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimCollection_Statics::NewProp__parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCollection_Statics::NewProp__parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSelectors_MetaData[] = {
		{ "Category", "AnimCollection" },
		{ "ModuleRelativePath", "Public/AnimCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSelectors = { "_taggedAnimSelectors", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCollection, _taggedAnimSelectors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSelectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSelectors_Key_KeyProp = { "_taggedAnimSelectors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSelectors_ValueProp = { "_taggedAnimSelectors", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimBlendspaces_MetaData[] = {
		{ "Category", "AnimCollection" },
		{ "ModuleRelativePath", "Public/AnimCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimBlendspaces = { "_taggedAnimBlendspaces", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCollection, _taggedAnimBlendspaces), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimBlendspaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimBlendspaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimBlendspaces_Key_KeyProp = { "_taggedAnimBlendspaces_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimBlendspaces_ValueProp = { "_taggedAnimBlendspaces", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSequences_MetaData[] = {
		{ "Category", "AnimCollection" },
		{ "ModuleRelativePath", "Public/AnimCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSequences = { "_taggedAnimSequences", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCollection, _taggedAnimSequences), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSequences_Key_KeyProp = { "_taggedAnimSequences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSequences_ValueProp = { "_taggedAnimSequences", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSelectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSelectors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSelectors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimBlendspaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimBlendspaces_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimBlendspaces_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSequences_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCollection_Statics::NewProp__taggedAnimSequences_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCollection_Statics::ClassParams = {
		&UAnimCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCollection, 3398818877);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UAnimCollection>()
	{
		return UAnimCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCollection(Z_Construct_UClass_UAnimCollection, &UAnimCollection::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UAnimCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
