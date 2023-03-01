// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/MockAuthoritativeActorPoolComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockAuthoritativeActorPoolComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UMockAuthoritativeActorPoolComponent();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	void UMockAuthoritativeActorPoolComponent::StaticRegisterNativesUMockAuthoritativeActorPoolComponent()
	{
	}
	UClass* Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_NoRegister()
	{
		return UMockAuthoritativeActorPoolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuthoritativeActorPoolComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MockAuthoritativeActorPoolComponent.h" },
		{ "ModuleRelativePath", "Public/MockAuthoritativeActorPoolComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockAuthoritativeActorPoolComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_Statics::ClassParams = {
		&UMockAuthoritativeActorPoolComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockAuthoritativeActorPoolComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMockAuthoritativeActorPoolComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMockAuthoritativeActorPoolComponent, 2934177496);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UMockAuthoritativeActorPoolComponent>()
	{
		return UMockAuthoritativeActorPoolComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMockAuthoritativeActorPoolComponent(Z_Construct_UClass_UMockAuthoritativeActorPoolComponent, &UMockAuthoritativeActorPoolComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UMockAuthoritativeActorPoolComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockAuthoritativeActorPoolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
