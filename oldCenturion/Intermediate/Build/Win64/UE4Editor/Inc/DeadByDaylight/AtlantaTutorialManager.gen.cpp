// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTutorialManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTutorialManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTutorialManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTutorialManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAtlantaTutorialManager::StaticRegisterNativesUAtlantaTutorialManager()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaTutorialManager_NoRegister()
	{
		return UAtlantaTutorialManager::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaTutorialManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaTutorialManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaTutorialManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaTutorialManager.h" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaTutorialManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaTutorialManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaTutorialManager_Statics::ClassParams = {
		&UAtlantaTutorialManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaTutorialManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaTutorialManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaTutorialManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaTutorialManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaTutorialManager, 4147805358);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaTutorialManager>()
	{
		return UAtlantaTutorialManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaTutorialManager(Z_Construct_UClass_UAtlantaTutorialManager, &UAtlantaTutorialManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaTutorialManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaTutorialManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
