// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlantaBundleFilterRules/Public/AtlantaBundleFilterRulesManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaBundleFilterRulesManager() {}
// Cross Module References
	ATLANTABUNDLEFILTERRULES_API UClass* Z_Construct_UClass_UAtlantaBundleFilterRulesManager_NoRegister();
	ATLANTABUNDLEFILTERRULES_API UClass* Z_Construct_UClass_UAtlantaBundleFilterRulesManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_AtlantaBundleFilterRules();
// End Cross Module References
	void UAtlantaBundleFilterRulesManager::StaticRegisterNativesUAtlantaBundleFilterRulesManager()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaBundleFilterRulesManager_NoRegister()
	{
		return UAtlantaBundleFilterRulesManager::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaBundleFilterRulesManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaBundleFilterRulesManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AtlantaBundleFilterRules,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaBundleFilterRulesManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaBundleFilterRulesManager.h" },
		{ "ModuleRelativePath", "Public/AtlantaBundleFilterRulesManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaBundleFilterRulesManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaBundleFilterRulesManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaBundleFilterRulesManager_Statics::ClassParams = {
		&UAtlantaBundleFilterRulesManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaBundleFilterRulesManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaBundleFilterRulesManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaBundleFilterRulesManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaBundleFilterRulesManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaBundleFilterRulesManager, 2360909365);
	template<> ATLANTABUNDLEFILTERRULES_API UClass* StaticClass<UAtlantaBundleFilterRulesManager>()
	{
		return UAtlantaBundleFilterRulesManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaBundleFilterRulesManager(Z_Construct_UClass_UAtlantaBundleFilterRulesManager, &UAtlantaBundleFilterRulesManager::StaticClass, TEXT("/Script/AtlantaBundleFilterRules"), TEXT("UAtlantaBundleFilterRulesManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaBundleFilterRulesManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
