// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDAIPerceptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAIPerceptionComponent() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIPerceptionComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIPerceptionComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAIDetectedStimulus();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
// End Cross Module References
	void UDBDAIPerceptionComponent::StaticRegisterNativesUDBDAIPerceptionComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDAIPerceptionComponent_NoRegister()
	{
		return UDBDAIPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAIPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrorDistanceMultiplierForNonControlledActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TerrorDistanceMultiplierForNonControlledActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighThreatDistanceForNonControlledActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighThreatDistanceForNonControlledActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreatDividerForNonControlledActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThreatDividerForNonControlledActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activePhaseWalkingNoiseMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activePhaseWalkingNoiseMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lastBestDetectedHostileStimulusInMemory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lastBestDetectedHostileStimulusInMemory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bestDetectedHostileStimulus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__bestDetectedHostileStimulus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__detectedHostileStimuli_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__detectedHostileStimuli;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__detectedHostileStimuli_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__originalSenseConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__originalSenseConfigs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__originalSenseConfigs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objOverridingSenses_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__objOverridingSenses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__objOverridingSenses_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objOverridingSenses_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIPerceptionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "DBDAIPerceptionComponent.h" },
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_TerrorDistanceMultiplierForNonControlledActor_MetaData[] = {
		{ "Category", "DBDAIPerceptionComponent" },
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_TerrorDistanceMultiplierForNonControlledActor = { "TerrorDistanceMultiplierForNonControlledActor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIPerceptionComponent, TerrorDistanceMultiplierForNonControlledActor), METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_TerrorDistanceMultiplierForNonControlledActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_TerrorDistanceMultiplierForNonControlledActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_HighThreatDistanceForNonControlledActor_MetaData[] = {
		{ "Category", "DBDAIPerceptionComponent" },
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_HighThreatDistanceForNonControlledActor = { "HighThreatDistanceForNonControlledActor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIPerceptionComponent, HighThreatDistanceForNonControlledActor), METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_HighThreatDistanceForNonControlledActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_HighThreatDistanceForNonControlledActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_ThreatDividerForNonControlledActor_MetaData[] = {
		{ "Category", "DBDAIPerceptionComponent" },
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_ThreatDividerForNonControlledActor = { "ThreatDividerForNonControlledActor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIPerceptionComponent, ThreatDividerForNonControlledActor), METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_ThreatDividerForNonControlledActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_ThreatDividerForNonControlledActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__activePhaseWalkingNoiseMaxRange_MetaData[] = {
		{ "Category", "DBDAIPerceptionComponent" },
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__activePhaseWalkingNoiseMaxRange = { "_activePhaseWalkingNoiseMaxRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIPerceptionComponent, _activePhaseWalkingNoiseMaxRange), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__activePhaseWalkingNoiseMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__activePhaseWalkingNoiseMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__lastBestDetectedHostileStimulusInMemory_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__lastBestDetectedHostileStimulusInMemory = { "_lastBestDetectedHostileStimulusInMemory", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIPerceptionComponent, _lastBestDetectedHostileStimulusInMemory), Z_Construct_UScriptStruct_FAIDetectedStimulus, METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__lastBestDetectedHostileStimulusInMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__lastBestDetectedHostileStimulusInMemory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__bestDetectedHostileStimulus_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__bestDetectedHostileStimulus = { "_bestDetectedHostileStimulus", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIPerceptionComponent, _bestDetectedHostileStimulus), Z_Construct_UScriptStruct_FAIDetectedStimulus, METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__bestDetectedHostileStimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__bestDetectedHostileStimulus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__detectedHostileStimuli_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__detectedHostileStimuli = { "_detectedHostileStimuli", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIPerceptionComponent, _detectedHostileStimuli), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__detectedHostileStimuli_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__detectedHostileStimuli_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__detectedHostileStimuli_Inner = { "_detectedHostileStimuli", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIDetectedStimulus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__originalSenseConfigs_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__originalSenseConfigs = { "_originalSenseConfigs", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIPerceptionComponent, _originalSenseConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__originalSenseConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__originalSenseConfigs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__originalSenseConfigs_Inner = { "_originalSenseConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISenseConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__objOverridingSenses_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__objOverridingSenses = { "_objOverridingSenses", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIPerceptionComponent, _objOverridingSenses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__objOverridingSenses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__objOverridingSenses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__objOverridingSenses_Key_KeyProp = { "_objOverridingSenses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__objOverridingSenses_ValueProp = { "_objOverridingSenses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_TerrorDistanceMultiplierForNonControlledActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_HighThreatDistanceForNonControlledActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp_ThreatDividerForNonControlledActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__activePhaseWalkingNoiseMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__lastBestDetectedHostileStimulusInMemory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__bestDetectedHostileStimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__detectedHostileStimuli,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__detectedHostileStimuli_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__originalSenseConfigs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__originalSenseConfigs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__objOverridingSenses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__objOverridingSenses_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::NewProp__objOverridingSenses_ValueProp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister, (int32)VTABLE_OFFSET(UDBDAIPerceptionComponent, IAIDisplayDebugInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAIPerceptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::ClassParams = {
		&UDBDAIPerceptionComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAIPerceptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAIPerceptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAIPerceptionComponent, 2960558210);
	template<> DBDBOTS_API UClass* StaticClass<UDBDAIPerceptionComponent>()
	{
		return UDBDAIPerceptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAIPerceptionComponent(Z_Construct_UClass_UDBDAIPerceptionComponent, &UDBDAIPerceptionComponent::StaticClass, TEXT("/Script/DBDBots"), TEXT("UDBDAIPerceptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAIPerceptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
