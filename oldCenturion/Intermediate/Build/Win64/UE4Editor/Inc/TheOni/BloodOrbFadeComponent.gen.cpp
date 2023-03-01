// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbFadeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbFadeComponent() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbFadeComponent_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbFadeComponent();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFadeComponent();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UBloodOrbFadeComponent::StaticRegisterNativesUBloodOrbFadeComponent()
	{
	}
	UClass* Z_Construct_UClass_UBloodOrbFadeComponent_NoRegister()
	{
		return UBloodOrbFadeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbFadeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbFadeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFadeComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbFadeComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodOrbFadeComponent.h" },
		{ "ModuleRelativePath", "Public/BloodOrbFadeComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbFadeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbFadeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbFadeComponent_Statics::ClassParams = {
		&UBloodOrbFadeComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbFadeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbFadeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbFadeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbFadeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbFadeComponent, 1157735816);
	template<> THEONI_API UClass* StaticClass<UBloodOrbFadeComponent>()
	{
		return UBloodOrbFadeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbFadeComponent(Z_Construct_UClass_UBloodOrbFadeComponent, &UBloodOrbFadeComponent::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbFadeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbFadeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
