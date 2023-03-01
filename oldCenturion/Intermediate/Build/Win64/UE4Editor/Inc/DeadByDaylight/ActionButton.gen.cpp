// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActionButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActionButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActionButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EActionButtonState();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActionButton::execSetIcon)
	{
		P_GET_STRUCT(FSlateBrush,Z_Param_slateBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIcon(Z_Param_slateBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionButton::execSetPreviousState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviousState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionButton::execSetSlateBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlateBrush(Z_Param_Out_InBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionButton::execSetState)
	{
		P_GET_ENUM(EActionButtonState,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(EActionButtonState(Z_Param_state));
		P_NATIVE_END;
	}
	static FName NAME_UActionButton_PlayBecameAvailableAnimation = FName(TEXT("PlayBecameAvailableAnimation"));
	void UActionButton::PlayBecameAvailableAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UActionButton_PlayBecameAvailableAnimation),NULL);
	}
	void UActionButton::StaticRegisterNativesUActionButton()
	{
		UClass* Class = UActionButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIcon", &UActionButton::execSetIcon },
			{ "SetPreviousState", &UActionButton::execSetPreviousState },
			{ "SetSlateBrush", &UActionButton::execSetSlateBrush },
			{ "SetState", &UActionButton::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionButton_PlayBecameAvailableAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionButton_PlayBecameAvailableAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionButton_PlayBecameAvailableAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionButton, nullptr, "PlayBecameAvailableAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionButton_PlayBecameAvailableAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionButton_PlayBecameAvailableAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionButton_PlayBecameAvailableAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionButton_PlayBecameAvailableAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionButton_SetIcon_Statics
	{
		struct ActionButton_eventSetIcon_Parms
		{
			FSlateBrush slateBrush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_slateBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActionButton_SetIcon_Statics::NewProp_slateBrush = { "slateBrush", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionButton_eventSetIcon_Parms, slateBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionButton_SetIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionButton_SetIcon_Statics::NewProp_slateBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionButton_SetIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionButton_SetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionButton, nullptr, "SetIcon", nullptr, nullptr, sizeof(ActionButton_eventSetIcon_Parms), Z_Construct_UFunction_UActionButton_SetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionButton_SetIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionButton_SetIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionButton_SetIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionButton_SetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionButton_SetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionButton_SetPreviousState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionButton_SetPreviousState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionButton_SetPreviousState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionButton, nullptr, "SetPreviousState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionButton_SetPreviousState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionButton_SetPreviousState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionButton_SetPreviousState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionButton_SetPreviousState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics
	{
		struct ActionButton_eventSetSlateBrush_Parms
		{
			FSlateBrush InBrush;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionButton_eventSetSlateBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::NewProp_InBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::NewProp_InBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::NewProp_InBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionButton, nullptr, "SetSlateBrush", nullptr, nullptr, sizeof(ActionButton_eventSetSlateBrush_Parms), Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionButton_SetSlateBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionButton_SetSlateBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionButton_SetState_Statics
	{
		struct ActionButton_eventSetState_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActionButton_SetState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionButton_eventSetState_Parms, state), Z_Construct_UEnum_DeadByDaylight_EActionButtonState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActionButton_SetState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionButton_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionButton_SetState_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionButton_SetState_Statics::NewProp_state_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionButton_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionButton_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionButton, nullptr, "SetState", nullptr, nullptr, sizeof(ActionButton_eventSetState_Parms), Z_Construct_UFunction_UActionButton_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionButton_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionButton_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionButton_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionButton_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionButton_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionButton_NoRegister()
	{
		return UActionButton::StaticClass();
	}
	struct Z_Construct_UClass_UActionButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__previousState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__previousState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__previousState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Disabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Toggled_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Toggled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisabledOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToggledOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleSmokeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggleSmokeImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionButton_PlayBecameAvailableAnimation, "PlayBecameAvailableAnimation" }, // 2304018852
		{ &Z_Construct_UFunction_UActionButton_SetIcon, "SetIcon" }, // 2156398190
		{ &Z_Construct_UFunction_UActionButton_SetPreviousState, "SetPreviousState" }, // 365226634
		{ &Z_Construct_UFunction_UActionButton_SetSlateBrush, "SetSlateBrush" }, // 3106821706
		{ &Z_Construct_UFunction_UActionButton_SetState, "SetState" }, // 2622081764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActionButton.h" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp__previousState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp__previousState = { "_previousState", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, _previousState), Z_Construct_UEnum_DeadByDaylight_EActionButtonState, METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp__previousState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp__previousState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp__previousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp__currentState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp__currentState = { "_currentState", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, _currentState), Z_Construct_UEnum_DeadByDaylight_EActionButtonState, METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp__currentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp__currentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp__currentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_Disabled_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_Disabled = { "Disabled", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, Disabled), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_Disabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_Disabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_Toggled_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_Toggled = { "Toggled", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, Toggled), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_Toggled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_Toggled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, Normal), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_DisabledOpacity_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_DisabledOpacity = { "DisabledOpacity", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, DisabledOpacity), METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_DisabledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_DisabledOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_ToggledOpacity_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_ToggledOpacity = { "ToggledOpacity", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, ToggledOpacity), METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_ToggledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_ToggledOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultOpacity_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultOpacity = { "DefaultOpacity", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, DefaultOpacity), METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_Button_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_ToggleSmokeImage_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_ToggleSmokeImage = { "ToggleSmokeImage", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, ToggleSmokeImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_ToggleSmokeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_ToggleSmokeImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_IconImage_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_IconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_IconImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultImage_MetaData[] = {
		{ "Category", "ActionButton" },
		{ "ModuleRelativePath", "Public/ActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionButton, DefaultImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp__previousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp__previousState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp__currentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp__currentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_Disabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_Toggled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_DisabledOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_ToggledOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_ToggleSmokeImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_IconImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionButton_Statics::NewProp_DefaultImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionButton_Statics::ClassParams = {
		&UActionButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionButton, 2538542994);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActionButton>()
	{
		return UActionButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionButton(Z_Construct_UClass_UActionButton, &UActionButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActionButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
