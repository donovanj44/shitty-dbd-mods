// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PresentationPowerFadeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresentationPowerFadeComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationPowerFadeComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationPowerFadeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPresentationPowerFadeComponent::StaticRegisterNativesUPresentationPowerFadeComponent()
	{
	}
	UClass* Z_Construct_UClass_UPresentationPowerFadeComponent_NoRegister()
	{
		return UPresentationPowerFadeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPresentationPowerFadeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresentationPowerFadeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresentationPowerFadeComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PresentationPowerFadeComponent.h" },
		{ "ModuleRelativePath", "Public/PresentationPowerFadeComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresentationPowerFadeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresentationPowerFadeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresentationPowerFadeComponent_Statics::ClassParams = {
		&UPresentationPowerFadeComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPresentationPowerFadeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPresentationPowerFadeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresentationPowerFadeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresentationPowerFadeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresentationPowerFadeComponent, 1150626501);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPresentationPowerFadeComponent>()
	{
		return UPresentationPowerFadeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresentationPowerFadeComponent(Z_Construct_UClass_UPresentationPowerFadeComponent, &UPresentationPowerFadeComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPresentationPowerFadeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresentationPowerFadeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
