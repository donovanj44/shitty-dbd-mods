// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieBlindingFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieBlindingFXComponent() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieBlindingFXComponent_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieBlindingFXComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerBlindingFXComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UZombieBlindingFXComponent::StaticRegisterNativesUZombieBlindingFXComponent()
	{
	}
	UClass* Z_Construct_UClass_UZombieBlindingFXComponent_NoRegister()
	{
		return UZombieBlindingFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UZombieBlindingFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieBlindingFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerBlindingFXComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieBlindingFXComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieBlindingFXComponent.h" },
		{ "ModuleRelativePath", "Public/ZombieBlindingFXComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieBlindingFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieBlindingFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieBlindingFXComponent_Statics::ClassParams = {
		&UZombieBlindingFXComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieBlindingFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieBlindingFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieBlindingFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieBlindingFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieBlindingFXComponent, 2414289565);
	template<> THEK24_API UClass* StaticClass<UZombieBlindingFXComponent>()
	{
		return UZombieBlindingFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieBlindingFXComponent(Z_Construct_UClass_UZombieBlindingFXComponent, &UZombieBlindingFXComponent::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieBlindingFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieBlindingFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif