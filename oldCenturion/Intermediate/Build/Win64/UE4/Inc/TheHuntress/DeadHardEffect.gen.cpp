// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/DeadHardEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadHardEffect() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_UDeadHardEffect_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_UDeadHardEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
// End Cross Module References
	void UDeadHardEffect::StaticRegisterNativesUDeadHardEffect()
	{
	}
	UClass* Z_Construct_UClass_UDeadHardEffect_NoRegister()
	{
		return UDeadHardEffect::StaticClass();
	}
	struct Z_Construct_UClass_UDeadHardEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeadHardEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadHardEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeadHardEffect.h" },
		{ "ModuleRelativePath", "Public/DeadHardEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeadHardEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadHardEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeadHardEffect_Statics::ClassParams = {
		&UDeadHardEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDeadHardEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadHardEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeadHardEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeadHardEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeadHardEffect, 1432017471);
	template<> THEHUNTRESS_API UClass* StaticClass<UDeadHardEffect>()
	{
		return UDeadHardEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeadHardEffect(Z_Construct_UClass_UDeadHardEffect, &UDeadHardEffect::StaticClass, TEXT("/Script/TheHuntress"), TEXT("UDeadHardEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadHardEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
