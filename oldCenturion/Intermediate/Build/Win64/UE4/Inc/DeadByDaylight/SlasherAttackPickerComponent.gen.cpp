// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SlasherAttackPickerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlasherAttackPickerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherAttackPickerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherAttackPickerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void USlasherAttackPickerComponent::StaticRegisterNativesUSlasherAttackPickerComponent()
	{
	}
	UClass* Z_Construct_UClass_USlasherAttackPickerComponent_NoRegister()
	{
		return USlasherAttackPickerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USlasherAttackPickerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlasherAttackPickerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAttackPickerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SlasherAttackPickerComponent.h" },
		{ "ModuleRelativePath", "Public/SlasherAttackPickerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlasherAttackPickerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlasherAttackPickerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlasherAttackPickerComponent_Statics::ClassParams = {
		&USlasherAttackPickerComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlasherAttackPickerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAttackPickerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlasherAttackPickerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlasherAttackPickerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlasherAttackPickerComponent, 2403889391);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USlasherAttackPickerComponent>()
	{
		return USlasherAttackPickerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlasherAttackPickerComponent(Z_Construct_UClass_USlasherAttackPickerComponent, &USlasherAttackPickerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USlasherAttackPickerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlasherAttackPickerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
