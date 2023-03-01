// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/KillerFlashlightSFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerFlashlightSFXComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UKillerFlashlightSFXComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UKillerFlashlightSFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightTargetFXComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop();
// End Cross Module References
	void UKillerFlashlightSFXComponent::StaticRegisterNativesUKillerFlashlightSFXComponent()
	{
	}
	UClass* Z_Construct_UClass_UKillerFlashlightSFXComponent_NoRegister()
	{
		return UKillerFlashlightSFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashlightTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__flashlightTargets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__flashlightTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetSoundLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetSoundLoop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerFlashlightSFXComponent.h" },
		{ "ModuleRelativePath", "Public/KillerFlashlightSFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__flashlightTargets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KillerFlashlightSFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__flashlightTargets = { "_flashlightTargets", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerFlashlightSFXComponent, _flashlightTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__flashlightTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__flashlightTargets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__flashlightTargets_Inner = { "_flashlightTargets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlashlightTargetFXComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__targetSoundLoop_MetaData[] = {
		{ "Category", "KillerFlashlightSFXComponent" },
		{ "ModuleRelativePath", "Public/KillerFlashlightSFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__targetSoundLoop = { "_targetSoundLoop", nullptr, (EPropertyFlags)0x0020088000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerFlashlightSFXComponent, _targetSoundLoop), Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop, METADATA_PARAMS(Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__targetSoundLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__targetSoundLoop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__flashlightTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__flashlightTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::NewProp__targetSoundLoop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerFlashlightSFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::ClassParams = {
		&UKillerFlashlightSFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerFlashlightSFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerFlashlightSFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerFlashlightSFXComponent, 874373017);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UKillerFlashlightSFXComponent>()
	{
		return UKillerFlashlightSFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerFlashlightSFXComponent(Z_Construct_UClass_UKillerFlashlightSFXComponent, &UKillerFlashlightSFXComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UKillerFlashlightSFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerFlashlightSFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
