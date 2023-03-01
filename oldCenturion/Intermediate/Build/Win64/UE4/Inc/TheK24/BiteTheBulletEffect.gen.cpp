// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/BiteTheBulletEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiteTheBulletEffect() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UBiteTheBulletEffect_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UBiteTheBulletEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseLingeringStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UBiteTheBulletEffect::StaticRegisterNativesUBiteTheBulletEffect()
	{
	}
	UClass* Z_Construct_UClass_UBiteTheBulletEffect_NoRegister()
	{
		return UBiteTheBulletEffect::StaticClass();
	}
	struct Z_Construct_UClass_UBiteTheBulletEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBiteTheBulletEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLingeringStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiteTheBulletEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BiteTheBulletEffect.h" },
		{ "ModuleRelativePath", "Public/BiteTheBulletEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBiteTheBulletEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBiteTheBulletEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBiteTheBulletEffect_Statics::ClassParams = {
		&UBiteTheBulletEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBiteTheBulletEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBiteTheBulletEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBiteTheBulletEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBiteTheBulletEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBiteTheBulletEffect, 715065723);
	template<> THEK24_API UClass* StaticClass<UBiteTheBulletEffect>()
	{
		return UBiteTheBulletEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBiteTheBulletEffect(Z_Construct_UClass_UBiteTheBulletEffect, &UBiteTheBulletEffect::StaticClass, TEXT("/Script/TheK24"), TEXT("UBiteTheBulletEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBiteTheBulletEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
