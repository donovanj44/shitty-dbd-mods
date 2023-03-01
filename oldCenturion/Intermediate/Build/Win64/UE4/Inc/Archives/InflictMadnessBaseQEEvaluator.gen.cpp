// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/InflictMadnessBaseQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInflictMadnessBaseQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UInflictMadnessBaseQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UInflictMadnessBaseQEEvaluator::StaticRegisterNativesUInflictMadnessBaseQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_NoRegister()
	{
		return UInflictMadnessBaseQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__requiredTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__requiredTier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InflictMadnessBaseQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/InflictMadnessBaseQEEvaluator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::NewProp__requiredTier_MetaData[] = {
		{ "Category", "InflictMadnessBaseQEEvaluator" },
		{ "ModuleRelativePath", "Public/InflictMadnessBaseQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::NewProp__requiredTier = { "_requiredTier", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInflictMadnessBaseQEEvaluator, _requiredTier), METADATA_PARAMS(Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::NewProp__requiredTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::NewProp__requiredTier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::NewProp__requiredTier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInflictMadnessBaseQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::ClassParams = {
		&UInflictMadnessBaseQEEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInflictMadnessBaseQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInflictMadnessBaseQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInflictMadnessBaseQEEvaluator, 2583942261);
	template<> ARCHIVES_API UClass* StaticClass<UInflictMadnessBaseQEEvaluator>()
	{
		return UInflictMadnessBaseQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInflictMadnessBaseQEEvaluator(Z_Construct_UClass_UInflictMadnessBaseQEEvaluator, &UInflictMadnessBaseQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UInflictMadnessBaseQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInflictMadnessBaseQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
