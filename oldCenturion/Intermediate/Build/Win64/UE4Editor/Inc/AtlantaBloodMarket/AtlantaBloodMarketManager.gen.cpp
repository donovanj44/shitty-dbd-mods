// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlantaBloodMarket/Public/AtlantaBloodMarketManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaBloodMarketManager() {}
// Cross Module References
	ATLANTABLOODMARKET_API UClass* Z_Construct_UClass_UAtlantaBloodMarketManager_NoRegister();
	ATLANTABLOODMARKET_API UClass* Z_Construct_UClass_UAtlantaBloodMarketManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_AtlantaBloodMarket();
// End Cross Module References
	void UAtlantaBloodMarketManager::StaticRegisterNativesUAtlantaBloodMarketManager()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaBloodMarketManager_NoRegister()
	{
		return UAtlantaBloodMarketManager::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaBloodMarketManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaBloodMarketManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AtlantaBloodMarket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaBloodMarketManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaBloodMarketManager.h" },
		{ "ModuleRelativePath", "Public/AtlantaBloodMarketManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaBloodMarketManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaBloodMarketManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaBloodMarketManager_Statics::ClassParams = {
		&UAtlantaBloodMarketManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaBloodMarketManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaBloodMarketManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaBloodMarketManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaBloodMarketManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaBloodMarketManager, 1056763612);
	template<> ATLANTABLOODMARKET_API UClass* StaticClass<UAtlantaBloodMarketManager>()
	{
		return UAtlantaBloodMarketManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaBloodMarketManager(Z_Construct_UClass_UAtlantaBloodMarketManager, &UAtlantaBloodMarketManager::StaticClass, TEXT("/Script/AtlantaBloodMarket"), TEXT("UAtlantaBloodMarketManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaBloodMarketManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
