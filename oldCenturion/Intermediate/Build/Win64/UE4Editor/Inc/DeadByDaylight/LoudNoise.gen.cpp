// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoudNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoudNoise() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALoudNoise_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALoudNoise();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
// End Cross Module References
	void ALoudNoise::StaticRegisterNativesALoudNoise()
	{
	}
	UClass* Z_Construct_UClass_ALoudNoise_NoRegister()
	{
		return ALoudNoise::StaticClass();
	}
	struct Z_Construct_UClass_ALoudNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraDecalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cameraDecalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loudNoiseDecalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__loudNoiseDecalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__heightToAddToLoudNoiseLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__heightToAddToLoudNoiseLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loudNoiseLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__loudNoiseLifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loudNoiseMinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__loudNoiseMinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ak_audio_loudNoise_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ak_audio_loudNoise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distortionParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__distortionParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__toInfinityDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__toInfinityDecal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALoudNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoudNoise.h" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::NewProp__cameraDecalDistance_MetaData[] = {
		{ "Category", "LoudNoise" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALoudNoise_Statics::NewProp__cameraDecalDistance = { "_cameraDecalDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoudNoise, _cameraDecalDistance), METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::NewProp__cameraDecalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::NewProp__cameraDecalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseDecalDistance_MetaData[] = {
		{ "Category", "LoudNoise" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseDecalDistance = { "_loudNoiseDecalDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoudNoise, _loudNoiseDecalDistance), METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseDecalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseDecalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::NewProp__heightToAddToLoudNoiseLocation_MetaData[] = {
		{ "Category", "LoudNoise" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALoudNoise_Statics::NewProp__heightToAddToLoudNoiseLocation = { "_heightToAddToLoudNoiseLocation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoudNoise, _heightToAddToLoudNoiseLocation), METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::NewProp__heightToAddToLoudNoiseLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::NewProp__heightToAddToLoudNoiseLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseLifetime_MetaData[] = {
		{ "Category", "LoudNoise" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseLifetime = { "_loudNoiseLifetime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoudNoise, _loudNoiseLifetime), METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseLifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseMinDistance_MetaData[] = {
		{ "Category", "LoudNoise" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseMinDistance = { "_loudNoiseMinDistance", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoudNoise, _loudNoiseMinDistance), METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseMinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseMinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::NewProp__rootScene_MetaData[] = {
		{ "Category", "LoudNoise" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALoudNoise_Statics::NewProp__rootScene = { "_rootScene", nullptr, (EPropertyFlags)0x002008000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoudNoise, _rootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::NewProp__rootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::NewProp__rootScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::NewProp__ak_audio_loudNoise_MetaData[] = {
		{ "Category", "LoudNoise" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALoudNoise_Statics::NewProp__ak_audio_loudNoise = { "_ak_audio_loudNoise", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoudNoise, _ak_audio_loudNoise), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::NewProp__ak_audio_loudNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::NewProp__ak_audio_loudNoise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::NewProp__distortionParticleSystem_MetaData[] = {
		{ "Category", "LoudNoise" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALoudNoise_Statics::NewProp__distortionParticleSystem = { "_distortionParticleSystem", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoudNoise, _distortionParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::NewProp__distortionParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::NewProp__distortionParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoudNoise_Statics::NewProp__toInfinityDecal_MetaData[] = {
		{ "Category", "LoudNoise" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoudNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALoudNoise_Statics::NewProp__toInfinityDecal = { "_toInfinityDecal", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoudNoise, _toInfinityDecal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::NewProp__toInfinityDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::NewProp__toInfinityDecal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALoudNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoudNoise_Statics::NewProp__cameraDecalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseDecalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoudNoise_Statics::NewProp__heightToAddToLoudNoiseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoudNoise_Statics::NewProp__loudNoiseMinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoudNoise_Statics::NewProp__rootScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoudNoise_Statics::NewProp__ak_audio_loudNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoudNoise_Statics::NewProp__distortionParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoudNoise_Statics::NewProp__toInfinityDecal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALoudNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALoudNoise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALoudNoise_Statics::ClassParams = {
		&ALoudNoise::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALoudNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALoudNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALoudNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALoudNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALoudNoise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALoudNoise, 2445449086);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ALoudNoise>()
	{
		return ALoudNoise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALoudNoise(Z_Construct_UClass_ALoudNoise, &ALoudNoise::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ALoudNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALoudNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
