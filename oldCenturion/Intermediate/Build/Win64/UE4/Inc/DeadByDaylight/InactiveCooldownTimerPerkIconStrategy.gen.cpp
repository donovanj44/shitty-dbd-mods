// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InactiveCooldownTimerPerkIconStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInactiveCooldownTimerPerkIconStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePerkIconStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UInactiveCooldownTimerPerkIconStrategy::StaticRegisterNativesUInactiveCooldownTimerPerkIconStrategy()
	{
	}
	UClass* Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_NoRegister()
	{
		return UInactiveCooldownTimerPerkIconStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePerkIconStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InactiveCooldownTimerPerkIconStrategy.h" },
		{ "ModuleRelativePath", "Public/InactiveCooldownTimerPerkIconStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInactiveCooldownTimerPerkIconStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_Statics::ClassParams = {
		&UInactiveCooldownTimerPerkIconStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInactiveCooldownTimerPerkIconStrategy, 233423812);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInactiveCooldownTimerPerkIconStrategy>()
	{
		return UInactiveCooldownTimerPerkIconStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInactiveCooldownTimerPerkIconStrategy(Z_Construct_UClass_UInactiveCooldownTimerPerkIconStrategy, &UInactiveCooldownTimerPerkIconStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInactiveCooldownTimerPerkIconStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInactiveCooldownTimerPerkIconStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
