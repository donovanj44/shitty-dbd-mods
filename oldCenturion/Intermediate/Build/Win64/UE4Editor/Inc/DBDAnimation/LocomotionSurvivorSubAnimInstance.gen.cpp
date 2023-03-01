// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/LocomotionSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocomotionSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
// End Cross Module References
	void ULocomotionSurvivorSubAnimInstance::StaticRegisterNativesULocomotionSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_NoRegister()
	{
		return ULocomotionSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__durationBeforeStart180Reset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__durationBeforeStart180Reset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleDurationFor180StartDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__idleDurationFor180StartDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__start180DetectionPrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__start180DetectionPrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDurationBetweenTurn180Detection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minDurationBetweenTurn180Detection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__turn180PrevVelocitiesCacheDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__turn180PrevVelocitiesCacheDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__turn180DetectionDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__turn180DetectionDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__turn180DetectionPrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__turn180DetectionPrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minParadiseWalkPlayRateMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minParadiseWalkPlayRateMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxParadiseWalkCycleOffSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxParadiseWalkCycleOffSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimOffsetYawClampValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__aimOffsetYawClampValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDrasticAimOffsetYawChangeDetected_MetaData[];
#endif
		static void NewProp__isDrasticAimOffsetYawChangeDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDrasticAimOffsetYawChangeDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowLookAt_MetaData[];
#endif
		static void NewProp__allowLookAt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowLookAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimOffsetYawInterpolated_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__aimOffsetYawInterpolated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__start180Active_MetaData[];
#endif
		static void NewProp__start180Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__start180Active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__turningRight_MetaData[];
#endif
		static void NewProp__turningRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__turningRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__turn180Active_MetaData[];
#endif
		static void NewProp__turn180Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__turn180Active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimOffsetPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__aimOffsetPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInDeathBed_MetaData[];
#endif
		static void NewProp__isInDeathBed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInDeathBed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingCarried_MetaData[];
#endif
		static void NewProp__isBeingCarried_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingCarried;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUsingAimItem_MetaData[];
#endif
		static void NewProp__isUsingAimItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUsingAimItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUsingDeadHard_MetaData[];
#endif
		static void NewProp__isUsingDeadHard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUsingDeadHard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isStrafing_MetaData[];
#endif
		static void NewProp__isStrafing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isStrafing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasLastDamageSourceDeepWounds_MetaData[];
#endif
		static void NewProp__wasLastDamageSourceDeepWounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__wasLastDamageSourceDeepWounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__walkAnimPlayRateMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__walkAnimPlayRateMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__walkAnimStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__walkAnimStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__walkAnimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__walkAnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDead_MetaData[];
#endif
		static void NewProp__isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrawling_MetaData[];
#endif
		static void NewProp__isCrawling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrawling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isStanding_MetaData[];
#endif
		static void NewProp__isStanding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isStanding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasStanding_MetaData[];
#endif
		static void NewProp__wasStanding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__wasStanding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrouching_MetaData[];
#endif
		static void NewProp__isCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasCrouching_MetaData[];
#endif
		static void NewProp__wasCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__wasCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRunning_MetaData[];
#endif
		static void NewProp__isRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasRunning_MetaData[];
#endif
		static void NewProp__wasRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__wasRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isMoving_MetaData[];
#endif
		static void NewProp__isMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAgainstSmallKiller_MetaData[];
#endif
		static void NewProp__isAgainstSmallKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAgainstSmallKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleInterupt_MetaData[];
#endif
		static void NewProp__idleInterupt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__idleInterupt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasIdleRecently_MetaData[];
#endif
		static void NewProp__wasIdleRecently_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__wasIdleRecently;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recentlyNotIdleCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__recentlyNotIdleCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recentlyIdleCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__recentlyIdleCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIdle_MetaData[];
#endif
		static void NewProp__isIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasMovingResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wasMovingResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasCrouchingResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wasCrouchingResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasRunningResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wasRunningResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasStandingResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wasStandingResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTenacityPerkActive_MetaData[];
#endif
		static void NewProp__isTenacityPerkActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTenacityPerkActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRecoveringWhileCrawling_MetaData[];
#endif
		static void NewProp__isRecoveringWhileCrawling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRecoveringWhileCrawling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "LocomotionSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__durationBeforeStart180Reset_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__durationBeforeStart180Reset = { "_durationBeforeStart180Reset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _durationBeforeStart180Reset), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__durationBeforeStart180Reset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__durationBeforeStart180Reset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleDurationFor180StartDetection_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleDurationFor180StartDetection = { "_idleDurationFor180StartDetection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _idleDurationFor180StartDetection), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleDurationFor180StartDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleDurationFor180StartDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180DetectionPrecision_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180DetectionPrecision = { "_start180DetectionPrecision", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _start180DetectionPrecision), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180DetectionPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180DetectionPrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minDurationBetweenTurn180Detection_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minDurationBetweenTurn180Detection = { "_minDurationBetweenTurn180Detection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _minDurationBetweenTurn180Detection), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minDurationBetweenTurn180Detection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minDurationBetweenTurn180Detection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180PrevVelocitiesCacheDuration_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180PrevVelocitiesCacheDuration = { "_turn180PrevVelocitiesCacheDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _turn180PrevVelocitiesCacheDuration), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180PrevVelocitiesCacheDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180PrevVelocitiesCacheDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionDeadZone_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionDeadZone = { "_turn180DetectionDeadZone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _turn180DetectionDeadZone), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionPrecision_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionPrecision = { "_turn180DetectionPrecision", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _turn180DetectionPrecision), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionPrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minParadiseWalkPlayRateMultiplier_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minParadiseWalkPlayRateMultiplier = { "_minParadiseWalkPlayRateMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _minParadiseWalkPlayRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minParadiseWalkPlayRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minParadiseWalkPlayRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__maxParadiseWalkCycleOffSet_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__maxParadiseWalkCycleOffSet = { "_maxParadiseWalkCycleOffSet", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _maxParadiseWalkCycleOffSet), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__maxParadiseWalkCycleOffSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__maxParadiseWalkCycleOffSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawClampValue_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawClampValue = { "_aimOffsetYawClampValue", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _aimOffsetYawClampValue), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawClampValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawClampValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDrasticAimOffsetYawChangeDetected_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDrasticAimOffsetYawChangeDetected_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isDrasticAimOffsetYawChangeDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDrasticAimOffsetYawChangeDetected = { "_isDrasticAimOffsetYawChangeDetected", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDrasticAimOffsetYawChangeDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDrasticAimOffsetYawChangeDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDrasticAimOffsetYawChangeDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_allowLookAt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__allowLookAt = { "_allowLookAt", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__allowLookAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawInterpolated_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawInterpolated = { "_aimOffsetYawInterpolated", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _aimOffsetYawInterpolated), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawInterpolated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawInterpolated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180Active_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180Active_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_start180Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180Active = { "_start180Active", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180Active_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180Active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turningRight_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turningRight_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_turningRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turningRight = { "_turningRight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turningRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turningRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turningRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180Active_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180Active_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_turn180Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180Active = { "_turn180Active", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180Active_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180Active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetPitch_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetPitch = { "_aimOffsetPitch", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _aimOffsetPitch), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isInDeathBed_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isInDeathBed_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isInDeathBed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isInDeathBed = { "_isInDeathBed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isInDeathBed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isInDeathBed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isInDeathBed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isBeingCarried = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried = { "_isBeingCarried", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isUsingAimItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem = { "_isUsingAimItem", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__direction_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _direction), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingDeadHard_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingDeadHard_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isUsingDeadHard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingDeadHard = { "_isUsingDeadHard", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingDeadHard_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingDeadHard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingDeadHard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStrafing_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStrafing_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isStrafing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStrafing = { "_isStrafing", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStrafing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStrafing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasLastDamageSourceDeepWounds_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasLastDamageSourceDeepWounds_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_wasLastDamageSourceDeepWounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasLastDamageSourceDeepWounds = { "_wasLastDamageSourceDeepWounds", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasLastDamageSourceDeepWounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasLastDamageSourceDeepWounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasLastDamageSourceDeepWounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimPlayRateMultiplier_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimPlayRateMultiplier = { "_walkAnimPlayRateMultiplier", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _walkAnimPlayRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimPlayRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimPlayRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimStartOffset_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimStartOffset = { "_walkAnimStartOffset", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _walkAnimStartOffset), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimSpeed_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimSpeed = { "_walkAnimSpeed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _walkAnimSpeed), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDead_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDead_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDead = { "_isDead", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrawling_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrawling_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isCrawling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrawling = { "_isCrawling", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrawling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrawling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrawling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStanding_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStanding_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isStanding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStanding = { "_isStanding", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStanding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStanding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStanding_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStanding_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_wasStanding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStanding = { "_wasStanding", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStanding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStanding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrouching_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrouching_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrouching = { "_isCrouching", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouching_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouching_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_wasCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouching = { "_wasCrouching", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRunning_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRunning_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRunning = { "_isRunning", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunning_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunning_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_wasRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunning = { "_wasRunning", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isMoving_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isMoving_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isMoving = { "_isMoving", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isAgainstSmallKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller = { "_isAgainstSmallKiller", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleInterupt_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleInterupt_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_idleInterupt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleInterupt = { "_idleInterupt", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleInterupt_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleInterupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleInterupt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasIdleRecently_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasIdleRecently_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_wasIdleRecently = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasIdleRecently = { "_wasIdleRecently", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasIdleRecently_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasIdleRecently_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasIdleRecently_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyNotIdleCooldownTime_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyNotIdleCooldownTime = { "_recentlyNotIdleCooldownTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _recentlyNotIdleCooldownTime), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyNotIdleCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyNotIdleCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyIdleCooldownTime_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyIdleCooldownTime = { "_recentlyIdleCooldownTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _recentlyIdleCooldownTime), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyIdleCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyIdleCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isIdle_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isIdle = { "_isIdle", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasMovingResetTime_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasMovingResetTime = { "_wasMovingResetTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasMovingResetTime), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasMovingResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasMovingResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouchingResetTime_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouchingResetTime = { "_wasCrouchingResetTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasCrouchingResetTime), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouchingResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouchingResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunningResetTime_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunningResetTime = { "_wasRunningResetTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasRunningResetTime), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunningResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunningResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStandingResetTime_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStandingResetTime = { "_wasStandingResetTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasStandingResetTime), METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStandingResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStandingResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isTenacityPerkActive_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isTenacityPerkActive_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isTenacityPerkActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isTenacityPerkActive = { "_isTenacityPerkActive", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isTenacityPerkActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isTenacityPerkActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isTenacityPerkActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRecoveringWhileCrawling_MetaData[] = {
		{ "Category", "LocomotionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LocomotionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRecoveringWhileCrawling_SetBit(void* Obj)
	{
		((ULocomotionSurvivorSubAnimInstance*)Obj)->_isRecoveringWhileCrawling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRecoveringWhileCrawling = { "_isRecoveringWhileCrawling", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULocomotionSurvivorSubAnimInstance), &Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRecoveringWhileCrawling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRecoveringWhileCrawling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRecoveringWhileCrawling_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__durationBeforeStart180Reset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleDurationFor180StartDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180DetectionPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minDurationBetweenTurn180Detection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180PrevVelocitiesCacheDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180DetectionPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__minParadiseWalkPlayRateMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__maxParadiseWalkCycleOffSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawClampValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDrasticAimOffsetYawChangeDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__allowLookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetYawInterpolated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__start180Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turningRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__turn180Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__aimOffsetPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isInDeathBed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingAimItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isUsingDeadHard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStrafing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasLastDamageSourceDeepWounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimPlayRateMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__walkAnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrawling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isStanding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStanding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__idleInterupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasIdleRecently,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyNotIdleCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__recentlyIdleCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasMovingResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasCrouchingResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasRunningResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__wasStandingResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isTenacityPerkActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::NewProp__isRecoveringWhileCrawling,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocomotionSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::ClassParams = {
		&ULocomotionSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocomotionSurvivorSubAnimInstance, 605109182);
	template<> DBDANIMATION_API UClass* StaticClass<ULocomotionSurvivorSubAnimInstance>()
	{
		return ULocomotionSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocomotionSurvivorSubAnimInstance(Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance, &ULocomotionSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("ULocomotionSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocomotionSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
