// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSettingControlsContextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSettingControlsContextWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingControlsContextWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingControlsContextWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingContextWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UUMGSettingControlsContextWidget::execHandleAimAssistToggleClick)
	{
		P_GET_UBOOL(Z_Param_toggleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAimAssistToggleClick(Z_Param_toggleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingControlsContextWidget::execHandleHandSideToggleClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHandSideToggleClick(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingControlsContextWidget::execHandleInteractionButtonToggleClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInteractionButtonToggleClick(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingControlsContextWidget::execHandleInvertYToggleClick)
	{
		P_GET_UBOOL(Z_Param_toggleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInvertYToggleClick(Z_Param_toggleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingControlsContextWidget::execHandleKillerCameraSensitivityChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_sliderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleKillerCameraSensitivityChanged(Z_Param_sliderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingControlsContextWidget::execHandleSurvivorCameraSensitivityChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_sliderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSurvivorCameraSensitivityChanged(Z_Param_sliderValue);
		P_NATIVE_END;
	}
	void UUMGSettingControlsContextWidget::StaticRegisterNativesUUMGSettingControlsContextWidget()
	{
		UClass* Class = UUMGSettingControlsContextWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAimAssistToggleClick", &UUMGSettingControlsContextWidget::execHandleAimAssistToggleClick },
			{ "HandleHandSideToggleClick", &UUMGSettingControlsContextWidget::execHandleHandSideToggleClick },
			{ "HandleInteractionButtonToggleClick", &UUMGSettingControlsContextWidget::execHandleInteractionButtonToggleClick },
			{ "HandleInvertYToggleClick", &UUMGSettingControlsContextWidget::execHandleInvertYToggleClick },
			{ "HandleKillerCameraSensitivityChanged", &UUMGSettingControlsContextWidget::execHandleKillerCameraSensitivityChanged },
			{ "HandleSurvivorCameraSensitivityChanged", &UUMGSettingControlsContextWidget::execHandleSurvivorCameraSensitivityChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics
	{
		struct UMGSettingControlsContextWidget_eventHandleAimAssistToggleClick_Parms
		{
			bool toggleValue;
		};
		static void NewProp_toggleValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_toggleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::NewProp_toggleValue_SetBit(void* Obj)
	{
		((UMGSettingControlsContextWidget_eventHandleAimAssistToggleClick_Parms*)Obj)->toggleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::NewProp_toggleValue = { "toggleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSettingControlsContextWidget_eventHandleAimAssistToggleClick_Parms), &Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::NewProp_toggleValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::NewProp_toggleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingControlsContextWidget, nullptr, "HandleAimAssistToggleClick", nullptr, nullptr, sizeof(UMGSettingControlsContextWidget_eventHandleAimAssistToggleClick_Parms), Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics
	{
		struct UMGSettingControlsContextWidget_eventHandleHandSideToggleClick_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingControlsContextWidget_eventHandleHandSideToggleClick_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingControlsContextWidget, nullptr, "HandleHandSideToggleClick", nullptr, nullptr, sizeof(UMGSettingControlsContextWidget_eventHandleHandSideToggleClick_Parms), Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics
	{
		struct UMGSettingControlsContextWidget_eventHandleInteractionButtonToggleClick_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingControlsContextWidget_eventHandleInteractionButtonToggleClick_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingControlsContextWidget, nullptr, "HandleInteractionButtonToggleClick", nullptr, nullptr, sizeof(UMGSettingControlsContextWidget_eventHandleInteractionButtonToggleClick_Parms), Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics
	{
		struct UMGSettingControlsContextWidget_eventHandleInvertYToggleClick_Parms
		{
			bool toggleValue;
		};
		static void NewProp_toggleValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_toggleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::NewProp_toggleValue_SetBit(void* Obj)
	{
		((UMGSettingControlsContextWidget_eventHandleInvertYToggleClick_Parms*)Obj)->toggleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::NewProp_toggleValue = { "toggleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSettingControlsContextWidget_eventHandleInvertYToggleClick_Parms), &Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::NewProp_toggleValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::NewProp_toggleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingControlsContextWidget, nullptr, "HandleInvertYToggleClick", nullptr, nullptr, sizeof(UMGSettingControlsContextWidget_eventHandleInvertYToggleClick_Parms), Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics
	{
		struct UMGSettingControlsContextWidget_eventHandleKillerCameraSensitivityChanged_Parms
		{
			float sliderValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sliderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::NewProp_sliderValue = { "sliderValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingControlsContextWidget_eventHandleKillerCameraSensitivityChanged_Parms, sliderValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::NewProp_sliderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingControlsContextWidget, nullptr, "HandleKillerCameraSensitivityChanged", nullptr, nullptr, sizeof(UMGSettingControlsContextWidget_eventHandleKillerCameraSensitivityChanged_Parms), Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics
	{
		struct UMGSettingControlsContextWidget_eventHandleSurvivorCameraSensitivityChanged_Parms
		{
			float sliderValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sliderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::NewProp_sliderValue = { "sliderValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingControlsContextWidget_eventHandleSurvivorCameraSensitivityChanged_Parms, sliderValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::NewProp_sliderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingControlsContextWidget, nullptr, "HandleSurvivorCameraSensitivityChanged", nullptr, nullptr, sizeof(UMGSettingControlsContextWidget_eventHandleSurvivorCameraSensitivityChanged_Parms), Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSettingControlsContextWidget_NoRegister()
	{
		return UUMGSettingControlsContextWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorCameraSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurvivorCameraSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerCameraSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillerCameraSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertY_MetaData[];
#endif
		static void NewProp_InvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractionButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HandSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAssist_MetaData[];
#endif
		static void NewProp_AimAssist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AimAssist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGSettingContextWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleAimAssistToggleClick, "HandleAimAssistToggleClick" }, // 431418775
		{ &Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleHandSideToggleClick, "HandleHandSideToggleClick" }, // 563349555
		{ &Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInteractionButtonToggleClick, "HandleInteractionButtonToggleClick" }, // 1620897250
		{ &Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleInvertYToggleClick, "HandleInvertYToggleClick" }, // 3588610034
		{ &Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleKillerCameraSensitivityChanged, "HandleKillerCameraSensitivityChanged" }, // 4184907414
		{ &Z_Construct_UFunction_UUMGSettingControlsContextWidget_HandleSurvivorCameraSensitivityChanged, "HandleSurvivorCameraSensitivityChanged" }, // 3214903069
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSettingControlsContextWidget.h" },
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_SurvivorCameraSensitivity_MetaData[] = {
		{ "Category", "UMGSettingControlsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_SurvivorCameraSensitivity = { "SurvivorCameraSensitivity", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSettingControlsContextWidget, SurvivorCameraSensitivity), METADATA_PARAMS(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_SurvivorCameraSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_SurvivorCameraSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_KillerCameraSensitivity_MetaData[] = {
		{ "Category", "UMGSettingControlsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_KillerCameraSensitivity = { "KillerCameraSensitivity", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSettingControlsContextWidget, KillerCameraSensitivity), METADATA_PARAMS(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_KillerCameraSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_KillerCameraSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InvertY_MetaData[] = {
		{ "Category", "UMGSettingControlsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InvertY_SetBit(void* Obj)
	{
		((UUMGSettingControlsContextWidget*)Obj)->InvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InvertY = { "InvertY", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGSettingControlsContextWidget), &Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InvertY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InvertY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InvertY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InteractionButton_MetaData[] = {
		{ "Category", "UMGSettingControlsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InteractionButton = { "InteractionButton", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSettingControlsContextWidget, InteractionButton), METADATA_PARAMS(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InteractionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InteractionButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_HandSide_MetaData[] = {
		{ "Category", "UMGSettingControlsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_HandSide = { "HandSide", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSettingControlsContextWidget, HandSide), METADATA_PARAMS(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_HandSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_HandSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_AimAssist_MetaData[] = {
		{ "Category", "UMGSettingControlsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingControlsContextWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_AimAssist_SetBit(void* Obj)
	{
		((UUMGSettingControlsContextWidget*)Obj)->AimAssist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_AimAssist = { "AimAssist", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGSettingControlsContextWidget), &Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_AimAssist_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_AimAssist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_AimAssist_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_SurvivorCameraSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_KillerCameraSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_InteractionButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_HandSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::NewProp_AimAssist,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSettingControlsContextWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::ClassParams = {
		&UUMGSettingControlsContextWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSettingControlsContextWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSettingControlsContextWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSettingControlsContextWidget, 1202007563);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSettingControlsContextWidget>()
	{
		return UUMGSettingControlsContextWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSettingControlsContextWidget(Z_Construct_UClass_UUMGSettingControlsContextWidget, &UUMGSettingControlsContextWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSettingControlsContextWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSettingControlsContextWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
