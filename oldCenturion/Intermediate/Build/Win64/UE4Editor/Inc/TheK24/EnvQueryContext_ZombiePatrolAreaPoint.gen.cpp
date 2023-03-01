// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/EnvQueryContext_ZombiePatrolAreaPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_ZombiePatrolAreaPoint() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UEnvQueryContext_ZombiePatrolAreaPoint::StaticRegisterNativesUEnvQueryContext_ZombiePatrolAreaPoint()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_NoRegister()
	{
		return UEnvQueryContext_ZombiePatrolAreaPoint::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryContext_ZombiePatrolAreaPoint.h" },
		{ "ModuleRelativePath", "Public/EnvQueryContext_ZombiePatrolAreaPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_ZombiePatrolAreaPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_Statics::ClassParams = {
		&UEnvQueryContext_ZombiePatrolAreaPoint::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryContext_ZombiePatrolAreaPoint, 2658548065);
	template<> THEK24_API UClass* StaticClass<UEnvQueryContext_ZombiePatrolAreaPoint>()
	{
		return UEnvQueryContext_ZombiePatrolAreaPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryContext_ZombiePatrolAreaPoint(Z_Construct_UClass_UEnvQueryContext_ZombiePatrolAreaPoint, &UEnvQueryContext_ZombiePatrolAreaPoint::StaticClass, TEXT("/Script/TheK24"), TEXT("UEnvQueryContext_ZombiePatrolAreaPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_ZombiePatrolAreaPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
