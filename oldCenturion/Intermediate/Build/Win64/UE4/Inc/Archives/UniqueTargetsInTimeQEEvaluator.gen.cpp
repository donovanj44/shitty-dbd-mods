// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/UniqueTargetsInTimeQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniqueTargetsInTimeQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UUniqueTargetsInTimeQEEvaluator::StaticRegisterNativesUUniqueTargetsInTimeQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_NoRegister()
	{
		return UUniqueTargetsInTimeQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UniqueTargetsInTimeQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/UniqueTargetsInTimeQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniqueTargetsInTimeQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_Statics::ClassParams = {
		&UUniqueTargetsInTimeQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUniqueTargetsInTimeQEEvaluator, 1467740671);
	template<> ARCHIVES_API UClass* StaticClass<UUniqueTargetsInTimeQEEvaluator>()
	{
		return UUniqueTargetsInTimeQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUniqueTargetsInTimeQEEvaluator(Z_Construct_UClass_UUniqueTargetsInTimeQEEvaluator, &UUniqueTargetsInTimeQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UUniqueTargetsInTimeQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniqueTargetsInTimeQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
