// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/IncreaseZombiesSpeedStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIncreaseZombiesSpeedStatusEffect() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UIncreaseZombiesSpeedStatusEffect::StaticRegisterNativesUIncreaseZombiesSpeedStatusEffect()
	{
	}
	UClass* Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_NoRegister()
	{
		return UIncreaseZombiesSpeedStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieSpeedAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__zombieSpeedAdditive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IncreaseZombiesSpeedStatusEffect.h" },
		{ "ModuleRelativePath", "Public/IncreaseZombiesSpeedStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::NewProp__zombieSpeedAdditive_MetaData[] = {
		{ "Category", "IncreaseZombiesSpeedStatusEffect" },
		{ "ModuleRelativePath", "Public/IncreaseZombiesSpeedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::NewProp__zombieSpeedAdditive = { "_zombieSpeedAdditive", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIncreaseZombiesSpeedStatusEffect, _zombieSpeedAdditive), METADATA_PARAMS(Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::NewProp__zombieSpeedAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::NewProp__zombieSpeedAdditive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::NewProp__zombieSpeedAdditive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIncreaseZombiesSpeedStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::ClassParams = {
		&UIncreaseZombiesSpeedStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIncreaseZombiesSpeedStatusEffect, 1108233154);
	template<> THEK24_API UClass* StaticClass<UIncreaseZombiesSpeedStatusEffect>()
	{
		return UIncreaseZombiesSpeedStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIncreaseZombiesSpeedStatusEffect(Z_Construct_UClass_UIncreaseZombiesSpeedStatusEffect, &UIncreaseZombiesSpeedStatusEffect::StaticClass, TEXT("/Script/TheK24"), TEXT("UIncreaseZombiesSpeedStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIncreaseZombiesSpeedStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
