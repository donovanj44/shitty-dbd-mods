// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_Find.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_Find() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Find_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Find();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UAISkill_Find::StaticRegisterNativesUAISkill_Find()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_Find_NoRegister()
	{
		return UAISkill_Find::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Find_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentWishedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__currentWishedObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentWishedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MustBeSeen_MetaData[];
#endif
		static void NewProp_MustBeSeen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MustBeSeen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardWishListTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardWishListTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FindClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FindClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Find_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Find_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_Find.h" },
		{ "ModuleRelativePath", "Public/AISkill_Find.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Find_Statics::NewProp__currentWishedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISkill_Find.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISkill_Find_Statics::NewProp__currentWishedObjects = { "_currentWishedObjects", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Find, _currentWishedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Find_Statics::NewProp__currentWishedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Find_Statics::NewProp__currentWishedObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISkill_Find_Statics::NewProp__currentWishedObjects_Inner = { "_currentWishedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Find_Statics::NewProp_MustBeSeen_MetaData[] = {
		{ "Category", "AISkill_Find" },
		{ "ModuleRelativePath", "Public/AISkill_Find.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_Find_Statics::NewProp_MustBeSeen_SetBit(void* Obj)
	{
		((UAISkill_Find*)Obj)->MustBeSeen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_Find_Statics::NewProp_MustBeSeen = { "MustBeSeen", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill_Find), &Z_Construct_UClass_UAISkill_Find_Statics::NewProp_MustBeSeen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Find_Statics::NewProp_MustBeSeen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Find_Statics::NewProp_MustBeSeen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Find_Statics::NewProp_SearchInterval_MetaData[] = {
		{ "Category", "AISkill_Find" },
		{ "ModuleRelativePath", "Public/AISkill_Find.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Find_Statics::NewProp_SearchInterval = { "SearchInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Find, SearchInterval), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Find_Statics::NewProp_SearchInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Find_Statics::NewProp_SearchInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Find_Statics::NewProp_BlackboardWishListTag_MetaData[] = {
		{ "Category", "AISkill_Find" },
		{ "ModuleRelativePath", "Public/AISkill_Find.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Find_Statics::NewProp_BlackboardWishListTag = { "BlackboardWishListTag", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Find, BlackboardWishListTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Find_Statics::NewProp_BlackboardWishListTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Find_Statics::NewProp_BlackboardWishListTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Find_Statics::NewProp_FindClass_MetaData[] = {
		{ "Category", "AISkill_Find" },
		{ "ModuleRelativePath", "Public/AISkill_Find.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISkill_Find_Statics::NewProp_FindClass = { "FindClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Find, FindClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Find_Statics::NewProp_FindClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Find_Statics::NewProp_FindClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_Find_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Find_Statics::NewProp__currentWishedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Find_Statics::NewProp__currentWishedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Find_Statics::NewProp_MustBeSeen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Find_Statics::NewProp_SearchInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Find_Statics::NewProp_BlackboardWishListTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Find_Statics::NewProp_FindClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Find_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_Find>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Find_Statics::ClassParams = {
		&UAISkill_Find::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_Find_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Find_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Find_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Find_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_Find()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Find_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_Find, 1774839045);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_Find>()
	{
		return UAISkill_Find::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_Find(Z_Construct_UClass_UAISkill_Find, &UAISkill_Find::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_Find"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_Find);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
