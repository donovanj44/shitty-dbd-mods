// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/MultipleEventsInTimeFrameQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultipleEventsInTimeFrameQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UMultipleEventsInTimeFrameQEEvaluator::StaticRegisterNativesUMultipleEventsInTimeFrameQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_NoRegister()
	{
		return UMultipleEventsInTimeFrameQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultipleEventsInTimeFrameQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/MultipleEventsInTimeFrameQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultipleEventsInTimeFrameQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_Statics::ClassParams = {
		&UMultipleEventsInTimeFrameQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultipleEventsInTimeFrameQEEvaluator, 769037979);
	template<> ARCHIVES_API UClass* StaticClass<UMultipleEventsInTimeFrameQEEvaluator>()
	{
		return UMultipleEventsInTimeFrameQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultipleEventsInTimeFrameQEEvaluator(Z_Construct_UClass_UMultipleEventsInTimeFrameQEEvaluator, &UMultipleEventsInTimeFrameQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UMultipleEventsInTimeFrameQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultipleEventsInTimeFrameQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
