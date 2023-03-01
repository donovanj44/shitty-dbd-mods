// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/HatchetProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHatchetProjectile() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_AHatchetProjectile_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_AHatchetProjectile();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerProjectile();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
// End Cross Module References
	void AHatchetProjectile::StaticRegisterNativesAHatchetProjectile()
	{
	}
	UClass* Z_Construct_UClass_AHatchetProjectile_NoRegister()
	{
		return AHatchetProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AHatchetProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHatchetProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AKillerProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatchetProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HatchetProjectile.h" },
		{ "ModuleRelativePath", "Public/HatchetProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHatchetProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHatchetProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHatchetProjectile_Statics::ClassParams = {
		&AHatchetProjectile::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHatchetProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHatchetProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHatchetProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHatchetProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHatchetProjectile, 2051525543);
	template<> THEHUNTRESS_API UClass* StaticClass<AHatchetProjectile>()
	{
		return AHatchetProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHatchetProjectile(Z_Construct_UClass_AHatchetProjectile, &AHatchetProjectile::StaticClass, TEXT("/Script/TheHuntress"), TEXT("AHatchetProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHatchetProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
