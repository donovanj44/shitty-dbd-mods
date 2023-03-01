// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SplashScreenScaleform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplashScreenScaleform() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USplashScreenScaleform_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USplashScreenScaleform();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USplashScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void USplashScreenScaleform::StaticRegisterNativesUSplashScreenScaleform()
	{
	}
	UClass* Z_Construct_UClass_USplashScreenScaleform_NoRegister()
	{
		return USplashScreenScaleform::StaticClass();
	}
	struct Z_Construct_UClass_USplashScreenScaleform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplashScreenScaleform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplashScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplashScreenScaleform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplashScreenScaleform.h" },
		{ "ModuleRelativePath", "Public/SplashScreenScaleform.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplashScreenScaleform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplashScreenScaleform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplashScreenScaleform_Statics::ClassParams = {
		&USplashScreenScaleform::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USplashScreenScaleform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplashScreenScaleform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplashScreenScaleform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplashScreenScaleform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplashScreenScaleform, 1222752676);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USplashScreenScaleform>()
	{
		return USplashScreenScaleform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplashScreenScaleform(Z_Construct_UClass_USplashScreenScaleform, &USplashScreenScaleform::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USplashScreenScaleform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplashScreenScaleform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
