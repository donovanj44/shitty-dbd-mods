// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/KillerConditionalSpeedCurveEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerConditionalSpeedCurveEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UKillerConditionalSpeedCurveEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UKillerConditionalSpeedCurveEffect::StaticRegisterNativesUKillerConditionalSpeedCurveEffect()
	{
	}
	UClass* Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_NoRegister()
	{
		return UKillerConditionalSpeedCurveEffect::StaticClass();
	}
	struct Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__speedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerConditionalSpeedCurveEffect.h" },
		{ "ModuleRelativePath", "Public/KillerConditionalSpeedCurveEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::NewProp__speedCurve_MetaData[] = {
		{ "Category", "KillerConditionalSpeedCurveEffect" },
		{ "ModuleRelativePath", "Public/KillerConditionalSpeedCurveEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::NewProp__speedCurve = { "_speedCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerConditionalSpeedCurveEffect, _speedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::NewProp__speedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::NewProp__speedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::NewProp__speedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerConditionalSpeedCurveEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::ClassParams = {
		&UKillerConditionalSpeedCurveEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerConditionalSpeedCurveEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerConditionalSpeedCurveEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerConditionalSpeedCurveEffect, 1890224897);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UKillerConditionalSpeedCurveEffect>()
	{
		return UKillerConditionalSpeedCurveEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerConditionalSpeedCurveEffect(Z_Construct_UClass_UKillerConditionalSpeedCurveEffect, &UKillerConditionalSpeedCurveEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UKillerConditionalSpeedCurveEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerConditionalSpeedCurveEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
