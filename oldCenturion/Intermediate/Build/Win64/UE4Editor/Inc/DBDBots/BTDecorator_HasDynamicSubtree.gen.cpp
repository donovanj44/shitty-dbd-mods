// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_HasDynamicSubtree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_HasDynamicSubtree() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_HasDynamicSubtree();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UBTDecorator_HasDynamicSubtree::StaticRegisterNativesUBTDecorator_HasDynamicSubtree()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_NoRegister()
	{
		return UBTDecorator_HasDynamicSubtree::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjectTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InjectTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_HasDynamicSubtree.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_HasDynamicSubtree.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::NewProp_InjectTag_MetaData[] = {
		{ "Category", "BTDecorator_HasDynamicSubtree" },
		{ "ModuleRelativePath", "Public/BTDecorator_HasDynamicSubtree.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::NewProp_InjectTag = { "InjectTag", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_HasDynamicSubtree, InjectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::NewProp_InjectTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::NewProp_InjectTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::NewProp_InjectTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_HasDynamicSubtree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::ClassParams = {
		&UBTDecorator_HasDynamicSubtree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_HasDynamicSubtree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_HasDynamicSubtree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_HasDynamicSubtree, 1006582989);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_HasDynamicSubtree>()
	{
		return UBTDecorator_HasDynamicSubtree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_HasDynamicSubtree(Z_Construct_UClass_UBTDecorator_HasDynamicSubtree, &UBTDecorator_HasDynamicSubtree::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_HasDynamicSubtree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_HasDynamicSubtree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
