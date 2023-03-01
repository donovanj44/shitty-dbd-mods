// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HudScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHudScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHudScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UHudScreen::execOnCancelQuitGameButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelQuitGameButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreen::execOnLeaveButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeaveButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreen::execOnNextButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNextButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreen::execOnPerkClicked)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_perkID);
		P_GET_UBOOL(Z_Param_clickedOnPerkWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerkClicked(Z_Param_perkID,Z_Param_clickedOnPerkWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreen::execOnPreviousButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreviousButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreen::execOnQuitGameButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitGameButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreen::execOnSettingsClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreen::execOnSpectatePlayerClick)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpectatePlayerClick(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudScreen::execOnTutorialNotificationClosedByUserInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialNotificationClosedByUserInput();
		P_NATIVE_END;
	}
	void UHudScreen::StaticRegisterNativesUHudScreen()
	{
		UClass* Class = UHudScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelQuitGameButtonClick", &UHudScreen::execOnCancelQuitGameButtonClick },
			{ "OnLeaveButtonClick", &UHudScreen::execOnLeaveButtonClick },
			{ "OnNextButtonClick", &UHudScreen::execOnNextButtonClick },
			{ "OnPerkClicked", &UHudScreen::execOnPerkClicked },
			{ "OnPreviousButtonClick", &UHudScreen::execOnPreviousButtonClick },
			{ "OnQuitGameButtonClick", &UHudScreen::execOnQuitGameButtonClick },
			{ "OnSettingsClicked", &UHudScreen::execOnSettingsClicked },
			{ "OnSpectatePlayerClick", &UHudScreen::execOnSpectatePlayerClick },
			{ "OnTutorialNotificationClosedByUserInput", &UHudScreen::execOnTutorialNotificationClosedByUserInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudScreen_OnCancelQuitGameButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnCancelQuitGameButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreen_OnCancelQuitGameButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreen, nullptr, "OnCancelQuitGameButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnCancelQuitGameButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnCancelQuitGameButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreen_OnCancelQuitGameButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreen_OnCancelQuitGameButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreen_OnLeaveButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnLeaveButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreen_OnLeaveButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreen, nullptr, "OnLeaveButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnLeaveButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnLeaveButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreen_OnLeaveButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreen_OnLeaveButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreen_OnNextButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnNextButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreen_OnNextButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreen, nullptr, "OnNextButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnNextButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnNextButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreen_OnNextButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreen_OnNextButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics
	{
		struct HudScreen_eventOnPerkClicked_Parms
		{
			FName perkID;
			bool clickedOnPerkWidget;
		};
		static void NewProp_clickedOnPerkWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_clickedOnPerkWidget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_perkID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::NewProp_clickedOnPerkWidget_SetBit(void* Obj)
	{
		((HudScreen_eventOnPerkClicked_Parms*)Obj)->clickedOnPerkWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::NewProp_clickedOnPerkWidget = { "clickedOnPerkWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudScreen_eventOnPerkClicked_Parms), &Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::NewProp_clickedOnPerkWidget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::NewProp_perkID = { "perkID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudScreen_eventOnPerkClicked_Parms, perkID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::NewProp_clickedOnPerkWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::NewProp_perkID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreen, nullptr, "OnPerkClicked", nullptr, nullptr, sizeof(HudScreen_eventOnPerkClicked_Parms), Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreen_OnPerkClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreen_OnPerkClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreen_OnPreviousButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnPreviousButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreen_OnPreviousButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreen, nullptr, "OnPreviousButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnPreviousButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnPreviousButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreen_OnPreviousButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreen_OnPreviousButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreen_OnQuitGameButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnQuitGameButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreen_OnQuitGameButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreen, nullptr, "OnQuitGameButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnQuitGameButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnQuitGameButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreen_OnQuitGameButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreen_OnQuitGameButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreen_OnSettingsClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnSettingsClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreen_OnSettingsClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreen, nullptr, "OnSettingsClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnSettingsClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnSettingsClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreen_OnSettingsClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreen_OnSettingsClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics
	{
		struct HudScreen_eventOnSpectatePlayerClick_Parms
		{
			FString name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudScreen_eventOnSpectatePlayerClick_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreen, nullptr, "OnSpectatePlayerClick", nullptr, nullptr, sizeof(HudScreen_eventOnSpectatePlayerClick_Parms), Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudScreen_OnTutorialNotificationClosedByUserInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudScreen_OnTutorialNotificationClosedByUserInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudScreen_OnTutorialNotificationClosedByUserInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudScreen, nullptr, "OnTutorialNotificationClosedByUserInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudScreen_OnTutorialNotificationClosedByUserInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudScreen_OnTutorialNotificationClosedByUserInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudScreen_OnTutorialNotificationClosedByUserInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudScreen_OnTutorialNotificationClosedByUserInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudScreen_NoRegister()
	{
		return UHudScreen::StaticClass();
	}
	struct Z_Construct_UClass_UHudScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudScreen_OnCancelQuitGameButtonClick, "OnCancelQuitGameButtonClick" }, // 1607926648
		{ &Z_Construct_UFunction_UHudScreen_OnLeaveButtonClick, "OnLeaveButtonClick" }, // 843940217
		{ &Z_Construct_UFunction_UHudScreen_OnNextButtonClick, "OnNextButtonClick" }, // 849520907
		{ &Z_Construct_UFunction_UHudScreen_OnPerkClicked, "OnPerkClicked" }, // 2794420897
		{ &Z_Construct_UFunction_UHudScreen_OnPreviousButtonClick, "OnPreviousButtonClick" }, // 2410178692
		{ &Z_Construct_UFunction_UHudScreen_OnQuitGameButtonClick, "OnQuitGameButtonClick" }, // 3999464876
		{ &Z_Construct_UFunction_UHudScreen_OnSettingsClicked, "OnSettingsClicked" }, // 4109844470
		{ &Z_Construct_UFunction_UHudScreen_OnSpectatePlayerClick, "OnSpectatePlayerClick" }, // 2569937900
		{ &Z_Construct_UFunction_UHudScreen_OnTutorialNotificationClosedByUserInput, "OnTutorialNotificationClosedByUserInput" }, // 157462387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HudScreen.h" },
		{ "ModuleRelativePath", "Public/HudScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudScreen_Statics::ClassParams = {
		&UHudScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudScreen, 2699725497);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHudScreen>()
	{
		return UHudScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudScreen(Z_Construct_UClass_UHudScreen, &UHudScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHudScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
