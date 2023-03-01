// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/SleepingSkinnedMeshRegisterer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSleepingSkinnedMeshRegisterer() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingSkinnedMeshRegisterer_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingSkinnedMeshRegisterer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
// End Cross Module References
	void USleepingSkinnedMeshRegisterer::StaticRegisterNativesUSleepingSkinnedMeshRegisterer()
	{
	}
	UClass* Z_Construct_UClass_USleepingSkinnedMeshRegisterer_NoRegister()
	{
		return USleepingSkinnedMeshRegisterer::StaticClass();
	}
	struct Z_Construct_UClass_USleepingSkinnedMeshRegisterer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USleepingSkinnedMeshRegisterer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USleepingSkinnedMeshRegisterer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SleepingSkinnedMeshRegisterer.h" },
		{ "ModuleRelativePath", "Public/SleepingSkinnedMeshRegisterer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USleepingSkinnedMeshRegisterer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USleepingSkinnedMeshRegisterer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USleepingSkinnedMeshRegisterer_Statics::ClassParams = {
		&USleepingSkinnedMeshRegisterer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USleepingSkinnedMeshRegisterer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USleepingSkinnedMeshRegisterer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USleepingSkinnedMeshRegisterer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USleepingSkinnedMeshRegisterer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USleepingSkinnedMeshRegisterer, 3163258444);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<USleepingSkinnedMeshRegisterer>()
	{
		return USleepingSkinnedMeshRegisterer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USleepingSkinnedMeshRegisterer(Z_Construct_UClass_USleepingSkinnedMeshRegisterer, &USleepingSkinnedMeshRegisterer::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("USleepingSkinnedMeshRegisterer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USleepingSkinnedMeshRegisterer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
