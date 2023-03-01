// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/ScreamSpecialCaseQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreamSpecialCaseQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UScreamSpecialCaseQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UScreamSpecialCaseQEEvaluator::StaticRegisterNativesUScreamSpecialCaseQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_NoRegister()
	{
		return UScreamSpecialCaseQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScreamSpecialCaseQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/ScreamSpecialCaseQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreamSpecialCaseQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_Statics::ClassParams = {
		&UScreamSpecialCaseQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreamSpecialCaseQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreamSpecialCaseQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreamSpecialCaseQEEvaluator, 810529988);
	template<> ARCHIVES_API UClass* StaticClass<UScreamSpecialCaseQEEvaluator>()
	{
		return UScreamSpecialCaseQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreamSpecialCaseQEEvaluator(Z_Construct_UClass_UScreamSpecialCaseQEEvaluator, &UScreamSpecialCaseQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UScreamSpecialCaseQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreamSpecialCaseQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
