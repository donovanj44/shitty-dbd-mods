// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ReverseBearTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverseBearTrap() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AReverseBearTrap_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AReverseBearTrap();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationMontageSlave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AReverseBearTrap::execAttachSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachSurvivor(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execAuthority_SetKeyID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_keyID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetKeyID(Z_Param_keyID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execCanExecute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanExecute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execDetachSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachSurvivor(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execFastForwardExecutionTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FastForwardExecutionTimer(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execGetAttachedSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetAttachedSurvivor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execGetExecutionTimerPercentTimeElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExecutionTimerPercentTimeElapsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execGetExecutionTimerTimeLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExecutionTimerTimeLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execGetExitGatesPoweredAfterAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetExitGatesPoweredAfterAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execGetGeneratorFixedAfterAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGeneratorFixedAfterAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execGetKeyID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKeyID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execGetWarningLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWarningLevel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execGetWasGateClosedAtAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWasGateClosedAtAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execHasDetachStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDetachStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execIsExecutionTimerActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExecutionTimerActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execIsExecutionTimerDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExecutionTimerDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execIsInWarningZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInWarningZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execIsRBTActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRBTActivated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execNotifyDetachStarted)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyDetachStarted(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execNotifyOnAttachSurvivorBegin)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyOnAttachSurvivorBegin(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execOnEnterWarningZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterWarningZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execOnExitWarningZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitWarningZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execOnGeneratorComplete)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_remainingGeneratorCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorComplete(Z_Param_remainingGeneratorCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execResetExecutionTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetExecutionTimer(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execSetGateClosedAtAttachment)
	{
		P_GET_UBOOL(Z_Param_closed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGateClosedAtAttachment(Z_Param_closed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execSetVisible)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisible(Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execShouldUpdateExecutionTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldUpdateExecutionTimer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execStopExecutionTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopExecutionTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrap::execStopMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMontage_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AReverseBearTrap_GetWarningLevel = FName(TEXT("GetWarningLevel"));
	int32 AReverseBearTrap::GetWarningLevel() const
	{
		ReverseBearTrap_eventGetWarningLevel_Parms Parms;
		const_cast<AReverseBearTrap*>(this)->ProcessEvent(FindFunctionChecked(NAME_AReverseBearTrap_GetWarningLevel),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AReverseBearTrap_OnAttachSurvivor = FName(TEXT("OnAttachSurvivor"));
	void AReverseBearTrap::OnAttachSurvivor(ACamperPlayer* survivor)
	{
		ReverseBearTrap_eventOnAttachSurvivor_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_AReverseBearTrap_OnAttachSurvivor),&Parms);
	}
	static FName NAME_AReverseBearTrap_OnAttachSurvivorBegin = FName(TEXT("OnAttachSurvivorBegin"));
	void AReverseBearTrap::OnAttachSurvivorBegin(ACamperPlayer* survivor)
	{
		ReverseBearTrap_eventOnAttachSurvivorBegin_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_AReverseBearTrap_OnAttachSurvivorBegin),&Parms);
	}
	static FName NAME_AReverseBearTrap_OnDetachSurvivor = FName(TEXT("OnDetachSurvivor"));
	void AReverseBearTrap::OnDetachSurvivor(ACamperPlayer* survivor)
	{
		ReverseBearTrap_eventOnDetachSurvivor_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_AReverseBearTrap_OnDetachSurvivor),&Parms);
	}
	static FName NAME_AReverseBearTrap_OnWarningLevelChanged = FName(TEXT("OnWarningLevelChanged"));
	void AReverseBearTrap::OnWarningLevelChanged(int32 previousWarningLevel, int32 currentWarningLevel)
	{
		ReverseBearTrap_eventOnWarningLevelChanged_Parms Parms;
		Parms.previousWarningLevel=previousWarningLevel;
		Parms.currentWarningLevel=currentWarningLevel;
		ProcessEvent(FindFunctionChecked(NAME_AReverseBearTrap_OnWarningLevelChanged),&Parms);
	}
	static FName NAME_AReverseBearTrap_ShouldUpdateExecutionTimer = FName(TEXT("ShouldUpdateExecutionTimer"));
	bool AReverseBearTrap::ShouldUpdateExecutionTimer() const
	{
		ReverseBearTrap_eventShouldUpdateExecutionTimer_Parms Parms;
		const_cast<AReverseBearTrap*>(this)->ProcessEvent(FindFunctionChecked(NAME_AReverseBearTrap_ShouldUpdateExecutionTimer),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AReverseBearTrap_StopMontage = FName(TEXT("StopMontage"));
	void AReverseBearTrap::StopMontage()
	{
		ProcessEvent(FindFunctionChecked(NAME_AReverseBearTrap_StopMontage),NULL);
	}
	void AReverseBearTrap::StaticRegisterNativesAReverseBearTrap()
	{
		UClass* Class = AReverseBearTrap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachSurvivor", &AReverseBearTrap::execAttachSurvivor },
			{ "Authority_SetKeyID", &AReverseBearTrap::execAuthority_SetKeyID },
			{ "CanExecute", &AReverseBearTrap::execCanExecute },
			{ "DetachSurvivor", &AReverseBearTrap::execDetachSurvivor },
			{ "FastForwardExecutionTimer", &AReverseBearTrap::execFastForwardExecutionTimer },
			{ "GetAttachedSurvivor", &AReverseBearTrap::execGetAttachedSurvivor },
			{ "GetExecutionTimerPercentTimeElapsed", &AReverseBearTrap::execGetExecutionTimerPercentTimeElapsed },
			{ "GetExecutionTimerTimeLeft", &AReverseBearTrap::execGetExecutionTimerTimeLeft },
			{ "GetExitGatesPoweredAfterAttachment", &AReverseBearTrap::execGetExitGatesPoweredAfterAttachment },
			{ "GetGeneratorFixedAfterAttachment", &AReverseBearTrap::execGetGeneratorFixedAfterAttachment },
			{ "GetKeyID", &AReverseBearTrap::execGetKeyID },
			{ "GetWarningLevel", &AReverseBearTrap::execGetWarningLevel },
			{ "GetWasGateClosedAtAttachment", &AReverseBearTrap::execGetWasGateClosedAtAttachment },
			{ "HasDetachStarted", &AReverseBearTrap::execHasDetachStarted },
			{ "IsExecutionTimerActive", &AReverseBearTrap::execIsExecutionTimerActive },
			{ "IsExecutionTimerDone", &AReverseBearTrap::execIsExecutionTimerDone },
			{ "IsInWarningZone", &AReverseBearTrap::execIsInWarningZone },
			{ "IsRBTActivated", &AReverseBearTrap::execIsRBTActivated },
			{ "NotifyDetachStarted", &AReverseBearTrap::execNotifyDetachStarted },
			{ "NotifyOnAttachSurvivorBegin", &AReverseBearTrap::execNotifyOnAttachSurvivorBegin },
			{ "OnEnterWarningZone", &AReverseBearTrap::execOnEnterWarningZone },
			{ "OnExitWarningZone", &AReverseBearTrap::execOnExitWarningZone },
			{ "OnGeneratorComplete", &AReverseBearTrap::execOnGeneratorComplete },
			{ "ResetExecutionTimer", &AReverseBearTrap::execResetExecutionTimer },
			{ "SetGateClosedAtAttachment", &AReverseBearTrap::execSetGateClosedAtAttachment },
			{ "SetVisible", &AReverseBearTrap::execSetVisible },
			{ "ShouldUpdateExecutionTimer", &AReverseBearTrap::execShouldUpdateExecutionTimer },
			{ "StopExecutionTimer", &AReverseBearTrap::execStopExecutionTimer },
			{ "StopMontage", &AReverseBearTrap::execStopMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics
	{
		struct ReverseBearTrap_eventAttachSurvivor_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventAttachSurvivor_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "AttachSurvivor", nullptr, nullptr, sizeof(ReverseBearTrap_eventAttachSurvivor_Parms), Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics
	{
		struct ReverseBearTrap_eventAuthority_SetKeyID_Parms
		{
			int32 keyID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_keyID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::NewProp_keyID = { "keyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventAuthority_SetKeyID_Parms, keyID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::NewProp_keyID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "Authority_SetKeyID", nullptr, nullptr, sizeof(ReverseBearTrap_eventAuthority_SetKeyID_Parms), Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics
	{
		struct ReverseBearTrap_eventCanExecute_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventCanExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventCanExecute_Parms), &Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "CanExecute", nullptr, nullptr, sizeof(ReverseBearTrap_eventCanExecute_Parms), Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_CanExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_CanExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics
	{
		struct ReverseBearTrap_eventDetachSurvivor_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventDetachSurvivor_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "DetachSurvivor", nullptr, nullptr, sizeof(ReverseBearTrap_eventDetachSurvivor_Parms), Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics
	{
		struct ReverseBearTrap_eventFastForwardExecutionTimer_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventFastForwardExecutionTimer_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "FastForwardExecutionTimer", nullptr, nullptr, sizeof(ReverseBearTrap_eventFastForwardExecutionTimer_Parms), Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics
	{
		struct ReverseBearTrap_eventGetAttachedSurvivor_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventGetAttachedSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "GetAttachedSurvivor", nullptr, nullptr, sizeof(ReverseBearTrap_eventGetAttachedSurvivor_Parms), Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics
	{
		struct ReverseBearTrap_eventGetExecutionTimerPercentTimeElapsed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventGetExecutionTimerPercentTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "GetExecutionTimerPercentTimeElapsed", nullptr, nullptr, sizeof(ReverseBearTrap_eventGetExecutionTimerPercentTimeElapsed_Parms), Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics
	{
		struct ReverseBearTrap_eventGetExecutionTimerTimeLeft_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventGetExecutionTimerTimeLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "GetExecutionTimerTimeLeft", nullptr, nullptr, sizeof(ReverseBearTrap_eventGetExecutionTimerTimeLeft_Parms), Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics
	{
		struct ReverseBearTrap_eventGetExitGatesPoweredAfterAttachment_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventGetExitGatesPoweredAfterAttachment_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventGetExitGatesPoweredAfterAttachment_Parms), &Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "GetExitGatesPoweredAfterAttachment", nullptr, nullptr, sizeof(ReverseBearTrap_eventGetExitGatesPoweredAfterAttachment_Parms), Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics
	{
		struct ReverseBearTrap_eventGetGeneratorFixedAfterAttachment_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventGetGeneratorFixedAfterAttachment_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventGetGeneratorFixedAfterAttachment_Parms), &Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "GetGeneratorFixedAfterAttachment", nullptr, nullptr, sizeof(ReverseBearTrap_eventGetGeneratorFixedAfterAttachment_Parms), Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics
	{
		struct ReverseBearTrap_eventGetKeyID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventGetKeyID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "GetKeyID", nullptr, nullptr, sizeof(ReverseBearTrap_eventGetKeyID_Parms), Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_GetKeyID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_GetKeyID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventGetWarningLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "GetWarningLevel", nullptr, nullptr, sizeof(ReverseBearTrap_eventGetWarningLevel_Parms), Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics
	{
		struct ReverseBearTrap_eventGetWasGateClosedAtAttachment_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventGetWasGateClosedAtAttachment_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventGetWasGateClosedAtAttachment_Parms), &Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "GetWasGateClosedAtAttachment", nullptr, nullptr, sizeof(ReverseBearTrap_eventGetWasGateClosedAtAttachment_Parms), Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics
	{
		struct ReverseBearTrap_eventHasDetachStarted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventHasDetachStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventHasDetachStarted_Parms), &Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "HasDetachStarted", nullptr, nullptr, sizeof(ReverseBearTrap_eventHasDetachStarted_Parms), Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics
	{
		struct ReverseBearTrap_eventIsExecutionTimerActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventIsExecutionTimerActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventIsExecutionTimerActive_Parms), &Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "IsExecutionTimerActive", nullptr, nullptr, sizeof(ReverseBearTrap_eventIsExecutionTimerActive_Parms), Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics
	{
		struct ReverseBearTrap_eventIsExecutionTimerDone_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventIsExecutionTimerDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventIsExecutionTimerDone_Parms), &Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "IsExecutionTimerDone", nullptr, nullptr, sizeof(ReverseBearTrap_eventIsExecutionTimerDone_Parms), Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics
	{
		struct ReverseBearTrap_eventIsInWarningZone_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventIsInWarningZone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventIsInWarningZone_Parms), &Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "IsInWarningZone", nullptr, nullptr, sizeof(ReverseBearTrap_eventIsInWarningZone_Parms), Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics
	{
		struct ReverseBearTrap_eventIsRBTActivated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventIsRBTActivated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventIsRBTActivated_Parms), &Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "IsRBTActivated", nullptr, nullptr, sizeof(ReverseBearTrap_eventIsRBTActivated_Parms), Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics
	{
		struct ReverseBearTrap_eventNotifyDetachStarted_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventNotifyDetachStarted_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "NotifyDetachStarted", nullptr, nullptr, sizeof(ReverseBearTrap_eventNotifyDetachStarted_Parms), Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics
	{
		struct ReverseBearTrap_eventNotifyOnAttachSurvivorBegin_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventNotifyOnAttachSurvivorBegin_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "NotifyOnAttachSurvivorBegin", nullptr, nullptr, sizeof(ReverseBearTrap_eventNotifyOnAttachSurvivorBegin_Parms), Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventOnAttachSurvivor_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "OnAttachSurvivor", nullptr, nullptr, sizeof(ReverseBearTrap_eventOnAttachSurvivor_Parms), Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventOnAttachSurvivorBegin_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "OnAttachSurvivorBegin", nullptr, nullptr, sizeof(ReverseBearTrap_eventOnAttachSurvivorBegin_Parms), Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventOnDetachSurvivor_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "OnDetachSurvivor", nullptr, nullptr, sizeof(ReverseBearTrap_eventOnDetachSurvivor_Parms), Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_OnEnterWarningZone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_OnEnterWarningZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_OnEnterWarningZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "OnEnterWarningZone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_OnEnterWarningZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnEnterWarningZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_OnEnterWarningZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_OnEnterWarningZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_OnExitWarningZone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_OnExitWarningZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_OnExitWarningZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "OnExitWarningZone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_OnExitWarningZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnExitWarningZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_OnExitWarningZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_OnExitWarningZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics
	{
		struct ReverseBearTrap_eventOnGeneratorComplete_Parms
		{
			int32 remainingGeneratorCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_remainingGeneratorCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::NewProp_remainingGeneratorCount = { "remainingGeneratorCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventOnGeneratorComplete_Parms, remainingGeneratorCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::NewProp_remainingGeneratorCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "OnGeneratorComplete", nullptr, nullptr, sizeof(ReverseBearTrap_eventOnGeneratorComplete_Parms), Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentWarningLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_previousWarningLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::NewProp_currentWarningLevel = { "currentWarningLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventOnWarningLevelChanged_Parms, currentWarningLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::NewProp_previousWarningLevel = { "previousWarningLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventOnWarningLevelChanged_Parms, previousWarningLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::NewProp_currentWarningLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::NewProp_previousWarningLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "OnWarningLevelChanged", nullptr, nullptr, sizeof(ReverseBearTrap_eventOnWarningLevelChanged_Parms), Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics
	{
		struct ReverseBearTrap_eventResetExecutionTimer_Parms
		{
			float time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrap_eventResetExecutionTimer_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "ResetExecutionTimer", nullptr, nullptr, sizeof(ReverseBearTrap_eventResetExecutionTimer_Parms), Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics
	{
		struct ReverseBearTrap_eventSetGateClosedAtAttachment_Parms
		{
			bool closed;
		};
		static void NewProp_closed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_closed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::NewProp_closed_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventSetGateClosedAtAttachment_Parms*)Obj)->closed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::NewProp_closed = { "closed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventSetGateClosedAtAttachment_Parms), &Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::NewProp_closed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::NewProp_closed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "SetGateClosedAtAttachment", nullptr, nullptr, sizeof(ReverseBearTrap_eventSetGateClosedAtAttachment_Parms), Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics
	{
		struct ReverseBearTrap_eventSetVisible_Parms
		{
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventSetVisible_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventSetVisible_Parms), &Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "SetVisible", nullptr, nullptr, sizeof(ReverseBearTrap_eventSetVisible_Parms), Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_SetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_SetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrap_eventShouldUpdateExecutionTimer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrap_eventShouldUpdateExecutionTimer_Parms), &Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "ShouldUpdateExecutionTimer", nullptr, nullptr, sizeof(ReverseBearTrap_eventShouldUpdateExecutionTimer_Parms), Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_StopExecutionTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_StopExecutionTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_StopExecutionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "StopExecutionTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_StopExecutionTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_StopExecutionTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_StopExecutionTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_StopExecutionTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrap_StopMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrap_StopMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrap_StopMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrap, nullptr, "StopMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrap_StopMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrap_StopMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrap_StopMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrap_StopMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AReverseBearTrap_NoRegister()
	{
		return AReverseBearTrap::StaticClass();
	}
	struct Z_Construct_UClass_AReverseBearTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorFixedAfterAttachment_MetaData[];
#endif
		static void NewProp__generatorFixedAfterAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__generatorFixedAfterAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exitGatesPoweredAfterAttachment_MetaData[];
#endif
		static void NewProp__exitGatesPoweredAfterAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__exitGatesPoweredAfterAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__keyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__keyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animMontageSlave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animMontageSlave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rbtMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rbtMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReverseBearTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReverseBearTrap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReverseBearTrap_AttachSurvivor, "AttachSurvivor" }, // 1158058369
		{ &Z_Construct_UFunction_AReverseBearTrap_Authority_SetKeyID, "Authority_SetKeyID" }, // 2573236849
		{ &Z_Construct_UFunction_AReverseBearTrap_CanExecute, "CanExecute" }, // 3810859509
		{ &Z_Construct_UFunction_AReverseBearTrap_DetachSurvivor, "DetachSurvivor" }, // 2531791691
		{ &Z_Construct_UFunction_AReverseBearTrap_FastForwardExecutionTimer, "FastForwardExecutionTimer" }, // 1707533739
		{ &Z_Construct_UFunction_AReverseBearTrap_GetAttachedSurvivor, "GetAttachedSurvivor" }, // 2112535225
		{ &Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerPercentTimeElapsed, "GetExecutionTimerPercentTimeElapsed" }, // 2455682110
		{ &Z_Construct_UFunction_AReverseBearTrap_GetExecutionTimerTimeLeft, "GetExecutionTimerTimeLeft" }, // 785927164
		{ &Z_Construct_UFunction_AReverseBearTrap_GetExitGatesPoweredAfterAttachment, "GetExitGatesPoweredAfterAttachment" }, // 2041259271
		{ &Z_Construct_UFunction_AReverseBearTrap_GetGeneratorFixedAfterAttachment, "GetGeneratorFixedAfterAttachment" }, // 2954026938
		{ &Z_Construct_UFunction_AReverseBearTrap_GetKeyID, "GetKeyID" }, // 658504114
		{ &Z_Construct_UFunction_AReverseBearTrap_GetWarningLevel, "GetWarningLevel" }, // 3249777120
		{ &Z_Construct_UFunction_AReverseBearTrap_GetWasGateClosedAtAttachment, "GetWasGateClosedAtAttachment" }, // 2745357846
		{ &Z_Construct_UFunction_AReverseBearTrap_HasDetachStarted, "HasDetachStarted" }, // 1746452748
		{ &Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerActive, "IsExecutionTimerActive" }, // 2019024663
		{ &Z_Construct_UFunction_AReverseBearTrap_IsExecutionTimerDone, "IsExecutionTimerDone" }, // 1205784199
		{ &Z_Construct_UFunction_AReverseBearTrap_IsInWarningZone, "IsInWarningZone" }, // 2446082063
		{ &Z_Construct_UFunction_AReverseBearTrap_IsRBTActivated, "IsRBTActivated" }, // 912252290
		{ &Z_Construct_UFunction_AReverseBearTrap_NotifyDetachStarted, "NotifyDetachStarted" }, // 981470357
		{ &Z_Construct_UFunction_AReverseBearTrap_NotifyOnAttachSurvivorBegin, "NotifyOnAttachSurvivorBegin" }, // 3995301616
		{ &Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivor, "OnAttachSurvivor" }, // 802066564
		{ &Z_Construct_UFunction_AReverseBearTrap_OnAttachSurvivorBegin, "OnAttachSurvivorBegin" }, // 4189712779
		{ &Z_Construct_UFunction_AReverseBearTrap_OnDetachSurvivor, "OnDetachSurvivor" }, // 2652437807
		{ &Z_Construct_UFunction_AReverseBearTrap_OnEnterWarningZone, "OnEnterWarningZone" }, // 776083115
		{ &Z_Construct_UFunction_AReverseBearTrap_OnExitWarningZone, "OnExitWarningZone" }, // 3743218961
		{ &Z_Construct_UFunction_AReverseBearTrap_OnGeneratorComplete, "OnGeneratorComplete" }, // 768527800
		{ &Z_Construct_UFunction_AReverseBearTrap_OnWarningLevelChanged, "OnWarningLevelChanged" }, // 3753098934
		{ &Z_Construct_UFunction_AReverseBearTrap_ResetExecutionTimer, "ResetExecutionTimer" }, // 2107038161
		{ &Z_Construct_UFunction_AReverseBearTrap_SetGateClosedAtAttachment, "SetGateClosedAtAttachment" }, // 366468869
		{ &Z_Construct_UFunction_AReverseBearTrap_SetVisible, "SetVisible" }, // 2150845762
		{ &Z_Construct_UFunction_AReverseBearTrap_ShouldUpdateExecutionTimer, "ShouldUpdateExecutionTimer" }, // 1856667217
		{ &Z_Construct_UFunction_AReverseBearTrap_StopExecutionTimer, "StopExecutionTimer" }, // 3929942707
		{ &Z_Construct_UFunction_AReverseBearTrap_StopMontage, "StopMontage" }, // 954059097
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReverseBearTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReverseBearTrap.h" },
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__generatorFixedAfterAttachment_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	void Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__generatorFixedAfterAttachment_SetBit(void* Obj)
	{
		((AReverseBearTrap*)Obj)->_generatorFixedAfterAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__generatorFixedAfterAttachment = { "_generatorFixedAfterAttachment", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AReverseBearTrap), &Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__generatorFixedAfterAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__generatorFixedAfterAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__generatorFixedAfterAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__exitGatesPoweredAfterAttachment_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	void Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__exitGatesPoweredAfterAttachment_SetBit(void* Obj)
	{
		((AReverseBearTrap*)Obj)->_exitGatesPoweredAfterAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__exitGatesPoweredAfterAttachment = { "_exitGatesPoweredAfterAttachment", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AReverseBearTrap), &Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__exitGatesPoweredAfterAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__exitGatesPoweredAfterAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__exitGatesPoweredAfterAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__keyID_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__keyID = { "_keyID", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReverseBearTrap, _keyID), METADATA_PARAMS(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__keyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__keyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__animMontageSlave_MetaData[] = {
		{ "Category", "ReverseBearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__animMontageSlave = { "_animMontageSlave", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReverseBearTrap, _animMontageSlave), Z_Construct_UClass_UAnimationMontageSlave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__animMontageSlave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__animMontageSlave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__rbtMesh_MetaData[] = {
		{ "Category", "ReverseBearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReverseBearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__rbtMesh = { "_rbtMesh", nullptr, (EPropertyFlags)0x002008000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReverseBearTrap, _rbtMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__rbtMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__rbtMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReverseBearTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__generatorFixedAfterAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__exitGatesPoweredAfterAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__keyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__animMontageSlave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReverseBearTrap_Statics::NewProp__rbtMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReverseBearTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReverseBearTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReverseBearTrap_Statics::ClassParams = {
		&AReverseBearTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AReverseBearTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReverseBearTrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReverseBearTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReverseBearTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReverseBearTrap, 3347430305);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AReverseBearTrap>()
	{
		return AReverseBearTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReverseBearTrap(Z_Construct_UClass_AReverseBearTrap, &AReverseBearTrap::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AReverseBearTrap"), false, nullptr, nullptr, nullptr);

	void AReverseBearTrap::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__keyID(TEXT("_keyID"));
		static const FName Name__exitGatesPoweredAfterAttachment(TEXT("_exitGatesPoweredAfterAttachment"));
		static const FName Name__generatorFixedAfterAttachment(TEXT("_generatorFixedAfterAttachment"));

		const bool bIsValid = true
			&& Name__keyID == ClassReps[(int32)ENetFields_Private::_keyID].Property->GetFName()
			&& Name__exitGatesPoweredAfterAttachment == ClassReps[(int32)ENetFields_Private::_exitGatesPoweredAfterAttachment].Property->GetFName()
			&& Name__generatorFixedAfterAttachment == ClassReps[(int32)ENetFields_Private::_generatorFixedAfterAttachment].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AReverseBearTrap"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReverseBearTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
