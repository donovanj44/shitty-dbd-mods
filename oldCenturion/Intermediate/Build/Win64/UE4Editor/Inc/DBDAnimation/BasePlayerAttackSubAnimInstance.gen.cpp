// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/BasePlayerAttackSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerAttackSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBasePlayerAttackSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceSelector();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate();
// End Cross Module References
	void UBasePlayerAttackSubAnimInstance::StaticRegisterNativesUBasePlayerAttackSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_NoRegister()
	{
		return UBasePlayerAttackSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPersonView_MetaData[];
#endif
		static void NewProp__firstPersonView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__firstPersonView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackBounceOfWall_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attackBounceOfWall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackBounceOfWallPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__attackBounceOfWallPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attackHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackHitPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__attackHitPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackMiss_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attackMiss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackMissPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__attackMissPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackSwing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attackSwing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackSwingPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__attackSwingPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attackIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackInPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__attackInPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isStrafe_MetaData[];
#endif
		static void NewProp__isStrafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isStrafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strafeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__strafeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__attackState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__attackState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BasePlayerAttackSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__firstPersonView_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__firstPersonView_SetBit(void* Obj)
	{
		((UBasePlayerAttackSubAnimInstance*)Obj)->_firstPersonView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__firstPersonView = { "_firstPersonView", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBasePlayerAttackSubAnimInstance), &Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__firstPersonView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__firstPersonView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__firstPersonView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWall_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWall = { "_attackBounceOfWall", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackBounceOfWall), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate = { "_attackBounceOfWallPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackBounceOfWallPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHit_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHit = { "_attackHit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackHit), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHitPlayRate_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHitPlayRate = { "_attackHitPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackHitPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHitPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHitPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMiss_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMiss = { "_attackMiss", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackMiss), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMiss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMiss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMissPlayRate_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMissPlayRate = { "_attackMissPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackMissPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMissPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMissPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwing_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwing = { "_attackSwing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackSwing), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwingPlayRate_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwingPlayRate = { "_attackSwingPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackSwingPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwingPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwingPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackIn_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackIn = { "_attackIn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackIn), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackInPlayRate_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackInPlayRate = { "_attackInPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackInPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackInPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackInPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__isStrafe_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__isStrafe_SetBit(void* Obj)
	{
		((UBasePlayerAttackSubAnimInstance*)Obj)->_isStrafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__isStrafe = { "_isStrafe", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBasePlayerAttackSubAnimInstance), &Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__isStrafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__isStrafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__isStrafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__strafeAngle_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__strafeAngle = { "_strafeAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _strafeAngle), METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__strafeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__strafeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__direction_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _direction), METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackState_MetaData[] = {
		{ "Category", "BasePlayerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackState = { "_attackState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePlayerAttackSubAnimInstance, _attackState), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__firstPersonView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackHitPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMiss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackMissPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackSwingPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackInPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__isStrafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__strafeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::NewProp__attackState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePlayerAttackSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::ClassParams = {
		&UBasePlayerAttackSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePlayerAttackSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasePlayerAttackSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasePlayerAttackSubAnimInstance, 1408156040);
	template<> DBDANIMATION_API UClass* StaticClass<UBasePlayerAttackSubAnimInstance>()
	{
		return UBasePlayerAttackSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasePlayerAttackSubAnimInstance(Z_Construct_UClass_UBasePlayerAttackSubAnimInstance, &UBasePlayerAttackSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UBasePlayerAttackSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePlayerAttackSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
