// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformUtilities/Public/CrowdChoiceManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdChoiceManager() {}
// Cross Module References
	PLATFORMUTILITIES_API UClass* Z_Construct_UClass_UCrowdChoiceManager_NoRegister();
	PLATFORMUTILITIES_API UClass* Z_Construct_UClass_UCrowdChoiceManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_PlatformUtilities();
// End Cross Module References
	void UCrowdChoiceManager::StaticRegisterNativesUCrowdChoiceManager()
	{
	}
	UClass* Z_Construct_UClass_UCrowdChoiceManager_NoRegister()
	{
		return UCrowdChoiceManager::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdChoiceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdChoiceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdChoiceManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrowdChoiceManager.h" },
		{ "ModuleRelativePath", "Public/CrowdChoiceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdChoiceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdChoiceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrowdChoiceManager_Statics::ClassParams = {
		&UCrowdChoiceManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCrowdChoiceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdChoiceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdChoiceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrowdChoiceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrowdChoiceManager, 443739935);
	template<> PLATFORMUTILITIES_API UClass* StaticClass<UCrowdChoiceManager>()
	{
		return UCrowdChoiceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdChoiceManager(Z_Construct_UClass_UCrowdChoiceManager, &UCrowdChoiceManager::StaticClass, TEXT("/Script/PlatformUtilities"), TEXT("UCrowdChoiceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdChoiceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
