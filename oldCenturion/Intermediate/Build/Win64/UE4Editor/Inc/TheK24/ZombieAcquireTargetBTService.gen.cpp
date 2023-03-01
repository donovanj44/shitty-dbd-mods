// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieAcquireTargetBTService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAcquireTargetBTService() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieAcquireTargetBTService_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieAcquireTargetBTService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UZombieAcquireTargetBTService::StaticRegisterNativesUZombieAcquireTargetBTService()
	{
	}
	UClass* Z_Construct_UClass_UZombieAcquireTargetBTService_NoRegister()
	{
		return UZombieAcquireTargetBTService::StaticClass();
	}
	struct Z_Construct_UClass_UZombieAcquireTargetBTService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieAcquireTargetBTService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAcquireTargetBTService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieAcquireTargetBTService.h" },
		{ "ModuleRelativePath", "Public/ZombieAcquireTargetBTService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieAcquireTargetBTService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieAcquireTargetBTService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieAcquireTargetBTService_Statics::ClassParams = {
		&UZombieAcquireTargetBTService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UZombieAcquireTargetBTService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAcquireTargetBTService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieAcquireTargetBTService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieAcquireTargetBTService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieAcquireTargetBTService, 458088257);
	template<> THEK24_API UClass* StaticClass<UZombieAcquireTargetBTService>()
	{
		return UZombieAcquireTargetBTService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieAcquireTargetBTService(Z_Construct_UClass_UZombieAcquireTargetBTService, &UZombieAcquireTargetBTService::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieAcquireTargetBTService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieAcquireTargetBTService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
