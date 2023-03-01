// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Public/PhysicsBasedProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsBasedProjectile() {}
// Cross Module References
	PROJECTILE_API UClass* Z_Construct_UClass_APhysicsBasedProjectile_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_APhysicsBasedProjectile();
	PROJECTILE_API UClass* Z_Construct_UClass_ABaseProjectile();
	UPackage* Z_Construct_UPackage__Script_Projectile();
	PROJECTILE_API UClass* Z_Construct_UClass_UPhysicsBasedProjectileMovementComponent_NoRegister();
// End Cross Module References
	void APhysicsBasedProjectile::StaticRegisterNativesAPhysicsBasedProjectile()
	{
	}
	UClass* Z_Construct_UClass_APhysicsBasedProjectile_NoRegister()
	{
		return APhysicsBasedProjectile::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsBasedProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsBasedProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBasedProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsBasedProjectile.h" },
		{ "ModuleRelativePath", "Public/PhysicsBasedProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBasedProjectile_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "PhysicsBasedProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsBasedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsBasedProjectile_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsBasedProjectile, Movement), Z_Construct_UClass_UPhysicsBasedProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsBasedProjectile_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBasedProjectile_Statics::NewProp_Movement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsBasedProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBasedProjectile_Statics::NewProp_Movement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsBasedProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsBasedProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsBasedProjectile_Statics::ClassParams = {
		&APhysicsBasedProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhysicsBasedProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBasedProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsBasedProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBasedProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsBasedProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhysicsBasedProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhysicsBasedProjectile, 2217102307);
	template<> PROJECTILE_API UClass* StaticClass<APhysicsBasedProjectile>()
	{
		return APhysicsBasedProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsBasedProjectile(Z_Construct_UClass_APhysicsBasedProjectile, &APhysicsBasedProjectile::StaticClass, TEXT("/Script/Projectile"), TEXT("APhysicsBasedProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsBasedProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
