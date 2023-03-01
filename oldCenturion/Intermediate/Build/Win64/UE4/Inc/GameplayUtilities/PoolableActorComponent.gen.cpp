// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/PoolableActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolableActorComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPoolableActorComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPoolableActorComponent();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBasePoolableActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	void UPoolableActorComponent::StaticRegisterNativesUPoolableActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UPoolableActorComponent_NoRegister()
	{
		return UPoolableActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPoolableActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoolableActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePoolableActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolableActorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoolableActorComponent.h" },
		{ "ModuleRelativePath", "Public/PoolableActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoolableActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolableActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoolableActorComponent_Statics::ClassParams = {
		&UPoolableActorComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPoolableActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoolableActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoolableActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoolableActorComponent, 3595131552);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UPoolableActorComponent>()
	{
		return UPoolableActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoolableActorComponent(Z_Construct_UClass_UPoolableActorComponent, &UPoolableActorComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UPoolableActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolableActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
