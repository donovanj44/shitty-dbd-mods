// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CampaignEvents/Public/CampaignEventsManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCampaignEventsManager() {}
// Cross Module References
	CAMPAIGNEVENTS_API UClass* Z_Construct_UClass_UCampaignEventsManager_NoRegister();
	CAMPAIGNEVENTS_API UClass* Z_Construct_UClass_UCampaignEventsManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_CampaignEvents();
// End Cross Module References
	void UCampaignEventsManager::StaticRegisterNativesUCampaignEventsManager()
	{
	}
	UClass* Z_Construct_UClass_UCampaignEventsManager_NoRegister()
	{
		return UCampaignEventsManager::StaticClass();
	}
	struct Z_Construct_UClass_UCampaignEventsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCampaignEventsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CampaignEvents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCampaignEventsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CampaignEventsManager.h" },
		{ "ModuleRelativePath", "Public/CampaignEventsManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCampaignEventsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCampaignEventsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCampaignEventsManager_Statics::ClassParams = {
		&UCampaignEventsManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCampaignEventsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCampaignEventsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCampaignEventsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCampaignEventsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCampaignEventsManager, 1344520815);
	template<> CAMPAIGNEVENTS_API UClass* StaticClass<UCampaignEventsManager>()
	{
		return UCampaignEventsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCampaignEventsManager(Z_Construct_UClass_UCampaignEventsManager, &UCampaignEventsManager::StaticClass, TEXT("/Script/CampaignEvents"), TEXT("UCampaignEventsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCampaignEventsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
