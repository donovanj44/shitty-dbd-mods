// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformUtilities/Public/CrowdPlayManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdPlayManager() {}
// Cross Module References
	PLATFORMUTILITIES_API UClass* Z_Construct_UClass_UCrowdPlayManager_NoRegister();
	PLATFORMUTILITIES_API UClass* Z_Construct_UClass_UCrowdPlayManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_PlatformUtilities();
// End Cross Module References
	void UCrowdPlayManager::StaticRegisterNativesUCrowdPlayManager()
	{
	}
	UClass* Z_Construct_UClass_UCrowdPlayManager_NoRegister()
	{
		return UCrowdPlayManager::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdPlayManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdPlayManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdPlayManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrowdPlayManager.h" },
		{ "ModuleRelativePath", "Public/CrowdPlayManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdPlayManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdPlayManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrowdPlayManager_Statics::ClassParams = {
		&UCrowdPlayManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCrowdPlayManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdPlayManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdPlayManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrowdPlayManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrowdPlayManager, 2640717685);
	template<> PLATFORMUTILITIES_API UClass* StaticClass<UCrowdPlayManager>()
	{
		return UCrowdPlayManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdPlayManager(Z_Construct_UClass_UCrowdPlayManager, &UCrowdPlayManager::StaticClass, TEXT("/Script/PlatformUtilities"), TEXT("UCrowdPlayManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdPlayManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
