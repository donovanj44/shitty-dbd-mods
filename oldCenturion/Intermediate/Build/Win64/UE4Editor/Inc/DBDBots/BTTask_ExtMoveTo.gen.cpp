// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTTask_ExtMoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ExtMoveTo() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_ExtMoveTo_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_ExtMoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EExtMoveToStrafeFocusOptions();
// End Cross Module References
	void UBTTask_ExtMoveTo::StaticRegisterNativesUBTTask_ExtMoveTo()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_ExtMoveTo_NoRegister()
	{
		return UBTTask_ExtMoveTo::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ExtMoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseContextualAcceptableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UseContextualAcceptableRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathReachedPointRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathReachedPointRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAccelerationForPaths_MetaData[];
#endif
		static void NewProp_UseAccelerationForPaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAccelerationForPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepathInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepathInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBIgnoreGroupAvoidance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBIgnoreGroupAvoidance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalMoveUnderNavLinkDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalMoveUnderNavLinkDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearGoalModeUnderDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearGoalModeUnderDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearGoalMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NearGoalMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NearGoalMovementMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToGoalMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ToGoalMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToGoalMovementMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeFocusOwnerOnComponentBBKey_MetaData[];
#endif
		static void NewProp_StrafeFocusOwnerOnComponentBBKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StrafeFocusOwnerOnComponentBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMoveStrafeFocusPrecisionAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndMoveStrafeFocusPrecisionAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntermittentOffStrafeFocusDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntermittentOffStrafeFocusDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntermittentOffStrafeFocusInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntermittentOffStrafeFocusInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntermittentOnStrafeFocusDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntermittentOnStrafeFocusDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntermittentOnStrafeFocusInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntermittentOnStrafeFocusInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeNearFocusModeUnderDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrafeNearFocusModeUnderDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeFocusPitch_MetaData[];
#endif
		static void NewProp_StrafeFocusPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StrafeFocusPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StrafeFocus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StrafeFocus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBStrafeFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBStrafeFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_ExtMoveTo.h" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseContextualAcceptableRadius_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseContextualAcceptableRadius = { "UseContextualAcceptableRadius", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, UseContextualAcceptableRadius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseContextualAcceptableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseContextualAcceptableRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_PathReachedPointRadius_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_PathReachedPointRadius = { "PathReachedPointRadius", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, PathReachedPointRadius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_PathReachedPointRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_PathReachedPointRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseAccelerationForPaths_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseAccelerationForPaths_SetBit(void* Obj)
	{
		((UBTTask_ExtMoveTo*)Obj)->UseAccelerationForPaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseAccelerationForPaths = { "UseAccelerationForPaths", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTTask_ExtMoveTo), &Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseAccelerationForPaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseAccelerationForPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseAccelerationForPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_RepathInterval_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_RepathInterval = { "RepathInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, RepathInterval), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_RepathInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_RepathInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBIgnoreGroupAvoidance_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBIgnoreGroupAvoidance = { "BBIgnoreGroupAvoidance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, BBIgnoreGroupAvoidance), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBIgnoreGroupAvoidance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBIgnoreGroupAvoidance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NormalMoveUnderNavLinkDistance_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NormalMoveUnderNavLinkDistance = { "NormalMoveUnderNavLinkDistance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, NormalMoveUnderNavLinkDistance), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NormalMoveUnderNavLinkDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NormalMoveUnderNavLinkDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalModeUnderDistance_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalModeUnderDistance = { "NearGoalModeUnderDistance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, NearGoalModeUnderDistance), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalModeUnderDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalModeUnderDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalMovementMode_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalMovementMode = { "NearGoalMovementMode", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, NearGoalMovementMode), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalMovementMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_ToGoalMovementMode_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_ToGoalMovementMode = { "ToGoalMovementMode", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, ToGoalMovementMode), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_ToGoalMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_ToGoalMovementMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_ToGoalMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusOwnerOnComponentBBKey_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusOwnerOnComponentBBKey_SetBit(void* Obj)
	{
		((UBTTask_ExtMoveTo*)Obj)->StrafeFocusOwnerOnComponentBBKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusOwnerOnComponentBBKey = { "StrafeFocusOwnerOnComponentBBKey", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTTask_ExtMoveTo), &Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusOwnerOnComponentBBKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusOwnerOnComponentBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusOwnerOnComponentBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_EndMoveStrafeFocusPrecisionAngle_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_EndMoveStrafeFocusPrecisionAngle = { "EndMoveStrafeFocusPrecisionAngle", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, EndMoveStrafeFocusPrecisionAngle), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_EndMoveStrafeFocusPrecisionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_EndMoveStrafeFocusPrecisionAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusDeviation_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusDeviation = { "IntermittentOffStrafeFocusDeviation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, IntermittentOffStrafeFocusDeviation), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusInterval_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusInterval = { "IntermittentOffStrafeFocusInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, IntermittentOffStrafeFocusInterval), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusDeviation_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusDeviation = { "IntermittentOnStrafeFocusDeviation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, IntermittentOnStrafeFocusDeviation), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusInterval_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusInterval = { "IntermittentOnStrafeFocusInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, IntermittentOnStrafeFocusInterval), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeNearFocusModeUnderDistance_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeNearFocusModeUnderDistance = { "StrafeNearFocusModeUnderDistance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, StrafeNearFocusModeUnderDistance), METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeNearFocusModeUnderDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeNearFocusModeUnderDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusPitch_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusPitch_SetBit(void* Obj)
	{
		((UBTTask_ExtMoveTo*)Obj)->StrafeFocusPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusPitch = { "StrafeFocusPitch", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTTask_ExtMoveTo), &Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocus_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocus = { "StrafeFocus", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, StrafeFocus), Z_Construct_UEnum_DBDBots_EExtMoveToStrafeFocusOptions, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBStrafeFocus_MetaData[] = {
		{ "Category", "BTTask_ExtMoveTo" },
		{ "ModuleRelativePath", "Public/BTTask_ExtMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBStrafeFocus = { "BBStrafeFocus", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtMoveTo, BBStrafeFocus), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBStrafeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBStrafeFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseContextualAcceptableRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_PathReachedPointRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_UseAccelerationForPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_RepathInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBIgnoreGroupAvoidance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NormalMoveUnderNavLinkDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalModeUnderDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_NearGoalMovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_ToGoalMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_ToGoalMovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusOwnerOnComponentBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_EndMoveStrafeFocusPrecisionAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOffStrafeFocusInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_IntermittentOnStrafeFocusInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeNearFocusModeUnderDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocusPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_StrafeFocus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::NewProp_BBStrafeFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ExtMoveTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::ClassParams = {
		&UBTTask_ExtMoveTo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_ExtMoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_ExtMoveTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_ExtMoveTo, 3693423611);
	template<> DBDBOTS_API UClass* StaticClass<UBTTask_ExtMoveTo>()
	{
		return UBTTask_ExtMoveTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_ExtMoveTo(Z_Construct_UClass_UBTTask_ExtMoveTo, &UBTTask_ExtMoveTo::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTTask_ExtMoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ExtMoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
