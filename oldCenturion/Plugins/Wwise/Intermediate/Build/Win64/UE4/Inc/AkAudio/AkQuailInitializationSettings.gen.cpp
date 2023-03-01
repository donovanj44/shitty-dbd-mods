// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkQuailInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkQuailInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkQuailInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkQuailInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkStadiaInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkQuailInitializationSettings::StaticRegisterNativesUAkQuailInitializationSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkQuailInitializationSettings_NoRegister()
	{
		return UAkQuailInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkQuailInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkQuailInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkStadiaInitializationSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkQuailInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkQuailInitializationSettings.h" },
		{ "ModuleRelativePath", "Public/AkQuailInitializationSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkQuailInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkQuailInitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkQuailInitializationSettings_Statics::ClassParams = {
		&UAkQuailInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkQuailInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkQuailInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkQuailInitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkQuailInitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkQuailInitializationSettings, 922985674);
	template<> AKAUDIO_API UClass* StaticClass<UAkQuailInitializationSettings>()
	{
		return UAkQuailInitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkQuailInitializationSettings(Z_Construct_UClass_UAkQuailInitializationSettings, &UAkQuailInitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkQuailInitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkQuailInitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
