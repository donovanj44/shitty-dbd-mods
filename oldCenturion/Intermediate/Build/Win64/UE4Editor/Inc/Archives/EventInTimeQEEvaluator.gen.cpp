// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/EventInTimeQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventInTimeQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UEventInTimeQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UEventInTimeQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UEventInTimeQEEvaluator::StaticRegisterNativesUEventInTimeQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UEventInTimeQEEvaluator_NoRegister()
	{
		return UEventInTimeQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UEventInTimeQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventInTimeQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventInTimeQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventInTimeQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/EventInTimeQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventInTimeQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventInTimeQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventInTimeQEEvaluator_Statics::ClassParams = {
		&UEventInTimeQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventInTimeQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventInTimeQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventInTimeQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventInTimeQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventInTimeQEEvaluator, 4182490144);
	template<> ARCHIVES_API UClass* StaticClass<UEventInTimeQEEvaluator>()
	{
		return UEventInTimeQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventInTimeQEEvaluator(Z_Construct_UClass_UEventInTimeQEEvaluator, &UEventInTimeQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UEventInTimeQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventInTimeQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
