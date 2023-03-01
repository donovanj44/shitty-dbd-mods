// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorHitSprintEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorHitSprintEffect() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorHitSprintEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorHitSprintEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void USurvivorHitSprintEffect::StaticRegisterNativesUSurvivorHitSprintEffect()
	{
	}
	UClass* Z_Construct_UClass_USurvivorHitSprintEffect_NoRegister()
	{
		return USurvivorHitSprintEffect::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorHitSprintEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorHitSprintEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorHitSprintEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorHitSprintEffect.h" },
		{ "ModuleRelativePath", "Public/SurvivorHitSprintEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorHitSprintEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorHitSprintEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorHitSprintEffect_Statics::ClassParams = {
		&USurvivorHitSprintEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USurvivorHitSprintEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorHitSprintEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorHitSprintEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorHitSprintEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorHitSprintEffect, 985139436);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USurvivorHitSprintEffect>()
	{
		return USurvivorHitSprintEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorHitSprintEffect(Z_Construct_UClass_USurvivorHitSprintEffect, &USurvivorHitSprintEffect::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USurvivorHitSprintEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorHitSprintEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
