// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CapsulePlayerOverlapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulePlayerOverlapComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCapsulePlayerOverlapComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCapsulePlayerOverlapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UCapsulePlayerOverlapComponent::StaticRegisterNativesUCapsulePlayerOverlapComponent()
	{
	}
	UClass* Z_Construct_UClass_UCapsulePlayerOverlapComponent_NoRegister()
	{
		return UCapsulePlayerOverlapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCapsulePlayerOverlapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCapsulePlayerOverlapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsulePlayerOverlapComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "CapsulePlayerOverlapComponent.h" },
		{ "ModuleRelativePath", "Public/CapsulePlayerOverlapComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCapsulePlayerOverlapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapsulePlayerOverlapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCapsulePlayerOverlapComponent_Statics::ClassParams = {
		&UCapsulePlayerOverlapComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCapsulePlayerOverlapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsulePlayerOverlapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCapsulePlayerOverlapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCapsulePlayerOverlapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCapsulePlayerOverlapComponent, 479395345);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCapsulePlayerOverlapComponent>()
	{
		return UCapsulePlayerOverlapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCapsulePlayerOverlapComponent(Z_Construct_UClass_UCapsulePlayerOverlapComponent, &UCapsulePlayerOverlapComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCapsulePlayerOverlapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCapsulePlayerOverlapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
