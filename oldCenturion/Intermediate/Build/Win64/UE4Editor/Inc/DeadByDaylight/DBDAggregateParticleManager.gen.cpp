// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAggregateParticleManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAggregateParticleManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAggregateParticleManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAggregateParticleManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ADBDAggregateParticleManager::StaticRegisterNativesADBDAggregateParticleManager()
	{
	}
	UClass* Z_Construct_UClass_ADBDAggregateParticleManager_NoRegister()
	{
		return ADBDAggregateParticleManager::StaticClass();
	}
	struct Z_Construct_UClass_ADBDAggregateParticleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDAggregateParticleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAggregateParticleManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAggregateParticleManager.h" },
		{ "ModuleRelativePath", "Public/DBDAggregateParticleManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDAggregateParticleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDAggregateParticleManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDAggregateParticleManager_Statics::ClassParams = {
		&ADBDAggregateParticleManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDAggregateParticleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAggregateParticleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDAggregateParticleManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDAggregateParticleManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDAggregateParticleManager, 982058566);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDAggregateParticleManager>()
	{
		return ADBDAggregateParticleManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDAggregateParticleManager(Z_Construct_UClass_ADBDAggregateParticleManager, &ADBDAggregateParticleManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDAggregateParticleManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDAggregateParticleManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
