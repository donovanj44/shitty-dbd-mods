// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Public/ProjectileProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileProvider() {}
// Cross Module References
	PROJECTILE_API UClass* Z_Construct_UClass_UProjectileProvider_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UProjectileProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Projectile();
// End Cross Module References
	void UProjectileProvider::StaticRegisterNativesUProjectileProvider()
	{
	}
	UClass* Z_Construct_UClass_UProjectileProvider_NoRegister()
	{
		return UProjectileProvider::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectileProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IProjectileProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProjectileProvider_Statics::ClassParams = {
		&UProjectileProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectileProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectileProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProjectileProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProjectileProvider, 1397483602);
	template<> PROJECTILE_API UClass* StaticClass<UProjectileProvider>()
	{
		return UProjectileProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProjectileProvider(Z_Construct_UClass_UProjectileProvider, &UProjectileProvider::StaticClass, TEXT("/Script/Projectile"), TEXT("UProjectileProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
