// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/TimedStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimedStatusEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UTimedStatusEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UTimedStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UTimedStatusEffect::StaticRegisterNativesUTimedStatusEffect()
	{
	}
	UClass* Z_Construct_UClass_UTimedStatusEffect_NoRegister()
	{
		return UTimedStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UTimedStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimedStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimedStatusEffect.h" },
		{ "ModuleRelativePath", "Public/TimedStatusEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimedStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimedStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimedStatusEffect_Statics::ClassParams = {
		&UTimedStatusEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimedStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimedStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimedStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimedStatusEffect, 4017888596);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UTimedStatusEffect>()
	{
		return UTimedStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimedStatusEffect(Z_Construct_UClass_UTimedStatusEffect, &UTimedStatusEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UTimedStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimedStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
