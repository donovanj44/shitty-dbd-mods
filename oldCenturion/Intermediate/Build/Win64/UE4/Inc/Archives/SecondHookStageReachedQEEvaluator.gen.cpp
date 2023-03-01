// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/SecondHookStageReachedQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondHookStageReachedQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_USecondHookStageReachedQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_USecondHookStageReachedQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void USecondHookStageReachedQEEvaluator::StaticRegisterNativesUSecondHookStageReachedQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_USecondHookStageReachedQEEvaluator_NoRegister()
	{
		return USecondHookStageReachedQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_USecondHookStageReachedQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USecondHookStageReachedQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondHookStageReachedQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SecondHookStageReachedQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/SecondHookStageReachedQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USecondHookStageReachedQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondHookStageReachedQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USecondHookStageReachedQEEvaluator_Statics::ClassParams = {
		&USecondHookStageReachedQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USecondHookStageReachedQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USecondHookStageReachedQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USecondHookStageReachedQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USecondHookStageReachedQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USecondHookStageReachedQEEvaluator, 918384246);
	template<> ARCHIVES_API UClass* StaticClass<USecondHookStageReachedQEEvaluator>()
	{
		return USecondHookStageReachedQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USecondHookStageReachedQEEvaluator(Z_Construct_UClass_USecondHookStageReachedQEEvaluator, &USecondHookStageReachedQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("USecondHookStageReachedQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USecondHookStageReachedQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
