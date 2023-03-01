// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PowerButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPowerButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPowerButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActionButton_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ERadialProgressBarType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EActionButtonState();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInventoryItemButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPowerButton::execGetActionButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionButton**)Z_Param__Result=P_THIS->GetActionButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPowerButton::execIsRadialProgressBarActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRadialProgressBarActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPowerButton::execSetFillProgressPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_chargeProgressionPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFillProgressPercentage(Z_Param_chargeProgressionPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPowerButton::execSetPowerIntensityOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_opacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPowerIntensityOpacity(Z_Param_opacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPowerButton::execSetRadialProgressBarActice)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadialProgressBarActice(Z_Param_active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPowerButton::execSetState)
	{
		P_GET_ENUM(EActionButtonState,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(EActionButtonState(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPowerButton::execSetSwitchIconActive)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwitchIconActive(Z_Param_active);
		P_NATIVE_END;
	}
	static FName NAME_UPowerButton_OnTierChanged = FName(TEXT("OnTierChanged"));
	void UPowerButton::OnTierChanged(int32 previousTier, int32 currentTier, bool isFirstTime)
	{
		PowerButton_eventOnTierChanged_Parms Parms;
		Parms.previousTier=previousTier;
		Parms.currentTier=currentTier;
		Parms.isFirstTime=isFirstTime ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPowerButton_OnTierChanged),&Parms);
	}
	static FName NAME_UPowerButton_SetRadialProgressPercentage = FName(TEXT("SetRadialProgressPercentage"));
	void UPowerButton::SetRadialProgressPercentage(const float progression, ERadialProgressBarType progressBarType)
	{
		PowerButton_eventSetRadialProgressPercentage_Parms Parms;
		Parms.progression=progression;
		Parms.progressBarType=progressBarType;
		ProcessEvent(FindFunctionChecked(NAME_UPowerButton_SetRadialProgressPercentage),&Parms);
	}
	void UPowerButton::StaticRegisterNativesUPowerButton()
	{
		UClass* Class = UPowerButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionButton", &UPowerButton::execGetActionButton },
			{ "IsRadialProgressBarActive", &UPowerButton::execIsRadialProgressBarActive },
			{ "SetFillProgressPercentage", &UPowerButton::execSetFillProgressPercentage },
			{ "SetPowerIntensityOpacity", &UPowerButton::execSetPowerIntensityOpacity },
			{ "SetRadialProgressBarActice", &UPowerButton::execSetRadialProgressBarActice },
			{ "SetState", &UPowerButton::execSetState },
			{ "SetSwitchIconActive", &UPowerButton::execSetSwitchIconActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPowerButton_GetActionButton_Statics
	{
		struct PowerButton_eventGetActionButton_Parms
		{
			UActionButton* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerButton_eventGetActionButton_Parms, ReturnValue), Z_Construct_UClass_UActionButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerButton, nullptr, "GetActionButton", nullptr, nullptr, sizeof(PowerButton_eventGetActionButton_Parms), Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerButton_GetActionButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerButton_GetActionButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics
	{
		struct PowerButton_eventIsRadialProgressBarActive_Parms
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
	void Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PowerButton_eventIsRadialProgressBarActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PowerButton_eventIsRadialProgressBarActive_Parms), &Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerButton, nullptr, "IsRadialProgressBarActive", nullptr, nullptr, sizeof(PowerButton_eventIsRadialProgressBarActive_Parms), Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics
	{
		static void NewProp_isFirstTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFirstTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentTier;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_previousTier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::NewProp_isFirstTime_SetBit(void* Obj)
	{
		((PowerButton_eventOnTierChanged_Parms*)Obj)->isFirstTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::NewProp_isFirstTime = { "isFirstTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PowerButton_eventOnTierChanged_Parms), &Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::NewProp_isFirstTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::NewProp_currentTier = { "currentTier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerButton_eventOnTierChanged_Parms, currentTier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::NewProp_previousTier = { "previousTier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerButton_eventOnTierChanged_Parms, previousTier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::NewProp_isFirstTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::NewProp_currentTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::NewProp_previousTier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerButton, nullptr, "OnTierChanged", nullptr, nullptr, sizeof(PowerButton_eventOnTierChanged_Parms), Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerButton_OnTierChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerButton_OnTierChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics
	{
		struct PowerButton_eventSetFillProgressPercentage_Parms
		{
			float chargeProgressionPercentage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeProgressionPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chargeProgressionPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::NewProp_chargeProgressionPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::NewProp_chargeProgressionPercentage = { "chargeProgressionPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerButton_eventSetFillProgressPercentage_Parms, chargeProgressionPercentage), METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::NewProp_chargeProgressionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::NewProp_chargeProgressionPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::NewProp_chargeProgressionPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerButton, nullptr, "SetFillProgressPercentage", nullptr, nullptr, sizeof(PowerButton_eventSetFillProgressPercentage_Parms), Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics
	{
		struct PowerButton_eventSetPowerIntensityOpacity_Parms
		{
			float opacity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_opacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::NewProp_opacity = { "opacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerButton_eventSetPowerIntensityOpacity_Parms, opacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::NewProp_opacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerButton, nullptr, "SetPowerIntensityOpacity", nullptr, nullptr, sizeof(PowerButton_eventSetPowerIntensityOpacity_Parms), Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics
	{
		struct PowerButton_eventSetRadialProgressBarActice_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::NewProp_active_SetBit(void* Obj)
	{
		((PowerButton_eventSetRadialProgressBarActice_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PowerButton_eventSetRadialProgressBarActice_Parms), &Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerButton, nullptr, "SetRadialProgressBarActice", nullptr, nullptr, sizeof(PowerButton_eventSetRadialProgressBarActice_Parms), Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_progressBarType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_progressBarType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::NewProp_progressBarType = { "progressBarType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerButton_eventSetRadialProgressPercentage_Parms, progressBarType), Z_Construct_UEnum_DeadByDaylight_ERadialProgressBarType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::NewProp_progressBarType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::NewProp_progression_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::NewProp_progression = { "progression", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerButton_eventSetRadialProgressPercentage_Parms, progression), METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::NewProp_progression_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::NewProp_progression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::NewProp_progressBarType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::NewProp_progressBarType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::NewProp_progression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerButton, nullptr, "SetRadialProgressPercentage", nullptr, nullptr, sizeof(PowerButton_eventSetRadialProgressPercentage_Parms), Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerButton_SetState_Statics
	{
		struct PowerButton_eventSetState_Parms
		{
			EActionButtonState state;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPowerButton_SetState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerButton_eventSetState_Parms, state), Z_Construct_UEnum_DeadByDaylight_EActionButtonState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPowerButton_SetState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerButton_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_SetState_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_SetState_Statics::NewProp_state_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerButton_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerButton, nullptr, "SetState", nullptr, nullptr, sizeof(PowerButton_eventSetState_Parms), Z_Construct_UFunction_UPowerButton_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerButton_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerButton_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics
	{
		struct PowerButton_eventSetSwitchIconActive_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((PowerButton_eventSetSwitchIconActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PowerButton_eventSetSwitchIconActive_Parms), &Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerButton, nullptr, "SetSwitchIconActive", nullptr, nullptr, sizeof(PowerButton_eventSetSwitchIconActive_Parms), Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerButton_SetSwitchIconActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerButton_SetSwitchIconActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPowerButton_NoRegister()
	{
		return UPowerButton::StaticClass();
	}
	struct Z_Construct_UClass_UPowerButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__itemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledLongPressed_MetaData[];
#endif
		static void NewProp_EnabledLongPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnabledLongPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnabledOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisabledOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillPowerChargeProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FillPowerChargeProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondAddonSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondAddonSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstAddonSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstAddonSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddonsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TierImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TierImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialProgressBarContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadialProgressBarContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPowerButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPowerButton_GetActionButton, "GetActionButton" }, // 3799925370
		{ &Z_Construct_UFunction_UPowerButton_IsRadialProgressBarActive, "IsRadialProgressBarActive" }, // 1393764318
		{ &Z_Construct_UFunction_UPowerButton_OnTierChanged, "OnTierChanged" }, // 528235208
		{ &Z_Construct_UFunction_UPowerButton_SetFillProgressPercentage, "SetFillProgressPercentage" }, // 3792548560
		{ &Z_Construct_UFunction_UPowerButton_SetPowerIntensityOpacity, "SetPowerIntensityOpacity" }, // 949229940
		{ &Z_Construct_UFunction_UPowerButton_SetRadialProgressBarActice, "SetRadialProgressBarActice" }, // 4074286928
		{ &Z_Construct_UFunction_UPowerButton_SetRadialProgressPercentage, "SetRadialProgressPercentage" }, // 3970856690
		{ &Z_Construct_UFunction_UPowerButton_SetState, "SetState" }, // 1274777460
		{ &Z_Construct_UFunction_UPowerButton_SetSwitchIconActive, "SetSwitchIconActive" }, // 3344572189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerButton.h" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp__itemCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp__itemCount = { "_itemCount", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, _itemCount), METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp__itemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp__itemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledLongPressed_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	void Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledLongPressed_SetBit(void* Obj)
	{
		((UPowerButton*)Obj)->EnabledLongPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledLongPressed = { "EnabledLongPressed", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPowerButton), &Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledLongPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledLongPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledLongPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledOpacity_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledOpacity = { "EnabledOpacity", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, EnabledOpacity), METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_DisabledOpacity_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_DisabledOpacity = { "DisabledOpacity", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, DisabledOpacity), METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_DisabledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_DisabledOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_FillPowerChargeProgression_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_FillPowerChargeProgression = { "FillPowerChargeProgression", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, FillPowerChargeProgression), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_FillPowerChargeProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_FillPowerChargeProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_SecondAddonSlot_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_SecondAddonSlot = { "SecondAddonSlot", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, SecondAddonSlot), Z_Construct_UClass_UUMGInventoryItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_SecondAddonSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_SecondAddonSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_FirstAddonSlot_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_FirstAddonSlot = { "FirstAddonSlot", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, FirstAddonSlot), Z_Construct_UClass_UUMGInventoryItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_FirstAddonSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_FirstAddonSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_AddonsContainer_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_AddonsContainer = { "AddonsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, AddonsContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_AddonsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_AddonsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_TierImage_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_TierImage = { "TierImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, TierImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_TierImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_TierImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_CountLabel_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_CountLabel = { "CountLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, CountLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_CountLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_CountLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_RadialProgressBarContainer_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_RadialProgressBarContainer = { "RadialProgressBarContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, RadialProgressBarContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_RadialProgressBarContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_RadialProgressBarContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_CountContainer_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_CountContainer = { "CountContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, CountContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_CountContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_CountContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_SwitchIcon_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_SwitchIcon = { "SwitchIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, SwitchIcon), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_SwitchIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_SwitchIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerButton_Statics::NewProp_Button_MetaData[] = {
		{ "Category", "PowerButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PowerButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerButton, Button), Z_Construct_UClass_UActionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::NewProp_Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp__itemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledLongPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_EnabledOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_DisabledOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_FillPowerChargeProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_SecondAddonSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_FirstAddonSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_AddonsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_TierImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_CountLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_RadialProgressBarContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_CountContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_SwitchIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerButton_Statics::NewProp_Button,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerButton_Statics::ClassParams = {
		&UPowerButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPowerButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerButton, 281409457);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPowerButton>()
	{
		return UPowerButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerButton(Z_Construct_UClass_UPowerButton, &UPowerButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPowerButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
