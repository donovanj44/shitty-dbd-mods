// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UmgKillerHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUmgKillerHud() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgKillerHud_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgKillerHud();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgPlayableHud();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGhostfaceSpecific_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActionButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPowerButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUmgKillerHud::execGetCurrentPowerUseInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionDefinition**)Z_Param__Result=P_THIS->GetCurrentPowerUseInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execIsAttackButtonVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttackButtonVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execIsCancelPowerButtonAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCancelPowerButtonAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execIsPowerButtonAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPowerButtonAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnActionButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnActionButtonReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionButtonReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnAttackButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnAttackButtonReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackButtonReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnCancelButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnCancelButtonReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelButtonReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnPowerButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPowerButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnPowerButtonReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPowerButtonReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnSecondAbilityButtonLongPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondAbilityButtonLongPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execOnSecondAbilityButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondAbilityButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execRespondToVirtualJoystickPressChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_controlIndex);
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RespondToVirtualJoystickPressChanged(Z_Param_controlIndex,Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execSetPowerAttackJoystickPosition)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPowerAttackJoystickPosition(Z_Param_Out_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execSetPowerAttackJoystickThumbImage)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPowerAttackJoystickThumbImage(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execSetPowerIconFromItem)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_GET_ENUM(EInventoryType,Z_Param_inventoryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPowerIconFromItem(Z_Param_item,EInventoryType(Z_Param_inventoryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execShouldShowInteractionHighlight)
	{
		P_GET_ENUM(EInputInteractionType,Z_Param_interactionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldShowInteractionHighlight(EInputInteractionType(Z_Param_interactionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgKillerHud::execUpdatePowerButtonTier)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_previousTier);
		P_GET_PROPERTY(FIntProperty,Z_Param_currentTier);
		P_GET_UBOOL(Z_Param_isFirstTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePowerButtonTier(Z_Param_previousTier,Z_Param_currentTier,Z_Param_isFirstTime);
		P_NATIVE_END;
	}
	static FName NAME_UUmgKillerHud_HandleOnAttackButtonPressed = FName(TEXT("HandleOnAttackButtonPressed"));
	void UUmgKillerHud::HandleOnAttackButtonPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUmgKillerHud_HandleOnAttackButtonPressed),NULL);
	}
	static FName NAME_UUmgKillerHud_HandleOnAttackButtonReleased = FName(TEXT("HandleOnAttackButtonReleased"));
	void UUmgKillerHud::HandleOnAttackButtonReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUmgKillerHud_HandleOnAttackButtonReleased),NULL);
	}
	static FName NAME_UUmgKillerHud_InitializePowerAttackJoystickPosition = FName(TEXT("InitializePowerAttackJoystickPosition"));
	void UUmgKillerHud::InitializePowerAttackJoystickPosition()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUmgKillerHud_InitializePowerAttackJoystickPosition),NULL);
	}
	void UUmgKillerHud::StaticRegisterNativesUUmgKillerHud()
	{
		UClass* Class = UUmgKillerHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentPowerUseInteraction", &UUmgKillerHud::execGetCurrentPowerUseInteraction },
			{ "IsAttackButtonVisible", &UUmgKillerHud::execIsAttackButtonVisible },
			{ "IsCancelPowerButtonAvailable", &UUmgKillerHud::execIsCancelPowerButtonAvailable },
			{ "IsPowerButtonAvailable", &UUmgKillerHud::execIsPowerButtonAvailable },
			{ "OnActionButtonPressed", &UUmgKillerHud::execOnActionButtonPressed },
			{ "OnActionButtonReleased", &UUmgKillerHud::execOnActionButtonReleased },
			{ "OnAttackButtonPressed", &UUmgKillerHud::execOnAttackButtonPressed },
			{ "OnAttackButtonReleased", &UUmgKillerHud::execOnAttackButtonReleased },
			{ "OnCancelButtonPressed", &UUmgKillerHud::execOnCancelButtonPressed },
			{ "OnCancelButtonReleased", &UUmgKillerHud::execOnCancelButtonReleased },
			{ "OnPowerButtonPressed", &UUmgKillerHud::execOnPowerButtonPressed },
			{ "OnPowerButtonReleased", &UUmgKillerHud::execOnPowerButtonReleased },
			{ "OnSecondAbilityButtonLongPressed", &UUmgKillerHud::execOnSecondAbilityButtonLongPressed },
			{ "OnSecondAbilityButtonPressed", &UUmgKillerHud::execOnSecondAbilityButtonPressed },
			{ "RespondToVirtualJoystickPressChanged", &UUmgKillerHud::execRespondToVirtualJoystickPressChanged },
			{ "SetPowerAttackJoystickPosition", &UUmgKillerHud::execSetPowerAttackJoystickPosition },
			{ "SetPowerAttackJoystickThumbImage", &UUmgKillerHud::execSetPowerAttackJoystickThumbImage },
			{ "SetPowerIconFromItem", &UUmgKillerHud::execSetPowerIconFromItem },
			{ "ShouldShowInteractionHighlight", &UUmgKillerHud::execShouldShowInteractionHighlight },
			{ "UpdatePowerButtonTier", &UUmgKillerHud::execUpdatePowerButtonTier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics
	{
		struct UmgKillerHud_eventGetCurrentPowerUseInteraction_Parms
		{
			UInteractionDefinition* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgKillerHud_eventGetCurrentPowerUseInteraction_Parms, ReturnValue), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "GetCurrentPowerUseInteraction", nullptr, nullptr, sizeof(UmgKillerHud_eventGetCurrentPowerUseInteraction_Parms), Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "HandleOnAttackButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "HandleOnAttackButtonReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_InitializePowerAttackJoystickPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_InitializePowerAttackJoystickPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_InitializePowerAttackJoystickPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "InitializePowerAttackJoystickPosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_InitializePowerAttackJoystickPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_InitializePowerAttackJoystickPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_InitializePowerAttackJoystickPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_InitializePowerAttackJoystickPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics
	{
		struct UmgKillerHud_eventIsAttackButtonVisible_Parms
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
	void Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UmgKillerHud_eventIsAttackButtonVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgKillerHud_eventIsAttackButtonVisible_Parms), &Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "IsAttackButtonVisible", nullptr, nullptr, sizeof(UmgKillerHud_eventIsAttackButtonVisible_Parms), Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics
	{
		struct UmgKillerHud_eventIsCancelPowerButtonAvailable_Parms
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
	void Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UmgKillerHud_eventIsCancelPowerButtonAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgKillerHud_eventIsCancelPowerButtonAvailable_Parms), &Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "IsCancelPowerButtonAvailable", nullptr, nullptr, sizeof(UmgKillerHud_eventIsCancelPowerButtonAvailable_Parms), Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics
	{
		struct UmgKillerHud_eventIsPowerButtonAvailable_Parms
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
	void Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UmgKillerHud_eventIsPowerButtonAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgKillerHud_eventIsPowerButtonAvailable_Parms), &Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "IsPowerButtonAvailable", nullptr, nullptr, sizeof(UmgKillerHud_eventIsPowerButtonAvailable_Parms), Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnActionButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnActionButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnActionButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnActionButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnActionButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnActionButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnActionButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnActionButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnActionButtonReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnActionButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnActionButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnActionButtonReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnActionButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnActionButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnActionButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnActionButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnAttackButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnAttackButtonReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnCancelButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnCancelButtonReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnPowerButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnPowerButtonReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonLongPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonLongPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonLongPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnSecondAbilityButtonLongPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonLongPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonLongPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonLongPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonLongPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "OnSecondAbilityButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics
	{
		struct UmgKillerHud_eventRespondToVirtualJoystickPressChanged_Parms
		{
			int32 controlIndex;
			bool pressed;
		};
		static void NewProp_pressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_controlIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((UmgKillerHud_eventRespondToVirtualJoystickPressChanged_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgKillerHud_eventRespondToVirtualJoystickPressChanged_Parms), &Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_controlIndex = { "controlIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgKillerHud_eventRespondToVirtualJoystickPressChanged_Parms, controlIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_pressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_controlIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "RespondToVirtualJoystickPressChanged", nullptr, nullptr, sizeof(UmgKillerHud_eventRespondToVirtualJoystickPressChanged_Parms), Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics
	{
		struct UmgKillerHud_eventSetPowerAttackJoystickPosition_Parms
		{
			FVector2D position;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgKillerHud_eventSetPowerAttackJoystickPosition_Parms, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "SetPowerAttackJoystickPosition", nullptr, nullptr, sizeof(UmgKillerHud_eventSetPowerAttackJoystickPosition_Parms), Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics
	{
		struct UmgKillerHud_eventSetPowerAttackJoystickThumbImage_Parms
		{
			bool pressed;
		};
		static void NewProp_pressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((UmgKillerHud_eventSetPowerAttackJoystickThumbImage_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgKillerHud_eventSetPowerAttackJoystickThumbImage_Parms), &Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "SetPowerAttackJoystickThumbImage", nullptr, nullptr, sizeof(UmgKillerHud_eventSetPowerAttackJoystickThumbImage_Parms), Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics
	{
		struct UmgKillerHud_eventSetPowerIconFromItem_Parms
		{
			ACollectable* item;
			EInventoryType inventoryType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inventoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inventoryType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::NewProp_inventoryType = { "inventoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgKillerHud_eventSetPowerIconFromItem_Parms, inventoryType), Z_Construct_UEnum_DeadByDaylight_EInventoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::NewProp_inventoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgKillerHud_eventSetPowerIconFromItem_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::NewProp_inventoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::NewProp_inventoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "SetPowerIconFromItem", nullptr, nullptr, sizeof(UmgKillerHud_eventSetPowerIconFromItem_Parms), Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics
	{
		struct UmgKillerHud_eventShouldShowInteractionHighlight_Parms
		{
			EInputInteractionType interactionType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_interactionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UmgKillerHud_eventShouldShowInteractionHighlight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgKillerHud_eventShouldShowInteractionHighlight_Parms), &Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgKillerHud_eventShouldShowInteractionHighlight_Parms, interactionType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::NewProp_interactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::NewProp_interactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::NewProp_interactionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "ShouldShowInteractionHighlight", nullptr, nullptr, sizeof(UmgKillerHud_eventShouldShowInteractionHighlight_Parms), Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics
	{
		struct UmgKillerHud_eventUpdatePowerButtonTier_Parms
		{
			int32 previousTier;
			int32 currentTier;
			bool isFirstTime;
		};
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
	void Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::NewProp_isFirstTime_SetBit(void* Obj)
	{
		((UmgKillerHud_eventUpdatePowerButtonTier_Parms*)Obj)->isFirstTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::NewProp_isFirstTime = { "isFirstTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgKillerHud_eventUpdatePowerButtonTier_Parms), &Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::NewProp_isFirstTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::NewProp_currentTier = { "currentTier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgKillerHud_eventUpdatePowerButtonTier_Parms, currentTier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::NewProp_previousTier = { "previousTier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgKillerHud_eventUpdatePowerButtonTier_Parms, previousTier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::NewProp_isFirstTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::NewProp_currentTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::NewProp_previousTier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgKillerHud, nullptr, "UpdatePowerButtonTier", nullptr, nullptr, sizeof(UmgKillerHud_eventUpdatePowerButtonTier_Parms), Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUmgKillerHud_NoRegister()
	{
		return UUmgKillerHud::StaticClass();
	}
	struct Z_Construct_UClass_UUmgKillerHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerAttackJoystickThumbUnpressedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerAttackJoystickThumbUnpressedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerAttackJoystickThumbPressedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerAttackJoystickThumbPressedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__DefaultAttackJoystickIconUnpressedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__DefaultAttackJoystickIconUnpressedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__DefaultAttackJoystickIconPressedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__DefaultAttackJoystickIconPressedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerAttackJoystickBackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerAttackJoystickBackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPowerAttackJoystickActivated_MetaData[];
#endif
		static void NewProp__isPowerAttackJoystickActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPowerAttackJoystickActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttackJoystickActivated_MetaData[];
#endif
		static void NewProp__isAttackJoystickActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttackJoystickActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttackButtonPressed_MetaData[];
#endif
		static void NewProp__isAttackButtonPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttackButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCancelButtonPressed_MetaData[];
#endif
		static void NewProp__isCancelButtonPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCancelButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Killer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Killer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudPowerAttackJoystick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HudPowerAttackJoystick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondAttackButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondAttackButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostfaceSpecific_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GhostfaceSpecific;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropSurvivorButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DropSurvivorButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropSurvivorButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DropSurvivorButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondAbilityButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondAbilityButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondAbilityButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondAbilityButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUmgKillerHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUmgPlayableHud,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUmgKillerHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUmgKillerHud_GetCurrentPowerUseInteraction, "GetCurrentPowerUseInteraction" }, // 1018659337
		{ &Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonPressed, "HandleOnAttackButtonPressed" }, // 220857095
		{ &Z_Construct_UFunction_UUmgKillerHud_HandleOnAttackButtonReleased, "HandleOnAttackButtonReleased" }, // 2549115248
		{ &Z_Construct_UFunction_UUmgKillerHud_InitializePowerAttackJoystickPosition, "InitializePowerAttackJoystickPosition" }, // 1640949973
		{ &Z_Construct_UFunction_UUmgKillerHud_IsAttackButtonVisible, "IsAttackButtonVisible" }, // 1667219656
		{ &Z_Construct_UFunction_UUmgKillerHud_IsCancelPowerButtonAvailable, "IsCancelPowerButtonAvailable" }, // 2280739075
		{ &Z_Construct_UFunction_UUmgKillerHud_IsPowerButtonAvailable, "IsPowerButtonAvailable" }, // 3918902390
		{ &Z_Construct_UFunction_UUmgKillerHud_OnActionButtonPressed, "OnActionButtonPressed" }, // 1046466884
		{ &Z_Construct_UFunction_UUmgKillerHud_OnActionButtonReleased, "OnActionButtonReleased" }, // 3852168477
		{ &Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonPressed, "OnAttackButtonPressed" }, // 1654176701
		{ &Z_Construct_UFunction_UUmgKillerHud_OnAttackButtonReleased, "OnAttackButtonReleased" }, // 75646084
		{ &Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonPressed, "OnCancelButtonPressed" }, // 2309471639
		{ &Z_Construct_UFunction_UUmgKillerHud_OnCancelButtonReleased, "OnCancelButtonReleased" }, // 1942404099
		{ &Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonPressed, "OnPowerButtonPressed" }, // 2503841925
		{ &Z_Construct_UFunction_UUmgKillerHud_OnPowerButtonReleased, "OnPowerButtonReleased" }, // 1155647333
		{ &Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonLongPressed, "OnSecondAbilityButtonLongPressed" }, // 817373305
		{ &Z_Construct_UFunction_UUmgKillerHud_OnSecondAbilityButtonPressed, "OnSecondAbilityButtonPressed" }, // 3433568012
		{ &Z_Construct_UFunction_UUmgKillerHud_RespondToVirtualJoystickPressChanged, "RespondToVirtualJoystickPressChanged" }, // 2541324488
		{ &Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickPosition, "SetPowerAttackJoystickPosition" }, // 680060760
		{ &Z_Construct_UFunction_UUmgKillerHud_SetPowerAttackJoystickThumbImage, "SetPowerAttackJoystickThumbImage" }, // 220657358
		{ &Z_Construct_UFunction_UUmgKillerHud_SetPowerIconFromItem, "SetPowerIconFromItem" }, // 4041424316
		{ &Z_Construct_UFunction_UUmgKillerHud_ShouldShowInteractionHighlight, "ShouldShowInteractionHighlight" }, // 860685465
		{ &Z_Construct_UFunction_UUmgKillerHud_UpdatePowerButtonTier, "UpdatePowerButtonTier" }, // 3680636910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UmgKillerHud.h" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbUnpressedSize_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbUnpressedSize = { "_powerAttackJoystickThumbUnpressedSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, _powerAttackJoystickThumbUnpressedSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbUnpressedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbUnpressedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbPressedSize_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbPressedSize = { "_powerAttackJoystickThumbPressedSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, _powerAttackJoystickThumbPressedSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbPressedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbPressedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconUnpressedImage_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconUnpressedImage = { "_DefaultAttackJoystickIconUnpressedImage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, _DefaultAttackJoystickIconUnpressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconUnpressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconUnpressedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconPressedImage_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconPressedImage = { "_DefaultAttackJoystickIconPressedImage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, _DefaultAttackJoystickIconPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconPressedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickBackgroundImage_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickBackgroundImage = { "_powerAttackJoystickBackgroundImage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, _powerAttackJoystickBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickBackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isPowerAttackJoystickActivated_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	void Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isPowerAttackJoystickActivated_SetBit(void* Obj)
	{
		((UUmgKillerHud*)Obj)->_isPowerAttackJoystickActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isPowerAttackJoystickActivated = { "_isPowerAttackJoystickActivated", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUmgKillerHud), &Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isPowerAttackJoystickActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isPowerAttackJoystickActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isPowerAttackJoystickActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackJoystickActivated_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	void Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackJoystickActivated_SetBit(void* Obj)
	{
		((UUmgKillerHud*)Obj)->_isAttackJoystickActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackJoystickActivated = { "_isAttackJoystickActivated", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUmgKillerHud), &Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackJoystickActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackJoystickActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackJoystickActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackButtonPressed_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	void Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackButtonPressed_SetBit(void* Obj)
	{
		((UUmgKillerHud*)Obj)->_isAttackButtonPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackButtonPressed = { "_isAttackButtonPressed", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUmgKillerHud), &Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackButtonPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackButtonPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isCancelButtonPressed_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	void Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isCancelButtonPressed_SetBit(void* Obj)
	{
		((UUmgKillerHud*)Obj)->_isCancelButtonPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isCancelButtonPressed = { "_isCancelButtonPressed", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUmgKillerHud), &Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isCancelButtonPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isCancelButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isCancelButtonPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_Killer_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, Killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_Killer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_Killer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_HudPowerAttackJoystick_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_HudPowerAttackJoystick = { "HudPowerAttackJoystick", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, HudPowerAttackJoystick), Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_HudPowerAttackJoystick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_HudPowerAttackJoystick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAttackButtonContainer_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAttackButtonContainer = { "SecondAttackButtonContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, SecondAttackButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAttackButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAttackButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_GhostfaceSpecific_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_GhostfaceSpecific = { "GhostfaceSpecific", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, GhostfaceSpecific), Z_Construct_UClass_UUMGGhostfaceSpecific_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_GhostfaceSpecific_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_GhostfaceSpecific_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_CancelButton_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_CancelButton = { "CancelButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, CancelButton), Z_Construct_UClass_UMobileBaseUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_CancelButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_CancelButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButtonContainer_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButtonContainer = { "DropSurvivorButtonContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, DropSurvivorButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButton_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButton = { "DropSurvivorButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, DropSurvivorButton), Z_Construct_UClass_UActionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButtonContainer_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButtonContainer = { "AttackButtonContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, AttackButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButton_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButton = { "AttackButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, AttackButton), Z_Construct_UClass_UActionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButtonContainer_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButtonContainer = { "SecondAbilityButtonContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, SecondAbilityButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButton_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButton = { "SecondAbilityButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, SecondAbilityButton), Z_Construct_UClass_UPowerButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButtonContainer_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButtonContainer = { "PowerButtonContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, PowerButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButton_MetaData[] = {
		{ "Category", "UmgKillerHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgKillerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButton = { "PowerButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgKillerHud, PowerButton), Z_Construct_UClass_UPowerButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUmgKillerHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbUnpressedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickThumbPressedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconUnpressedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__DefaultAttackJoystickIconPressedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__powerAttackJoystickBackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isPowerAttackJoystickActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackJoystickActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isAttackButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp__isCancelButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_Killer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_HudPowerAttackJoystick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAttackButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_GhostfaceSpecific,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_CancelButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_DropSurvivorButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_AttackButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_SecondAbilityButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgKillerHud_Statics::NewProp_PowerButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUmgKillerHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUmgKillerHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUmgKillerHud_Statics::ClassParams = {
		&UUmgKillerHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUmgKillerHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUmgKillerHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgKillerHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUmgKillerHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUmgKillerHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUmgKillerHud, 1746218984);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUmgKillerHud>()
	{
		return UUmgKillerHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUmgKillerHud(Z_Construct_UClass_UUmgKillerHud, &UUmgKillerHud::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUmgKillerHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUmgKillerHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
