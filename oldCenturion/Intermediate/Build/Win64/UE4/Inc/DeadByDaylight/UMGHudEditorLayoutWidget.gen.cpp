// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGHudEditorLayoutWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGHudEditorLayoutWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorLayoutWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorLayoutWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDragWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorScreen_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorLayoutScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execFlagSaveAsDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlagSaveAsDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execFlipLayout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlipLayout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execGetCurrentDragWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUMGDragWidget_HudEditor**)Z_Param__Result=P_THIS->GetCurrentDragWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execGetHudEditorWrapperToEdit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCustomWidgetWrapper_HudEditor**)Z_Param__Result=P_THIS->GetHudEditorWrapperToEdit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execResetLayout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLayout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execSaveLayout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveLayout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execSetHudEditorScreen)
	{
		P_GET_OBJECT(UUMGHudEditorScreen,Z_Param_NewHudEditorScreen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHudEditorScreen_Implementation(Z_Param_NewHudEditorScreen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execSetSaveOverlapSound)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_onSaveOverlapSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSaveOverlapSound(Z_Param_onSaveOverlapSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execSetWidgetToEdit)
	{
		P_GET_OBJECT(UUMGDragWidget_HudEditor,Z_Param_widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetToEdit_Implementation(Z_Param_widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execShowKillerLayout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowKillerLayout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorLayoutWidget::execShowSurvivorLayout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSurvivorLayout();
		P_NATIVE_END;
	}
	static FName NAME_UUMGHudEditorLayoutWidget_OnSaveDirty = FName(TEXT("OnSaveDirty"));
	void UUMGHudEditorLayoutWidget::OnSaveDirty(bool isDirty)
	{
		UMGHudEditorLayoutWidget_eventOnSaveDirty_Parms Parms;
		Parms.isDirty=isDirty ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGHudEditorLayoutWidget_OnSaveDirty),&Parms);
	}
	static FName NAME_UUMGHudEditorLayoutWidget_SetHudEditorScreen = FName(TEXT("SetHudEditorScreen"));
	void UUMGHudEditorLayoutWidget::SetHudEditorScreen(UUMGHudEditorScreen* NewHudEditorScreen)
	{
		UMGHudEditorLayoutWidget_eventSetHudEditorScreen_Parms Parms;
		Parms.NewHudEditorScreen=NewHudEditorScreen;
		ProcessEvent(FindFunctionChecked(NAME_UUMGHudEditorLayoutWidget_SetHudEditorScreen),&Parms);
	}
	static FName NAME_UUMGHudEditorLayoutWidget_SetWidgetToEdit = FName(TEXT("SetWidgetToEdit"));
	void UUMGHudEditorLayoutWidget::SetWidgetToEdit(UUMGDragWidget_HudEditor* widget)
	{
		UMGHudEditorLayoutWidget_eventSetWidgetToEdit_Parms Parms;
		Parms.widget=widget;
		ProcessEvent(FindFunctionChecked(NAME_UUMGHudEditorLayoutWidget_SetWidgetToEdit),&Parms);
	}
	void UUMGHudEditorLayoutWidget::StaticRegisterNativesUUMGHudEditorLayoutWidget()
	{
		UClass* Class = UUMGHudEditorLayoutWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlagSaveAsDirty", &UUMGHudEditorLayoutWidget::execFlagSaveAsDirty },
			{ "FlipLayout", &UUMGHudEditorLayoutWidget::execFlipLayout },
			{ "GetCurrentDragWidget", &UUMGHudEditorLayoutWidget::execGetCurrentDragWidget },
			{ "GetHudEditorWrapperToEdit", &UUMGHudEditorLayoutWidget::execGetHudEditorWrapperToEdit },
			{ "ResetLayout", &UUMGHudEditorLayoutWidget::execResetLayout },
			{ "SaveLayout", &UUMGHudEditorLayoutWidget::execSaveLayout },
			{ "SetHudEditorScreen", &UUMGHudEditorLayoutWidget::execSetHudEditorScreen },
			{ "SetSaveOverlapSound", &UUMGHudEditorLayoutWidget::execSetSaveOverlapSound },
			{ "SetWidgetToEdit", &UUMGHudEditorLayoutWidget::execSetWidgetToEdit },
			{ "ShowKillerLayout", &UUMGHudEditorLayoutWidget::execShowKillerLayout },
			{ "ShowSurvivorLayout", &UUMGHudEditorLayoutWidget::execShowSurvivorLayout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlagSaveAsDirty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlagSaveAsDirty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlagSaveAsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "FlagSaveAsDirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlagSaveAsDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlagSaveAsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlagSaveAsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlagSaveAsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlipLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlipLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlipLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "FlipLayout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlipLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlipLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlipLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlipLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics
	{
		struct UMGHudEditorLayoutWidget_eventGetCurrentDragWidget_Parms
		{
			UUMGDragWidget_HudEditor* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorLayoutWidget_eventGetCurrentDragWidget_Parms, ReturnValue), Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "GetCurrentDragWidget", nullptr, nullptr, sizeof(UMGHudEditorLayoutWidget_eventGetCurrentDragWidget_Parms), Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics
	{
		struct UMGHudEditorLayoutWidget_eventGetHudEditorWrapperToEdit_Parms
		{
			UCustomWidgetWrapper_HudEditor* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorLayoutWidget_eventGetHudEditorWrapperToEdit_Parms, ReturnValue), Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "GetHudEditorWrapperToEdit", nullptr, nullptr, sizeof(UMGHudEditorLayoutWidget_eventGetHudEditorWrapperToEdit_Parms), Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics
	{
		static void NewProp_isDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDirty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::NewProp_isDirty_SetBit(void* Obj)
	{
		((UMGHudEditorLayoutWidget_eventOnSaveDirty_Parms*)Obj)->isDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::NewProp_isDirty = { "isDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGHudEditorLayoutWidget_eventOnSaveDirty_Parms), &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::NewProp_isDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::NewProp_isDirty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "OnSaveDirty", nullptr, nullptr, sizeof(UMGHudEditorLayoutWidget_eventOnSaveDirty_Parms), Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ResetLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ResetLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ResetLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "ResetLayout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ResetLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ResetLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ResetLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ResetLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SaveLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SaveLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SaveLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "SaveLayout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SaveLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SaveLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SaveLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SaveLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewHudEditorScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHudEditorScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::NewProp_NewHudEditorScreen_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::NewProp_NewHudEditorScreen = { "NewHudEditorScreen", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorLayoutWidget_eventSetHudEditorScreen_Parms, NewHudEditorScreen), Z_Construct_UClass_UUMGHudEditorScreen_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::NewProp_NewHudEditorScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::NewProp_NewHudEditorScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::NewProp_NewHudEditorScreen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "SetHudEditorScreen", nullptr, nullptr, sizeof(UMGHudEditorLayoutWidget_eventSetHudEditorScreen_Parms), Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics
	{
		struct UMGHudEditorLayoutWidget_eventSetSaveOverlapSound_Parms
		{
			UAkAudioEvent* onSaveOverlapSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_onSaveOverlapSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::NewProp_onSaveOverlapSound = { "onSaveOverlapSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorLayoutWidget_eventSetSaveOverlapSound_Parms, onSaveOverlapSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::NewProp_onSaveOverlapSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "SetSaveOverlapSound", nullptr, nullptr, sizeof(UMGHudEditorLayoutWidget_eventSetSaveOverlapSound_Parms), Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorLayoutWidget_eventSetWidgetToEdit_Parms, widget), Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::NewProp_widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::NewProp_widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::NewProp_widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "SetWidgetToEdit", nullptr, nullptr, sizeof(UMGHudEditorLayoutWidget_eventSetWidgetToEdit_Parms), Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowKillerLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowKillerLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowKillerLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "ShowKillerLayout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowKillerLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowKillerLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowKillerLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowKillerLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowSurvivorLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowSurvivorLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowSurvivorLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorLayoutWidget, nullptr, "ShowSurvivorLayout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowSurvivorLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowSurvivorLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowSurvivorLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowSurvivorLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGHudEditorLayoutWidget_NoRegister()
	{
		return UUMGHudEditorLayoutWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSaveDirtyMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__isSaveDirtyMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__isSaveDirtyMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSaveDirtyMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentWidgetToEdit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentWidgetToEdit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onSaveOverlapSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onSaveOverlapSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudEditorScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HudEditorScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGDragWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlagSaveAsDirty, "FlagSaveAsDirty" }, // 211983996
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_FlipLayout, "FlipLayout" }, // 1239816798
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetCurrentDragWidget, "GetCurrentDragWidget" }, // 3815588582
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_GetHudEditorWrapperToEdit, "GetHudEditorWrapperToEdit" }, // 1644532249
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_OnSaveDirty, "OnSaveDirty" }, // 873258358
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ResetLayout, "ResetLayout" }, // 3244567108
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SaveLayout, "SaveLayout" }, // 3897942006
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetHudEditorScreen, "SetHudEditorScreen" }, // 1711075833
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetSaveOverlapSound, "SetSaveOverlapSound" }, // 1141371287
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_SetWidgetToEdit, "SetWidgetToEdit" }, // 802226546
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowKillerLayout, "ShowKillerLayout" }, // 402220331
		{ &Z_Construct_UFunction_UUMGHudEditorLayoutWidget_ShowSurvivorLayout, "ShowSurvivorLayout" }, // 17371741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGHudEditorLayoutWidget.h" },
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__isSaveDirtyMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__isSaveDirtyMap = { "_isSaveDirtyMap", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorLayoutWidget, _isSaveDirtyMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__isSaveDirtyMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__isSaveDirtyMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__isSaveDirtyMap_Key_KeyProp = { "_isSaveDirtyMap_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGHudEditorLayoutScreen_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__isSaveDirtyMap_ValueProp = { "_isSaveDirtyMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__currentWidgetToEdit_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__currentWidgetToEdit = { "_currentWidgetToEdit", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorLayoutWidget, _currentWidgetToEdit), Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__currentWidgetToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__currentWidgetToEdit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__onSaveOverlapSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__onSaveOverlapSound = { "_onSaveOverlapSound", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorLayoutWidget, _onSaveOverlapSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__onSaveOverlapSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__onSaveOverlapSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp_HudEditorScreen_MetaData[] = {
		{ "Category", "UMGHudEditorLayoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp_HudEditorScreen = { "HudEditorScreen", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorLayoutWidget, HudEditorScreen), Z_Construct_UClass_UUMGHudEditorScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp_HudEditorScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp_HudEditorScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__isSaveDirtyMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__isSaveDirtyMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__isSaveDirtyMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__currentWidgetToEdit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp__onSaveOverlapSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::NewProp_HudEditorScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGHudEditorLayoutWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::ClassParams = {
		&UUMGHudEditorLayoutWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGHudEditorLayoutWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGHudEditorLayoutWidget, 3275362794);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGHudEditorLayoutWidget>()
	{
		return UUMGHudEditorLayoutWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGHudEditorLayoutWidget(Z_Construct_UClass_UUMGHudEditorLayoutWidget, &UUMGHudEditorLayoutWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGHudEditorLayoutWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGHudEditorLayoutWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
