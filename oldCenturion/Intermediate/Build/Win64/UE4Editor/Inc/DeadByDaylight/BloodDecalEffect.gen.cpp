// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodDecalEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodDecalEffect() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodDecalEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodDecalEffect();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodDecalEffectIntensity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UBloodDecalEffect::StaticRegisterNativesUBloodDecalEffect()
	{
	}
	UClass* Z_Construct_UClass_UBloodDecalEffect_NoRegister()
	{
		return UBloodDecalEffect::StaticClass();
	}
	struct Z_Construct_UClass_UBloodDecalEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefalultDecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefalultDecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodDecalEffectIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodDecalEffectIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableVisualEffects_MetaData[];
#endif
		static void NewProp_EnableVisualEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableVisualEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyTimelineCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyTimelineCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTimelineCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationTimelineCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodDecalEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodDecalEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodDecalEffect.h" },
		{ "ModuleRelativePath", "Public/BloodDecalEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DefalultDecalMaterial_MetaData[] = {
		{ "Category", "BloodDecalEffect" },
		{ "ModuleRelativePath", "Public/BloodDecalEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DefalultDecalMaterial = { "DefalultDecalMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodDecalEffect, DefalultDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DefalultDecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DefalultDecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_ColorInterpolationSpeed_MetaData[] = {
		{ "Category", "BloodDecalEffect" },
		{ "ModuleRelativePath", "Public/BloodDecalEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_ColorInterpolationSpeed = { "ColorInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodDecalEffect, ColorInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_ColorInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_ColorInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_BloodDecalEffectIntensity_MetaData[] = {
		{ "Category", "BloodDecalEffect" },
		{ "ModuleRelativePath", "Public/BloodDecalEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_BloodDecalEffectIntensity = { "BloodDecalEffectIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodDecalEffect, BloodDecalEffectIntensity), Z_Construct_UClass_UBloodDecalEffectIntensity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_BloodDecalEffectIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_BloodDecalEffectIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_EnableVisualEffects_MetaData[] = {
		{ "Category", "BloodDecalEffect" },
		{ "ModuleRelativePath", "Public/BloodDecalEffect.h" },
	};
#endif
	void Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_EnableVisualEffects_SetBit(void* Obj)
	{
		((UBloodDecalEffect*)Obj)->EnableVisualEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_EnableVisualEffects = { "EnableVisualEffects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBloodDecalEffect), &Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_EnableVisualEffects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_EnableVisualEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_EnableVisualEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "BloodDecalEffect" },
		{ "ModuleRelativePath", "Public/BloodDecalEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodDecalEffect, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "BloodDecalEffect" },
		{ "ModuleRelativePath", "Public/BloodDecalEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodDecalEffect, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DestroyTimelineCurve_MetaData[] = {
		{ "Category", "BloodDecalEffect" },
		{ "ModuleRelativePath", "Public/BloodDecalEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DestroyTimelineCurve = { "DestroyTimelineCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodDecalEffect, DestroyTimelineCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DestroyTimelineCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DestroyTimelineCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_AnimationTimelineCurve_MetaData[] = {
		{ "Category", "BloodDecalEffect" },
		{ "ModuleRelativePath", "Public/BloodDecalEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_AnimationTimelineCurve = { "AnimationTimelineCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodDecalEffect, AnimationTimelineCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_AnimationTimelineCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_AnimationTimelineCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodDecalEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DefalultDecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_ColorInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_BloodDecalEffectIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_EnableVisualEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_Textures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_DestroyTimelineCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalEffect_Statics::NewProp_AnimationTimelineCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodDecalEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodDecalEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodDecalEffect_Statics::ClassParams = {
		&UBloodDecalEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBloodDecalEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodDecalEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodDecalEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodDecalEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodDecalEffect, 2661389871);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBloodDecalEffect>()
	{
		return UBloodDecalEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodDecalEffect(Z_Construct_UClass_UBloodDecalEffect, &UBloodDecalEffect::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBloodDecalEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodDecalEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
