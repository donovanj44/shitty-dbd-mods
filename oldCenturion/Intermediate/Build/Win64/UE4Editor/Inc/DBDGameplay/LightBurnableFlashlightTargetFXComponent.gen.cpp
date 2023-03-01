// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/LightBurnableFlashlightTargetFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightBurnableFlashlightTargetFXComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightTargetFXComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ULightBurnable_NoRegister();
// End Cross Module References
	void ULightBurnableFlashlightTargetFXComponent::StaticRegisterNativesULightBurnableFlashlightTargetFXComponent()
	{
	}
	UClass* Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_NoRegister()
	{
		return ULightBurnableFlashlightTargetFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__burnable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__burnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlashlightTargetFXComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightBurnableFlashlightTargetFXComponent.h" },
		{ "ModuleRelativePath", "Public/LightBurnableFlashlightTargetFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::NewProp__burnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightBurnableFlashlightTargetFXComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightBurnableFlashlightTargetFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::NewProp__burnable = { "_burnable", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightBurnableFlashlightTargetFXComponent, _burnable), Z_Construct_UClass_ULightBurnable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::NewProp__burnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::NewProp__burnable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::NewProp__burnable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightBurnableFlashlightTargetFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::ClassParams = {
		&ULightBurnableFlashlightTargetFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightBurnableFlashlightTargetFXComponent, 2687318434);
	template<> DBDGAMEPLAY_API UClass* StaticClass<ULightBurnableFlashlightTargetFXComponent>()
	{
		return ULightBurnableFlashlightTargetFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightBurnableFlashlightTargetFXComponent(Z_Construct_UClass_ULightBurnableFlashlightTargetFXComponent, &ULightBurnableFlashlightTargetFXComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("ULightBurnableFlashlightTargetFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightBurnableFlashlightTargetFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
