// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaAnalyticsManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaAnalyticsManager() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_UAtlantaAnalyticsManager_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UAtlantaAnalyticsManager();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UAnalyticsManager();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
	void UAtlantaAnalyticsManager::StaticRegisterNativesUAtlantaAnalyticsManager()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaAnalyticsManager_NoRegister()
	{
		return UAtlantaAnalyticsManager::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaAnalyticsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaAnalyticsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnalyticsManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaAnalyticsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaAnalyticsManager.h" },
		{ "ModuleRelativePath", "Public/AtlantaAnalyticsManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaAnalyticsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaAnalyticsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaAnalyticsManager_Statics::ClassParams = {
		&UAtlantaAnalyticsManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaAnalyticsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaAnalyticsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaAnalyticsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaAnalyticsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaAnalyticsManager, 1965456290);
	template<> DBDANALYTICS_API UClass* StaticClass<UAtlantaAnalyticsManager>()
	{
		return UAtlantaAnalyticsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaAnalyticsManager(Z_Construct_UClass_UAtlantaAnalyticsManager, &UAtlantaAnalyticsManager::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("UAtlantaAnalyticsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaAnalyticsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
