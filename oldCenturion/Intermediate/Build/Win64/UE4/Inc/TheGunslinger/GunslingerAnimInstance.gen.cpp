// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/GunslingerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunslingerAnimInstance() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGunslingerAnimInstance_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGunslingerAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void UGunslingerAnimInstance::StaticRegisterNativesUGunslingerAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UGunslingerAnimInstance_NoRegister()
	{
		return UGunslingerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGunslingerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successShotAnimDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__successShotAnimDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__missShotCooldownAnimDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__missShotCooldownAnimDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireAnimDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fireAnimDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimToIdleAnimDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimToIdleAnimDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleToAimAnimDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__idleToAimAnimDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successShotAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__successShotAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__missShotCooldownAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__missShotCooldownAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__fireAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimToIdleAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimToIdleAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleToAimAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__idleToAimAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successShotAnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__successShotAnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__missShotCooldownAnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__missShotCooldownAnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireAnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fireAnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimToIdleAnimPlayrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__aimToIdleAnimPlayrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleToAimAnimPlayrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__idleToAimAnimPlayrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInGunState_MetaData[];
#endif
		static void NewProp__isInGunState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInGunState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isReeling_MetaData[];
#endif
		static void NewProp__isReeling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isReeling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isLinked_MetaData[];
#endif
		static void NewProp__isLinked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLinked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInSuccessShot_MetaData[];
#endif
		static void NewProp__isInSuccessShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInSuccessShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInMissShotCooldown_MetaData[];
#endif
		static void NewProp__isInMissShotCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInMissShotCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFiring_MetaData[];
#endif
		static void NewProp__isFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAimingReadyToShoot_MetaData[];
#endif
		static void NewProp__isAimingReadyToShoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAimingReadyToShoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAimingCooldown_MetaData[];
#endif
		static void NewProp__isAimingCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAimingCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAimingWarmup_MetaData[];
#endif
		static void NewProp__isAimingWarmup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAimingWarmup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAiming_MetaData[];
#endif
		static void NewProp__isAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGunslingerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "GunslingerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimDuration_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimDuration = { "_successShotAnimDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _successShotAnimDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimDuration_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimDuration = { "_missShotCooldownAnimDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _missShotCooldownAnimDuration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimDuration_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimDuration = { "_fireAnimDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _fireAnimDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimDuration_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimDuration = { "_aimToIdleAnimDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _aimToIdleAnimDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimDuration_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimDuration = { "_idleToAimAnimDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _idleToAimAnimDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnim_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnim = { "_successShotAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _successShotAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnim_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnim = { "_missShotCooldownAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _missShotCooldownAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnim_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnim = { "_fireAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _fireAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnim_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnim = { "_aimToIdleAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _aimToIdleAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnim_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnim = { "_idleToAimAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _idleToAimAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimPlayRate_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimPlayRate = { "_successShotAnimPlayRate", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _successShotAnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimPlayRate_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimPlayRate = { "_missShotCooldownAnimPlayRate", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _missShotCooldownAnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimPlayRate_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimPlayRate = { "_fireAnimPlayRate", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _fireAnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimPlayrate_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimPlayrate = { "_aimToIdleAnimPlayrate", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _aimToIdleAnimPlayrate), METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimPlayrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimPlayrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimPlayrate_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimPlayrate = { "_idleToAimAnimPlayrate", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunslingerAnimInstance, _idleToAimAnimPlayrate), METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimPlayrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimPlayrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInGunState_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInGunState_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isInGunState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInGunState = { "_isInGunState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInGunState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInGunState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInGunState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isReeling_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isReeling_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isReeling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isReeling = { "_isReeling", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isReeling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isReeling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isReeling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isLinked_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isLinked_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isLinked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isLinked = { "_isLinked", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isLinked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isLinked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isLinked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInSuccessShot_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInSuccessShot_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isInSuccessShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInSuccessShot = { "_isInSuccessShot", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInSuccessShot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInSuccessShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInSuccessShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInMissShotCooldown_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInMissShotCooldown_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isInMissShotCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInMissShotCooldown = { "_isInMissShotCooldown", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInMissShotCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInMissShotCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInMissShotCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isFiring_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isFiring_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isFiring = { "_isFiring", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingReadyToShoot_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingReadyToShoot_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isAimingReadyToShoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingReadyToShoot = { "_isAimingReadyToShoot", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingReadyToShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingReadyToShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingReadyToShoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingCooldown_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingCooldown_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isAimingCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingCooldown = { "_isAimingCooldown", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingWarmup_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingWarmup_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isAimingWarmup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingWarmup = { "_isAimingWarmup", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingWarmup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingWarmup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingWarmup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAiming_MetaData[] = {
		{ "Category", "GunslingerAnimInstance" },
		{ "ModuleRelativePath", "Public/GunslingerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAiming_SetBit(void* Obj)
	{
		((UGunslingerAnimInstance*)Obj)->_isAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAiming = { "_isAiming", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGunslingerAnimInstance), &Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAiming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGunslingerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__successShotAnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__missShotCooldownAnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__fireAnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__aimToIdleAnimPlayrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__idleToAimAnimPlayrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInGunState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isReeling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isLinked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInSuccessShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isInMissShotCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingReadyToShoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAimingWarmup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunslingerAnimInstance_Statics::NewProp__isAiming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGunslingerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGunslingerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGunslingerAnimInstance_Statics::ClassParams = {
		&UGunslingerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGunslingerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGunslingerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGunslingerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGunslingerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGunslingerAnimInstance, 4064457300);
	template<> THEGUNSLINGER_API UClass* StaticClass<UGunslingerAnimInstance>()
	{
		return UGunslingerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGunslingerAnimInstance(Z_Construct_UClass_UGunslingerAnimInstance, &UGunslingerAnimInstance::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UGunslingerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGunslingerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
