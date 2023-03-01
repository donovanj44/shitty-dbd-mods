// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/SidePushStrategyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSidePushStrategyComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_USidePushStrategyComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_USidePushStrategyComponent();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBasePushStrategyComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	void USidePushStrategyComponent::StaticRegisterNativesUSidePushStrategyComponent()
	{
	}
	UClass* Z_Construct_UClass_USidePushStrategyComponent_NoRegister()
	{
		return USidePushStrategyComponent::StaticClass();
	}
	struct Z_Construct_UClass_USidePushStrategyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__detectorCapsuleInflation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__detectorCapsuleInflation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minImpulseStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxImpulseStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USidePushStrategyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePushStrategyComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidePushStrategyComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SidePushStrategyComponent.h" },
		{ "ModuleRelativePath", "Public/SidePushStrategyComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__detectorCapsuleInflation_MetaData[] = {
		{ "Category", "SidePushStrategyComponent" },
		{ "ModuleRelativePath", "Public/SidePushStrategyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__detectorCapsuleInflation = { "_detectorCapsuleInflation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USidePushStrategyComponent, _detectorCapsuleInflation), METADATA_PARAMS(Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__detectorCapsuleInflation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__detectorCapsuleInflation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__minImpulseStrength_MetaData[] = {
		{ "Category", "SidePushStrategyComponent" },
		{ "ModuleRelativePath", "Public/SidePushStrategyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__minImpulseStrength = { "_minImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USidePushStrategyComponent, _minImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__minImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__minImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__maxImpulseStrength_MetaData[] = {
		{ "Category", "SidePushStrategyComponent" },
		{ "ModuleRelativePath", "Public/SidePushStrategyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__maxImpulseStrength = { "_maxImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USidePushStrategyComponent, _maxImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__maxImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__maxImpulseStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USidePushStrategyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__detectorCapsuleInflation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__minImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidePushStrategyComponent_Statics::NewProp__maxImpulseStrength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USidePushStrategyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USidePushStrategyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USidePushStrategyComponent_Statics::ClassParams = {
		&USidePushStrategyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USidePushStrategyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USidePushStrategyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USidePushStrategyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USidePushStrategyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USidePushStrategyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USidePushStrategyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USidePushStrategyComponent, 2772048694);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<USidePushStrategyComponent>()
	{
		return USidePushStrategyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USidePushStrategyComponent(Z_Construct_UClass_USidePushStrategyComponent, &USidePushStrategyComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("USidePushStrategyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USidePushStrategyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
