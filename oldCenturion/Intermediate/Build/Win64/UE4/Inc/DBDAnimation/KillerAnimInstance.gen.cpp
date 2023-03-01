// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/KillerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArmIKSensorComponent_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UKillerAnimInstance::StaticRegisterNativesUKillerAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UKillerAnimInstance_NoRegister()
	{
		return UKillerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKillerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lateralVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lateralVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forwardVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__forwardVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__attackState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__attackState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__armIKSensorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__armIKSensorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__interactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__interactionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftFootEffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightFootEffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightClearFrontSpaceVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightClearFrontSpaceVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftClearFrontSpaceVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftClearFrontSpaceVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isKilling_MetaData[];
#endif
		static void NewProp__isKilling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isKilling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPlayingAnyMontage_MetaData[];
#endif
		static void NewProp__isPlayingAnyMontage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPlayingAnyMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttacking_MetaData[];
#endif
		static void NewProp__isAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__directionSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__directionSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__idleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pelvisHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pelvisHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIdle_MetaData[];
#endif
		static void NewProp__isIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSpectator_MetaData[];
#endif
		static void NewProp__isSpectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInAir_MetaData[];
#endif
		static void NewProp__isInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPersonCarryOffsetLookingDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__firstPersonCarryOffsetLookingDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPersonCarryOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__firstPersonCarryOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCarrying_MetaData[];
#endif
		static void NewProp__isCarrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCarrying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAnyMontagePlaying_MetaData[];
#endif
		static void NewProp__isAnyMontagePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAnyMontagePlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightHandIKLocationFPV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightHandIKLocationFPV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftHandIKLocationFPV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftHandIKLocationFPV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "KillerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__lateralVelocity_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__lateralVelocity = { "_lateralVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _lateralVelocity), METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__lateralVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__lateralVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__forwardVelocity_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__forwardVelocity = { "_forwardVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _forwardVelocity), METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__forwardVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__forwardVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__attackState_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__attackState = { "_attackState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _attackState), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__attackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__attackState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__attackState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__armIKSensorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__armIKSensorComponent = { "_armIKSensorComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _armIKSensorComponent), Z_Construct_UClass_UArmIKSensorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__armIKSensorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__armIKSensorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__interactionType_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__interactionType = { "_interactionType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _interactionType), Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__interactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__interactionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__interactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftFootEffectorLocation_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftFootEffectorLocation = { "_leftFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _leftFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightFootEffectorLocation_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightFootEffectorLocation = { "_rightFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _rightFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__velocity_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__velocity = { "_velocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightClearFrontSpaceVector_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightClearFrontSpaceVector = { "_rightClearFrontSpaceVector", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _rightClearFrontSpaceVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightClearFrontSpaceVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightClearFrontSpaceVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftClearFrontSpaceVector_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftClearFrontSpaceVector = { "_leftClearFrontSpaceVector", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _leftClearFrontSpaceVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftClearFrontSpaceVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftClearFrontSpaceVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isKilling_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isKilling_SetBit(void* Obj)
	{
		((UKillerAnimInstance*)Obj)->_isKilling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isKilling = { "_isKilling", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAnimInstance), &Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isKilling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isKilling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isKilling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isPlayingAnyMontage_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isPlayingAnyMontage_SetBit(void* Obj)
	{
		((UKillerAnimInstance*)Obj)->_isPlayingAnyMontage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isPlayingAnyMontage = { "_isPlayingAnyMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAnimInstance), &Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isPlayingAnyMontage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isPlayingAnyMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isPlayingAnyMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAttacking_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAttacking_SetBit(void* Obj)
	{
		((UKillerAnimInstance*)Obj)->_isAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAttacking = { "_isAttacking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAnimInstance), &Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__directionSwitch_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__directionSwitch = { "_directionSwitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _directionSwitch), METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__directionSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__directionSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__idleTime_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__idleTime = { "_idleTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _idleTime), METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__idleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__idleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__pelvisHeight_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__pelvisHeight = { "_pelvisHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _pelvisHeight), METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__pelvisHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__pelvisHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animYaw_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animYaw = { "_animYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _animYaw), METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animPitch_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animPitch = { "_animPitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _animPitch), METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animSpeed_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animSpeed = { "_animSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _animSpeed), METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animDirection_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animDirection = { "_animDirection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _animDirection), METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isIdle_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isIdle_SetBit(void* Obj)
	{
		((UKillerAnimInstance*)Obj)->_isIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isIdle = { "_isIdle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAnimInstance), &Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isSpectator_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isSpectator_SetBit(void* Obj)
	{
		((UKillerAnimInstance*)Obj)->_isSpectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isSpectator = { "_isSpectator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAnimInstance), &Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isSpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isSpectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isSpectator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isInAir_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isInAir_SetBit(void* Obj)
	{
		((UKillerAnimInstance*)Obj)->_isInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isInAir = { "_isInAir", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAnimInstance), &Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown = { "_firstPersonCarryOffsetLookingDown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _firstPersonCarryOffsetLookingDown), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffset_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffset = { "_firstPersonCarryOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _firstPersonCarryOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isCarrying_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isCarrying_SetBit(void* Obj)
	{
		((UKillerAnimInstance*)Obj)->_isCarrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isCarrying = { "_isCarrying", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAnimInstance), &Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isCarrying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isCarrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isCarrying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAnyMontagePlaying_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAnyMontagePlaying_SetBit(void* Obj)
	{
		((UKillerAnimInstance*)Obj)->_isAnyMontagePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAnyMontagePlaying = { "_isAnyMontagePlaying", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAnimInstance), &Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAnyMontagePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAnyMontagePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAnyMontagePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightHandIKLocationFPV_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightHandIKLocationFPV = { "_rightHandIKLocationFPV", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _rightHandIKLocationFPV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightHandIKLocationFPV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightHandIKLocationFPV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftHandIKLocationFPV_MetaData[] = {
		{ "Category", "KillerAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftHandIKLocationFPV = { "_leftHandIKLocationFPV", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerAnimInstance, _leftHandIKLocationFPV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftHandIKLocationFPV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftHandIKLocationFPV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__lateralVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__forwardVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__attackState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__attackState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__armIKSensorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__interactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__interactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftFootEffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightFootEffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightClearFrontSpaceVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftClearFrontSpaceVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isKilling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isPlayingAnyMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__directionSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__idleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__pelvisHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__animDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__firstPersonCarryOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isCarrying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__isAnyMontagePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__rightHandIKLocationFPV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp__leftHandIKLocationFPV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerAnimInstance_Statics::ClassParams = {
		&UKillerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKillerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerAnimInstance, 1010308879);
	template<> DBDANIMATION_API UClass* StaticClass<UKillerAnimInstance>()
	{
		return UKillerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerAnimInstance(Z_Construct_UClass_UKillerAnimInstance, &UKillerAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UKillerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
