// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieEvaluteEnterAttackBTService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieEvaluteEnterAttackBTService() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieEvaluteEnterAttackBTService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UZombieEvaluteEnterAttackBTService::StaticRegisterNativesUZombieEvaluteEnterAttackBTService()
	{
	}
	UClass* Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_NoRegister()
	{
		return UZombieEvaluteEnterAttackBTService::StaticClass();
	}
	struct Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieEvaluteEnterAttackBTService.h" },
		{ "ModuleRelativePath", "Public/ZombieEvaluteEnterAttackBTService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieEvaluteEnterAttackBTService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_Statics::ClassParams = {
		&UZombieEvaluteEnterAttackBTService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieEvaluteEnterAttackBTService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieEvaluteEnterAttackBTService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieEvaluteEnterAttackBTService, 3336444814);
	template<> THEK24_API UClass* StaticClass<UZombieEvaluteEnterAttackBTService>()
	{
		return UZombieEvaluteEnterAttackBTService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieEvaluteEnterAttackBTService(Z_Construct_UClass_UZombieEvaluteEnterAttackBTService, &UZombieEvaluteEnterAttackBTService::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieEvaluteEnterAttackBTService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieEvaluteEnterAttackBTService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
