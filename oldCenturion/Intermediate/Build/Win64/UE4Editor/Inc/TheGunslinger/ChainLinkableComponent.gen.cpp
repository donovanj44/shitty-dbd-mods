// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/ChainLinkableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainLinkableComponent() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainLinkableComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainLinkableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseCameraTargetingStrategy_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainPlayerMovementStatusEffect_NoRegister();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_URiflePlayerLinker_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UPlayerReelInputAccelerationConstraintStrategy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChainLinkable_NoRegister();
// End Cross Module References
	void UChainLinkableComponent::StaticRegisterNativesUChainLinkableComponent()
	{
	}
	UClass* Z_Construct_UClass_UChainLinkableComponent_NoRegister()
	{
		return UChainLinkableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChainLinkableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cameraStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__movementStatusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isLinkedLingering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isLinkedLingering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputAccelerationStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputAccelerationStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linkedStatusEffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__linkedStatusEffectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementStatusEffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__movementStatusEffectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraTargetingStrategyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__cameraTargetingStrategyClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChainLinkableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainLinkableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChainLinkableComponent.h" },
		{ "ModuleRelativePath", "Public/ChainLinkableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraStrategy = { "_cameraStrategy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainLinkableComponent, _cameraStrategy), Z_Construct_UClass_UBaseCameraTargetingStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffect = { "_movementStatusEffect", nullptr, (EPropertyFlags)0x0040000000080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainLinkableComponent, _movementStatusEffect), Z_Construct_UClass_UChainPlayerMovementStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__isLinkedLingering_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__isLinkedLingering = { "_isLinkedLingering", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainLinkableComponent, _isLinkedLingering), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__isLinkedLingering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__isLinkedLingering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__chainLink_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__chainLink = { "_chainLink", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainLinkableComponent, _chainLink), Z_Construct_UClass_URiflePlayerLinker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__chainLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__chainLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__inputAccelerationStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__inputAccelerationStrategy = { "_inputAccelerationStrategy", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainLinkableComponent, _inputAccelerationStrategy), Z_Construct_UClass_UPlayerReelInputAccelerationConstraintStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__inputAccelerationStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__inputAccelerationStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__linkedStatusEffectName_MetaData[] = {
		{ "Category", "ChainLinkableComponent" },
		{ "ModuleRelativePath", "Public/ChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__linkedStatusEffectName = { "_linkedStatusEffectName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainLinkableComponent, _linkedStatusEffectName), METADATA_PARAMS(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__linkedStatusEffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__linkedStatusEffectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffectName_MetaData[] = {
		{ "Category", "ChainLinkableComponent" },
		{ "ModuleRelativePath", "Public/ChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffectName = { "_movementStatusEffectName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainLinkableComponent, _movementStatusEffectName), METADATA_PARAMS(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraTargetingStrategyClass_MetaData[] = {
		{ "Category", "ChainLinkableComponent" },
		{ "ModuleRelativePath", "Public/ChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraTargetingStrategyClass = { "_cameraTargetingStrategyClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainLinkableComponent, _cameraTargetingStrategyClass), Z_Construct_UClass_UBaseCameraTargetingStrategy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraTargetingStrategyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraTargetingStrategyClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChainLinkableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__isLinkedLingering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__chainLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__inputAccelerationStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__linkedStatusEffectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__movementStatusEffectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainLinkableComponent_Statics::NewProp__cameraTargetingStrategyClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UChainLinkableComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChainLinkable_NoRegister, (int32)VTABLE_OFFSET(UChainLinkableComponent, IChainLinkable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChainLinkableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChainLinkableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChainLinkableComponent_Statics::ClassParams = {
		&UChainLinkableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChainLinkableComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChainLinkableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChainLinkableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChainLinkableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChainLinkableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChainLinkableComponent, 2663892160);
	template<> THEGUNSLINGER_API UClass* StaticClass<UChainLinkableComponent>()
	{
		return UChainLinkableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChainLinkableComponent(Z_Construct_UClass_UChainLinkableComponent, &UChainLinkableComponent::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UChainLinkableComponent"), false, nullptr, nullptr, nullptr);

	void UChainLinkableComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isLinkedLingering(TEXT("_isLinkedLingering"));
		static const FName Name__movementStatusEffect(TEXT("_movementStatusEffect"));

		const bool bIsValid = true
			&& Name__isLinkedLingering == ClassReps[(int32)ENetFields_Private::_isLinkedLingering].Property->GetFName()
			&& Name__movementStatusEffect == ClassReps[(int32)ENetFields_Private::_movementStatusEffect].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UChainLinkableComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChainLinkableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
