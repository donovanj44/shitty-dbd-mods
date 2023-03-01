// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/AimOffsetSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UAimOffsetSurvivorSubAnimInstance::StaticRegisterNativesUAimOffsetSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_NoRegister()
	{
		return UAimOffsetSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawAccelerationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawAccelerationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentTargetYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__currentTargetYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isYawInDeadZone_MetaData[];
#endif
		static void NewProp__isYawInDeadZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isYawInDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawInterpolationEaseOutDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawInterpolationEaseOutDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawInterpolationEaseInLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawInterpolationEaseInLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawInterpolateEaseOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__yawInterpolateEaseOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawInterpolateEaseIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__yawInterpolateEaseIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawDrasticChangeInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawDrasticChangeInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawDrasticChangeLowerLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawDrasticChangeLowerLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawDrasticChangeUpperLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawDrasticChangeUpperLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawClampValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawClampValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawDeadzoneStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawDeadzoneStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDrasticYawChangeDetected_MetaData[];
#endif
		static void NewProp__isDrasticYawChangeDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDrasticYawChangeDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIdle_MetaData[];
#endif
		static void NewProp__isIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrawling_MetaData[];
#endif
		static void NewProp__isCrawling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrawling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInjured_MetaData[];
#endif
		static void NewProp__isInjured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInjured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUsingAimItem_MetaData[];
#endif
		static void NewProp__isUsingAimItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUsingAimItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowLookAt_MetaData[];
#endif
		static void NewProp__allowLookAt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowLookAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawInterpolated_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawInterpolated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AimOffsetSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAccelerationTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAccelerationTime = { "_yawAccelerationTime", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawAccelerationTime), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAccelerationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAccelerationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAcceleration = { "_yawAcceleration", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawAcceleration), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__currentTargetYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__currentTargetYaw = { "_currentTargetYaw", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _currentTargetYaw), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__currentTargetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__currentTargetYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isYawInDeadZone_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isYawInDeadZone_SetBit(void* Obj)
	{
		((UAimOffsetSurvivorSubAnimInstance*)Obj)->_isYawInDeadZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isYawInDeadZone = { "_isYawInDeadZone", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAimOffsetSurvivorSubAnimInstance), &Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isYawInDeadZone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isYawInDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isYawInDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseOutDistance_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseOutDistance = { "_yawInterpolationEaseOutDistance", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolationEaseOutDistance), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseOutDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseOutDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseInLength_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseInLength = { "_yawInterpolationEaseInLength", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolationEaseInLength), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseInLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseInLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseOut_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseOut = { "_yawInterpolateEaseOut", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolateEaseOut), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseIn_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseIn = { "_yawInterpolateEaseIn", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolateEaseIn), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeInterpolationSpeed_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeInterpolationSpeed = { "_yawDrasticChangeInterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawDrasticChangeInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeLowerLimit_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeLowerLimit = { "_yawDrasticChangeLowerLimit", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawDrasticChangeLowerLimit), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeLowerLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeLowerLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeUpperLimit_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeUpperLimit = { "_yawDrasticChangeUpperLimit", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawDrasticChangeUpperLimit), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeUpperLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeUpperLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawClampValue_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawClampValue = { "_yawClampValue", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawClampValue), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawClampValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawClampValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDeadzoneStart_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDeadzoneStart = { "_yawDeadzoneStart", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawDeadzoneStart), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDeadzoneStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDeadzoneStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationSpeed_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationSpeed = { "_yawInterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isDrasticYawChangeDetected_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isDrasticYawChangeDetected_SetBit(void* Obj)
	{
		((UAimOffsetSurvivorSubAnimInstance*)Obj)->_isDrasticYawChangeDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isDrasticYawChangeDetected = { "_isDrasticYawChangeDetected", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAimOffsetSurvivorSubAnimInstance), &Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isDrasticYawChangeDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isDrasticYawChangeDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isDrasticYawChangeDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isIdle_SetBit(void* Obj)
	{
		((UAimOffsetSurvivorSubAnimInstance*)Obj)->_isIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isIdle = { "_isIdle", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAimOffsetSurvivorSubAnimInstance), &Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isCrawling_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isCrawling_SetBit(void* Obj)
	{
		((UAimOffsetSurvivorSubAnimInstance*)Obj)->_isCrawling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isCrawling = { "_isCrawling", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAimOffsetSurvivorSubAnimInstance), &Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isCrawling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isCrawling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isCrawling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isInjured_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isInjured_SetBit(void* Obj)
	{
		((UAimOffsetSurvivorSubAnimInstance*)Obj)->_isInjured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isInjured = { "_isInjured", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAimOffsetSurvivorSubAnimInstance), &Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isInjured_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isInjured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isInjured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_SetBit(void* Obj)
	{
		((UAimOffsetSurvivorSubAnimInstance*)Obj)->_isUsingAimItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem = { "_isUsingAimItem", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAimOffsetSurvivorSubAnimInstance), &Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_SetBit(void* Obj)
	{
		((UAimOffsetSurvivorSubAnimInstance*)Obj)->_allowLookAt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__allowLookAt = { "_allowLookAt", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAimOffsetSurvivorSubAnimInstance), &Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolated_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolated = { "_yawInterpolated", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolated), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yaw_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yaw = { "_yaw", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yaw), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__pitch_MetaData[] = {
		{ "Category", "AimOffsetSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/AimOffsetSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__pitch = { "_pitch", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _pitch), METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__pitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAccelerationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__currentTargetYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isYawInDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseOutDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationEaseInLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolateEaseIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeLowerLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDrasticChangeUpperLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawClampValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawDeadzoneStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isDrasticYawChangeDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isCrawling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isInjured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__allowLookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yawInterpolated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::NewProp__pitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimOffsetSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::ClassParams = {
		&UAimOffsetSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimOffsetSurvivorSubAnimInstance, 3317661653);
	template<> DBDANIMATION_API UClass* StaticClass<UAimOffsetSurvivorSubAnimInstance>()
	{
		return UAimOffsetSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimOffsetSurvivorSubAnimInstance(Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance, &UAimOffsetSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UAimOffsetSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
