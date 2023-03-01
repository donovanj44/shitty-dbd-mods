// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkQuailPlatformInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkQuailPlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkQuailPlatformInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkQuailPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkStadiaPlatformInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkQuailPlatformInfo::StaticRegisterNativesUAkQuailPlatformInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkQuailPlatformInfo_NoRegister()
	{
		return UAkQuailPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkQuailPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkQuailPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkStadiaPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkQuailPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkQuailPlatformInfo.h" },
		{ "ModuleRelativePath", "Public/AkQuailPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkQuailPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkQuailPlatformInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkQuailPlatformInfo_Statics::ClassParams = {
		&UAkQuailPlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkQuailPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkQuailPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkQuailPlatformInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkQuailPlatformInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkQuailPlatformInfo, 1590147627);
	template<> AKAUDIO_API UClass* StaticClass<UAkQuailPlatformInfo>()
	{
		return UAkQuailPlatformInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkQuailPlatformInfo(Z_Construct_UClass_UAkQuailPlatformInfo, &UAkQuailPlatformInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkQuailPlatformInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkQuailPlatformInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
