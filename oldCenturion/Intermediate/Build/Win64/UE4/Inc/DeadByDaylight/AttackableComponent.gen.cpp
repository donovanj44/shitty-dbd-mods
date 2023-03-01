// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AttackableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAttackableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAttackableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAttackableComponent::StaticRegisterNativesUAttackableComponent()
	{
	}
	UClass* Z_Construct_UClass_UAttackableComponent_NoRegister()
	{
		return UAttackableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttackableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttackableComponent.h" },
		{ "ModuleRelativePath", "Public/AttackableComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackableComponent_Statics::ClassParams = {
		&UAttackableComponent::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackableComponent, 3957443566);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAttackableComponent>()
	{
		return UAttackableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackableComponent(Z_Construct_UClass_UAttackableComponent, &UAttackableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAttackableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
