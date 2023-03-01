// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BoxPlayerOverlapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxPlayerOverlapComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBoxPlayerOverlapComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBoxPlayerOverlapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UBoxPlayerOverlapComponent::StaticRegisterNativesUBoxPlayerOverlapComponent()
	{
	}
	UClass* Z_Construct_UClass_UBoxPlayerOverlapComponent_NoRegister()
	{
		return UBoxPlayerOverlapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoxPlayerOverlapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoxPlayerOverlapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxPlayerOverlapComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "BoxPlayerOverlapComponent.h" },
		{ "ModuleRelativePath", "Public/BoxPlayerOverlapComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoxPlayerOverlapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxPlayerOverlapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoxPlayerOverlapComponent_Statics::ClassParams = {
		&UBoxPlayerOverlapComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBoxPlayerOverlapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxPlayerOverlapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoxPlayerOverlapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoxPlayerOverlapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoxPlayerOverlapComponent, 3865700148);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBoxPlayerOverlapComponent>()
	{
		return UBoxPlayerOverlapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoxPlayerOverlapComponent(Z_Construct_UClass_UBoxPlayerOverlapComponent, &UBoxPlayerOverlapComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBoxPlayerOverlapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxPlayerOverlapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
