// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAudio/Public/AmbienceBoxComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbienceBoxComponent() {}
// Cross Module References
	DBDAUDIO_API UClass* Z_Construct_UClass_UAmbienceBoxComponent_NoRegister();
	DBDAUDIO_API UClass* Z_Construct_UClass_UAmbienceBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_DBDAudio();
// End Cross Module References
	void UAmbienceBoxComponent::StaticRegisterNativesUAmbienceBoxComponent()
	{
	}
	UClass* Z_Construct_UClass_UAmbienceBoxComponent_NoRegister()
	{
		return UAmbienceBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAmbienceBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmbienceBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbienceBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "AmbienceBoxComponent.h" },
		{ "ModuleRelativePath", "Public/AmbienceBoxComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmbienceBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbienceBoxComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAmbienceBoxComponent_Statics::ClassParams = {
		&UAmbienceBoxComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAmbienceBoxComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbienceBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmbienceBoxComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAmbienceBoxComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAmbienceBoxComponent, 1465818802);
	template<> DBDAUDIO_API UClass* StaticClass<UAmbienceBoxComponent>()
	{
		return UAmbienceBoxComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAmbienceBoxComponent(Z_Construct_UClass_UAmbienceBoxComponent, &UAmbienceBoxComponent::StaticClass, TEXT("/Script/DBDAudio"), TEXT("UAmbienceBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbienceBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
