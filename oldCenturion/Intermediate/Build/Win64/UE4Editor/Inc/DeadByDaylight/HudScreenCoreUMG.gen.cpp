// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HudScreenCoreUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudScreenCoreUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHudScreenCoreUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHudScreenCoreUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHudScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPowerBundleViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemBundleViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionProgressViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialsUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCoreHudRootWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHudScreenCoreUMG::execOnHideStartSequenceCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideStartSequenceCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreenCoreUMG::execOnHUDWidgetFadeOutCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHUDWidgetFadeOutCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreenCoreUMG::execOnNotifTutoConfirmButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifTutoConfirmButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreenCoreUMG::execOnSpectateLeaveButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpectateLeaveButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreenCoreUMG::execOnSpectateLeftArrowClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpectateLeftArrowClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreenCoreUMG::execOnSpectateRightArrowClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpectateRightArrowClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreenCoreUMG::execOnTutorialHudFadeInTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialHudFadeInTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreenCoreUMG::execOnTutorialHudFadeOutTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialHudFadeOutTriggered();
		P_NATIVE_END;
	}
	void UHudScreenCoreUMG::StaticRegisterNativesUHudScreenCoreUMG()
	{
		UClass* Class = UHudScreenCoreUMG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHideStartSequenceCompleted", &UHudScreenCoreUMG::execOnHideStartSequenceCompleted },
			{ "OnHUDWidgetFadeOutCompleted", &UHudScreenCoreUMG::execOnHUDWidgetFadeOutCompleted },
			{ "OnNotifTutoConfirmButtonClicked", &UHudScreenCoreUMG::execOnNotifTutoConfirmButtonClicked },
			{ "OnSpectateLeaveButtonClicked", &UHudScreenCoreUMG::execOnSpectateLeaveButtonClicked },
			{ "OnSpectateLeftArrowClicked", &UHudScreenCoreUMG::execOnSpectateLeftArrowClicked },
			{ "OnSpectateRightArrowClicked", &UHudScreenCoreUMG::execOnSpectateRightArrowClicked },
			{ "OnTutorialHudFadeInTriggered", &UHudScreenCoreUMG::execOnTutorialHudFadeInTriggered },
			{ "OnTutorialHudFadeOutTriggered", &UHudScreenCoreUMG::execOnTutorialHudFadeOutTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudScreenCoreUMG_OnHideStartSequenceCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreenCoreUMG_OnHideStartSequenceCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreenCoreUMG_OnHideStartSequenceCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreenCoreUMG, nullptr, "OnHideStartSequenceCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreenCoreUMG_OnHideStartSequenceCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreenCoreUMG_OnHideStartSequenceCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreenCoreUMG_OnHideStartSequenceCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreenCoreUMG_OnHideStartSequenceCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreenCoreUMG_OnHUDWidgetFadeOutCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreenCoreUMG_OnHUDWidgetFadeOutCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreenCoreUMG_OnHUDWidgetFadeOutCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreenCoreUMG, nullptr, "OnHUDWidgetFadeOutCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreenCoreUMG_OnHUDWidgetFadeOutCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreenCoreUMG_OnHUDWidgetFadeOutCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreenCoreUMG_OnHUDWidgetFadeOutCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreenCoreUMG_OnHUDWidgetFadeOutCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreenCoreUMG_OnNotifTutoConfirmButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreenCoreUMG_OnNotifTutoConfirmButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreenCoreUMG_OnNotifTutoConfirmButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreenCoreUMG, nullptr, "OnNotifTutoConfirmButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreenCoreUMG_OnNotifTutoConfirmButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreenCoreUMG_OnNotifTutoConfirmButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreenCoreUMG_OnNotifTutoConfirmButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreenCoreUMG_OnNotifTutoConfirmButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeaveButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeaveButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeaveButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreenCoreUMG, nullptr, "OnSpectateLeaveButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeaveButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeaveButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeaveButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeaveButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeftArrowClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeftArrowClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeftArrowClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreenCoreUMG, nullptr, "OnSpectateLeftArrowClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeftArrowClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeftArrowClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeftArrowClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeftArrowClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateRightArrowClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateRightArrowClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateRightArrowClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreenCoreUMG, nullptr, "OnSpectateRightArrowClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateRightArrowClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateRightArrowClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateRightArrowClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateRightArrowClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeInTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeInTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeInTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreenCoreUMG, nullptr, "OnTutorialHudFadeInTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeInTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeInTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeInTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeInTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeOutTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeOutTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeOutTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreenCoreUMG, nullptr, "OnTutorialHudFadeOutTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeOutTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeOutTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeOutTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeOutTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudScreenCoreUMG_NoRegister()
	{
		return UHudScreenCoreUMG::StaticClass();
	}
	struct Z_Construct_UClass_UHudScreenCoreUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerStatusViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playerStatusViewData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__playerStatusViewData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerBundleViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerBundleViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemBundleViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__itemBundleViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionProgressViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionProgressViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerStatusInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playerStatusInterfaces;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__playerStatusInterfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutorialsUtilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tutorialsUtilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudScreenCoreUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudScreenCoreUMG_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudScreenCoreUMG_OnHideStartSequenceCompleted, "OnHideStartSequenceCompleted" }, // 3220992363
		{ &Z_Construct_UFunction_UHudScreenCoreUMG_OnHUDWidgetFadeOutCompleted, "OnHUDWidgetFadeOutCompleted" }, // 1635549353
		{ &Z_Construct_UFunction_UHudScreenCoreUMG_OnNotifTutoConfirmButtonClicked, "OnNotifTutoConfirmButtonClicked" }, // 3571326991
		{ &Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeaveButtonClicked, "OnSpectateLeaveButtonClicked" }, // 4125148743
		{ &Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateLeftArrowClicked, "OnSpectateLeftArrowClicked" }, // 2199764812
		{ &Z_Construct_UFunction_UHudScreenCoreUMG_OnSpectateRightArrowClicked, "OnSpectateRightArrowClicked" }, // 2780933462
		{ &Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeInTriggered, "OnTutorialHudFadeInTriggered" }, // 2045494843
		{ &Z_Construct_UFunction_UHudScreenCoreUMG_OnTutorialHudFadeOutTriggered, "OnTutorialHudFadeOutTriggered" }, // 1496528834
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenCoreUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HudScreenCoreUMG.h" },
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusViewData_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusViewData = { "_playerStatusViewData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenCoreUMG, _playerStatusViewData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusViewData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusViewData_Inner = { "_playerStatusViewData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerStatusViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__powerBundleViewData_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__powerBundleViewData = { "_powerBundleViewData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenCoreUMG, _powerBundleViewData), Z_Construct_UScriptStruct_FPowerBundleViewData, METADATA_PARAMS(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__powerBundleViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__powerBundleViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__itemBundleViewData_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__itemBundleViewData = { "_itemBundleViewData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenCoreUMG, _itemBundleViewData), Z_Construct_UScriptStruct_FItemBundleViewData, METADATA_PARAMS(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__itemBundleViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__itemBundleViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__interactionProgressViewData_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__interactionProgressViewData = { "_interactionProgressViewData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenCoreUMG, _interactionProgressViewData), Z_Construct_UScriptStruct_FInteractionProgressViewData, METADATA_PARAMS(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__interactionProgressViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__interactionProgressViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusInterfaces = { "_playerStatusInterfaces", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenCoreUMG, _playerStatusInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusInterfaces_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusInterfaces_Inner = { "_playerStatusInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__tutorialsUtilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__tutorialsUtilities = { "_tutorialsUtilities", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenCoreUMG, _tutorialsUtilities), Z_Construct_UClass_ATutorialsUtilities_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__tutorialsUtilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__tutorialsUtilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__rootWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenCoreUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__rootWidget = { "_rootWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenCoreUMG, _rootWidget), Z_Construct_UClass_UCoreHudRootWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__rootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__rootWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudScreenCoreUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusViewData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__powerBundleViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__itemBundleViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__interactionProgressViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__playerStatusInterfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__tutorialsUtilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenCoreUMG_Statics::NewProp__rootWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudScreenCoreUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudScreenCoreUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudScreenCoreUMG_Statics::ClassParams = {
		&UHudScreenCoreUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHudScreenCoreUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenCoreUMG_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudScreenCoreUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenCoreUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudScreenCoreUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudScreenCoreUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudScreenCoreUMG, 1112151185);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHudScreenCoreUMG>()
	{
		return UHudScreenCoreUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudScreenCoreUMG(Z_Construct_UClass_UHudScreenCoreUMG, &UHudScreenCoreUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHudScreenCoreUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudScreenCoreUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
