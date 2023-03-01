// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/HookSameTimeBasementQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHookSameTimeBasementQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UHookSameTimeBasementQEEvaluator();
	ARCHIVES_API UClass* Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UHookSameTimeBasementQEEvaluator::StaticRegisterNativesUHookSameTimeBasementQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_NoRegister()
	{
		return UHookSameTimeBasementQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HookSameTimeBasementQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/HookSameTimeBasementQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHookSameTimeBasementQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_Statics::ClassParams = {
		&UHookSameTimeBasementQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHookSameTimeBasementQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHookSameTimeBasementQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHookSameTimeBasementQEEvaluator, 256385873);
	template<> ARCHIVES_API UClass* StaticClass<UHookSameTimeBasementQEEvaluator>()
	{
		return UHookSameTimeBasementQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHookSameTimeBasementQEEvaluator(Z_Construct_UClass_UHookSameTimeBasementQEEvaluator, &UHookSameTimeBasementQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UHookSameTimeBasementQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHookSameTimeBasementQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
