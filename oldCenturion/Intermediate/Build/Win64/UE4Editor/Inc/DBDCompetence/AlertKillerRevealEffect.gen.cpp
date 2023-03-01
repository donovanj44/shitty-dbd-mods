// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/AlertKillerRevealEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlertKillerRevealEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAlertKillerRevealEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAlertKillerRevealEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UAlertKillerRevealEffect::StaticRegisterNativesUAlertKillerRevealEffect()
	{
	}
	UClass* Z_Construct_UClass_UAlertKillerRevealEffect_NoRegister()
	{
		return UAlertKillerRevealEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAlertKillerRevealEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlertKillerRevealEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlertKillerRevealEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AlertKillerRevealEffect.h" },
		{ "ModuleRelativePath", "Public/AlertKillerRevealEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlertKillerRevealEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlertKillerRevealEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAlertKillerRevealEffect_Statics::ClassParams = {
		&UAlertKillerRevealEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAlertKillerRevealEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlertKillerRevealEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlertKillerRevealEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAlertKillerRevealEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAlertKillerRevealEffect, 2910720164);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UAlertKillerRevealEffect>()
	{
		return UAlertKillerRevealEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAlertKillerRevealEffect(Z_Construct_UClass_UAlertKillerRevealEffect, &UAlertKillerRevealEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UAlertKillerRevealEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlertKillerRevealEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
