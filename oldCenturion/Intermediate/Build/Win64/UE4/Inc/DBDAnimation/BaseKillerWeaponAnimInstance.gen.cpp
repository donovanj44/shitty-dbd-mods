// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/BaseKillerWeaponAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseKillerWeaponAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerWeaponAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerWeaponAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceSelector();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate();
// End Cross Module References
	void UBaseKillerWeaponAnimInstance::StaticRegisterNativesUBaseKillerWeaponAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UBaseKillerWeaponAnimInstance_NoRegister()
	{
		return UBaseKillerWeaponAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isActive_MetaData[];
#endif
		static void NewProp__isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCarrying_MetaData[];
#endif
		static void NewProp__isCarrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCarrying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__attackState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__attackState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BaseKillerWeaponAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__firstPersonView_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__firstPersonView_SetBit(void* Obj)
	{
		((UBaseKillerWeaponAnimInstance*)Obj)->_firstPersonView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__firstPersonView = { "_firstPersonView", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseKillerWeaponAnimInstance), &Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__firstPersonView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__firstPersonView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__firstPersonView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWall_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWall = { "_attackBounceOfWall", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackBounceOfWall), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate = { "_attackBounceOfWallPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackBounceOfWallPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHit_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHit = { "_attackHit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackHit), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHitPlayRate_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHitPlayRate = { "_attackHitPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackHitPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHitPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHitPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMiss_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMiss = { "_attackMiss", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackMiss), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMiss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMiss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMissPlayRate_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMissPlayRate = { "_attackMissPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackMissPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMissPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMissPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwing_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwing = { "_attackSwing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackSwing), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwingPlayRate_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwingPlayRate = { "_attackSwingPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackSwingPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwingPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwingPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackIn_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackIn = { "_attackIn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackIn), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackInPlayRate_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackInPlayRate = { "_attackInPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackInPlayRate), METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackInPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackInPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isActive_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isActive_SetBit(void* Obj)
	{
		((UBaseKillerWeaponAnimInstance*)Obj)->_isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isActive = { "_isActive", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseKillerWeaponAnimInstance), &Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isCarrying_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isCarrying_SetBit(void* Obj)
	{
		((UBaseKillerWeaponAnimInstance*)Obj)->_isCarrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isCarrying = { "_isCarrying", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseKillerWeaponAnimInstance), &Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isCarrying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isCarrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isCarrying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackState_MetaData[] = {
		{ "Category", "BaseKillerWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackState = { "_attackState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerWeaponAnimInstance, _attackState), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__firstPersonView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackBounceOfWallPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackHitPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMiss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackMissPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackSwingPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackInPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__isCarrying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::NewProp__attackState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseKillerWeaponAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::ClassParams = {
		&UBaseKillerWeaponAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseKillerWeaponAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseKillerWeaponAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseKillerWeaponAnimInstance, 388039908);
	template<> DBDANIMATION_API UClass* StaticClass<UBaseKillerWeaponAnimInstance>()
	{
		return UBaseKillerWeaponAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseKillerWeaponAnimInstance(Z_Construct_UClass_UBaseKillerWeaponAnimInstance, &UBaseKillerWeaponAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UBaseKillerWeaponAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseKillerWeaponAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
