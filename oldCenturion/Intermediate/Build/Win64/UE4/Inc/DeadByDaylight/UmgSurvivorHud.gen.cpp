// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UmgSurvivorHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUmgSurvivorHud() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgSurvivorHud_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgSurvivorHud();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgPlayableHud();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActionButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaHudLookBackJoystick_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWiggleWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUmgSurvivorHud::execCenterItemClicked)
	{
		P_GET_UBOOL(Z_Param_fromCancelRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CenterItemClicked(Z_Param_fromCancelRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execGetCenterItemIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetCenterItemIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execGetCenterItemText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCenterItemText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execGetLookBackJoystickIsPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLookBackJoystickIsPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execGetLookBackJoystickNormalizedOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetLookBackJoystickNormalizedOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execHasSecondaryActionAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSecondaryActionAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execOnCancelButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execRespondToVirtualJoystickPressChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_controlIndex);
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RespondToVirtualJoystickPressChanged(Z_Param_controlIndex,Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execSetLookBackJoystickImage)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLookBackJoystickImage(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execSetLookBackJoystickPosition)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLookBackJoystickPosition(Z_Param_Out_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execSetSkillCheckButtonPosition)
	{
		P_GET_UBOOL(Z_Param_isInsane);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkillCheckButtonPosition(Z_Param_isInsane);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execShouldUseContextualItemButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldUseContextualItemButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUmgSurvivorHud::execUpdateCancelButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCancelButton();
		P_NATIVE_END;
	}
	static FName NAME_UUmgSurvivorHud_InitializeLookBackJoystickPosition = FName(TEXT("InitializeLookBackJoystickPosition"));
	void UUmgSurvivorHud::InitializeLookBackJoystickPosition()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUmgSurvivorHud_InitializeLookBackJoystickPosition),NULL);
	}
	static FName NAME_UUmgSurvivorHud_SetNonRestrictedControlsVisibility = FName(TEXT("SetNonRestrictedControlsVisibility"));
	void UUmgSurvivorHud::SetNonRestrictedControlsVisibility(bool visible)
	{
		UmgSurvivorHud_eventSetNonRestrictedControlsVisibility_Parms Parms;
		Parms.visible=visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUmgSurvivorHud_SetNonRestrictedControlsVisibility),&Parms);
	}
	void UUmgSurvivorHud::StaticRegisterNativesUUmgSurvivorHud()
	{
		UClass* Class = UUmgSurvivorHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CenterItemClicked", &UUmgSurvivorHud::execCenterItemClicked },
			{ "GetCenterItemIcon", &UUmgSurvivorHud::execGetCenterItemIcon },
			{ "GetCenterItemText", &UUmgSurvivorHud::execGetCenterItemText },
			{ "GetLookBackJoystickIsPressed", &UUmgSurvivorHud::execGetLookBackJoystickIsPressed },
			{ "GetLookBackJoystickNormalizedOffset", &UUmgSurvivorHud::execGetLookBackJoystickNormalizedOffset },
			{ "HasSecondaryActionAvailable", &UUmgSurvivorHud::execHasSecondaryActionAvailable },
			{ "OnCancelButtonClicked", &UUmgSurvivorHud::execOnCancelButtonClicked },
			{ "RespondToVirtualJoystickPressChanged", &UUmgSurvivorHud::execRespondToVirtualJoystickPressChanged },
			{ "SetLookBackJoystickImage", &UUmgSurvivorHud::execSetLookBackJoystickImage },
			{ "SetLookBackJoystickPosition", &UUmgSurvivorHud::execSetLookBackJoystickPosition },
			{ "SetSkillCheckButtonPosition", &UUmgSurvivorHud::execSetSkillCheckButtonPosition },
			{ "ShouldUseContextualItemButton", &UUmgSurvivorHud::execShouldUseContextualItemButton },
			{ "UpdateCancelButton", &UUmgSurvivorHud::execUpdateCancelButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics
	{
		struct UmgSurvivorHud_eventCenterItemClicked_Parms
		{
			bool fromCancelRequest;
		};
		static void NewProp_fromCancelRequest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fromCancelRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::NewProp_fromCancelRequest_SetBit(void* Obj)
	{
		((UmgSurvivorHud_eventCenterItemClicked_Parms*)Obj)->fromCancelRequest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::NewProp_fromCancelRequest = { "fromCancelRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgSurvivorHud_eventCenterItemClicked_Parms), &Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::NewProp_fromCancelRequest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::NewProp_fromCancelRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "CenterItemClicked", nullptr, nullptr, sizeof(UmgSurvivorHud_eventCenterItemClicked_Parms), Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics
	{
		struct UmgSurvivorHud_eventGetCenterItemIcon_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgSurvivorHud_eventGetCenterItemIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "GetCenterItemIcon", nullptr, nullptr, sizeof(UmgSurvivorHud_eventGetCenterItemIcon_Parms), Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics
	{
		struct UmgSurvivorHud_eventGetCenterItemText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgSurvivorHud_eventGetCenterItemText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "GetCenterItemText", nullptr, nullptr, sizeof(UmgSurvivorHud_eventGetCenterItemText_Parms), Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics
	{
		struct UmgSurvivorHud_eventGetLookBackJoystickIsPressed_Parms
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
	void Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UmgSurvivorHud_eventGetLookBackJoystickIsPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgSurvivorHud_eventGetLookBackJoystickIsPressed_Parms), &Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "GetLookBackJoystickIsPressed", nullptr, nullptr, sizeof(UmgSurvivorHud_eventGetLookBackJoystickIsPressed_Parms), Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics
	{
		struct UmgSurvivorHud_eventGetLookBackJoystickNormalizedOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgSurvivorHud_eventGetLookBackJoystickNormalizedOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "GetLookBackJoystickNormalizedOffset", nullptr, nullptr, sizeof(UmgSurvivorHud_eventGetLookBackJoystickNormalizedOffset_Parms), Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics
	{
		struct UmgSurvivorHud_eventHasSecondaryActionAvailable_Parms
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
	void Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UmgSurvivorHud_eventHasSecondaryActionAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgSurvivorHud_eventHasSecondaryActionAvailable_Parms), &Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "HasSecondaryActionAvailable", nullptr, nullptr, sizeof(UmgSurvivorHud_eventHasSecondaryActionAvailable_Parms), Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_InitializeLookBackJoystickPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_InitializeLookBackJoystickPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_InitializeLookBackJoystickPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "InitializeLookBackJoystickPosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_InitializeLookBackJoystickPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_InitializeLookBackJoystickPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_InitializeLookBackJoystickPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_InitializeLookBackJoystickPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_OnCancelButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_OnCancelButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_OnCancelButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "OnCancelButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_OnCancelButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_OnCancelButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_OnCancelButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_OnCancelButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics
	{
		struct UmgSurvivorHud_eventRespondToVirtualJoystickPressChanged_Parms
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
	void Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((UmgSurvivorHud_eventRespondToVirtualJoystickPressChanged_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgSurvivorHud_eventRespondToVirtualJoystickPressChanged_Parms), &Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_controlIndex = { "controlIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgSurvivorHud_eventRespondToVirtualJoystickPressChanged_Parms, controlIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_pressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::NewProp_controlIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "RespondToVirtualJoystickPressChanged", nullptr, nullptr, sizeof(UmgSurvivorHud_eventRespondToVirtualJoystickPressChanged_Parms), Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics
	{
		struct UmgSurvivorHud_eventSetLookBackJoystickImage_Parms
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
	void Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((UmgSurvivorHud_eventSetLookBackJoystickImage_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgSurvivorHud_eventSetLookBackJoystickImage_Parms), &Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "SetLookBackJoystickImage", nullptr, nullptr, sizeof(UmgSurvivorHud_eventSetLookBackJoystickImage_Parms), Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics
	{
		struct UmgSurvivorHud_eventSetLookBackJoystickPosition_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UmgSurvivorHud_eventSetLookBackJoystickPosition_Parms, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "SetLookBackJoystickPosition", nullptr, nullptr, sizeof(UmgSurvivorHud_eventSetLookBackJoystickPosition_Parms), Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((UmgSurvivorHud_eventSetNonRestrictedControlsVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgSurvivorHud_eventSetNonRestrictedControlsVisibility_Parms), &Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "SetNonRestrictedControlsVisibility", nullptr, nullptr, sizeof(UmgSurvivorHud_eventSetNonRestrictedControlsVisibility_Parms), Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics
	{
		struct UmgSurvivorHud_eventSetSkillCheckButtonPosition_Parms
		{
			bool isInsane;
		};
		static void NewProp_isInsane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInsane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::NewProp_isInsane_SetBit(void* Obj)
	{
		((UmgSurvivorHud_eventSetSkillCheckButtonPosition_Parms*)Obj)->isInsane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::NewProp_isInsane = { "isInsane", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgSurvivorHud_eventSetSkillCheckButtonPosition_Parms), &Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::NewProp_isInsane_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::NewProp_isInsane,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "SetSkillCheckButtonPosition", nullptr, nullptr, sizeof(UmgSurvivorHud_eventSetSkillCheckButtonPosition_Parms), Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics
	{
		struct UmgSurvivorHud_eventShouldUseContextualItemButton_Parms
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
	void Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UmgSurvivorHud_eventShouldUseContextualItemButton_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UmgSurvivorHud_eventShouldUseContextualItemButton_Parms), &Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "ShouldUseContextualItemButton", nullptr, nullptr, sizeof(UmgSurvivorHud_eventShouldUseContextualItemButton_Parms), Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUmgSurvivorHud_UpdateCancelButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUmgSurvivorHud_UpdateCancelButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmgSurvivorHud_UpdateCancelButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmgSurvivorHud, nullptr, "UpdateCancelButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUmgSurvivorHud_UpdateCancelButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmgSurvivorHud_UpdateCancelButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUmgSurvivorHud_UpdateCancelButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUmgSurvivorHud_UpdateCancelButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUmgSurvivorHud_NoRegister()
	{
		return UUmgSurvivorHud::StaticClass();
	}
	struct Z_Construct_UClass_UUmgSurvivorHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pressedLookBackJoystickBackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pressedLookBackJoystickBackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unpressedLookBackJoystickBackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unpressedLookBackJoystickBackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pressedLookBackJoystickThumbImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pressedLookBackJoystickThumbImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unpressedLookBackJoystickThumbImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unpressedLookBackJoystickThumbImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsaneSkillCheckButtonCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InsaneSkillCheckButtonCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckButtonCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillCheckButtonCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillCheckButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookBackJoystick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LookBackJoystick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookBackButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LookBackButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterInteractionButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CenterInteractionButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Survivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Survivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiggleWidgetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WiggleWidgetContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiggleWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WiggleWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StruggleWidgetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StruggleWidgetContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StruggleWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StruggleWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUmgSurvivorHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUmgPlayableHud,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUmgSurvivorHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUmgSurvivorHud_CenterItemClicked, "CenterItemClicked" }, // 2519423063
		{ &Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemIcon, "GetCenterItemIcon" }, // 991012040
		{ &Z_Construct_UFunction_UUmgSurvivorHud_GetCenterItemText, "GetCenterItemText" }, // 2346565714
		{ &Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickIsPressed, "GetLookBackJoystickIsPressed" }, // 3012048204
		{ &Z_Construct_UFunction_UUmgSurvivorHud_GetLookBackJoystickNormalizedOffset, "GetLookBackJoystickNormalizedOffset" }, // 759904681
		{ &Z_Construct_UFunction_UUmgSurvivorHud_HasSecondaryActionAvailable, "HasSecondaryActionAvailable" }, // 2635519400
		{ &Z_Construct_UFunction_UUmgSurvivorHud_InitializeLookBackJoystickPosition, "InitializeLookBackJoystickPosition" }, // 1781548914
		{ &Z_Construct_UFunction_UUmgSurvivorHud_OnCancelButtonClicked, "OnCancelButtonClicked" }, // 3026576141
		{ &Z_Construct_UFunction_UUmgSurvivorHud_RespondToVirtualJoystickPressChanged, "RespondToVirtualJoystickPressChanged" }, // 3753512424
		{ &Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickImage, "SetLookBackJoystickImage" }, // 729239523
		{ &Z_Construct_UFunction_UUmgSurvivorHud_SetLookBackJoystickPosition, "SetLookBackJoystickPosition" }, // 3904536511
		{ &Z_Construct_UFunction_UUmgSurvivorHud_SetNonRestrictedControlsVisibility, "SetNonRestrictedControlsVisibility" }, // 3935051396
		{ &Z_Construct_UFunction_UUmgSurvivorHud_SetSkillCheckButtonPosition, "SetSkillCheckButtonPosition" }, // 3285515136
		{ &Z_Construct_UFunction_UUmgSurvivorHud_ShouldUseContextualItemButton, "ShouldUseContextualItemButton" }, // 1938175429
		{ &Z_Construct_UFunction_UUmgSurvivorHud_UpdateCancelButton, "UpdateCancelButton" }, // 3730227794
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UmgSurvivorHud.h" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickBackgroundImage_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickBackgroundImage = { "_pressedLookBackJoystickBackgroundImage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, _pressedLookBackJoystickBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickBackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickBackgroundImage_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickBackgroundImage = { "_unpressedLookBackJoystickBackgroundImage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, _unpressedLookBackJoystickBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickBackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickThumbImage_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickThumbImage = { "_pressedLookBackJoystickThumbImage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, _pressedLookBackJoystickThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickThumbImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickThumbImage_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickThumbImage = { "_unpressedLookBackJoystickThumbImage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, _unpressedLookBackJoystickThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickThumbImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_InsaneSkillCheckButtonCanvas_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_InsaneSkillCheckButtonCanvas = { "InsaneSkillCheckButtonCanvas", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, InsaneSkillCheckButtonCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_InsaneSkillCheckButtonCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_InsaneSkillCheckButtonCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButtonCanvas_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButtonCanvas = { "SkillCheckButtonCanvas", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, SkillCheckButtonCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButtonCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButtonCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButton_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButton = { "SkillCheckButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, SkillCheckButton), Z_Construct_UClass_UActionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackJoystick_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackJoystick = { "LookBackJoystick", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, LookBackJoystick), Z_Construct_UClass_UAtlantaHudLookBackJoystick_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackJoystick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackJoystick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackButtonContainer_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackButtonContainer = { "LookBackButtonContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, LookBackButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CenterInteractionButtonContainer_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CenterInteractionButtonContainer = { "CenterInteractionButtonContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, CenterInteractionButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CenterInteractionButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CenterInteractionButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CancelButton_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CancelButton = { "CancelButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, CancelButton), Z_Construct_UClass_UActionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CancelButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CancelButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_Survivor_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_Survivor = { "Survivor", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, Survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_Survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_Survivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidgetContainer_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidgetContainer = { "WiggleWidgetContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, WiggleWidgetContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidgetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidgetContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidget_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidget = { "WiggleWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, WiggleWidget), Z_Construct_UClass_UWiggleWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidgetContainer_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidgetContainer = { "StruggleWidgetContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, StruggleWidgetContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidgetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidgetContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidget_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidget = { "StruggleWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, StruggleWidget), Z_Construct_UClass_UWiggleWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButtonContainer_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButtonContainer = { "CrouchButtonContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, CrouchButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButton_MetaData[] = {
		{ "Category", "UmgSurvivorHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UmgSurvivorHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButton = { "CrouchButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUmgSurvivorHud, CrouchButton), Z_Construct_UClass_UActionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUmgSurvivorHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickBackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickBackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__pressedLookBackJoystickThumbImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp__unpressedLookBackJoystickThumbImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_InsaneSkillCheckButtonCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButtonCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_SkillCheckButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackJoystick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_LookBackButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CenterInteractionButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CancelButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_Survivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidgetContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_WiggleWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidgetContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_StruggleWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUmgSurvivorHud_Statics::NewProp_CrouchButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUmgSurvivorHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUmgSurvivorHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUmgSurvivorHud_Statics::ClassParams = {
		&UUmgSurvivorHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUmgSurvivorHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUmgSurvivorHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgSurvivorHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUmgSurvivorHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUmgSurvivorHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUmgSurvivorHud, 1674812619);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUmgSurvivorHud>()
	{
		return UUmgSurvivorHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUmgSurvivorHud(Z_Construct_UClass_UUmgSurvivorHud, &UUmgSurvivorHud::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUmgSurvivorHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUmgSurvivorHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
