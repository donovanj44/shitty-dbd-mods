// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/KillerChainLinkableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerChainLinkableComponent() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UKillerChainLinkableComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UKillerChainLinkableComponent();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainLinkableComponent();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
// End Cross Module References
	void UKillerChainLinkableComponent::StaticRegisterNativesUKillerChainLinkableComponent()
	{
	}
	UClass* Z_Construct_UClass_UKillerChainLinkableComponent_NoRegister()
	{
		return UKillerChainLinkableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerChainLinkableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerChainLinkableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChainLinkableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerChainLinkableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerChainLinkableComponent.h" },
		{ "ModuleRelativePath", "Public/KillerChainLinkableComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerChainLinkableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerChainLinkableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerChainLinkableComponent_Statics::ClassParams = {
		&UKillerChainLinkableComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerChainLinkableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerChainLinkableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerChainLinkableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerChainLinkableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerChainLinkableComponent, 2504898665);
	template<> THEGUNSLINGER_API UClass* StaticClass<UKillerChainLinkableComponent>()
	{
		return UKillerChainLinkableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerChainLinkableComponent(Z_Construct_UClass_UKillerChainLinkableComponent, &UKillerChainLinkableComponent::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UKillerChainLinkableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerChainLinkableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
