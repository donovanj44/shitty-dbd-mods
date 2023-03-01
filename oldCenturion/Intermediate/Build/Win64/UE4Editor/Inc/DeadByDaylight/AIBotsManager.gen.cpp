// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AIBotsManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBotsManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIBotsManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIBotsManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAIBotsManager::StaticRegisterNativesUAIBotsManager()
	{
	}
	UClass* Z_Construct_UClass_UAIBotsManager_NoRegister()
	{
		return UAIBotsManager::StaticClass();
	}
	struct Z_Construct_UClass_UAIBotsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIBotsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIBotsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIBotsManager.h" },
		{ "ModuleRelativePath", "Public/AIBotsManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIBotsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIBotsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIBotsManager_Statics::ClassParams = {
		&UAIBotsManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAIBotsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIBotsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIBotsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIBotsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIBotsManager, 2928234932);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAIBotsManager>()
	{
		return UAIBotsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIBotsManager(Z_Construct_UClass_UAIBotsManager, &UAIBotsManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAIBotsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIBotsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
