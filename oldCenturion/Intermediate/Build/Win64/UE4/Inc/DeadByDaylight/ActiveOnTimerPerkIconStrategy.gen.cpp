// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActiveOnTimerPerkIconStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveOnTimerPerkIconStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActiveOnTimerPerkIconStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePerkIconStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UActiveOnTimerPerkIconStrategy::StaticRegisterNativesUActiveOnTimerPerkIconStrategy()
	{
	}
	UClass* Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_NoRegister()
	{
		return UActiveOnTimerPerkIconStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePerkIconStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActiveOnTimerPerkIconStrategy.h" },
		{ "ModuleRelativePath", "Public/ActiveOnTimerPerkIconStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActiveOnTimerPerkIconStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_Statics::ClassParams = {
		&UActiveOnTimerPerkIconStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActiveOnTimerPerkIconStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActiveOnTimerPerkIconStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActiveOnTimerPerkIconStrategy, 2769991850);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActiveOnTimerPerkIconStrategy>()
	{
		return UActiveOnTimerPerkIconStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActiveOnTimerPerkIconStrategy(Z_Construct_UClass_UActiveOnTimerPerkIconStrategy, &UActiveOnTimerPerkIconStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActiveOnTimerPerkIconStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActiveOnTimerPerkIconStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
