// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/InstigatorInBasementPercentQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstigatorInBasementPercentQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator();
	ARCHIVES_API UClass* Z_Construct_UClass_UInstigatorInBasementQEEvaluator();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UInstigatorInBasementPercentQEEvaluator::StaticRegisterNativesUInstigatorInBasementPercentQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_NoRegister()
	{
		return UInstigatorInBasementPercentQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInstigatorInBasementQEEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InstigatorInBasementPercentQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/InstigatorInBasementPercentQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstigatorInBasementPercentQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_Statics::ClassParams = {
		&UInstigatorInBasementPercentQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInstigatorInBasementPercentQEEvaluator, 3182591904);
	template<> ARCHIVES_API UClass* StaticClass<UInstigatorInBasementPercentQEEvaluator>()
	{
		return UInstigatorInBasementPercentQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInstigatorInBasementPercentQEEvaluator(Z_Construct_UClass_UInstigatorInBasementPercentQEEvaluator, &UInstigatorInBasementPercentQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UInstigatorInBasementPercentQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInstigatorInBasementPercentQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
