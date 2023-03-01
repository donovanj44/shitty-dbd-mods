// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/TotemsAtEndTrialCountQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTotemsAtEndTrialCountQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator();
	ARCHIVES_API UClass* Z_Construct_UClass_UEndOfGameQEEvaluator();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UTotemsAtEndTrialCountQEEvaluator::StaticRegisterNativesUTotemsAtEndTrialCountQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_NoRegister()
	{
		return UTotemsAtEndTrialCountQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEndOfGameQEEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TotemsAtEndTrialCountQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/TotemsAtEndTrialCountQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTotemsAtEndTrialCountQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_Statics::ClassParams = {
		&UTotemsAtEndTrialCountQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTotemsAtEndTrialCountQEEvaluator, 1894589207);
	template<> ARCHIVES_API UClass* StaticClass<UTotemsAtEndTrialCountQEEvaluator>()
	{
		return UTotemsAtEndTrialCountQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTotemsAtEndTrialCountQEEvaluator(Z_Construct_UClass_UTotemsAtEndTrialCountQEEvaluator, &UTotemsAtEndTrialCountQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UTotemsAtEndTrialCountQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTotemsAtEndTrialCountQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
