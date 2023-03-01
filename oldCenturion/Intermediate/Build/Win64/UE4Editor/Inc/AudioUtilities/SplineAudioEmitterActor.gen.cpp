// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioUtilities/Public/SplineAudioEmitterActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineAudioEmitterActor() {}
// Cross Module References
	AUDIOUTILITIES_API UClass* Z_Construct_UClass_ASplineAudioEmitterActor_NoRegister();
	AUDIOUTILITIES_API UClass* Z_Construct_UClass_ASplineAudioEmitterActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AudioUtilities();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ASplineAudioEmitterActor::StaticRegisterNativesASplineAudioEmitterActor()
	{
	}
	UClass* Z_Construct_UClass_ASplineAudioEmitterActor_NoRegister()
	{
		return ASplineAudioEmitterActor::StaticClass();
	}
	struct Z_Construct_UClass_ASplineAudioEmitterActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__emitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__emitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__theSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__theSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineAudioEmitterActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineAudioEmitterActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineAudioEmitterActor.h" },
		{ "ModuleRelativePath", "Public/SplineAudioEmitterActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__emitter_MetaData[] = {
		{ "Category", "SplineAudioEmitterActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineAudioEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__emitter = { "_emitter", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineAudioEmitterActor, _emitter), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__emitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__emitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__theSpline_MetaData[] = {
		{ "Category", "SplineAudioEmitterActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineAudioEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__theSpline = { "_theSpline", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineAudioEmitterActor, _theSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__theSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__theSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__root_MetaData[] = {
		{ "Category", "SplineAudioEmitterActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineAudioEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__root = { "_root", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineAudioEmitterActor, _root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineAudioEmitterActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__emitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__theSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineAudioEmitterActor_Statics::NewProp__root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineAudioEmitterActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineAudioEmitterActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplineAudioEmitterActor_Statics::ClassParams = {
		&ASplineAudioEmitterActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASplineAudioEmitterActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASplineAudioEmitterActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASplineAudioEmitterActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineAudioEmitterActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineAudioEmitterActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASplineAudioEmitterActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASplineAudioEmitterActor, 1087056815);
	template<> AUDIOUTILITIES_API UClass* StaticClass<ASplineAudioEmitterActor>()
	{
		return ASplineAudioEmitterActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplineAudioEmitterActor(Z_Construct_UClass_ASplineAudioEmitterActor, &ASplineAudioEmitterActor::StaticClass, TEXT("/Script/AudioUtilities"), TEXT("ASplineAudioEmitterActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineAudioEmitterActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
