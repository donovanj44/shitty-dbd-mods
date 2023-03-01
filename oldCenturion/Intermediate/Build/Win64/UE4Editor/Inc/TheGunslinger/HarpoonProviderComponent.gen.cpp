// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HarpoonProviderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarpoonProviderComponent() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonProviderComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonProviderComponent();
	PROJECTILE_API UClass* Z_Construct_UClass_USingleProjectileProviderComponent();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
// End Cross Module References
	void UHarpoonProviderComponent::StaticRegisterNativesUHarpoonProviderComponent()
	{
	}
	UClass* Z_Construct_UClass_UHarpoonProviderComponent_NoRegister()
	{
		return UHarpoonProviderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHarpoonProviderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHarpoonProviderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleProjectileProviderComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonProviderComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HarpoonProviderComponent.h" },
		{ "ModuleRelativePath", "Public/HarpoonProviderComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHarpoonProviderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHarpoonProviderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHarpoonProviderComponent_Statics::ClassParams = {
		&UHarpoonProviderComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHarpoonProviderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonProviderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHarpoonProviderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHarpoonProviderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHarpoonProviderComponent, 720007144);
	template<> THEGUNSLINGER_API UClass* StaticClass<UHarpoonProviderComponent>()
	{
		return UHarpoonProviderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHarpoonProviderComponent(Z_Construct_UClass_UHarpoonProviderComponent, &UHarpoonProviderComponent::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UHarpoonProviderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHarpoonProviderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
