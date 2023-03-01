// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Onboarding/Public/OnboardingManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingManager() {}
// Cross Module References
	ONBOARDING_API UClass* Z_Construct_UClass_UOnboardingManager_NoRegister();
	ONBOARDING_API UClass* Z_Construct_UClass_UOnboardingManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_Onboarding();
// End Cross Module References
	void UOnboardingManager::StaticRegisterNativesUOnboardingManager()
	{
	}
	UClass* Z_Construct_UClass_UOnboardingManager_NoRegister()
	{
		return UOnboardingManager::StaticClass();
	}
	struct Z_Construct_UClass_UOnboardingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnboardingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Onboarding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnboardingManager.h" },
		{ "ModuleRelativePath", "Public/OnboardingManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnboardingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnboardingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnboardingManager_Statics::ClassParams = {
		&UOnboardingManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnboardingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnboardingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnboardingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnboardingManager, 863898189);
	template<> ONBOARDING_API UClass* StaticClass<UOnboardingManager>()
	{
		return UOnboardingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnboardingManager(Z_Construct_UClass_UOnboardingManager, &UOnboardingManager::StaticClass, TEXT("/Script/Onboarding"), TEXT("UOnboardingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnboardingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
