// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CoreHudRootWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudRootWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCoreHudRootWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCoreHudRootWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCoreBaseViewInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UCoreHudRootWidget_FadeInWidgets = FName(TEXT("FadeInWidgets"));
	void UCoreHudRootWidget::FadeInWidgets()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudRootWidget_FadeInWidgets),NULL);
	}
	static FName NAME_UCoreHudRootWidget_FadeOutWidgets = FName(TEXT("FadeOutWidgets"));
	void UCoreHudRootWidget::FadeOutWidgets()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudRootWidget_FadeOutWidgets),NULL);
	}
	static FName NAME_UCoreHudRootWidget_SetSpectateVisibility = FName(TEXT("SetSpectateVisibility"));
	void UCoreHudRootWidget::SetSpectateVisibility(bool visible)
	{
		CoreHudRootWidget_eventSetSpectateVisibility_Parms Parms;
		Parms.visible=visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudRootWidget_SetSpectateVisibility),&Parms);
	}
	static FName NAME_UCoreHudRootWidget_SetWidgetsVisibility = FName(TEXT("SetWidgetsVisibility"));
	void UCoreHudRootWidget::SetWidgetsVisibility(bool visible)
	{
		CoreHudRootWidget_eventSetWidgetsVisibility_Parms Parms;
		Parms.visible=visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudRootWidget_SetWidgetsVisibility),&Parms);
	}
	void UCoreHudRootWidget::StaticRegisterNativesUCoreHudRootWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreHudRootWidget_FadeInWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudRootWidget_FadeInWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudRootWidget_FadeInWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudRootWidget, nullptr, "FadeInWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudRootWidget_FadeInWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudRootWidget_FadeInWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudRootWidget_FadeInWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudRootWidget_FadeInWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudRootWidget_FadeOutWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudRootWidget_FadeOutWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudRootWidget_FadeOutWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudRootWidget, nullptr, "FadeOutWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudRootWidget_FadeOutWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudRootWidget_FadeOutWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudRootWidget_FadeOutWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudRootWidget_FadeOutWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((CoreHudRootWidget_eventSetSpectateVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreHudRootWidget_eventSetSpectateVisibility_Parms), &Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudRootWidget, nullptr, "SetSpectateVisibility", nullptr, nullptr, sizeof(CoreHudRootWidget_eventSetSpectateVisibility_Parms), Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((CoreHudRootWidget_eventSetWidgetsVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreHudRootWidget_eventSetWidgetsVisibility_Parms), &Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudRootWidget, nullptr, "SetWidgetsVisibility", nullptr, nullptr, sizeof(CoreHudRootWidget_eventSetWidgetsVisibility_Parms), Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreHudRootWidget_NoRegister()
	{
		return UCoreHudRootWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudRootWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetsFadeOutCompletedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HUDWidgetsFadeOutCompletedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__coreBaseViewInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__coreBaseViewInterfaces;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__coreBaseViewInterfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialPopupWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TutorialPopupWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialObjectivesWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TutorialObjectivesWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialMysteryNoteWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TutorialMysteryNoteWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestBuildFlagWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TestBuildFlagWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StatusEffectWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSequenceWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartSequenceWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateBarWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpectateBarWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenIndicatorWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ScreenIndicatorWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatusesWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerStatusesWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingStatusWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PingStatusWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksContainerWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PerksContainerWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingInteractionWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OfferingInteractionWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchResultWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MatchResultWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaningArrowsWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LeaningArrowsWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInteractionWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemInteractionWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionPromptsContainerWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InteractionPromptsContainerWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionProgressWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InteractionProgressWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudAlertWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HudAlertWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalEffectsWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExternalEffectsWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedPowerWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquippedPowerWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquippedItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndGameCollapseBarWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EndGameCollapseBarWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Test4kDpiCurveWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Test4kDpiCurveWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Test4kDpiCurveClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Test4kDpiCurveClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Test4kDpiScalingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Test4kDpiScalingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnfocusedOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnfocusedOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleHud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScaleHud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectateContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OuterContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudRootWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreHudRootWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreHudRootWidget_FadeInWidgets, "FadeInWidgets" }, // 3834325584
		{ &Z_Construct_UFunction_UCoreHudRootWidget_FadeOutWidgets, "FadeOutWidgets" }, // 2514681511
		{ &Z_Construct_UFunction_UCoreHudRootWidget_SetSpectateVisibility, "SetSpectateVisibility" }, // 3099612922
		{ &Z_Construct_UFunction_UCoreHudRootWidget_SetWidgetsVisibility, "SetWidgetsVisibility" }, // 1343946702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreHudRootWidget.h" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HUDWidgetsFadeOutCompletedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HUDWidgetsFadeOutCompletedDelegate = { "HUDWidgetsFadeOutCompletedDelegate", nullptr, (EPropertyFlags)0x0040100000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, HUDWidgetsFadeOutCompletedDelegate), Z_Construct_UDelegateFunction_DeadByDaylight_CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HUDWidgetsFadeOutCompletedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HUDWidgetsFadeOutCompletedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp__coreBaseViewInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp__coreBaseViewInterfaces = { "_coreBaseViewInterfaces", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, _coreBaseViewInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp__coreBaseViewInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp__coreBaseViewInterfaces_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp__coreBaseViewInterfaces_Inner = { "_coreBaseViewInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreBaseViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialPopupWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialPopupWidgetClass = { "TutorialPopupWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, TutorialPopupWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialPopupWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialPopupWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialObjectivesWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialObjectivesWidgetClass = { "TutorialObjectivesWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, TutorialObjectivesWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialObjectivesWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialObjectivesWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialMysteryNoteWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialMysteryNoteWidgetClass = { "TutorialMysteryNoteWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, TutorialMysteryNoteWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialMysteryNoteWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialMysteryNoteWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TestBuildFlagWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TestBuildFlagWidgetClass = { "TestBuildFlagWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, TestBuildFlagWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TestBuildFlagWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TestBuildFlagWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StatusEffectWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StatusEffectWidgetClass = { "StatusEffectWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, StatusEffectWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StatusEffectWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StatusEffectWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StartSequenceWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StartSequenceWidgetClass = { "StartSequenceWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, StartSequenceWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StartSequenceWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StartSequenceWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateBarWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateBarWidgetClass = { "SpectateBarWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, SpectateBarWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateBarWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateBarWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScreenIndicatorWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScreenIndicatorWidgetClass = { "ScreenIndicatorWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, ScreenIndicatorWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScreenIndicatorWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScreenIndicatorWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PlayerStatusesWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PlayerStatusesWidgetClass = { "PlayerStatusesWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, PlayerStatusesWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PlayerStatusesWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PlayerStatusesWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PingStatusWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PingStatusWidgetClass = { "PingStatusWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, PingStatusWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PingStatusWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PingStatusWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PerksContainerWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PerksContainerWidgetClass = { "PerksContainerWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, PerksContainerWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PerksContainerWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PerksContainerWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OfferingInteractionWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OfferingInteractionWidgetClass = { "OfferingInteractionWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, OfferingInteractionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OfferingInteractionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OfferingInteractionWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_MatchResultWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_MatchResultWidgetClass = { "MatchResultWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, MatchResultWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_MatchResultWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_MatchResultWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_LeaningArrowsWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_LeaningArrowsWidgetClass = { "LeaningArrowsWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, LeaningArrowsWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_LeaningArrowsWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_LeaningArrowsWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ItemInteractionWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ItemInteractionWidgetClass = { "ItemInteractionWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, ItemInteractionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ItemInteractionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ItemInteractionWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionPromptsContainerWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionPromptsContainerWidgetClass = { "InteractionPromptsContainerWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, InteractionPromptsContainerWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionPromptsContainerWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionPromptsContainerWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionProgressWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionProgressWidgetClass = { "InteractionProgressWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, InteractionProgressWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionProgressWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionProgressWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HudAlertWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HudAlertWidgetClass = { "HudAlertWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, HudAlertWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HudAlertWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HudAlertWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ExternalEffectsWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ExternalEffectsWidgetClass = { "ExternalEffectsWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, ExternalEffectsWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ExternalEffectsWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ExternalEffectsWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedPowerWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedPowerWidgetClass = { "EquippedPowerWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, EquippedPowerWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedPowerWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedPowerWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedItemWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedItemWidgetClass = { "EquippedItemWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, EquippedItemWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EndGameCollapseBarWidgetClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EndGameCollapseBarWidgetClass = { "EndGameCollapseBarWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, EndGameCollapseBarWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EndGameCollapseBarWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EndGameCollapseBarWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveWidget = { "Test4kDpiCurveWidget", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, Test4kDpiCurveWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveClass_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveClass = { "Test4kDpiCurveClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, Test4kDpiCurveClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiScalingCurve_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiScalingCurve = { "Test4kDpiScalingCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, Test4kDpiScalingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiScalingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiScalingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_UnfocusedOpacity_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_UnfocusedOpacity = { "UnfocusedOpacity", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, UnfocusedOpacity), METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_UnfocusedOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_UnfocusedOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScaleHud_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScaleHud = { "ScaleHud", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, ScaleHud), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScaleHud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScaleHud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateContainer_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateContainer = { "SpectateContainer", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, SpectateContainer), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OuterContainer_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OuterContainer = { "OuterContainer", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, OuterContainer), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OuterContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OuterContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_WidgetContainer_MetaData[] = {
		{ "Category", "CoreHudRootWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudRootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_WidgetContainer = { "WidgetContainer", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudRootWidget, WidgetContainer), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_WidgetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_WidgetContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreHudRootWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HUDWidgetsFadeOutCompletedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp__coreBaseViewInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp__coreBaseViewInterfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialPopupWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialObjectivesWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TutorialMysteryNoteWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_TestBuildFlagWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StatusEffectWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_StartSequenceWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateBarWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScreenIndicatorWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PlayerStatusesWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PingStatusWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_PerksContainerWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OfferingInteractionWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_MatchResultWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_LeaningArrowsWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ItemInteractionWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionPromptsContainerWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_InteractionProgressWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_HudAlertWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ExternalEffectsWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedPowerWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EquippedItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_EndGameCollapseBarWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiCurveClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_Test4kDpiScalingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_UnfocusedOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_ScaleHud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_SpectateContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_OuterContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudRootWidget_Statics::NewProp_WidgetContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudRootWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudRootWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudRootWidget_Statics::ClassParams = {
		&UCoreHudRootWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreHudRootWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudRootWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudRootWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudRootWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudRootWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudRootWidget, 3361983524);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCoreHudRootWidget>()
	{
		return UCoreHudRootWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudRootWidget(Z_Construct_UClass_UCoreHudRootWidget, &UCoreHudRootWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCoreHudRootWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudRootWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
