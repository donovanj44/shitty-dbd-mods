// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AttackTypeEventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackTypeEventComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAttackTypeEventComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAttackTypeEventComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAttackTypeEventComponent::StaticRegisterNativesUAttackTypeEventComponent()
	{
	}
	UClass* Z_Construct_UClass_UAttackTypeEventComponent_NoRegister()
	{
		return UAttackTypeEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttackTypeEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackTypeEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackTypeEventComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttackTypeEventComponent.h" },
		{ "ModuleRelativePath", "Public/AttackTypeEventComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackTypeEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackTypeEventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackTypeEventComponent_Statics::ClassParams = {
		&UAttackTypeEventComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttackTypeEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTypeEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackTypeEventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackTypeEventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackTypeEventComponent, 521499647);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAttackTypeEventComponent>()
	{
		return UAttackTypeEventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackTypeEventComponent(Z_Construct_UClass_UAttackTypeEventComponent, &UAttackTypeEventComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAttackTypeEventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackTypeEventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
