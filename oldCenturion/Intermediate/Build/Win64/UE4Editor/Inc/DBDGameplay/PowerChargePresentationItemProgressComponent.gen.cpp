// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/PowerChargePresentationItemProgressComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerChargePresentationItemProgressComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargePresentationItemProgressComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationItemProgressComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerToggleComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister();
// End Cross Module References
	void UPowerChargePresentationItemProgressComponent::StaticRegisterNativesUPowerChargePresentationItemProgressComponent()
	{
	}
	UClass* Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_NoRegister()
	{
		return UPowerChargePresentationItemProgressComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeReadyThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__chargeReadyThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerToggleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__powerToggleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerChargeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__powerChargeComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresentationItemProgressComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PowerChargePresentationItemProgressComponent.h" },
		{ "ModuleRelativePath", "Public/PowerChargePresentationItemProgressComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__chargeReadyThreshold_MetaData[] = {
		{ "Category", "PowerChargePresentationItemProgressComponent" },
		{ "ModuleRelativePath", "Public/PowerChargePresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__chargeReadyThreshold = { "_chargeReadyThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerChargePresentationItemProgressComponent, _chargeReadyThreshold), METADATA_PARAMS(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__chargeReadyThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__chargeReadyThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerToggleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PowerChargePresentationItemProgressComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerChargePresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerToggleComponent = { "_powerToggleComponent", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerChargePresentationItemProgressComponent, _powerToggleComponent), Z_Construct_UClass_UPowerToggleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerToggleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerToggleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent_MetaData[] = {
		{ "Category", "PowerChargePresentationItemProgressComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerChargePresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent = { "_powerChargeComponent", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerChargePresentationItemProgressComponent, _powerChargeComponent), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__chargeReadyThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerToggleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerChargePresentationItemProgressComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::ClassParams = {
		&UPowerChargePresentationItemProgressComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerChargePresentationItemProgressComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerChargePresentationItemProgressComponent, 4181239607);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UPowerChargePresentationItemProgressComponent>()
	{
		return UPowerChargePresentationItemProgressComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerChargePresentationItemProgressComponent(Z_Construct_UClass_UPowerChargePresentationItemProgressComponent, &UPowerChargePresentationItemProgressComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UPowerChargePresentationItemProgressComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerChargePresentationItemProgressComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
