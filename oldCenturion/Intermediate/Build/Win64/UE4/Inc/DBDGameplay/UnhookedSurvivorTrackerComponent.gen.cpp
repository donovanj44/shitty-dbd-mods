// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/UnhookedSurvivorTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnhookedSurvivorTrackerComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UUnhookedSurvivorTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UUnhookedSurvivorTrackerComponent::StaticRegisterNativesUUnhookedSurvivorTrackerComponent()
	{
	}
	UClass* Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_NoRegister()
	{
		return UUnhookedSurvivorTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnhookedSurvivorTrackerComponent.h" },
		{ "ModuleRelativePath", "Public/UnhookedSurvivorTrackerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnhookedSurvivorTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_Statics::ClassParams = {
		&UUnhookedSurvivorTrackerComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnhookedSurvivorTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnhookedSurvivorTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnhookedSurvivorTrackerComponent, 1611865913);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UUnhookedSurvivorTrackerComponent>()
	{
		return UUnhookedSurvivorTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnhookedSurvivorTrackerComponent(Z_Construct_UClass_UUnhookedSurvivorTrackerComponent, &UUnhookedSurvivorTrackerComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UUnhookedSurvivorTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnhookedSurvivorTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
