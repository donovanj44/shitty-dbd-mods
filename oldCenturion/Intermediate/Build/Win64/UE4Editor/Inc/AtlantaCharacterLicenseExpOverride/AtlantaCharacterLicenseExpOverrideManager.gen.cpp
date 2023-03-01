// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlantaCharacterLicenseExpOverride/Public/AtlantaCharacterLicenseExpOverrideManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaCharacterLicenseExpOverrideManager() {}
// Cross Module References
	ATLANTACHARACTERLICENSEEXPOVERRIDE_API UClass* Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_NoRegister();
	ATLANTACHARACTERLICENSEEXPOVERRIDE_API UClass* Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_AtlantaCharacterLicenseExpOverride();
// End Cross Module References
	void UAtlantaCharacterLicenseExpOverrideManager::StaticRegisterNativesUAtlantaCharacterLicenseExpOverrideManager()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_NoRegister()
	{
		return UAtlantaCharacterLicenseExpOverrideManager::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AtlantaCharacterLicenseExpOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaCharacterLicenseExpOverrideManager.h" },
		{ "ModuleRelativePath", "Public/AtlantaCharacterLicenseExpOverrideManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaCharacterLicenseExpOverrideManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_Statics::ClassParams = {
		&UAtlantaCharacterLicenseExpOverrideManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaCharacterLicenseExpOverrideManager, 2393885471);
	template<> ATLANTACHARACTERLICENSEEXPOVERRIDE_API UClass* StaticClass<UAtlantaCharacterLicenseExpOverrideManager>()
	{
		return UAtlantaCharacterLicenseExpOverrideManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaCharacterLicenseExpOverrideManager(Z_Construct_UClass_UAtlantaCharacterLicenseExpOverrideManager, &UAtlantaCharacterLicenseExpOverrideManager::StaticClass, TEXT("/Script/AtlantaCharacterLicenseExpOverride"), TEXT("UAtlantaCharacterLicenseExpOverrideManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaCharacterLicenseExpOverrideManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
