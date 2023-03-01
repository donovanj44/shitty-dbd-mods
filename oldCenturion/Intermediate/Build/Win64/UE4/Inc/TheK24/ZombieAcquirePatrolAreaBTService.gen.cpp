// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieAcquirePatrolAreaBTService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAcquirePatrolAreaBTService() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieAcquirePatrolAreaBTService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UZombieAcquirePatrolAreaBTService::StaticRegisterNativesUZombieAcquirePatrolAreaBTService()
	{
	}
	UClass* Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_NoRegister()
	{
		return UZombieAcquirePatrolAreaBTService::StaticClass();
	}
	struct Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieAcquirePatrolAreaBTService.h" },
		{ "ModuleRelativePath", "Public/ZombieAcquirePatrolAreaBTService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieAcquirePatrolAreaBTService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_Statics::ClassParams = {
		&UZombieAcquirePatrolAreaBTService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieAcquirePatrolAreaBTService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieAcquirePatrolAreaBTService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieAcquirePatrolAreaBTService, 4119202164);
	template<> THEK24_API UClass* StaticClass<UZombieAcquirePatrolAreaBTService>()
	{
		return UZombieAcquirePatrolAreaBTService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieAcquirePatrolAreaBTService(Z_Construct_UClass_UZombieAcquirePatrolAreaBTService, &UZombieAcquirePatrolAreaBTService::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieAcquirePatrolAreaBTService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieAcquirePatrolAreaBTService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
