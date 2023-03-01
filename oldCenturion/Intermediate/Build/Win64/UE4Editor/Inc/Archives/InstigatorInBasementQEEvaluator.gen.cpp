// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/InstigatorInBasementQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstigatorInBasementQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UInstigatorInBasementQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UInstigatorInBasementQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UInstigatorInBasementQEEvaluator::StaticRegisterNativesUInstigatorInBasementQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UInstigatorInBasementQEEvaluator_NoRegister()
	{
		return UInstigatorInBasementQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UInstigatorInBasementQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInstigatorInBasementQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstigatorInBasementQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InstigatorInBasementQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/InstigatorInBasementQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInstigatorInBasementQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstigatorInBasementQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInstigatorInBasementQEEvaluator_Statics::ClassParams = {
		&UInstigatorInBasementQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInstigatorInBasementQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInstigatorInBasementQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInstigatorInBasementQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInstigatorInBasementQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInstigatorInBasementQEEvaluator, 1922792320);
	template<> ARCHIVES_API UClass* StaticClass<UInstigatorInBasementQEEvaluator>()
	{
		return UInstigatorInBasementQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInstigatorInBasementQEEvaluator(Z_Construct_UClass_UInstigatorInBasementQEEvaluator, &UInstigatorInBasementQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UInstigatorInBasementQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInstigatorInBasementQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
