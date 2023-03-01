// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/HasItemRarityQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHasItemRarityQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UHasItemRarityQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UHasItemRarityQEEvaluator();
	ARCHIVES_API UClass* Z_Construct_UClass_UItemRarityQEEvaluator();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UHasItemRarityQEEvaluator::StaticRegisterNativesUHasItemRarityQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UHasItemRarityQEEvaluator_NoRegister()
	{
		return UHasItemRarityQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UHasItemRarityQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasItemRarityQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemRarityQEEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasItemRarityQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HasItemRarityQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/HasItemRarityQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasItemRarityQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasItemRarityQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHasItemRarityQEEvaluator_Statics::ClassParams = {
		&UHasItemRarityQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHasItemRarityQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasItemRarityQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasItemRarityQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHasItemRarityQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHasItemRarityQEEvaluator, 42279476);
	template<> ARCHIVES_API UClass* StaticClass<UHasItemRarityQEEvaluator>()
	{
		return UHasItemRarityQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHasItemRarityQEEvaluator(Z_Construct_UClass_UHasItemRarityQEEvaluator, &UHasItemRarityQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UHasItemRarityQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasItemRarityQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
