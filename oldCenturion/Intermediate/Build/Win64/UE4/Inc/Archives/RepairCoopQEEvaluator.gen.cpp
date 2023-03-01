// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/RepairCoopQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepairCoopQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_URepairCoopQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_URepairCoopQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void URepairCoopQEEvaluator::StaticRegisterNativesURepairCoopQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_URepairCoopQEEvaluator_NoRegister()
	{
		return URepairCoopQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_URepairCoopQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URepairCoopQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepairCoopQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RepairCoopQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/RepairCoopQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URepairCoopQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URepairCoopQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URepairCoopQEEvaluator_Statics::ClassParams = {
		&URepairCoopQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URepairCoopQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URepairCoopQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URepairCoopQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URepairCoopQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URepairCoopQEEvaluator, 667337938);
	template<> ARCHIVES_API UClass* StaticClass<URepairCoopQEEvaluator>()
	{
		return URepairCoopQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URepairCoopQEEvaluator(Z_Construct_UClass_URepairCoopQEEvaluator, &URepairCoopQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("URepairCoopQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URepairCoopQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
