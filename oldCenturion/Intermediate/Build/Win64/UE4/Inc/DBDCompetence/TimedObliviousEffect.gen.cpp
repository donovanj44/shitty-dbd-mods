// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/TimedObliviousEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimedObliviousEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UTimedObliviousEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UTimedObliviousEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UObliviousEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UTimedObliviousEffect::StaticRegisterNativesUTimedObliviousEffect()
	{
	}
	UClass* Z_Construct_UClass_UTimedObliviousEffect_NoRegister()
	{
		return UTimedObliviousEffect::StaticClass();
	}
	struct Z_Construct_UClass_UTimedObliviousEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimedObliviousEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObliviousEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedObliviousEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimedObliviousEffect.h" },
		{ "ModuleRelativePath", "Public/TimedObliviousEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimedObliviousEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimedObliviousEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimedObliviousEffect_Statics::ClassParams = {
		&UTimedObliviousEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimedObliviousEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedObliviousEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimedObliviousEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimedObliviousEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimedObliviousEffect, 130048237);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UTimedObliviousEffect>()
	{
		return UTimedObliviousEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimedObliviousEffect(Z_Construct_UClass_UTimedObliviousEffect, &UTimedObliviousEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UTimedObliviousEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimedObliviousEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
