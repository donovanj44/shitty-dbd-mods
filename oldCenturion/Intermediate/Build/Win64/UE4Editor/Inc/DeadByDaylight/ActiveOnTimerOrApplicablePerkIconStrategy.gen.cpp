// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActiveOnTimerOrApplicablePerkIconStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveOnTimerOrApplicablePerkIconStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePerkIconStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UActiveOnTimerOrApplicablePerkIconStrategy::StaticRegisterNativesUActiveOnTimerOrApplicablePerkIconStrategy()
	{
	}
	UClass* Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_NoRegister()
	{
		return UActiveOnTimerOrApplicablePerkIconStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePerkIconStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActiveOnTimerOrApplicablePerkIconStrategy.h" },
		{ "ModuleRelativePath", "Public/ActiveOnTimerOrApplicablePerkIconStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActiveOnTimerOrApplicablePerkIconStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_Statics::ClassParams = {
		&UActiveOnTimerOrApplicablePerkIconStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActiveOnTimerOrApplicablePerkIconStrategy, 1613780856);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActiveOnTimerOrApplicablePerkIconStrategy>()
	{
		return UActiveOnTimerOrApplicablePerkIconStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActiveOnTimerOrApplicablePerkIconStrategy(Z_Construct_UClass_UActiveOnTimerOrApplicablePerkIconStrategy, &UActiveOnTimerOrApplicablePerkIconStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActiveOnTimerOrApplicablePerkIconStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActiveOnTimerOrApplicablePerkIconStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
