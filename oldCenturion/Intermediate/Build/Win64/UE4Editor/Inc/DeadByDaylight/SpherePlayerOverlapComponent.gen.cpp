// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpherePlayerOverlapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpherePlayerOverlapComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpherePlayerOverlapComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpherePlayerOverlapComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void USpherePlayerOverlapComponent::StaticRegisterNativesUSpherePlayerOverlapComponent()
	{
	}
	UClass* Z_Construct_UClass_USpherePlayerOverlapComponent_NoRegister()
	{
		return USpherePlayerOverlapComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpherePlayerOverlapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpherePlayerOverlapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpherePlayerOverlapComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "SpherePlayerOverlapComponent.h" },
		{ "ModuleRelativePath", "Public/SpherePlayerOverlapComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpherePlayerOverlapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpherePlayerOverlapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpherePlayerOverlapComponent_Statics::ClassParams = {
		&USpherePlayerOverlapComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpherePlayerOverlapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpherePlayerOverlapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpherePlayerOverlapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpherePlayerOverlapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpherePlayerOverlapComponent, 1541068300);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USpherePlayerOverlapComponent>()
	{
		return USpherePlayerOverlapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpherePlayerOverlapComponent(Z_Construct_UClass_USpherePlayerOverlapComponent, &USpherePlayerOverlapComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USpherePlayerOverlapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpherePlayerOverlapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
