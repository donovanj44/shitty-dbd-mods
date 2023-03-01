// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/MultipleMadSurvivorsQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultipleMadSurvivorsQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMultipleMadSurvivorsQEEvaluator::StaticRegisterNativesUMultipleMadSurvivorsQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_NoRegister()
	{
		return UMultipleMadSurvivorsQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__madSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__madSurvivors;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__madSurvivors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__requiredTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__requiredTier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultipleMadSurvivorsQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/MultipleMadSurvivorsQEEvaluator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__madSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultipleMadSurvivorsQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__madSurvivors = { "_madSurvivors", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipleMadSurvivorsQEEvaluator, _madSurvivors), METADATA_PARAMS(Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__madSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__madSurvivors_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__madSurvivors_ElementProp = { "_madSurvivors", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__requiredTier_MetaData[] = {
		{ "Category", "MultipleMadSurvivorsQEEvaluator" },
		{ "ModuleRelativePath", "Public/MultipleMadSurvivorsQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__requiredTier = { "_requiredTier", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipleMadSurvivorsQEEvaluator, _requiredTier), METADATA_PARAMS(Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__requiredTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__requiredTier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__madSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__madSurvivors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::NewProp__requiredTier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultipleMadSurvivorsQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::ClassParams = {
		&UMultipleMadSurvivorsQEEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultipleMadSurvivorsQEEvaluator, 1129896719);
	template<> ARCHIVES_API UClass* StaticClass<UMultipleMadSurvivorsQEEvaluator>()
	{
		return UMultipleMadSurvivorsQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultipleMadSurvivorsQEEvaluator(Z_Construct_UClass_UMultipleMadSurvivorsQEEvaluator, &UMultipleMadSurvivorsQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UMultipleMadSurvivorsQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultipleMadSurvivorsQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
