// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/PreventKOEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreventKOEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UPreventKOEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UPreventKOEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UPreventKOEffect::StaticRegisterNativesUPreventKOEffect()
	{
	}
	UClass* Z_Construct_UClass_UPreventKOEffect_NoRegister()
	{
		return UPreventKOEffect::StaticClass();
	}
	struct Z_Construct_UClass_UPreventKOEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreventKOEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreventKOEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PreventKOEffect.h" },
		{ "ModuleRelativePath", "Public/PreventKOEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreventKOEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreventKOEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPreventKOEffect_Statics::ClassParams = {
		&UPreventKOEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPreventKOEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPreventKOEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreventKOEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPreventKOEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPreventKOEffect, 3165193787);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UPreventKOEffect>()
	{
		return UPreventKOEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPreventKOEffect(Z_Construct_UClass_UPreventKOEffect, &UPreventKOEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UPreventKOEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreventKOEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
