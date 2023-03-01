// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/SurvivorAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_USurvivorAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_USurvivorAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperGuidedAction();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorAnimInstance::execIsPlayingMontageByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_montageId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingMontageByName(Z_Param_montageId);
		P_NATIVE_END;
	}
	static FName NAME_USurvivorAnimInstance_AddAudioRepairRateRadius = FName(TEXT("AddAudioRepairRateRadius"));
	void USurvivorAnimInstance::AddAudioRepairRateRadius(int32 distance)
	{
		SurvivorAnimInstance_eventAddAudioRepairRateRadius_Parms Parms;
		Parms.distance=distance;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorAnimInstance_AddAudioRepairRateRadius),&Parms);
	}
	static FName NAME_USurvivorAnimInstance_OnInfectiousFrightScream = FName(TEXT("OnInfectiousFrightScream"));
	void USurvivorAnimInstance::OnInfectiousFrightScream()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorAnimInstance_OnInfectiousFrightScream),NULL);
	}
	static FName NAME_USurvivorAnimInstance_SetAudioRummageAkEvent = FName(TEXT("SetAudioRummageAkEvent"));
	void USurvivorAnimInstance::SetAudioRummageAkEvent(FName distance)
	{
		SurvivorAnimInstance_eventSetAudioRummageAkEvent_Parms Parms;
		Parms.distance=distance;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorAnimInstance_SetAudioRummageAkEvent),&Parms);
	}
	void USurvivorAnimInstance::StaticRegisterNativesUSurvivorAnimInstance()
	{
		UClass* Class = USurvivorAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPlayingMontageByName", &USurvivorAnimInstance::execIsPlayingMontageByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAnimInstance_eventAddAudioRepairRateRadius_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorAnimInstance, nullptr, "AddAudioRepairRateRadius", nullptr, nullptr, sizeof(SurvivorAnimInstance_eventAddAudioRepairRateRadius_Parms), Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics
	{
		struct SurvivorAnimInstance_eventIsPlayingMontageByName_Parms
		{
			FName montageId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_montageId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorAnimInstance_eventIsPlayingMontageByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorAnimInstance_eventIsPlayingMontageByName_Parms), &Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::NewProp_montageId = { "montageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAnimInstance_eventIsPlayingMontageByName_Parms, montageId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::NewProp_montageId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorAnimInstance, nullptr, "IsPlayingMontageByName", nullptr, nullptr, sizeof(SurvivorAnimInstance_eventIsPlayingMontageByName_Parms), Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorAnimInstance_OnInfectiousFrightScream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAnimInstance_OnInfectiousFrightScream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorAnimInstance_OnInfectiousFrightScream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorAnimInstance, nullptr, "OnInfectiousFrightScream", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAnimInstance_OnInfectiousFrightScream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAnimInstance_OnInfectiousFrightScream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorAnimInstance_OnInfectiousFrightScream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorAnimInstance_OnInfectiousFrightScream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAnimInstance_eventSetAudioRummageAkEvent_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorAnimInstance, nullptr, "SetAudioRummageAkEvent", nullptr, nullptr, sizeof(SurvivorAnimInstance_eventSetAudioRummageAkEvent_Parms), Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorAnimInstance_NoRegister()
	{
		return USurvivorAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasLinkInput_MetaData[];
#endif
		static void NewProp_HasLinkInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasLinkInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHealingKOCamper_MetaData[];
#endif
		static void NewProp_IsHealingKOCamper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHealingKOCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlayingFreddyMori_MetaData[];
#endif
		static void NewProp_IsPlayingFreddyMori_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayingFreddyMori;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlayingWakeUpOther_MetaData[];
#endif
		static void NewProp_IsPlayingWakeUpOther_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayingWakeUpOther;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsingDeadHard_MetaData[];
#endif
		static void NewProp_IsUsingDeadHard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsingDeadHard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingCarriedByTheGhostFace_MetaData[];
#endif
		static void NewProp_IsBeingCarriedByTheGhostFace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingCarriedByTheGhostFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingCarriedByTheLegion_MetaData[];
#endif
		static void NewProp_IsBeingCarriedByTheLegion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingCarriedByTheLegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingCarriedByTheHag_MetaData[];
#endif
		static void NewProp_IsBeingCarriedByTheHag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingCarriedByTheHag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingCarriedByThePig_MetaData[];
#endif
		static void NewProp_IsBeingCarriedByThePig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingCarriedByThePig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingCarriedByTheNightmare_MetaData[];
#endif
		static void NewProp_IsBeingCarriedByTheNightmare_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingCarriedByTheNightmare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingCarriedByTheSpirit_MetaData[];
#endif
		static void NewProp_IsBeingCarriedByTheSpirit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingCarriedByTheSpirit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyPlayerMontageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentlyPlayerMontageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAnyMontagePlaying_MetaData[];
#endif
		static void NewProp_HasAnyMontagePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAnyMontagePlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_MetaData[];
#endif
		static void NewProp_Idle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootEffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootEffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__walkAnimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__walkAnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAir_MetaData[];
#endif
		static void NewProp_InAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsArmOverrideDisabled_MetaData[];
#endif
		static void NewProp_IsArmOverrideDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsArmOverrideDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingLamentConfiguration_MetaData[];
#endif
		static void NewProp_IsHoldingLamentConfiguration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingLamentConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingAnyItem_MetaData[];
#endif
		static void NewProp_IsHoldingAnyItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingAnyItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingVaccine_MetaData[];
#endif
		static void NewProp_IsHoldingVaccine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingVaccine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingFlashbang_MetaData[];
#endif
		static void NewProp_IsHoldingFlashbang_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingFlashbang;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingFirecracker_MetaData[];
#endif
		static void NewProp_IsHoldingFirecracker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingFirecracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingSmallItem_MetaData[];
#endif
		static void NewProp_IsHoldingSmallItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingSmallItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingHandleItem_MetaData[];
#endif
		static void NewProp_IsHoldingHandleItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingHandleItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarriedAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CarriedAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasherInFPV_MetaData[];
#endif
		static void NewProp_IsSlasherInFPV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasherInFPV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousInteractionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousInteractionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousInteractionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Injured_MetaData[];
#endif
		static void NewProp_Injured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Injured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInteracting_MetaData[];
#endif
		static void NewProp_IsInteracting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInteracting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strafe_MetaData[];
#endif
		static void NewProp_Strafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Strafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIKTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandIKTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArmIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightArmIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropStaggerTimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropStaggerTimeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowLookAt_MetaData[];
#endif
		static void NewProp_AllowLookAt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowLookAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingAimItem_MetaData[];
#endif
		static void NewProp_IsHoldingAimItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingAimItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsingAimItem_MetaData[];
#endif
		static void NewProp_IsUsingAimItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsingAimItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCarryAttackSucess_MetaData[];
#endif
		static void NewProp_IsCarryAttackSucess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCarryAttackSucess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingKilled_MetaData[];
#endif
		static void NewProp_IsBeingKilled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingKilled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlayingMadnessTierUpWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsPlayingMadnessTierUpWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInsideCloset_MetaData[];
#endif
		static void NewProp_IsInsideCloset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInsideCloset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrawling_MetaData[];
#endif
		static void NewProp_IsCrawling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrawling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTrapped_MetaData[];
#endif
		static void NewProp_IsTrapped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTrapped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuidedAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuidedAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrouched_MetaData[];
#endif
		static void NewProp_IsCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingPutOnHook_MetaData[];
#endif
		static void NewProp_IsBeingPutOnHook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingPutOnHook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingCarried_MetaData[];
#endif
		static void NewProp_IsBeingCarried_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingCarried;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFrightScreaming_MetaData[];
#endif
		static void NewProp__isFrightScreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFrightScreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayCarryAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayCarryAttackMontage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayCarryAttackMontage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageMadnessTierUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageMadnessTierUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSacrificeStruggling_MetaData[];
#endif
		static void NewProp_IsSacrificeStruggling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSacrificeStruggling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHooked_MetaData[];
#endif
		static void NewProp_IsHooked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CamperPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorAnimInstance_AddAudioRepairRateRadius, "AddAudioRepairRateRadius" }, // 950694865
		{ &Z_Construct_UFunction_USurvivorAnimInstance_IsPlayingMontageByName, "IsPlayingMontageByName" }, // 2963133819
		{ &Z_Construct_UFunction_USurvivorAnimInstance_OnInfectiousFrightScream, "OnInfectiousFrightScream" }, // 2285882221
		{ &Z_Construct_UFunction_USurvivorAnimInstance_SetAudioRummageAkEvent, "SetAudioRummageAkEvent" }, // 897719284
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SurvivorAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasLinkInput_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasLinkInput_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->HasLinkInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasLinkInput = { "HasLinkInput", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasLinkInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasLinkInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasLinkInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHealingKOCamper_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHealingKOCamper_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHealingKOCamper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHealingKOCamper = { "IsHealingKOCamper", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHealingKOCamper_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHealingKOCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHealingKOCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingFreddyMori_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingFreddyMori_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsPlayingFreddyMori = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingFreddyMori = { "IsPlayingFreddyMori", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingFreddyMori_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingFreddyMori_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingFreddyMori_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingWakeUpOther_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingWakeUpOther_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsPlayingWakeUpOther = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingWakeUpOther = { "IsPlayingWakeUpOther", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingWakeUpOther_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingWakeUpOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingWakeUpOther_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingDeadHard_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingDeadHard_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsUsingDeadHard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingDeadHard = { "IsUsingDeadHard", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingDeadHard_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingDeadHard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingDeadHard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheGhostFace_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheGhostFace_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsBeingCarriedByTheGhostFace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheGhostFace = { "IsBeingCarriedByTheGhostFace", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheGhostFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheGhostFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheGhostFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheLegion_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheLegion_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsBeingCarriedByTheLegion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheLegion = { "IsBeingCarriedByTheLegion", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheLegion_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheLegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheLegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheHag_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheHag_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsBeingCarriedByTheHag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheHag = { "IsBeingCarriedByTheHag", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheHag_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheHag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheHag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByThePig_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByThePig_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsBeingCarriedByThePig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByThePig = { "IsBeingCarriedByThePig", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByThePig_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByThePig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByThePig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheNightmare_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheNightmare_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsBeingCarriedByTheNightmare = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheNightmare = { "IsBeingCarriedByTheNightmare", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheNightmare_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheNightmare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheNightmare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheSpirit_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheSpirit_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsBeingCarriedByTheSpirit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheSpirit = { "IsBeingCarriedByTheSpirit", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheSpirit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheSpirit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheSpirit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CurrentlyPlayerMontageId_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CurrentlyPlayerMontageId = { "CurrentlyPlayerMontageId", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, CurrentlyPlayerMontageId), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CurrentlyPlayerMontageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CurrentlyPlayerMontageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasAnyMontagePlaying_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasAnyMontagePlaying_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->HasAnyMontagePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasAnyMontagePlaying = { "HasAnyMontagePlaying", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasAnyMontagePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasAnyMontagePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasAnyMontagePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MyTime_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MyTime = { "MyTime", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, MyTime), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Idle_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Idle_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->Idle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Idle = { "Idle", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Idle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_LeftFootEffectorLocation_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_LeftFootEffectorLocation = { "LeftFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, LeftFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_LeftFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_LeftFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightFootEffectorLocation_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightFootEffectorLocation = { "RightFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, RightFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, Yaw), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, Pitch), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__walkAnimSpeed_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__walkAnimSpeed = { "_walkAnimSpeed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, _walkAnimSpeed), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__walkAnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__walkAnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InAir_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InAir_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->InAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InAir = { "InAir", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsArmOverrideDisabled_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsArmOverrideDisabled_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsArmOverrideDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsArmOverrideDisabled = { "IsArmOverrideDisabled", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsArmOverrideDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsArmOverrideDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsArmOverrideDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingLamentConfiguration_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingLamentConfiguration_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHoldingLamentConfiguration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingLamentConfiguration = { "IsHoldingLamentConfiguration", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingLamentConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingLamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingLamentConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAnyItem_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAnyItem_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHoldingAnyItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAnyItem = { "IsHoldingAnyItem", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAnyItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAnyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAnyItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingVaccine_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingVaccine_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHoldingVaccine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingVaccine = { "IsHoldingVaccine", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingVaccine_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingVaccine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingVaccine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFlashbang_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFlashbang_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHoldingFlashbang = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFlashbang = { "IsHoldingFlashbang", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFlashbang_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFlashbang_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFlashbang_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFirecracker_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFirecracker_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHoldingFirecracker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFirecracker = { "IsHoldingFirecracker", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFirecracker_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFirecracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFirecracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingSmallItem_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingSmallItem_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHoldingSmallItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingSmallItem = { "IsHoldingSmallItem", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingSmallItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingSmallItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingSmallItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingHandleItem_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingHandleItem_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHoldingHandleItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingHandleItem = { "IsHoldingHandleItem", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingHandleItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingHandleItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingHandleItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CarriedAlpha_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CarriedAlpha = { "CarriedAlpha", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, CarriedAlpha), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CarriedAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CarriedAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSlasherInFPV_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSlasherInFPV_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsSlasherInFPV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSlasherInFPV = { "IsSlasherInFPV", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSlasherInFPV_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSlasherInFPV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSlasherInFPV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_PreviousInteractionType_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_PreviousInteractionType = { "PreviousInteractionType", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, PreviousInteractionType), Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_PreviousInteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_PreviousInteractionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_PreviousInteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InteractionType_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, InteractionType), Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InteractionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Injured_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Injured_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->Injured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Injured = { "Injured", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Injured_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Injured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Injured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInteracting_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInteracting_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsInteracting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInteracting = { "IsInteracting", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInteracting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInteracting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Strafe_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Strafe_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->Strafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Strafe = { "Strafe", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Strafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Strafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Strafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightHandIKTransform_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightHandIKTransform = { "RightHandIKTransform", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, RightHandIKTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightHandIKTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightHandIKTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightArmIKAlpha_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightArmIKAlpha = { "RightArmIKAlpha", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, RightArmIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightArmIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightArmIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_DropStaggerTimeLeft_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_DropStaggerTimeLeft = { "DropStaggerTimeLeft", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, DropStaggerTimeLeft), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_DropStaggerTimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_DropStaggerTimeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_AllowLookAt_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_AllowLookAt_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->AllowLookAt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_AllowLookAt = { "AllowLookAt", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_AllowLookAt_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_AllowLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_AllowLookAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAimItem_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAimItem_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHoldingAimItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAimItem = { "IsHoldingAimItem", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAimItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAimItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAimItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingAimItem_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingAimItem_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsUsingAimItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingAimItem = { "IsUsingAimItem", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingAimItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingAimItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingAimItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCarryAttackSucess_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCarryAttackSucess_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsCarryAttackSucess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCarryAttackSucess = { "IsCarryAttackSucess", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCarryAttackSucess_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCarryAttackSucess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCarryAttackSucess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingKilled_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingKilled_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsBeingKilled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingKilled = { "IsBeingKilled", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingKilled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingKilled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingKilled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingMadnessTierUpWeight_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingMadnessTierUpWeight = { "IsPlayingMadnessTierUpWeight", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, IsPlayingMadnessTierUpWeight), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingMadnessTierUpWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingMadnessTierUpWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInsideCloset_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInsideCloset_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsInsideCloset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInsideCloset = { "IsInsideCloset", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInsideCloset_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInsideCloset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInsideCloset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrawling_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrawling_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsCrawling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrawling = { "IsCrawling", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrawling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrawling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrawling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsTrapped_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsTrapped_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsTrapped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsTrapped = { "IsTrapped", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsTrapped_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsTrapped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsTrapped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_GuidedAction_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_GuidedAction = { "GuidedAction", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, GuidedAction), Z_Construct_UEnum_DeadByDaylight_ECamperGuidedAction, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_GuidedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_GuidedAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_GuidedAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrouched_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrouched_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrouched = { "IsCrouched", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingPutOnHook_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingPutOnHook_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsBeingPutOnHook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingPutOnHook = { "IsBeingPutOnHook", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingPutOnHook_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingPutOnHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingPutOnHook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarried_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarried_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsBeingCarried = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarried = { "IsBeingCarried", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarried_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarried_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarried_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__isFrightScreaming_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__isFrightScreaming_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->_isFrightScreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__isFrightScreaming = { "_isFrightScreaming", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__isFrightScreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__isFrightScreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__isFrightScreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_ArrayCarryAttackMontage_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_ArrayCarryAttackMontage = { "ArrayCarryAttackMontage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, ArrayCarryAttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_ArrayCarryAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_ArrayCarryAttackMontage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_ArrayCarryAttackMontage_Inner = { "ArrayCarryAttackMontage", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimCompositeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MontageMadnessTierUp_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MontageMadnessTierUp = { "MontageMadnessTierUp", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, MontageMadnessTierUp), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MontageMadnessTierUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MontageMadnessTierUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSacrificeStruggling_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSacrificeStruggling_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsSacrificeStruggling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSacrificeStruggling = { "IsSacrificeStruggling", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSacrificeStruggling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSacrificeStruggling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSacrificeStruggling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHooked_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHooked_SetBit(void* Obj)
	{
		((USurvivorAnimInstance*)Obj)->IsHooked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHooked = { "IsHooked", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAnimInstance), &Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHooked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CamperPlayer_MetaData[] = {
		{ "Category", "SurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CamperPlayer = { "CamperPlayer", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAnimInstance, CamperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CamperPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CamperPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasLinkInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHealingKOCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingFreddyMori,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingWakeUpOther,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingDeadHard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheGhostFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheLegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheHag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByThePig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheNightmare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarriedByTheSpirit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CurrentlyPlayerMontageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_HasAnyMontagePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_LeftFootEffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightFootEffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__walkAnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsArmOverrideDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingLamentConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAnyItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingVaccine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFlashbang,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingFirecracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingSmallItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingHandleItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CarriedAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSlasherInFPV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_PreviousInteractionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_PreviousInteractionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InteractionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_InteractionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Injured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_Strafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightHandIKTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_RightArmIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_DropStaggerTimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_AllowLookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHoldingAimItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsUsingAimItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCarryAttackSucess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingKilled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsPlayingMadnessTierUpWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsInsideCloset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrawling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsTrapped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_GuidedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_GuidedAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingPutOnHook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsBeingCarried,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp__isFrightScreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_ArrayCarryAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_ArrayCarryAttackMontage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_MontageMadnessTierUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsSacrificeStruggling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_IsHooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAnimInstance_Statics::NewProp_CamperPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorAnimInstance_Statics::ClassParams = {
		&USurvivorAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurvivorAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorAnimInstance, 1281553265);
	template<> DBDANIMATION_API UClass* StaticClass<USurvivorAnimInstance>()
	{
		return USurvivorAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorAnimInstance(Z_Construct_UClass_USurvivorAnimInstance, &USurvivorAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("USurvivorAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
