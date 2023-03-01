// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestUtilities/Public/TestActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActorComponent() {}
// Cross Module References
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_UTestActorComponent_NoRegister();
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_UTestActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UnitTestUtilities();
// End Cross Module References
	void UTestActorComponent::StaticRegisterNativesUTestActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UTestActorComponent_NoRegister()
	{
		return UTestActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTestActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitTestUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestActorComponent.h" },
		{ "ModuleRelativePath", "Public/TestActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestActorComponent_Statics::ClassParams = {
		&UTestActorComponent::StaticClass,
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
		0x04B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestActorComponent, 118247318);
	template<> UNITTESTUTILITIES_API UClass* StaticClass<UTestActorComponent>()
	{
		return UTestActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestActorComponent(Z_Construct_UClass_UTestActorComponent, &UTestActorComponent::StaticClass, TEXT("/Script/UnitTestUtilities"), TEXT("UTestActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
