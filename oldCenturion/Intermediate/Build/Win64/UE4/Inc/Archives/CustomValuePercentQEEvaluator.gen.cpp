// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/CustomValuePercentQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomValuePercentQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UCustomValuePercentQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UCustomValuePercentQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UCustomValuePercentQEEvaluator::StaticRegisterNativesUCustomValuePercentQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UCustomValuePercentQEEvaluator_NoRegister()
	{
		return UCustomValuePercentQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UCustomValuePercentQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomValuePercentQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomValuePercentQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomValuePercentQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/CustomValuePercentQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomValuePercentQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomValuePercentQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomValuePercentQEEvaluator_Statics::ClassParams = {
		&UCustomValuePercentQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomValuePercentQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomValuePercentQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomValuePercentQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomValuePercentQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomValuePercentQEEvaluator, 605601285);
	template<> ARCHIVES_API UClass* StaticClass<UCustomValuePercentQEEvaluator>()
	{
		return UCustomValuePercentQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomValuePercentQEEvaluator(Z_Construct_UClass_UCustomValuePercentQEEvaluator, &UCustomValuePercentQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UCustomValuePercentQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomValuePercentQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
