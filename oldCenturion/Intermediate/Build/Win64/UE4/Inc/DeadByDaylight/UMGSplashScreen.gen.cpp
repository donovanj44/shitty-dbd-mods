// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSplashScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSplashScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnScreenTouched__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSplashScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSplashScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterSlideShowWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDownloadProgressionWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnScreenTouched__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnScreenTouched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnScreenTouched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGSplashScreenOnScreenTouched__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnScreenTouched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnScreenTouched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnScreenTouched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnScreenTouched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMGSplashScreen::execOnSaveGamePopupComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaveGamePopupComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSplashScreen::execOnTapButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTapButtonClicked();
		P_NATIVE_END;
	}
	void UUMGSplashScreen::StaticRegisterNativesUUMGSplashScreen()
	{
		UClass* Class = UUMGSplashScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSaveGamePopupComplete", &UUMGSplashScreen::execOnSaveGamePopupComplete },
			{ "OnTapButtonClicked", &UUMGSplashScreen::execOnTapButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSplashScreen_OnSaveGamePopupComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSplashScreen_OnSaveGamePopupComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSplashScreen_OnSaveGamePopupComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSplashScreen, nullptr, "OnSaveGamePopupComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSplashScreen_OnSaveGamePopupComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSplashScreen_OnSaveGamePopupComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSplashScreen_OnSaveGamePopupComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSplashScreen_OnSaveGamePopupComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSplashScreen_OnTapButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSplashScreen_OnTapButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSplashScreen_OnTapButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSplashScreen, nullptr, "OnTapButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSplashScreen_OnTapButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSplashScreen_OnTapButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSplashScreen_OnTapButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSplashScreen_OnTapButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSplashScreen_NoRegister()
	{
		return UUMGSplashScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSplashScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSlideShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterSlideShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownloadProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TapButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TapButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavePopup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SavePopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScreenTouched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScreenTouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSaveGamePopupCompleteEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveGamePopupCompleteEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSplashScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSplashScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSplashScreen_OnSaveGamePopupComplete, "OnSaveGamePopupComplete" }, // 2670140373
		{ &Z_Construct_UFunction_UUMGSplashScreen_OnTapButtonClicked, "OnTapButtonClicked" }, // 3908797736
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSplashScreen.h" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_CharacterSlideShow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_CharacterSlideShow = { "CharacterSlideShow", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, CharacterSlideShow), Z_Construct_UClass_UUMGCharacterSlideShowWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_CharacterSlideShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_CharacterSlideShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_DownloadProgression_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_DownloadProgression = { "DownloadProgression", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, DownloadProgression), Z_Construct_UClass_UUMGDownloadProgressionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_DownloadProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_DownloadProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameDescription_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameDescription = { "SaveGameDescription", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, SaveGameDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameTitle_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameTitle = { "SaveGameTitle", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, SaveGameTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_TapButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_TapButton = { "TapButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, TapButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_TapButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_TapButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_PressKey_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_PressKey = { "PressKey", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, PressKey), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_PressKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_PressKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_LoadingState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_LoadingState = { "LoadingState", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, LoadingState), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_LoadingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_LoadingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_GameVersion_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, GameVersion), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_GameVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_GameVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SavePopup_MetaData[] = {
		{ "Category", "UMGSplashScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SavePopup = { "SavePopup", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, SavePopup), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SavePopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SavePopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnScreenTouched_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnScreenTouched = { "OnScreenTouched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, OnScreenTouched), Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnScreenTouched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnScreenTouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnScreenTouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnSaveGamePopupCompleteEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGSplashScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnSaveGamePopupCompleteEvent = { "OnSaveGamePopupCompleteEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSplashScreen, OnSaveGamePopupCompleteEvent), Z_Construct_UDelegateFunction_DeadByDaylight_UMGSplashScreenOnSaveGamePopupCompleteEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnSaveGamePopupCompleteEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnSaveGamePopupCompleteEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_CharacterSlideShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_DownloadProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SaveGameTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_TapButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_PressKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_LoadingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_GameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_SavePopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnScreenTouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSplashScreen_Statics::NewProp_OnSaveGamePopupCompleteEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSplashScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSplashScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSplashScreen_Statics::ClassParams = {
		&UUMGSplashScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSplashScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSplashScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSplashScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSplashScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSplashScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSplashScreen, 597136870);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSplashScreen>()
	{
		return UUMGSplashScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSplashScreen(Z_Construct_UClass_UUMGSplashScreen, &UUMGSplashScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSplashScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSplashScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
