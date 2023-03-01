// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StationaryPointLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStationaryPointLightComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStationaryPointLightComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStationaryPointLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UStationaryPointLightComponent::StaticRegisterNativesUStationaryPointLightComponent()
	{
	}
	UClass* Z_Construct_UClass_UStationaryPointLightComponent_NoRegister()
	{
		return UStationaryPointLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStationaryPointLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStationaryPointLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStationaryPointLightComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "StationaryPointLightComponent.h" },
		{ "ModuleRelativePath", "Public/StationaryPointLightComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStationaryPointLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStationaryPointLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStationaryPointLightComponent_Statics::ClassParams = {
		&UStationaryPointLightComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStationaryPointLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStationaryPointLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStationaryPointLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStationaryPointLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStationaryPointLightComponent, 1459013176);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStationaryPointLightComponent>()
	{
		return UStationaryPointLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStationaryPointLightComponent(Z_Construct_UClass_UStationaryPointLightComponent, &UStationaryPointLightComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStationaryPointLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStationaryPointLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
