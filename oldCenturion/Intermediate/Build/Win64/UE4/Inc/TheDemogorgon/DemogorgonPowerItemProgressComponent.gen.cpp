// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDemogorgon/Public/DemogorgonPowerItemProgressComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonPowerItemProgressComponent() {}
// Cross Module References
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_NoRegister();
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPowerItemProgressComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationItemProgressComponent();
	UPackage* Z_Construct_UPackage__Script_TheDemogorgon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister();
// End Cross Module References
	void UDemogorgonPowerItemProgressComponent::StaticRegisterNativesUDemogorgonPowerItemProgressComponent()
	{
	}
	UClass* Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_NoRegister()
	{
		return UDemogorgonPowerItemProgressComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalPlacerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalPlacerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresentationItemProgressComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDemogorgon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DemogorgonPowerItemProgressComponent.h" },
		{ "ModuleRelativePath", "Public/DemogorgonPowerItemProgressComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::NewProp__portalPlacerState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DemogorgonPowerItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::NewProp__portalPlacerState = { "_portalPlacerState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPowerItemProgressComponent, _portalPlacerState), Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::NewProp__portalPlacerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::NewProp__portalPlacerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::NewProp__portalPlacerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemogorgonPowerItemProgressComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::ClassParams = {
		&UDemogorgonPowerItemProgressComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemogorgonPowerItemProgressComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemogorgonPowerItemProgressComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemogorgonPowerItemProgressComponent, 632319983);
	template<> THEDEMOGORGON_API UClass* StaticClass<UDemogorgonPowerItemProgressComponent>()
	{
		return UDemogorgonPowerItemProgressComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemogorgonPowerItemProgressComponent(Z_Construct_UClass_UDemogorgonPowerItemProgressComponent, &UDemogorgonPowerItemProgressComponent::StaticClass, TEXT("/Script/TheDemogorgon"), TEXT("UDemogorgonPowerItemProgressComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemogorgonPowerItemProgressComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
