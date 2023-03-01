// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SlasherMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlasherMovementComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherMovementComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherMovementComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void USlasherMovementComponent::StaticRegisterNativesUSlasherMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_USlasherMovementComponent_NoRegister()
	{
		return USlasherMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USlasherMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlasherMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SlasherMovementComponent.h" },
		{ "ModuleRelativePath", "Public/SlasherMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlasherMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlasherMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlasherMovementComponent_Statics::ClassParams = {
		&USlasherMovementComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlasherMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlasherMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlasherMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlasherMovementComponent, 77491862);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USlasherMovementComponent>()
	{
		return USlasherMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlasherMovementComponent(Z_Construct_UClass_USlasherMovementComponent, &USlasherMovementComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USlasherMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlasherMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
