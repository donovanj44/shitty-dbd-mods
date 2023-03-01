// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/AntidoteCloudProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAntidoteCloudProjectile() {}
// Cross Module References
	THECLOWN_API UClass* Z_Construct_UClass_AAntidoteCloudProjectile_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_AAntidoteCloudProjectile();
	THECLOWN_API UClass* Z_Construct_UClass_ABaseGasCloudProjectile();
	UPackage* Z_Construct_UPackage__Script_TheClown();
// End Cross Module References
	void AAntidoteCloudProjectile::StaticRegisterNativesAAntidoteCloudProjectile()
	{
	}
	UClass* Z_Construct_UClass_AAntidoteCloudProjectile_NoRegister()
	{
		return AAntidoteCloudProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AAntidoteCloudProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAntidoteCloudProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGasCloudProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_TheClown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAntidoteCloudProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AntidoteCloudProjectile.h" },
		{ "ModuleRelativePath", "Public/AntidoteCloudProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAntidoteCloudProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAntidoteCloudProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAntidoteCloudProjectile_Statics::ClassParams = {
		&AAntidoteCloudProjectile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAntidoteCloudProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAntidoteCloudProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAntidoteCloudProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAntidoteCloudProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAntidoteCloudProjectile, 447900364);
	template<> THECLOWN_API UClass* StaticClass<AAntidoteCloudProjectile>()
	{
		return AAntidoteCloudProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAntidoteCloudProjectile(Z_Construct_UClass_AAntidoteCloudProjectile, &AAntidoteCloudProjectile::StaticClass, TEXT("/Script/TheClown"), TEXT("AAntidoteCloudProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAntidoteCloudProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
