// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ApplicableActivationTimerElapsedIconStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplicableActivationTimerElapsedIconStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePerkIconStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UApplicableActivationTimerElapsedIconStrategy::StaticRegisterNativesUApplicableActivationTimerElapsedIconStrategy()
	{
	}
	UClass* Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_NoRegister()
	{
		return UApplicableActivationTimerElapsedIconStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePerkIconStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ApplicableActivationTimerElapsedIconStrategy.h" },
		{ "ModuleRelativePath", "Public/ApplicableActivationTimerElapsedIconStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplicableActivationTimerElapsedIconStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_Statics::ClassParams = {
		&UApplicableActivationTimerElapsedIconStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApplicableActivationTimerElapsedIconStrategy, 2158696543);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UApplicableActivationTimerElapsedIconStrategy>()
	{
		return UApplicableActivationTimerElapsedIconStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApplicableActivationTimerElapsedIconStrategy(Z_Construct_UClass_UApplicableActivationTimerElapsedIconStrategy, &UApplicableActivationTimerElapsedIconStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UApplicableActivationTimerElapsedIconStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicableActivationTimerElapsedIconStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
