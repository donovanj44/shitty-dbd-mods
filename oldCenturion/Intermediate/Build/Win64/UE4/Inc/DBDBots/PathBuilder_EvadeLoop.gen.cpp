// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathBuilder_EvadeLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathBuilder_EvadeLoop() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder_EvadeLoop_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder_EvadeLoop();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNavEvadeLoopComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavMovePath_NoRegister();
// End Cross Module References
	void UPathBuilder_EvadeLoop::StaticRegisterNativesUPathBuilder_EvadeLoop()
	{
	}
	UClass* Z_Construct_UClass_UPathBuilder_EvadeLoop_NoRegister()
	{
		return UPathBuilder_EvadeLoop::StaticClass();
	}
	struct Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pickedEvadeLoopComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pickedEvadeLoopComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chaserWorkPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chaserWorkPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__querierWorkPathB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__querierWorkPathB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__querierWorkPathA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__querierWorkPathA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__originalEvadeLoopWorkPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__originalEvadeLoopWorkPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightWhenNearAlly_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightWhenNearAlly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNearAllyPenaltyPathPointDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxNearAllyPenaltyPathPointDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightAtMaxSafety_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightAtMaxSafety;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility_MetaData[];
#endif
		static void NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightAtMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightAtMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEvadeInteractableWeightDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEvadeInteractableWeightDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPathRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnPathRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakPalletInteractionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BreakPalletInteractionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwapPathReachTimeBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwapPathReachTimeBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaserCrossingEvadeTimePenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaserCrossingEvadeTimePenalty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceEvadePointUnderDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceEvadePointUnderDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddDistanceToRequiredEvadeGap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddDistanceToRequiredEvadeGap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathBuilder_EvadeLoop.h" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__pickedEvadeLoopComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__pickedEvadeLoopComponent = { "_pickedEvadeLoopComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, _pickedEvadeLoopComponent), Z_Construct_UClass_UDBDNavEvadeLoopComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__pickedEvadeLoopComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__pickedEvadeLoopComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__chaserWorkPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__chaserWorkPath = { "_chaserWorkPath", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, _chaserWorkPath), Z_Construct_UClass_UNavMovePath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__chaserWorkPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__chaserWorkPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathB_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathB = { "_querierWorkPathB", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, _querierWorkPathB), Z_Construct_UClass_UNavMovePath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathA_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathA = { "_querierWorkPathA", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, _querierWorkPathA), Z_Construct_UClass_UNavMovePath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__originalEvadeLoopWorkPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__originalEvadeLoopWorkPath = { "_originalEvadeLoopWorkPath", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, _originalEvadeLoopWorkPath), Z_Construct_UClass_UNavMovePath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__originalEvadeLoopWorkPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__originalEvadeLoopWorkPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightWhenNearAlly_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightWhenNearAlly = { "WeightWhenNearAlly", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, WeightWhenNearAlly), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightWhenNearAlly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightWhenNearAlly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxNearAllyPenaltyPathPointDistance_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxNearAllyPenaltyPathPointDistance = { "MaxNearAllyPenaltyPathPointDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, MaxNearAllyPenaltyPathPointDistance), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxNearAllyPenaltyPathPointDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxNearAllyPenaltyPathPointDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxSafety_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxSafety = { "WeightAtMaxSafety", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, WeightAtMaxSafety), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxSafety_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxSafety_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	void Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility_SetBit(void* Obj)
	{
		((UPathBuilder_EvadeLoop*)Obj)->MaxWeightAtNearestDistanceIfHostileHasRangedAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility = { "MaxWeightAtNearestDistanceIfHostileHasRangedAbility", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPathBuilder_EvadeLoop), &Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxDistance_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxDistance = { "WeightAtMaxDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, WeightAtMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxEvadeInteractableWeightDistance_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxEvadeInteractableWeightDistance = { "MaxEvadeInteractableWeightDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, MaxEvadeInteractableWeightDistance), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxEvadeInteractableWeightDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxEvadeInteractableWeightDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_OnPathRadius_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_OnPathRadius = { "OnPathRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, OnPathRadius), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_OnPathRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_OnPathRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_BreakPalletInteractionId_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_BreakPalletInteractionId = { "BreakPalletInteractionId", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, BreakPalletInteractionId), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_BreakPalletInteractionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_BreakPalletInteractionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_SwapPathReachTimeBuffer_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_SwapPathReachTimeBuffer = { "SwapPathReachTimeBuffer", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, SwapPathReachTimeBuffer), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_SwapPathReachTimeBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_SwapPathReachTimeBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ChaserCrossingEvadeTimePenalty_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ChaserCrossingEvadeTimePenalty = { "ChaserCrossingEvadeTimePenalty", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, ChaserCrossingEvadeTimePenalty), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ChaserCrossingEvadeTimePenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ChaserCrossingEvadeTimePenalty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ForceEvadePointUnderDistance_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ForceEvadePointUnderDistance = { "ForceEvadePointUnderDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, ForceEvadePointUnderDistance), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ForceEvadePointUnderDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ForceEvadePointUnderDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_AddDistanceToRequiredEvadeGap_MetaData[] = {
		{ "Category", "PathBuilder_EvadeLoop" },
		{ "ModuleRelativePath", "Public/PathBuilder_EvadeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_AddDistanceToRequiredEvadeGap = { "AddDistanceToRequiredEvadeGap", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EvadeLoop, AddDistanceToRequiredEvadeGap), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_AddDistanceToRequiredEvadeGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_AddDistanceToRequiredEvadeGap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__pickedEvadeLoopComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__chaserWorkPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__querierWorkPathA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp__originalEvadeLoopWorkPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightWhenNearAlly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxNearAllyPenaltyPathPointDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxSafety,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxWeightAtNearestDistanceIfHostileHasRangedAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_WeightAtMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_MaxEvadeInteractableWeightDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_OnPathRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_BreakPalletInteractionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_SwapPathReachTimeBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ChaserCrossingEvadeTimePenalty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_ForceEvadePointUnderDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::NewProp_AddDistanceToRequiredEvadeGap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathBuilder_EvadeLoop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::ClassParams = {
		&UPathBuilder_EvadeLoop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathBuilder_EvadeLoop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathBuilder_EvadeLoop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathBuilder_EvadeLoop, 3054898645);
	template<> DBDBOTS_API UClass* StaticClass<UPathBuilder_EvadeLoop>()
	{
		return UPathBuilder_EvadeLoop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathBuilder_EvadeLoop(Z_Construct_UClass_UPathBuilder_EvadeLoop, &UPathBuilder_EvadeLoop::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathBuilder_EvadeLoop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathBuilder_EvadeLoop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
