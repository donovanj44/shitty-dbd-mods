// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/ItemPerformedPercentQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemPerformedPercentQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UItemPerformedPercentQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UItemPerformedPercentQEEvaluator();
	ARCHIVES_API UClass* Z_Construct_UClass_UItemPerformedQEEvaluator();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UItemPerformedPercentQEEvaluator::StaticRegisterNativesUItemPerformedPercentQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UItemPerformedPercentQEEvaluator_NoRegister()
	{
		return UItemPerformedPercentQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UItemPerformedPercentQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemPerformedPercentQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemPerformedQEEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemPerformedPercentQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemPerformedPercentQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/ItemPerformedPercentQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemPerformedPercentQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemPerformedPercentQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemPerformedPercentQEEvaluator_Statics::ClassParams = {
		&UItemPerformedPercentQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UItemPerformedPercentQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemPerformedPercentQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemPerformedPercentQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemPerformedPercentQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemPerformedPercentQEEvaluator, 959778738);
	template<> ARCHIVES_API UClass* StaticClass<UItemPerformedPercentQEEvaluator>()
	{
		return UItemPerformedPercentQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemPerformedPercentQEEvaluator(Z_Construct_UClass_UItemPerformedPercentQEEvaluator, &UItemPerformedPercentQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UItemPerformedPercentQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemPerformedPercentQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
