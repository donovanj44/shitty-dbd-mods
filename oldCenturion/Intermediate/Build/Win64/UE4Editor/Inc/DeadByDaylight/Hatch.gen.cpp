// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Hatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHatch() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AHatch_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AHatch();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EHatchState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationMontageSlave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoiseIndicatorEmitterInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHatch::execAuthority_CheckedChangeActiveState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_CheckedChangeActiveState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execAuthority_CheckedCloseHatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_CheckedCloseHatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execAuthority_CheckedOpenForceClosedHatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_CheckedOpenForceClosedHatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execAuthority_CheckedOpenHatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_CheckedOpenHatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execAuthority_OnCloseTimerComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCloseTimerComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execAuthority_SetHatchState)
	{
		P_GET_ENUM(EHatchState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetHatchState(EHatchState(Z_Param_newState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execAuthority_SetIsForceOpen)
	{
		P_GET_UBOOL(Z_Param_isForcedOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetIsForceOpen(Z_Param_isForcedOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execGetHatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHatchState*)Z_Param__Result=P_THIS->GetHatchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execIsSurvivorEscaping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSurvivorEscaping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execLocal_SetHatchState)
	{
		P_GET_UBOOL(Z_Param_open);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_SetHatchState(Z_Param_open);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execOnEndGameOver)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndGameOver(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execOnHatchVisibilityChanged)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHatchVisibilityChanged(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execOnRep_HatchState)
	{
		P_GET_ENUM(EHatchState,Z_Param_oldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HatchState(EHatchState(Z_Param_oldState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execOnSurvivorEscaped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorEscaped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execOnSurvivorEscapeInterrupted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorEscapeInterrupted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execOnSurvivorEscaping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorEscaping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execOnSurvivorsLeftChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_survivorRemaining);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorsLeftChanged(Z_Param_survivorRemaining);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execResetTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTimer(Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execSetForceIsOpen)
	{
		P_GET_UBOOL(Z_Param_forceIsOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceIsOpen(Z_Param_forceIsOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHatch::execSetIsSurvivorEscaping)
	{
		P_GET_UBOOL(Z_Param_escaping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSurvivorEscaping(Z_Param_escaping);
		P_NATIVE_END;
	}
	static FName NAME_AHatch_FXCloseHatch = FName(TEXT("FXCloseHatch"));
	void AHatch::FXCloseHatch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHatch_FXCloseHatch),NULL);
	}
	static FName NAME_AHatch_FXEndSmoke = FName(TEXT("FXEndSmoke"));
	void AHatch::FXEndSmoke()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHatch_FXEndSmoke),NULL);
	}
	static FName NAME_AHatch_FXOpenHatch = FName(TEXT("FXOpenHatch"));
	void AHatch::FXOpenHatch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHatch_FXOpenHatch),NULL);
	}
	static FName NAME_AHatch_GetAnimationMontageSlave = FName(TEXT("GetAnimationMontageSlave"));
	UAnimationMontageSlave* AHatch::GetAnimationMontageSlave() const
	{
		Hatch_eventGetAnimationMontageSlave_Parms Parms;
		const_cast<AHatch*>(this)->ProcessEvent(FindFunctionChecked(NAME_AHatch_GetAnimationMontageSlave),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHatch_GetEscapeFocalPoint = FName(TEXT("GetEscapeFocalPoint"));
	USceneComponent* AHatch::GetEscapeFocalPoint() const
	{
		Hatch_eventGetEscapeFocalPoint_Parms Parms;
		const_cast<AHatch*>(this)->ProcessEvent(FindFunctionChecked(NAME_AHatch_GetEscapeFocalPoint),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHatch_GetHatchCenter = FName(TEXT("GetHatchCenter"));
	USceneComponent* AHatch::GetHatchCenter() const
	{
		Hatch_eventGetHatchCenter_Parms Parms;
		const_cast<AHatch*>(this)->ProcessEvent(FindFunctionChecked(NAME_AHatch_GetHatchCenter),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHatch_OnHatchStateModified = FName(TEXT("OnHatchStateModified"));
	void AHatch::OnHatchStateModified(EHatchState oldState, EHatchState newState)
	{
		Hatch_eventOnHatchStateModified_Parms Parms;
		Parms.oldState=oldState;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_AHatch_OnHatchStateModified),&Parms);
	}
	void AHatch::StaticRegisterNativesAHatch()
	{
		UClass* Class = AHatch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_CheckedChangeActiveState", &AHatch::execAuthority_CheckedChangeActiveState },
			{ "Authority_CheckedCloseHatch", &AHatch::execAuthority_CheckedCloseHatch },
			{ "Authority_CheckedOpenForceClosedHatch", &AHatch::execAuthority_CheckedOpenForceClosedHatch },
			{ "Authority_CheckedOpenHatch", &AHatch::execAuthority_CheckedOpenHatch },
			{ "Authority_OnCloseTimerComplete", &AHatch::execAuthority_OnCloseTimerComplete },
			{ "Authority_SetHatchState", &AHatch::execAuthority_SetHatchState },
			{ "Authority_SetIsForceOpen", &AHatch::execAuthority_SetIsForceOpen },
			{ "GetHatchState", &AHatch::execGetHatchState },
			{ "IsOpen", &AHatch::execIsOpen },
			{ "IsSurvivorEscaping", &AHatch::execIsSurvivorEscaping },
			{ "Local_SetHatchState", &AHatch::execLocal_SetHatchState },
			{ "OnEndGameOver", &AHatch::execOnEndGameOver },
			{ "OnHatchVisibilityChanged", &AHatch::execOnHatchVisibilityChanged },
			{ "OnRep_HatchState", &AHatch::execOnRep_HatchState },
			{ "OnSurvivorEscaped", &AHatch::execOnSurvivorEscaped },
			{ "OnSurvivorEscapeInterrupted", &AHatch::execOnSurvivorEscapeInterrupted },
			{ "OnSurvivorEscaping", &AHatch::execOnSurvivorEscaping },
			{ "OnSurvivorsLeftChanged", &AHatch::execOnSurvivorsLeftChanged },
			{ "ResetTimer", &AHatch::execResetTimer },
			{ "SetForceIsOpen", &AHatch::execSetForceIsOpen },
			{ "SetIsSurvivorEscaping", &AHatch::execSetIsSurvivorEscaping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHatch_Authority_CheckedChangeActiveState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_Authority_CheckedChangeActiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_Authority_CheckedChangeActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "Authority_CheckedChangeActiveState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_Authority_CheckedChangeActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Authority_CheckedChangeActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_Authority_CheckedChangeActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_Authority_CheckedChangeActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_Authority_CheckedCloseHatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_Authority_CheckedCloseHatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_Authority_CheckedCloseHatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "Authority_CheckedCloseHatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_Authority_CheckedCloseHatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Authority_CheckedCloseHatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_Authority_CheckedCloseHatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_Authority_CheckedCloseHatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_Authority_CheckedOpenForceClosedHatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_Authority_CheckedOpenForceClosedHatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_Authority_CheckedOpenForceClosedHatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "Authority_CheckedOpenForceClosedHatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_Authority_CheckedOpenForceClosedHatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Authority_CheckedOpenForceClosedHatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_Authority_CheckedOpenForceClosedHatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_Authority_CheckedOpenForceClosedHatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_Authority_CheckedOpenHatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_Authority_CheckedOpenHatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_Authority_CheckedOpenHatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "Authority_CheckedOpenHatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_Authority_CheckedOpenHatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Authority_CheckedOpenHatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_Authority_CheckedOpenHatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_Authority_CheckedOpenHatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_Authority_OnCloseTimerComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_Authority_OnCloseTimerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_Authority_OnCloseTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "Authority_OnCloseTimerComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_Authority_OnCloseTimerComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Authority_OnCloseTimerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_Authority_OnCloseTimerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_Authority_OnCloseTimerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics
	{
		struct Hatch_eventAuthority_SetHatchState_Parms
		{
			EHatchState newState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventAuthority_SetHatchState_Parms, newState), Z_Construct_UEnum_DeadByDaylight_EHatchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::NewProp_newState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "Authority_SetHatchState", nullptr, nullptr, sizeof(Hatch_eventAuthority_SetHatchState_Parms), Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_Authority_SetHatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_Authority_SetHatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics
	{
		struct Hatch_eventAuthority_SetIsForceOpen_Parms
		{
			bool isForcedOpen;
		};
		static void NewProp_isForcedOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isForcedOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::NewProp_isForcedOpen_SetBit(void* Obj)
	{
		((Hatch_eventAuthority_SetIsForceOpen_Parms*)Obj)->isForcedOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::NewProp_isForcedOpen = { "isForcedOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Hatch_eventAuthority_SetIsForceOpen_Parms), &Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::NewProp_isForcedOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::NewProp_isForcedOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "Authority_SetIsForceOpen", nullptr, nullptr, sizeof(Hatch_eventAuthority_SetIsForceOpen_Parms), Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_FXCloseHatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_FXCloseHatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_FXCloseHatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "FXCloseHatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_FXCloseHatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_FXCloseHatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_FXCloseHatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_FXCloseHatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_FXEndSmoke_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_FXEndSmoke_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_FXEndSmoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "FXEndSmoke", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_FXEndSmoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_FXEndSmoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_FXEndSmoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_FXEndSmoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_FXOpenHatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_FXOpenHatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_FXOpenHatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "FXOpenHatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_FXOpenHatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_FXOpenHatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_FXOpenHatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_FXOpenHatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventGetAnimationMontageSlave_Parms, ReturnValue), Z_Construct_UClass_UAnimationMontageSlave_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "GetAnimationMontageSlave", nullptr, nullptr, sizeof(Hatch_eventGetAnimationMontageSlave_Parms), Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_GetAnimationMontageSlave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_GetAnimationMontageSlave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventGetEscapeFocalPoint_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "GetEscapeFocalPoint", nullptr, nullptr, sizeof(Hatch_eventGetEscapeFocalPoint_Parms), Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_GetEscapeFocalPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_GetEscapeFocalPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_GetHatchCenter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventGetHatchCenter_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "GetHatchCenter", nullptr, nullptr, sizeof(Hatch_eventGetHatchCenter_Parms), Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_GetHatchCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_GetHatchCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_GetHatchState_Statics
	{
		struct Hatch_eventGetHatchState_Parms
		{
			EHatchState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHatch_GetHatchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventGetHatchState_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_EHatchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHatch_GetHatchState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_GetHatchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_GetHatchState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_GetHatchState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_GetHatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_GetHatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "GetHatchState", nullptr, nullptr, sizeof(Hatch_eventGetHatchState_Parms), Z_Construct_UFunction_AHatch_GetHatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetHatchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_GetHatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_GetHatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_GetHatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_GetHatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_IsOpen_Statics
	{
		struct Hatch_eventIsOpen_Parms
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
	void Z_Construct_UFunction_AHatch_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Hatch_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHatch_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Hatch_eventIsOpen_Parms), &Z_Construct_UFunction_AHatch_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_IsOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "IsOpen", nullptr, nullptr, sizeof(Hatch_eventIsOpen_Parms), Z_Construct_UFunction_AHatch_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_IsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics
	{
		struct Hatch_eventIsSurvivorEscaping_Parms
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
	void Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Hatch_eventIsSurvivorEscaping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Hatch_eventIsSurvivorEscaping_Parms), &Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "IsSurvivorEscaping", nullptr, nullptr, sizeof(Hatch_eventIsSurvivorEscaping_Parms), Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_IsSurvivorEscaping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_IsSurvivorEscaping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics
	{
		struct Hatch_eventLocal_SetHatchState_Parms
		{
			bool open;
		};
		static void NewProp_open_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_open;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::NewProp_open_SetBit(void* Obj)
	{
		((Hatch_eventLocal_SetHatchState_Parms*)Obj)->open = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::NewProp_open = { "open", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Hatch_eventLocal_SetHatchState_Parms), &Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::NewProp_open_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::NewProp_open,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "Local_SetHatchState", nullptr, nullptr, sizeof(Hatch_eventLocal_SetHatchState_Parms), Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_Local_SetHatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_Local_SetHatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_OnEndGameOver_Statics
	{
		struct Hatch_eventOnEndGameOver_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventOnEndGameOver_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventOnEndGameOver_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "OnEndGameOver", nullptr, nullptr, sizeof(Hatch_eventOnEndGameOver_Parms), Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_OnEndGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_OnEndGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventOnHatchStateModified_Parms, newState), Z_Construct_UEnum_DeadByDaylight_EHatchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::NewProp_oldState = { "oldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventOnHatchStateModified_Parms, oldState), Z_Construct_UEnum_DeadByDaylight_EHatchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::NewProp_oldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::NewProp_oldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::NewProp_oldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "OnHatchStateModified", nullptr, nullptr, sizeof(Hatch_eventOnHatchStateModified_Parms), Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_OnHatchStateModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_OnHatchStateModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics
	{
		struct Hatch_eventOnHatchVisibilityChanged_Parms
		{
			bool isVisible;
		};
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((Hatch_eventOnHatchVisibilityChanged_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Hatch_eventOnHatchVisibilityChanged_Parms), &Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "OnHatchVisibilityChanged", nullptr, nullptr, sizeof(Hatch_eventOnHatchVisibilityChanged_Parms), Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics
	{
		struct Hatch_eventOnRep_HatchState_Parms
		{
			EHatchState oldState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::NewProp_oldState = { "oldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventOnRep_HatchState_Parms, oldState), Z_Construct_UEnum_DeadByDaylight_EHatchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::NewProp_oldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::NewProp_oldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::NewProp_oldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "OnRep_HatchState", nullptr, nullptr, sizeof(Hatch_eventOnRep_HatchState_Parms), Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_OnRep_HatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_OnRep_HatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_OnSurvivorEscaped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_OnSurvivorEscaped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_OnSurvivorEscaped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "OnSurvivorEscaped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_OnSurvivorEscaped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnSurvivorEscaped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_OnSurvivorEscaped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_OnSurvivorEscaped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_OnSurvivorEscapeInterrupted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_OnSurvivorEscapeInterrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_OnSurvivorEscapeInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "OnSurvivorEscapeInterrupted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_OnSurvivorEscapeInterrupted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnSurvivorEscapeInterrupted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_OnSurvivorEscapeInterrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_OnSurvivorEscapeInterrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_OnSurvivorEscaping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_OnSurvivorEscaping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_OnSurvivorEscaping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "OnSurvivorEscaping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_OnSurvivorEscaping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnSurvivorEscaping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_OnSurvivorEscaping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_OnSurvivorEscaping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics
	{
		struct Hatch_eventOnSurvivorsLeftChanged_Parms
		{
			int32 survivorRemaining;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_survivorRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::NewProp_survivorRemaining = { "survivorRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventOnSurvivorsLeftChanged_Parms, survivorRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::NewProp_survivorRemaining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "OnSurvivorsLeftChanged", nullptr, nullptr, sizeof(Hatch_eventOnSurvivorsLeftChanged_Parms), Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_ResetTimer_Statics
	{
		struct Hatch_eventResetTimer_Parms
		{
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHatch_ResetTimer_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hatch_eventResetTimer_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_ResetTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_ResetTimer_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_ResetTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_ResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "ResetTimer", nullptr, nullptr, sizeof(Hatch_eventResetTimer_Parms), Z_Construct_UFunction_AHatch_ResetTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_ResetTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_ResetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_ResetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_ResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_ResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics
	{
		struct Hatch_eventSetForceIsOpen_Parms
		{
			bool forceIsOpen;
		};
		static void NewProp_forceIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceIsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::NewProp_forceIsOpen_SetBit(void* Obj)
	{
		((Hatch_eventSetForceIsOpen_Parms*)Obj)->forceIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::NewProp_forceIsOpen = { "forceIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Hatch_eventSetForceIsOpen_Parms), &Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::NewProp_forceIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::NewProp_forceIsOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "SetForceIsOpen", nullptr, nullptr, sizeof(Hatch_eventSetForceIsOpen_Parms), Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_SetForceIsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_SetForceIsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics
	{
		struct Hatch_eventSetIsSurvivorEscaping_Parms
		{
			bool escaping;
		};
		static void NewProp_escaping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_escaping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::NewProp_escaping_SetBit(void* Obj)
	{
		((Hatch_eventSetIsSurvivorEscaping_Parms*)Obj)->escaping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::NewProp_escaping = { "escaping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Hatch_eventSetIsSurvivorEscaping_Parms), &Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::NewProp_escaping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::NewProp_escaping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatch, nullptr, "SetIsSurvivorEscaping", nullptr, nullptr, sizeof(Hatch_eventSetIsSurvivorEscaping_Parms), Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHatch_NoRegister()
	{
		return AHatch::StaticClass();
	}
	struct Z_Construct_UClass_AHatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchOpenDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hatchOpenDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__baseCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attemptToCloseHatchOnNextEscape_MetaData[];
#endif
		static void NewProp__attemptToCloseHatchOnNextEscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__attemptToCloseHatchOnNextEscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isForceOpen_MetaData[];
#endif
		static void NewProp__isForceOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isForceOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isEndGameOver_MetaData[];
#endif
		static void NewProp__isEndGameOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isEndGameOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSurvivorEscaping_MetaData[];
#endif
		static void NewProp__isSurvivorEscaping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSurvivorEscaping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__hatchState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__hatchState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHatch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHatch_Authority_CheckedChangeActiveState, "Authority_CheckedChangeActiveState" }, // 2336468027
		{ &Z_Construct_UFunction_AHatch_Authority_CheckedCloseHatch, "Authority_CheckedCloseHatch" }, // 3051244059
		{ &Z_Construct_UFunction_AHatch_Authority_CheckedOpenForceClosedHatch, "Authority_CheckedOpenForceClosedHatch" }, // 1899869370
		{ &Z_Construct_UFunction_AHatch_Authority_CheckedOpenHatch, "Authority_CheckedOpenHatch" }, // 1328297096
		{ &Z_Construct_UFunction_AHatch_Authority_OnCloseTimerComplete, "Authority_OnCloseTimerComplete" }, // 3405425824
		{ &Z_Construct_UFunction_AHatch_Authority_SetHatchState, "Authority_SetHatchState" }, // 71749110
		{ &Z_Construct_UFunction_AHatch_Authority_SetIsForceOpen, "Authority_SetIsForceOpen" }, // 3869411909
		{ &Z_Construct_UFunction_AHatch_FXCloseHatch, "FXCloseHatch" }, // 2456412443
		{ &Z_Construct_UFunction_AHatch_FXEndSmoke, "FXEndSmoke" }, // 2248122840
		{ &Z_Construct_UFunction_AHatch_FXOpenHatch, "FXOpenHatch" }, // 213862758
		{ &Z_Construct_UFunction_AHatch_GetAnimationMontageSlave, "GetAnimationMontageSlave" }, // 363354214
		{ &Z_Construct_UFunction_AHatch_GetEscapeFocalPoint, "GetEscapeFocalPoint" }, // 406570713
		{ &Z_Construct_UFunction_AHatch_GetHatchCenter, "GetHatchCenter" }, // 116450027
		{ &Z_Construct_UFunction_AHatch_GetHatchState, "GetHatchState" }, // 2035848239
		{ &Z_Construct_UFunction_AHatch_IsOpen, "IsOpen" }, // 3874532795
		{ &Z_Construct_UFunction_AHatch_IsSurvivorEscaping, "IsSurvivorEscaping" }, // 3676495045
		{ &Z_Construct_UFunction_AHatch_Local_SetHatchState, "Local_SetHatchState" }, // 2129274216
		{ &Z_Construct_UFunction_AHatch_OnEndGameOver, "OnEndGameOver" }, // 1529569535
		{ &Z_Construct_UFunction_AHatch_OnHatchStateModified, "OnHatchStateModified" }, // 4066365695
		{ &Z_Construct_UFunction_AHatch_OnHatchVisibilityChanged, "OnHatchVisibilityChanged" }, // 171552288
		{ &Z_Construct_UFunction_AHatch_OnRep_HatchState, "OnRep_HatchState" }, // 1718486973
		{ &Z_Construct_UFunction_AHatch_OnSurvivorEscaped, "OnSurvivorEscaped" }, // 2689883114
		{ &Z_Construct_UFunction_AHatch_OnSurvivorEscapeInterrupted, "OnSurvivorEscapeInterrupted" }, // 1814228975
		{ &Z_Construct_UFunction_AHatch_OnSurvivorEscaping, "OnSurvivorEscaping" }, // 413571024
		{ &Z_Construct_UFunction_AHatch_OnSurvivorsLeftChanged, "OnSurvivorsLeftChanged" }, // 2401597611
		{ &Z_Construct_UFunction_AHatch_ResetTimer, "ResetTimer" }, // 4169772360
		{ &Z_Construct_UFunction_AHatch_SetForceIsOpen, "SetForceIsOpen" }, // 184114764
		{ &Z_Construct_UFunction_AHatch_SetIsSurvivorEscaping, "SetIsSurvivorEscaping" }, // 2371463627
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hatch.h" },
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatch_Statics::NewProp__hatchOpenDuration_MetaData[] = {
		{ "Category", "Hatch" },
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHatch_Statics::NewProp__hatchOpenDuration = { "_hatchOpenDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHatch, _hatchOpenDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AHatch_Statics::NewProp__hatchOpenDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHatch_Statics::NewProp__hatchOpenDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatch_Statics::NewProp__baseCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Hatch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHatch_Statics::NewProp__baseCollision = { "_baseCollision", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHatch, _baseCollision), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHatch_Statics::NewProp__baseCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHatch_Statics::NewProp__baseCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatch_Statics::NewProp__attemptToCloseHatchOnNextEscape_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	void Z_Construct_UClass_AHatch_Statics::NewProp__attemptToCloseHatchOnNextEscape_SetBit(void* Obj)
	{
		((AHatch*)Obj)->_attemptToCloseHatchOnNextEscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHatch_Statics::NewProp__attemptToCloseHatchOnNextEscape = { "_attemptToCloseHatchOnNextEscape", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHatch), &Z_Construct_UClass_AHatch_Statics::NewProp__attemptToCloseHatchOnNextEscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHatch_Statics::NewProp__attemptToCloseHatchOnNextEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHatch_Statics::NewProp__attemptToCloseHatchOnNextEscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatch_Statics::NewProp__isForceOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Hatch" },
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	void Z_Construct_UClass_AHatch_Statics::NewProp__isForceOpen_SetBit(void* Obj)
	{
		((AHatch*)Obj)->_isForceOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHatch_Statics::NewProp__isForceOpen = { "_isForceOpen", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHatch), &Z_Construct_UClass_AHatch_Statics::NewProp__isForceOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHatch_Statics::NewProp__isForceOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHatch_Statics::NewProp__isForceOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatch_Statics::NewProp__isEndGameOver_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	void Z_Construct_UClass_AHatch_Statics::NewProp__isEndGameOver_SetBit(void* Obj)
	{
		((AHatch*)Obj)->_isEndGameOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHatch_Statics::NewProp__isEndGameOver = { "_isEndGameOver", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHatch), &Z_Construct_UClass_AHatch_Statics::NewProp__isEndGameOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHatch_Statics::NewProp__isEndGameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHatch_Statics::NewProp__isEndGameOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatch_Statics::NewProp__isSurvivorEscaping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Hatch" },
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	void Z_Construct_UClass_AHatch_Statics::NewProp__isSurvivorEscaping_SetBit(void* Obj)
	{
		((AHatch*)Obj)->_isSurvivorEscaping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHatch_Statics::NewProp__isSurvivorEscaping = { "_isSurvivorEscaping", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHatch), &Z_Construct_UClass_AHatch_Statics::NewProp__isSurvivorEscaping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHatch_Statics::NewProp__isSurvivorEscaping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHatch_Statics::NewProp__isSurvivorEscaping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatch_Statics::NewProp__hatchState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Hatch" },
		{ "ModuleRelativePath", "Public/Hatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHatch_Statics::NewProp__hatchState = { "_hatchState", "OnRep_HatchState", (EPropertyFlags)0x0040000100000034, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHatch, _hatchState), Z_Construct_UEnum_DeadByDaylight_EHatchState, METADATA_PARAMS(Z_Construct_UClass_AHatch_Statics::NewProp__hatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHatch_Statics::NewProp__hatchState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHatch_Statics::NewProp__hatchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHatch_Statics::NewProp__hatchOpenDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHatch_Statics::NewProp__baseCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHatch_Statics::NewProp__attemptToCloseHatchOnNextEscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHatch_Statics::NewProp__isForceOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHatch_Statics::NewProp__isEndGameOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHatch_Statics::NewProp__isSurvivorEscaping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHatch_Statics::NewProp__hatchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHatch_Statics::NewProp__hatchState_Underlying,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHatch_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNoiseIndicatorEmitterInterface_NoRegister, (int32)VTABLE_OFFSET(AHatch, INoiseIndicatorEmitterInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHatch_Statics::ClassParams = {
		&AHatch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHatch_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHatch_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHatch, 3395903521);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AHatch>()
	{
		return AHatch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHatch(Z_Construct_UClass_AHatch, &AHatch::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AHatch"), false, nullptr, nullptr, nullptr);

	void AHatch::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__hatchState(TEXT("_hatchState"));

		const bool bIsValid = true
			&& Name__hatchState == ClassReps[(int32)ENetFields_Private::_hatchState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AHatch"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
