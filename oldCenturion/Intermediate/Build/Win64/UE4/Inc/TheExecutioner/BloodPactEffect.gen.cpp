// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/BloodPactEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodPactEffect() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UBloodPactEffect_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UBloodPactEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	void UBloodPactEffect::StaticRegisterNativesUBloodPactEffect()
	{
	}
	UClass* Z_Construct_UClass_UBloodPactEffect_NoRegister()
	{
		return UBloodPactEffect::StaticClass();
	}
	struct Z_Construct_UClass_UBloodPactEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodPactEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPactEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodPactEffect.h" },
		{ "ModuleRelativePath", "Public/BloodPactEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodPactEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodPactEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodPactEffect_Statics::ClassParams = {
		&UBloodPactEffect::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodPactEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPactEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodPactEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodPactEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodPactEffect, 1598708193);
	template<> THEEXECUTIONER_API UClass* StaticClass<UBloodPactEffect>()
	{
		return UBloodPactEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodPactEffect(Z_Construct_UClass_UBloodPactEffect, &UBloodPactEffect::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UBloodPactEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodPactEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
