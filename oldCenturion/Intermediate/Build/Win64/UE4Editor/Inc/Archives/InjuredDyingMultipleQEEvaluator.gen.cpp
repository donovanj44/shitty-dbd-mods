// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/InjuredDyingMultipleQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInjuredDyingMultipleQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UInjuredDyingMultipleQEEvaluator::StaticRegisterNativesUInjuredDyingMultipleQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_NoRegister()
	{
		return UInjuredDyingMultipleQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InjuredDyingMultipleQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/InjuredDyingMultipleQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInjuredDyingMultipleQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_Statics::ClassParams = {
		&UInjuredDyingMultipleQEEvaluator::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInjuredDyingMultipleQEEvaluator, 859515974);
	template<> ARCHIVES_API UClass* StaticClass<UInjuredDyingMultipleQEEvaluator>()
	{
		return UInjuredDyingMultipleQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInjuredDyingMultipleQEEvaluator(Z_Construct_UClass_UInjuredDyingMultipleQEEvaluator, &UInjuredDyingMultipleQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UInjuredDyingMultipleQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInjuredDyingMultipleQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
