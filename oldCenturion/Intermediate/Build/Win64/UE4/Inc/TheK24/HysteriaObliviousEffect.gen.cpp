// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/HysteriaObliviousEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHysteriaObliviousEffect() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UHysteriaObliviousEffect_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UHysteriaObliviousEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UTimedObliviousEffect();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UHysteriaObliviousEffect::StaticRegisterNativesUHysteriaObliviousEffect()
	{
	}
	UClass* Z_Construct_UClass_UHysteriaObliviousEffect_NoRegister()
	{
		return UHysteriaObliviousEffect::StaticClass();
	}
	struct Z_Construct_UClass_UHysteriaObliviousEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHysteriaObliviousEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimedObliviousEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHysteriaObliviousEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HysteriaObliviousEffect.h" },
		{ "ModuleRelativePath", "Public/HysteriaObliviousEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHysteriaObliviousEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHysteriaObliviousEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHysteriaObliviousEffect_Statics::ClassParams = {
		&UHysteriaObliviousEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHysteriaObliviousEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHysteriaObliviousEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHysteriaObliviousEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHysteriaObliviousEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHysteriaObliviousEffect, 1085457090);
	template<> THEK24_API UClass* StaticClass<UHysteriaObliviousEffect>()
	{
		return UHysteriaObliviousEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHysteriaObliviousEffect(Z_Construct_UClass_UHysteriaObliviousEffect, &UHysteriaObliviousEffect::StaticClass, TEXT("/Script/TheK24"), TEXT("UHysteriaObliviousEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHysteriaObliviousEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
