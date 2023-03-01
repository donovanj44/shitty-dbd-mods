// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/LegIKSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegIKSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_ULegIKSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DBDANIMATION_API UClass* Z_Construct_UClass_ULocomotionPredictor_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UBaseGroundDetectorComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimCollection_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ULegIKSurvivorSubAnimInstance::StaticRegisterNativesULegIKSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_NoRegister()
	{
		return ULegIKSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__locomotionPredictor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__locomotionPredictor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxLocalHeightForPlanting_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxLocalHeightForPlanting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightFootGroundDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rightFootGroundDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftFootGroundDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__leftFootGroundDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__footPitchDeltaRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__footPitchDeltaRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__footOffsetInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__footOffsetInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__footOffsetRangeCrouched_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__footOffsetRangeCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__footOffsetRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__footOffsetRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pelvisOffsetInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pelvisOffsetInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pelvisOffsetRangeCrouched_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pelvisOffsetRangeCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pelvisOffsetRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pelvisOffsetRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pelvisOffsetTreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pelvisOffsetTreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__floorJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__floorJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftFootDeltaRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftFootDeltaRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightFootDeltaRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightFootDeltaRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrouched_MetaData[];
#endif
		static void NewProp__isCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIdle_MetaData[];
#endif
		static void NewProp__isIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pelvisOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pelvisOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightFootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftFootOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "LegIKSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__locomotionPredictor_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__locomotionPredictor = { "_locomotionPredictor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _locomotionPredictor), Z_Construct_UClass_ULocomotionPredictor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__locomotionPredictor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__locomotionPredictor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_maxLocalHeightForPlanting_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_maxLocalHeightForPlanting = { "maxLocalHeightForPlanting", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, maxLocalHeightForPlanting), METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_maxLocalHeightForPlanting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_maxLocalHeightForPlanting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootGroundDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootGroundDetector = { "_rightFootGroundDetector", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _rightFootGroundDetector), Z_Construct_UClass_UBaseGroundDetectorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootGroundDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootGroundDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootGroundDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootGroundDetector = { "_leftFootGroundDetector", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _leftFootGroundDetector), Z_Construct_UClass_UBaseGroundDetectorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootGroundDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootGroundDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footPitchDeltaRange_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footPitchDeltaRange = { "_footPitchDeltaRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _footPitchDeltaRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footPitchDeltaRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footPitchDeltaRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetInterpolationSpeed_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetInterpolationSpeed = { "_footOffsetInterpolationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _footOffsetInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRangeCrouched_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRangeCrouched = { "_footOffsetRangeCrouched", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _footOffsetRangeCrouched), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRangeCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRangeCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRange_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRange = { "_footOffsetRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _footOffsetRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetInterpolationSpeed_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetInterpolationSpeed = { "_pelvisOffsetInterpolationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffsetInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRangeCrouched_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRangeCrouched = { "_pelvisOffsetRangeCrouched", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffsetRangeCrouched), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRangeCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRangeCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRange_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRange = { "_pelvisOffsetRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffsetRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetTreshold_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetTreshold = { "_pelvisOffsetTreshold", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffsetTreshold), METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetTreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetTreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__floorJoint_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__floorJoint = { "_floorJoint", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _floorJoint), METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__floorJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__floorJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_AnimCollection_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_AnimCollection = { "AnimCollection", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, AnimCollection), Z_Construct_UClass_UAnimCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_AnimCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_AnimCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootDeltaRotator_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootDeltaRotator = { "_leftFootDeltaRotator", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _leftFootDeltaRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootDeltaRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootDeltaRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootDeltaRotator_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootDeltaRotator = { "_rightFootDeltaRotator", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _rightFootDeltaRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootDeltaRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootDeltaRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isCrouched_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isCrouched_SetBit(void* Obj)
	{
		((ULegIKSurvivorSubAnimInstance*)Obj)->_isCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isCrouched = { "_isCrouched", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULegIKSurvivorSubAnimInstance), &Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isIdle_SetBit(void* Obj)
	{
		((ULegIKSurvivorSubAnimInstance*)Obj)->_isIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isIdle = { "_isIdle", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULegIKSurvivorSubAnimInstance), &Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffset_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffset = { "_pelvisOffset", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootOffset_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootOffset = { "_rightFootOffset", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _rightFootOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootOffset_MetaData[] = {
		{ "Category", "LegIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LegIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootOffset = { "_leftFootOffset", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _leftFootOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__locomotionPredictor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_maxLocalHeightForPlanting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootGroundDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootGroundDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footPitchDeltaRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRangeCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__footOffsetRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRangeCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffsetTreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__floorJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp_AnimCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootDeltaRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootDeltaRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__isIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__pelvisOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__rightFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::NewProp__leftFootOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegIKSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::ClassParams = {
		&ULegIKSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegIKSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULegIKSurvivorSubAnimInstance, 3928570113);
	template<> DBDANIMATION_API UClass* StaticClass<ULegIKSurvivorSubAnimInstance>()
	{
		return ULegIKSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULegIKSurvivorSubAnimInstance(Z_Construct_UClass_ULegIKSurvivorSubAnimInstance, &ULegIKSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("ULegIKSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegIKSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
