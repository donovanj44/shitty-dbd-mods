// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/ResetControlPitchAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResetControlPitchAnimNotify() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UResetControlPitchAnimNotify_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UResetControlPitchAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
// End Cross Module References
	void UResetControlPitchAnimNotify::StaticRegisterNativesUResetControlPitchAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UResetControlPitchAnimNotify_NoRegister()
	{
		return UResetControlPitchAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UResetControlPitchAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResetControlPitchAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetControlPitchAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ResetControlPitchAnimNotify.h" },
		{ "ModuleRelativePath", "Public/ResetControlPitchAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResetControlPitchAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResetControlPitchAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResetControlPitchAnimNotify_Statics::ClassParams = {
		&UResetControlPitchAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResetControlPitchAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResetControlPitchAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResetControlPitchAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResetControlPitchAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResetControlPitchAnimNotify, 1268458496);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UResetControlPitchAnimNotify>()
	{
		return UResetControlPitchAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResetControlPitchAnimNotify(Z_Construct_UClass_UResetControlPitchAnimNotify, &UResetControlPitchAnimNotify::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UResetControlPitchAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResetControlPitchAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
