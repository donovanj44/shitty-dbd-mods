// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPellegrinoPlatformInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPellegrinoPlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPellegrinoPlatformInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPellegrinoPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkPellegrinoPlatformInfo::StaticRegisterNativesUAkPellegrinoPlatformInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkPellegrinoPlatformInfo_NoRegister()
	{
		return UAkPellegrinoPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkPellegrinoPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPellegrinoPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPellegrinoPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkPellegrinoPlatformInfo.h" },
		{ "ModuleRelativePath", "Public/AkPellegrinoPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPellegrinoPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPellegrinoPlatformInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkPellegrinoPlatformInfo_Statics::ClassParams = {
		&UAkPellegrinoPlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkPellegrinoPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPellegrinoPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPellegrinoPlatformInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkPellegrinoPlatformInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkPellegrinoPlatformInfo, 1673351321);
	template<> AKAUDIO_API UClass* StaticClass<UAkPellegrinoPlatformInfo>()
	{
		return UAkPellegrinoPlatformInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkPellegrinoPlatformInfo(Z_Construct_UClass_UAkPellegrinoPlatformInfo, &UAkPellegrinoPlatformInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkPellegrinoPlatformInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPellegrinoPlatformInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
