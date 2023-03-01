// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/LightbornAuraRevealEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightbornAuraRevealEffect() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_ULightbornAuraRevealEffect_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_ULightbornAuraRevealEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseLingeringStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void ULightbornAuraRevealEffect::StaticRegisterNativesULightbornAuraRevealEffect()
	{
	}
	UClass* Z_Construct_UClass_ULightbornAuraRevealEffect_NoRegister()
	{
		return ULightbornAuraRevealEffect::StaticClass();
	}
	struct Z_Construct_UClass_ULightbornAuraRevealEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightbornAuraRevealEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLingeringStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightbornAuraRevealEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightbornAuraRevealEffect.h" },
		{ "ModuleRelativePath", "Public/LightbornAuraRevealEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightbornAuraRevealEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightbornAuraRevealEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightbornAuraRevealEffect_Statics::ClassParams = {
		&ULightbornAuraRevealEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULightbornAuraRevealEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightbornAuraRevealEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightbornAuraRevealEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightbornAuraRevealEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightbornAuraRevealEffect, 3612918052);
	template<> THEHILLBILLY_API UClass* StaticClass<ULightbornAuraRevealEffect>()
	{
		return ULightbornAuraRevealEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightbornAuraRevealEffect(Z_Construct_UClass_ULightbornAuraRevealEffect, &ULightbornAuraRevealEffect::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("ULightbornAuraRevealEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightbornAuraRevealEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
