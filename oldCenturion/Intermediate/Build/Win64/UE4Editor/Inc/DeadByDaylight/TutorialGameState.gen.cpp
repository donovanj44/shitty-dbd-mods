// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialGameState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETutorialStep();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialGameState_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialGameState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameState();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventTutorialGameStateOnCurrentTutorialStepChanged_Parms
		{
			ETutorialStep step;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_step;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_step_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::NewProp_step = { "step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventTutorialGameStateOnCurrentTutorialStepChanged_Parms, step), Z_Construct_UEnum_DeadByDaylight_ETutorialStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::NewProp_step_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::NewProp_step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::NewProp_step_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventTutorialGameStateOnCurrentTutorialStepChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATutorialGameState::execCompleteLocallyControlledCharacterIntros)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteLocallyControlledCharacterIntros();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameState::execGetCurrentTutorialStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETutorialStep*)Z_Param__Result=P_THIS->GetCurrentTutorialStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameState::execIsTutorialStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTutorialStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameState::execSetCurrentTutorialStep)
	{
		P_GET_ENUM(ETutorialStep,Z_Param_step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentTutorialStep(ETutorialStep(Z_Param_step));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameState::execSetEscapeRequirementsVisibility)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEscapeRequirementsVisibility(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameState::execSetForcedHatchVisibility)
	{
		P_GET_UBOOL(Z_Param_isHatchVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForcedHatchVisibility(Z_Param_isHatchVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameState::execTutorialEndReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TutorialEndReached();
		P_NATIVE_END;
	}
	void ATutorialGameState::StaticRegisterNativesATutorialGameState()
	{
		UClass* Class = ATutorialGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteLocallyControlledCharacterIntros", &ATutorialGameState::execCompleteLocallyControlledCharacterIntros },
			{ "GetCurrentTutorialStep", &ATutorialGameState::execGetCurrentTutorialStep },
			{ "IsTutorialStarted", &ATutorialGameState::execIsTutorialStarted },
			{ "SetCurrentTutorialStep", &ATutorialGameState::execSetCurrentTutorialStep },
			{ "SetEscapeRequirementsVisibility", &ATutorialGameState::execSetEscapeRequirementsVisibility },
			{ "SetForcedHatchVisibility", &ATutorialGameState::execSetForcedHatchVisibility },
			{ "TutorialEndReached", &ATutorialGameState::execTutorialEndReached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATutorialGameState_CompleteLocallyControlledCharacterIntros_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameState_CompleteLocallyControlledCharacterIntros_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameState_CompleteLocallyControlledCharacterIntros_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameState, nullptr, "CompleteLocallyControlledCharacterIntros", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameState_CompleteLocallyControlledCharacterIntros_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_CompleteLocallyControlledCharacterIntros_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameState_CompleteLocallyControlledCharacterIntros()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameState_CompleteLocallyControlledCharacterIntros_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics
	{
		struct TutorialGameState_eventGetCurrentTutorialStep_Parms
		{
			ETutorialStep ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialGameState_eventGetCurrentTutorialStep_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_ETutorialStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameState, nullptr, "GetCurrentTutorialStep", nullptr, nullptr, sizeof(TutorialGameState_eventGetCurrentTutorialStep_Parms), Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics
	{
		struct TutorialGameState_eventIsTutorialStarted_Parms
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
	void Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TutorialGameState_eventIsTutorialStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialGameState_eventIsTutorialStarted_Parms), &Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameState, nullptr, "IsTutorialStarted", nullptr, nullptr, sizeof(TutorialGameState_eventIsTutorialStarted_Parms), Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics
	{
		struct TutorialGameState_eventSetCurrentTutorialStep_Parms
		{
			ETutorialStep step;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_step;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_step_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::NewProp_step = { "step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialGameState_eventSetCurrentTutorialStep_Parms, step), Z_Construct_UEnum_DeadByDaylight_ETutorialStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::NewProp_step_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::NewProp_step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::NewProp_step_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameState, nullptr, "SetCurrentTutorialStep", nullptr, nullptr, sizeof(TutorialGameState_eventSetCurrentTutorialStep_Parms), Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics
	{
		struct TutorialGameState_eventSetEscapeRequirementsVisibility_Parms
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
	void Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((TutorialGameState_eventSetEscapeRequirementsVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialGameState_eventSetEscapeRequirementsVisibility_Parms), &Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameState, nullptr, "SetEscapeRequirementsVisibility", nullptr, nullptr, sizeof(TutorialGameState_eventSetEscapeRequirementsVisibility_Parms), Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics
	{
		struct TutorialGameState_eventSetForcedHatchVisibility_Parms
		{
			bool isHatchVisible;
		};
		static void NewProp_isHatchVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHatchVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::NewProp_isHatchVisible_SetBit(void* Obj)
	{
		((TutorialGameState_eventSetForcedHatchVisibility_Parms*)Obj)->isHatchVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::NewProp_isHatchVisible = { "isHatchVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialGameState_eventSetForcedHatchVisibility_Parms), &Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::NewProp_isHatchVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::NewProp_isHatchVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameState, nullptr, "SetForcedHatchVisibility", nullptr, nullptr, sizeof(TutorialGameState_eventSetForcedHatchVisibility_Parms), Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameState_TutorialEndReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameState_TutorialEndReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameState_TutorialEndReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameState, nullptr, "TutorialEndReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameState_TutorialEndReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameState_TutorialEndReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameState_TutorialEndReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameState_TutorialEndReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATutorialGameState_NoRegister()
	{
		return ATutorialGameState::StaticClass();
	}
	struct Z_Construct_UClass_ATutorialGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forceHatchVisible_MetaData[];
#endif
		static void NewProp__forceHatchVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__forceHatchVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCurrentTutorialStepChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentTutorialStepChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATutorialGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATutorialGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATutorialGameState_CompleteLocallyControlledCharacterIntros, "CompleteLocallyControlledCharacterIntros" }, // 1018341523
		{ &Z_Construct_UFunction_ATutorialGameState_GetCurrentTutorialStep, "GetCurrentTutorialStep" }, // 1274370305
		{ &Z_Construct_UFunction_ATutorialGameState_IsTutorialStarted, "IsTutorialStarted" }, // 2747373411
		{ &Z_Construct_UFunction_ATutorialGameState_SetCurrentTutorialStep, "SetCurrentTutorialStep" }, // 1383006168
		{ &Z_Construct_UFunction_ATutorialGameState_SetEscapeRequirementsVisibility, "SetEscapeRequirementsVisibility" }, // 1155059347
		{ &Z_Construct_UFunction_ATutorialGameState_SetForcedHatchVisibility, "SetForcedHatchVisibility" }, // 195510689
		{ &Z_Construct_UFunction_ATutorialGameState_TutorialEndReached, "TutorialEndReached" }, // 2161551281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TutorialGameState.h" },
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialGameState_Statics::NewProp__forceHatchVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialGameState" },
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	void Z_Construct_UClass_ATutorialGameState_Statics::NewProp__forceHatchVisible_SetBit(void* Obj)
	{
		((ATutorialGameState*)Obj)->_forceHatchVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATutorialGameState_Statics::NewProp__forceHatchVisible = { "_forceHatchVisible", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATutorialGameState), &Z_Construct_UClass_ATutorialGameState_Statics::NewProp__forceHatchVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATutorialGameState_Statics::NewProp__forceHatchVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameState_Statics::NewProp__forceHatchVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialGameState_Statics::NewProp_OnCurrentTutorialStepChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATutorialGameState_Statics::NewProp_OnCurrentTutorialStepChanged = { "OnCurrentTutorialStepChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATutorialGameState, OnCurrentTutorialStepChanged), Z_Construct_UDelegateFunction_DeadByDaylight_TutorialGameStateOnCurrentTutorialStepChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATutorialGameState_Statics::NewProp_OnCurrentTutorialStepChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameState_Statics::NewProp_OnCurrentTutorialStepChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATutorialGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialGameState_Statics::NewProp__forceHatchVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialGameState_Statics::NewProp_OnCurrentTutorialStepChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATutorialGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATutorialGameState_Statics::ClassParams = {
		&ATutorialGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATutorialGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATutorialGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATutorialGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATutorialGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATutorialGameState, 2825148465);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ATutorialGameState>()
	{
		return ATutorialGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATutorialGameState(Z_Construct_UClass_ATutorialGameState, &ATutorialGameState::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ATutorialGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
