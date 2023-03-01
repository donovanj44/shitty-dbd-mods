// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Halloween2020/Public/BlightedSerumDashInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightedSerumDashInteraction() {}
// Cross Module References
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumDashInteraction_NoRegister();
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumDashInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_Halloween2020();
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumCollisionInteraction_NoRegister();
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumCooldownInteraction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBlightedSerumDashInteraction::execSetCollisionInteraction)
	{
		P_GET_OBJECT(UBlightedSerumCollisionInteraction,Z_Param_collisionInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionInteraction(Z_Param_collisionInteraction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightedSerumDashInteraction::execSetCooldownInteraction)
	{
		P_GET_OBJECT(UBlightedSerumCooldownInteraction,Z_Param_cooldownInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCooldownInteraction(Z_Param_cooldownInteraction);
		P_NATIVE_END;
	}
	void UBlightedSerumDashInteraction::StaticRegisterNativesUBlightedSerumDashInteraction()
	{
		UClass* Class = UBlightedSerumDashInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCollisionInteraction", &UBlightedSerumDashInteraction::execSetCollisionInteraction },
			{ "SetCooldownInteraction", &UBlightedSerumDashInteraction::execSetCooldownInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics
	{
		struct BlightedSerumDashInteraction_eventSetCollisionInteraction_Parms
		{
			UBlightedSerumCollisionInteraction* collisionInteraction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collisionInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collisionInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::NewProp_collisionInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::NewProp_collisionInteraction = { "collisionInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightedSerumDashInteraction_eventSetCollisionInteraction_Parms, collisionInteraction), Z_Construct_UClass_UBlightedSerumCollisionInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::NewProp_collisionInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::NewProp_collisionInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::NewProp_collisionInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightedSerumDashInteraction, nullptr, "SetCollisionInteraction", nullptr, nullptr, sizeof(BlightedSerumDashInteraction_eventSetCollisionInteraction_Parms), Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics
	{
		struct BlightedSerumDashInteraction_eventSetCooldownInteraction_Parms
		{
			UBlightedSerumCooldownInteraction* cooldownInteraction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cooldownInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cooldownInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction = { "cooldownInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightedSerumDashInteraction_eventSetCooldownInteraction_Parms, cooldownInteraction), Z_Construct_UClass_UBlightedSerumCooldownInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightedSerumDashInteraction, nullptr, "SetCooldownInteraction", nullptr, nullptr, sizeof(BlightedSerumDashInteraction_eventSetCooldownInteraction_Parms), Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlightedSerumDashInteraction_NoRegister()
	{
		return UBlightedSerumDashInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UBlightedSerumDashInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wallDashCollisionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wallDashCollisionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wallDashCollisionHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wallDashCollisionHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wallDashCollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wallDashCollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lookAngleTurnRateModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lookAngleTurnRateModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraPitchRecenterTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cameraPitchRecenterTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wallDashAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wallDashAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vectorInterpToSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__vectorInterpToSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dashDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__dashDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lookAngleToTurnRateCurveMouse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lookAngleToTurnRateCurveMouse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lookAngleToTurnRateCurveController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lookAngleToTurnRateCurveController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dashSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dashSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collisionInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cooldownInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_Halloween2020,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCollisionInteraction, "SetCollisionInteraction" }, // 780972858
		{ &Z_Construct_UFunction_UBlightedSerumDashInteraction_SetCooldownInteraction, "SetCooldownInteraction" }, // 265269689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BlightedSerumDashInteraction.h" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRange_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRange = { "_wallDashCollisionRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _wallDashCollisionRange), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionHeight_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionHeight = { "_wallDashCollisionHeight", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _wallDashCollisionHeight), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRadius_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRadius = { "_wallDashCollisionRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _wallDashCollisionRadius), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleTurnRateModifier_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleTurnRateModifier = { "_lookAngleTurnRateModifier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _lookAngleTurnRateModifier), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleTurnRateModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleTurnRateModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cameraPitchRecenterTime_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cameraPitchRecenterTime = { "_cameraPitchRecenterTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _cameraPitchRecenterTime), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cameraPitchRecenterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cameraPitchRecenterTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashAccelerationMultiplier_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashAccelerationMultiplier = { "_wallDashAccelerationMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _wallDashAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__vectorInterpToSpeed_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__vectorInterpToSpeed = { "_vectorInterpToSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _vectorInterpToSpeed), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__vectorInterpToSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__vectorInterpToSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashDuration_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashDuration = { "_dashDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _dashDuration), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveMouse_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveMouse = { "_lookAngleToTurnRateCurveMouse", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _lookAngleToTurnRateCurveMouse), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveMouse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveMouse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveController_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveController = { "_lookAngleToTurnRateCurveController", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _lookAngleToTurnRateCurveController), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashSpeedCurve_MetaData[] = {
		{ "Category", "BlightedSerumDashInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashSpeedCurve = { "_dashSpeedCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _dashSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__collisionInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__collisionInteraction = { "_collisionInteraction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _collisionInteraction), Z_Construct_UClass_UBlightedSerumCollisionInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__collisionInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__collisionInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cooldownInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightedSerumDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cooldownInteraction = { "_cooldownInteraction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumDashInteraction, _cooldownInteraction), Z_Construct_UClass_UBlightedSerumCooldownInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cooldownInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cooldownInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleTurnRateModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cameraPitchRecenterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__wallDashAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__vectorInterpToSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveMouse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__lookAngleToTurnRateCurveController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__dashSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__collisionInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::NewProp__cooldownInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightedSerumDashInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::ClassParams = {
		&UBlightedSerumDashInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightedSerumDashInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightedSerumDashInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightedSerumDashInteraction, 503722821);
	template<> HALLOWEEN2020_API UClass* StaticClass<UBlightedSerumDashInteraction>()
	{
		return UBlightedSerumDashInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightedSerumDashInteraction(Z_Construct_UClass_UBlightedSerumDashInteraction, &UBlightedSerumDashInteraction::StaticClass, TEXT("/Script/Halloween2020"), TEXT("UBlightedSerumDashInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightedSerumDashInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
