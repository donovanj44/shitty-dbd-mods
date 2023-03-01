// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/ActiveGasCloudTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveGasCloudTrackerComponent() {}
// Cross Module References
	THECLOWN_API UClass* Z_Construct_UClass_UActiveGasCloudTrackerComponent_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_UActiveGasCloudTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheClown();
	THECLOWN_API UClass* Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister();
// End Cross Module References
	void UActiveGasCloudTrackerComponent::StaticRegisterNativesUActiveGasCloudTrackerComponent()
	{
	}
	UClass* Z_Construct_UClass_UActiveGasCloudTrackerComponent_NoRegister()
	{
		return UActiveGasCloudTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeAntidoteClouds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__activeAntidoteClouds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeAntidoteClouds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeToxinClouds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__activeToxinClouds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeToxinClouds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheClown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActiveGasCloudTrackerComponent.h" },
		{ "ModuleRelativePath", "Public/ActiveGasCloudTrackerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeAntidoteClouds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActiveGasCloudTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeAntidoteClouds = { "_activeAntidoteClouds", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActiveGasCloudTrackerComponent, _activeAntidoteClouds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeAntidoteClouds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeAntidoteClouds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeAntidoteClouds_Inner = { "_activeAntidoteClouds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeToxinClouds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActiveGasCloudTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeToxinClouds = { "_activeToxinClouds", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActiveGasCloudTrackerComponent, _activeToxinClouds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeToxinClouds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeToxinClouds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeToxinClouds_Inner = { "_activeToxinClouds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeAntidoteClouds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeAntidoteClouds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeToxinClouds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::NewProp__activeToxinClouds_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActiveGasCloudTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::ClassParams = {
		&UActiveGasCloudTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActiveGasCloudTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActiveGasCloudTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActiveGasCloudTrackerComponent, 690834056);
	template<> THECLOWN_API UClass* StaticClass<UActiveGasCloudTrackerComponent>()
	{
		return UActiveGasCloudTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActiveGasCloudTrackerComponent(Z_Construct_UClass_UActiveGasCloudTrackerComponent, &UActiveGasCloudTrackerComponent::StaticClass, TEXT("/Script/TheClown"), TEXT("UActiveGasCloudTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActiveGasCloudTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
