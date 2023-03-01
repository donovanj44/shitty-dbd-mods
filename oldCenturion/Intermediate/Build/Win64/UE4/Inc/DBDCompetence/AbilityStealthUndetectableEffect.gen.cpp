// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/AbilityStealthUndetectableEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityStealthUndetectableEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAbilityStealthUndetectableEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAbilityStealthUndetectableEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UTimedStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UAbilityStealthUndetectableEffect::StaticRegisterNativesUAbilityStealthUndetectableEffect()
	{
	}
	UClass* Z_Construct_UClass_UAbilityStealthUndetectableEffect_NoRegister()
	{
		return UAbilityStealthUndetectableEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityStealthUndetectableEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityStealthUndetectableEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimedStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityStealthUndetectableEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityStealthUndetectableEffect.h" },
		{ "ModuleRelativePath", "Public/AbilityStealthUndetectableEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityStealthUndetectableEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityStealthUndetectableEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilityStealthUndetectableEffect_Statics::ClassParams = {
		&UAbilityStealthUndetectableEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAbilityStealthUndetectableEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityStealthUndetectableEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityStealthUndetectableEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilityStealthUndetectableEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilityStealthUndetectableEffect, 553940199);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UAbilityStealthUndetectableEffect>()
	{
		return UAbilityStealthUndetectableEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilityStealthUndetectableEffect(Z_Construct_UClass_UAbilityStealthUndetectableEffect, &UAbilityStealthUndetectableEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UAbilityStealthUndetectableEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityStealthUndetectableEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
