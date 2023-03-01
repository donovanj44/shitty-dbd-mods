// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/GeneratorsNeededCountQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorsNeededCountQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator();
	ARCHIVES_API UClass* Z_Construct_UClass_UEndOfGameQEEvaluator();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UGeneratorsNeededCountQEEvaluator::StaticRegisterNativesUGeneratorsNeededCountQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_NoRegister()
	{
		return UGeneratorsNeededCountQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEndOfGameQEEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorsNeededCountQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/GeneratorsNeededCountQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorsNeededCountQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_Statics::ClassParams = {
		&UGeneratorsNeededCountQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneratorsNeededCountQEEvaluator, 831798282);
	template<> ARCHIVES_API UClass* StaticClass<UGeneratorsNeededCountQEEvaluator>()
	{
		return UGeneratorsNeededCountQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneratorsNeededCountQEEvaluator(Z_Construct_UClass_UGeneratorsNeededCountQEEvaluator, &UGeneratorsNeededCountQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UGeneratorsNeededCountQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorsNeededCountQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
