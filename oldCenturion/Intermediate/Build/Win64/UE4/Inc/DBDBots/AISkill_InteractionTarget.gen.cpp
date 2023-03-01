// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTarget() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAIDetectedStimulus();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EInteractionTargetInSightModes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EInteractionTargetRequirements();
// End Cross Module References
	void UAISkill_InteractionTarget::StaticRegisterNativesUAISkill_InteractionTarget()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_NoRegister()
	{
		return UAISkill_InteractionTarget::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetsMoveAwayTooFastInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__targetsMoveAwayTooFastInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetsMoveAwayTooFastInfo_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetsMoveAwayTooFastInfo_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__filteredTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__filteredTargets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__filteredTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unfilteredTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__unfilteredTargets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unfilteredTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysStrafeAroundTarget_MetaData[];
#endif
		static void NewProp_AlwaysStrafeAroundTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysStrafeAroundTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoveAwayTooFastCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetMoveAwayTooFastCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoveAwayTooFastStopDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetMoveAwayTooFastStopDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOfSightModeDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutOfSightModeDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSightMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSightMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSightMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleFilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MaxAngleFilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMaxHalfAngleOnPath_MetaData[];
#endif
		static void NewProp_TestMaxHalfAngleOnPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TestMaxHalfAngleOnPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMaxHalfAngle2D_MetaData[];
#endif
		static void NewProp_IsMaxHalfAngle2D_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMaxHalfAngle2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopMaxHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopMaxHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMaxHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMaxHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopMinRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopMinRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMinRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMinRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSwapBestStimulusWithBestTarget_MetaData[];
#endif
		static void NewProp_AutoSwapBestStimulusWithBestTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoSwapBestStimulusWithBestTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetRequirement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetRequirement_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Interaction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionTarget.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__targetsMoveAwayTooFastInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__targetsMoveAwayTooFastInfo = { "_targetsMoveAwayTooFastInfo", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, _targetsMoveAwayTooFastInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__targetsMoveAwayTooFastInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__targetsMoveAwayTooFastInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__targetsMoveAwayTooFastInfo_Key_KeyProp = { "_targetsMoveAwayTooFastInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__targetsMoveAwayTooFastInfo_ValueProp = { "_targetsMoveAwayTooFastInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__filteredTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__filteredTargets = { "_filteredTargets", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, _filteredTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__filteredTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__filteredTargets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__filteredTargets_Inner = { "_filteredTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIDetectedStimulus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__unfilteredTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__unfilteredTargets = { "_unfilteredTargets", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, _unfilteredTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__unfilteredTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__unfilteredTargets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__unfilteredTargets_Inner = { "_unfilteredTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIDetectedStimulus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AlwaysStrafeAroundTarget_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AlwaysStrafeAroundTarget_SetBit(void* Obj)
	{
		((UAISkill_InteractionTarget*)Obj)->AlwaysStrafeAroundTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AlwaysStrafeAroundTarget = { "AlwaysStrafeAroundTarget", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill_InteractionTarget), &Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AlwaysStrafeAroundTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AlwaysStrafeAroundTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AlwaysStrafeAroundTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastCooldown_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastCooldown = { "TargetMoveAwayTooFastCooldown", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, TargetMoveAwayTooFastCooldown), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastStopDelay_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastStopDelay = { "TargetMoveAwayTooFastStopDelay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, TargetMoveAwayTooFastStopDelay), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastStopDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastStopDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_OutOfSightModeDelay_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_OutOfSightModeDelay = { "OutOfSightModeDelay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, OutOfSightModeDelay), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_OutOfSightModeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_OutOfSightModeDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_InSightMode_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_InSightMode = { "InSightMode", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, InSightMode), Z_Construct_UEnum_DBDBots_EInteractionTargetInSightModes, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_InSightMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_InSightMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_InSightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_MaxAngleFilterClass_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_MaxAngleFilterClass = { "MaxAngleFilterClass", nullptr, (EPropertyFlags)0x0014000000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, MaxAngleFilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_MaxAngleFilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_MaxAngleFilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TestMaxHalfAngleOnPath_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TestMaxHalfAngleOnPath_SetBit(void* Obj)
	{
		((UAISkill_InteractionTarget*)Obj)->TestMaxHalfAngleOnPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TestMaxHalfAngleOnPath = { "TestMaxHalfAngleOnPath", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill_InteractionTarget), &Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TestMaxHalfAngleOnPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TestMaxHalfAngleOnPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TestMaxHalfAngleOnPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_IsMaxHalfAngle2D_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_IsMaxHalfAngle2D_SetBit(void* Obj)
	{
		((UAISkill_InteractionTarget*)Obj)->IsMaxHalfAngle2D = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_IsMaxHalfAngle2D = { "IsMaxHalfAngle2D", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill_InteractionTarget), &Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_IsMaxHalfAngle2D_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_IsMaxHalfAngle2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_IsMaxHalfAngle2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxHalfAngle_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxHalfAngle = { "StopMaxHalfAngle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, StopMaxHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxHalfAngle_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxHalfAngle = { "StartMaxHalfAngle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, StartMaxHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxRange_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxRange = { "StopMaxRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, StopMaxRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMinRange_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMinRange = { "StopMinRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, StopMinRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMinRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMinRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxRange_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxRange = { "StartMaxRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, StartMaxRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMinRange_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMinRange = { "StartMinRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, StartMinRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMinRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMinRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AutoSwapBestStimulusWithBestTarget_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AutoSwapBestStimulusWithBestTarget_SetBit(void* Obj)
	{
		((UAISkill_InteractionTarget*)Obj)->AutoSwapBestStimulusWithBestTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AutoSwapBestStimulusWithBestTarget = { "AutoSwapBestStimulusWithBestTarget", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill_InteractionTarget), &Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AutoSwapBestStimulusWithBestTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AutoSwapBestStimulusWithBestTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AutoSwapBestStimulusWithBestTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetRequirement_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetRequirement = { "TargetRequirement", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget, TargetRequirement), Z_Construct_UEnum_DBDBots_EInteractionTargetRequirements, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__targetsMoveAwayTooFastInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__targetsMoveAwayTooFastInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__targetsMoveAwayTooFastInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__filteredTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__filteredTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__unfilteredTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp__unfilteredTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AlwaysStrafeAroundTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetMoveAwayTooFastStopDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_OutOfSightModeDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_InSightMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_InSightMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_MaxAngleFilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TestMaxHalfAngleOnPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_IsMaxHalfAngle2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StopMinRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_StartMinRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_AutoSwapBestStimulusWithBestTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_Statics::NewProp_TargetRequirement_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTarget_Statics::ClassParams = {
		&UAISkill_InteractionTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTarget, 1743236207);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionTarget>()
	{
		return UAISkill_InteractionTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTarget(Z_Construct_UClass_UAISkill_InteractionTarget, &UAISkill_InteractionTarget::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
