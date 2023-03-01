// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SplashScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplashScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USplashScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USplashScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSlideData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDownloadProgression();
// End Cross Module References
	DEFINE_FUNCTION(USplashScreen::execHideCharacterSlideShow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideCharacterSlideShow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execHideDownloadProgression)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideDownloadProgression();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execHideLoadingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideLoadingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execHidePressKeyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePressKeyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execHideShadersPrecompilingProgression)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideShadersPrecompilingProgression();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execOnSaveGamePopupComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaveGamePopupComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execSetVersionText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_versionText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVersionText(Z_Param_versionText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execShowCharacterSlideShow)
	{
		P_GET_TARRAY_REF(FCharacterSlideData,Z_Param_Out_characterSlides);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCharacterSlideShow(Z_Param_Out_characterSlides);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execShowDownloadProgression)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDownloadProgression();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execShowLoadingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowLoadingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execShowPressKeyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPressKeyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execShowSaveGamePopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSaveGamePopup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execShowShadersPrecompilingProgression)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowShadersPrecompilingProgression();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execUpdateDownloadProgression)
	{
		P_GET_STRUCT_REF(FDownloadProgression,Z_Param_Out_downloadProgression);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDownloadProgression(Z_Param_Out_downloadProgression);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execUpdateLoadingProgression)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_loadingProgression);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLoadingProgression(Z_Param_loadingProgression);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplashScreen::execUpdateShadersPrecompilingProgression)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentageCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShadersPrecompilingProgression(Z_Param_percentageCompleted);
		P_NATIVE_END;
	}
	void USplashScreen::StaticRegisterNativesUSplashScreen()
	{
		UClass* Class = USplashScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideCharacterSlideShow", &USplashScreen::execHideCharacterSlideShow },
			{ "HideDownloadProgression", &USplashScreen::execHideDownloadProgression },
			{ "HideLoadingState", &USplashScreen::execHideLoadingState },
			{ "HidePressKeyState", &USplashScreen::execHidePressKeyState },
			{ "HideShadersPrecompilingProgression", &USplashScreen::execHideShadersPrecompilingProgression },
			{ "OnSaveGamePopupComplete", &USplashScreen::execOnSaveGamePopupComplete },
			{ "SetVersionText", &USplashScreen::execSetVersionText },
			{ "ShowCharacterSlideShow", &USplashScreen::execShowCharacterSlideShow },
			{ "ShowDownloadProgression", &USplashScreen::execShowDownloadProgression },
			{ "ShowLoadingState", &USplashScreen::execShowLoadingState },
			{ "ShowPressKeyState", &USplashScreen::execShowPressKeyState },
			{ "ShowSaveGamePopup", &USplashScreen::execShowSaveGamePopup },
			{ "ShowShadersPrecompilingProgression", &USplashScreen::execShowShadersPrecompilingProgression },
			{ "UpdateDownloadProgression", &USplashScreen::execUpdateDownloadProgression },
			{ "UpdateLoadingProgression", &USplashScreen::execUpdateLoadingProgression },
			{ "UpdateShadersPrecompilingProgression", &USplashScreen::execUpdateShadersPrecompilingProgression },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplashScreen_HideCharacterSlideShow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_HideCharacterSlideShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_HideCharacterSlideShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "HideCharacterSlideShow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_HideCharacterSlideShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_HideCharacterSlideShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_HideCharacterSlideShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_HideCharacterSlideShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_HideDownloadProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_HideDownloadProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_HideDownloadProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "HideDownloadProgression", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_HideDownloadProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_HideDownloadProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_HideDownloadProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_HideDownloadProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_HideLoadingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_HideLoadingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_HideLoadingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "HideLoadingState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_HideLoadingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_HideLoadingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_HideLoadingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_HideLoadingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_HidePressKeyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_HidePressKeyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_HidePressKeyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "HidePressKeyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_HidePressKeyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_HidePressKeyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_HidePressKeyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_HidePressKeyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_HideShadersPrecompilingProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_HideShadersPrecompilingProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_HideShadersPrecompilingProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "HideShadersPrecompilingProgression", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_HideShadersPrecompilingProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_HideShadersPrecompilingProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_HideShadersPrecompilingProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_HideShadersPrecompilingProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_OnSaveGamePopupComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_OnSaveGamePopupComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_OnSaveGamePopupComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "OnSaveGamePopupComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_OnSaveGamePopupComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_OnSaveGamePopupComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_OnSaveGamePopupComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_OnSaveGamePopupComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_SetVersionText_Statics
	{
		struct SplashScreen_eventSetVersionText_Parms
		{
			FString versionText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_versionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_versionText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::NewProp_versionText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::NewProp_versionText = { "versionText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplashScreen_eventSetVersionText_Parms, versionText), METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::NewProp_versionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::NewProp_versionText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::NewProp_versionText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "SetVersionText", nullptr, nullptr, sizeof(SplashScreen_eventSetVersionText_Parms), Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_SetVersionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_SetVersionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics
	{
		struct SplashScreen_eventShowCharacterSlideShow_Parms
		{
			TArray<FCharacterSlideData> characterSlides;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_characterSlides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterSlides_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::NewProp_characterSlides = { "characterSlides", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplashScreen_eventShowCharacterSlideShow_Parms, characterSlides), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::NewProp_characterSlides_Inner = { "characterSlides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterSlideData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::NewProp_characterSlides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::NewProp_characterSlides_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "ShowCharacterSlideShow", nullptr, nullptr, sizeof(SplashScreen_eventShowCharacterSlideShow_Parms), Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_ShowDownloadProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_ShowDownloadProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_ShowDownloadProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "ShowDownloadProgression", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_ShowDownloadProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_ShowDownloadProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_ShowDownloadProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_ShowDownloadProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_ShowLoadingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_ShowLoadingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_ShowLoadingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "ShowLoadingState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_ShowLoadingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_ShowLoadingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_ShowLoadingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_ShowLoadingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_ShowPressKeyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_ShowPressKeyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_ShowPressKeyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "ShowPressKeyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_ShowPressKeyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_ShowPressKeyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_ShowPressKeyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_ShowPressKeyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_ShowSaveGamePopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_ShowSaveGamePopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_ShowSaveGamePopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "ShowSaveGamePopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_ShowSaveGamePopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_ShowSaveGamePopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_ShowSaveGamePopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_ShowSaveGamePopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_ShowShadersPrecompilingProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_ShowShadersPrecompilingProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_ShowShadersPrecompilingProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "ShowShadersPrecompilingProgression", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_ShowShadersPrecompilingProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_ShowShadersPrecompilingProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_ShowShadersPrecompilingProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_ShowShadersPrecompilingProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics
	{
		struct SplashScreen_eventUpdateDownloadProgression_Parms
		{
			FDownloadProgression downloadProgression;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_downloadProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_downloadProgression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::NewProp_downloadProgression_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::NewProp_downloadProgression = { "downloadProgression", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplashScreen_eventUpdateDownloadProgression_Parms, downloadProgression), Z_Construct_UScriptStruct_FDownloadProgression, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::NewProp_downloadProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::NewProp_downloadProgression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::NewProp_downloadProgression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "UpdateDownloadProgression", nullptr, nullptr, sizeof(SplashScreen_eventUpdateDownloadProgression_Parms), Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics
	{
		struct SplashScreen_eventUpdateLoadingProgression_Parms
		{
			FString loadingProgression;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loadingProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_loadingProgression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::NewProp_loadingProgression_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::NewProp_loadingProgression = { "loadingProgression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplashScreen_eventUpdateLoadingProgression_Parms, loadingProgression), METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::NewProp_loadingProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::NewProp_loadingProgression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::NewProp_loadingProgression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "UpdateLoadingProgression", nullptr, nullptr, sizeof(SplashScreen_eventUpdateLoadingProgression_Parms), Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics
	{
		struct SplashScreen_eventUpdateShadersPrecompilingProgression_Parms
		{
			float percentageCompleted;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percentageCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentageCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::NewProp_percentageCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::NewProp_percentageCompleted = { "percentageCompleted", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplashScreen_eventUpdateShadersPrecompilingProgression_Parms, percentageCompleted), METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::NewProp_percentageCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::NewProp_percentageCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::NewProp_percentageCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreen, nullptr, "UpdateShadersPrecompilingProgression", nullptr, nullptr, sizeof(SplashScreen_eventUpdateShadersPrecompilingProgression_Parms), Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USplashScreen_NoRegister()
	{
		return USplashScreen::StaticClass();
	}
	struct Z_Construct_UClass_USplashScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplashScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USplashScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplashScreen_HideCharacterSlideShow, "HideCharacterSlideShow" }, // 2077581308
		{ &Z_Construct_UFunction_USplashScreen_HideDownloadProgression, "HideDownloadProgression" }, // 915939437
		{ &Z_Construct_UFunction_USplashScreen_HideLoadingState, "HideLoadingState" }, // 2858250149
		{ &Z_Construct_UFunction_USplashScreen_HidePressKeyState, "HidePressKeyState" }, // 3181706902
		{ &Z_Construct_UFunction_USplashScreen_HideShadersPrecompilingProgression, "HideShadersPrecompilingProgression" }, // 692903945
		{ &Z_Construct_UFunction_USplashScreen_OnSaveGamePopupComplete, "OnSaveGamePopupComplete" }, // 3786047203
		{ &Z_Construct_UFunction_USplashScreen_SetVersionText, "SetVersionText" }, // 2223600866
		{ &Z_Construct_UFunction_USplashScreen_ShowCharacterSlideShow, "ShowCharacterSlideShow" }, // 4230205426
		{ &Z_Construct_UFunction_USplashScreen_ShowDownloadProgression, "ShowDownloadProgression" }, // 2370229568
		{ &Z_Construct_UFunction_USplashScreen_ShowLoadingState, "ShowLoadingState" }, // 2765486320
		{ &Z_Construct_UFunction_USplashScreen_ShowPressKeyState, "ShowPressKeyState" }, // 2538603579
		{ &Z_Construct_UFunction_USplashScreen_ShowSaveGamePopup, "ShowSaveGamePopup" }, // 3734691310
		{ &Z_Construct_UFunction_USplashScreen_ShowShadersPrecompilingProgression, "ShowShadersPrecompilingProgression" }, // 4188377048
		{ &Z_Construct_UFunction_USplashScreen_UpdateDownloadProgression, "UpdateDownloadProgression" }, // 113923059
		{ &Z_Construct_UFunction_USplashScreen_UpdateLoadingProgression, "UpdateLoadingProgression" }, // 2291822060
		{ &Z_Construct_UFunction_USplashScreen_UpdateShadersPrecompilingProgression, "UpdateShadersPrecompilingProgression" }, // 318037145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplashScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplashScreen.h" },
		{ "ModuleRelativePath", "Public/SplashScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplashScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplashScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplashScreen_Statics::ClassParams = {
		&USplashScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USplashScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplashScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplashScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplashScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplashScreen, 2894663520);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USplashScreen>()
	{
		return USplashScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplashScreen(Z_Construct_UClass_USplashScreen, &USplashScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USplashScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplashScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
