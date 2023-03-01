// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StationarySpotLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStationarySpotLightComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStationarySpotLightComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStationarySpotLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UStationarySpotLightComponent::StaticRegisterNativesUStationarySpotLightComponent()
	{
	}
	UClass* Z_Construct_UClass_UStationarySpotLightComponent_NoRegister()
	{
		return UStationarySpotLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStationarySpotLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStationarySpotLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpotLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStationarySpotLightComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "StationarySpotLightComponent.h" },
		{ "ModuleRelativePath", "Public/StationarySpotLightComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStationarySpotLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStationarySpotLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStationarySpotLightComponent_Statics::ClassParams = {
		&UStationarySpotLightComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStationarySpotLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStationarySpotLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStationarySpotLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStationarySpotLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStationarySpotLightComponent, 1375366279);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStationarySpotLightComponent>()
	{
		return UStationarySpotLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStationarySpotLightComponent(Z_Construct_UClass_UStationarySpotLightComponent, &UStationarySpotLightComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStationarySpotLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStationarySpotLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
