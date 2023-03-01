// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DeadMansSwitchEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadMansSwitchEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDeadMansSwitchEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDeadMansSwitchEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UDeadMansSwitchEffect::StaticRegisterNativesUDeadMansSwitchEffect()
	{
	}
	UClass* Z_Construct_UClass_UDeadMansSwitchEffect_NoRegister()
	{
		return UDeadMansSwitchEffect::StaticClass();
	}
	struct Z_Construct_UClass_UDeadMansSwitchEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeadMansSwitchEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadMansSwitchEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeadMansSwitchEffect.h" },
		{ "ModuleRelativePath", "Public/DeadMansSwitchEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeadMansSwitchEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadMansSwitchEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeadMansSwitchEffect_Statics::ClassParams = {
		&UDeadMansSwitchEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDeadMansSwitchEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadMansSwitchEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeadMansSwitchEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeadMansSwitchEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeadMansSwitchEffect, 2791629589);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDeadMansSwitchEffect>()
	{
		return UDeadMansSwitchEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeadMansSwitchEffect(Z_Construct_UClass_UDeadMansSwitchEffect, &UDeadMansSwitchEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDeadMansSwitchEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadMansSwitchEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
