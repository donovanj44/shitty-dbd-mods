// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ApplicableActivationTimerRemainingIconStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplicableActivationTimerRemainingIconStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePerkIconStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UApplicableActivationTimerRemainingIconStrategy::StaticRegisterNativesUApplicableActivationTimerRemainingIconStrategy()
	{
	}
	UClass* Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_NoRegister()
	{
		return UApplicableActivationTimerRemainingIconStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePerkIconStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ApplicableActivationTimerRemainingIconStrategy.h" },
		{ "ModuleRelativePath", "Public/ApplicableActivationTimerRemainingIconStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplicableActivationTimerRemainingIconStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_Statics::ClassParams = {
		&UApplicableActivationTimerRemainingIconStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApplicableActivationTimerRemainingIconStrategy, 650987115);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UApplicableActivationTimerRemainingIconStrategy>()
	{
		return UApplicableActivationTimerRemainingIconStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApplicableActivationTimerRemainingIconStrategy(Z_Construct_UClass_UApplicableActivationTimerRemainingIconStrategy, &UApplicableActivationTimerRemainingIconStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UApplicableActivationTimerRemainingIconStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicableActivationTimerRemainingIconStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif