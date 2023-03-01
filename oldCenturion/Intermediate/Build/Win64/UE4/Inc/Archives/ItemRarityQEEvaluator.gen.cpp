// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/ItemRarityQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemRarityQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UItemRarityQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UItemRarityQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UItemRarityQEEvaluator::StaticRegisterNativesUItemRarityQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UItemRarityQEEvaluator_NoRegister()
	{
		return UItemRarityQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UItemRarityQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemRarityQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemRarityQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemRarityQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/ItemRarityQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemRarityQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemRarityQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemRarityQEEvaluator_Statics::ClassParams = {
		&UItemRarityQEEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemRarityQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemRarityQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemRarityQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemRarityQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemRarityQEEvaluator, 2027728817);
	template<> ARCHIVES_API UClass* StaticClass<UItemRarityQEEvaluator>()
	{
		return UItemRarityQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemRarityQEEvaluator(Z_Construct_UClass_UItemRarityQEEvaluator, &UItemRarityQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UItemRarityQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemRarityQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
