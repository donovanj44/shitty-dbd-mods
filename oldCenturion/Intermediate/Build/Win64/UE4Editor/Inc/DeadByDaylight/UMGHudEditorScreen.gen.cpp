// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGHudEditorScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGHudEditorScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorVersionWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorLayoutScreen_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorLayoutWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGHudEditorScreen::execGetVersionSwapWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUMGHudEditorVersionWidget**)Z_Param__Result=P_THIS->GetVersionSwapWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorScreen::execQuit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Quit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorScreen::execRegisterEditorLayoutScreen)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_GET_OBJECT(UUMGHudEditorLayoutScreen,Z_Param_screen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterEditorLayoutScreen(EPlayerRole(Z_Param_role),Z_Param_screen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorScreen::execSetEditorDropErrorOverlapSound)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_onDropOverlapSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditorDropErrorOverlapSound(Z_Param_onDropOverlapSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorScreen::execSetWidgets)
	{
		P_GET_OBJECT(UUMGHudEditorLayoutWidget,Z_Param_hudEditorLayoutWidget);
		P_GET_OBJECT(UUMGHudEditorVersionWidget,Z_Param_versionSwapWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgets_Implementation(Z_Param_hudEditorLayoutWidget,Z_Param_versionSwapWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorScreen::execShowHudLayout)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowHudLayout(EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	static FName NAME_UUMGHudEditorScreen_SetWidgets = FName(TEXT("SetWidgets"));
	void UUMGHudEditorScreen::SetWidgets(UUMGHudEditorLayoutWidget* hudEditorLayoutWidget, UUMGHudEditorVersionWidget* versionSwapWidget)
	{
		UMGHudEditorScreen_eventSetWidgets_Parms Parms;
		Parms.hudEditorLayoutWidget=hudEditorLayoutWidget;
		Parms.versionSwapWidget=versionSwapWidget;
		ProcessEvent(FindFunctionChecked(NAME_UUMGHudEditorScreen_SetWidgets),&Parms);
	}
	void UUMGHudEditorScreen::StaticRegisterNativesUUMGHudEditorScreen()
	{
		UClass* Class = UUMGHudEditorScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVersionSwapWidget", &UUMGHudEditorScreen::execGetVersionSwapWidget },
			{ "Quit", &UUMGHudEditorScreen::execQuit },
			{ "RegisterEditorLayoutScreen", &UUMGHudEditorScreen::execRegisterEditorLayoutScreen },
			{ "SetEditorDropErrorOverlapSound", &UUMGHudEditorScreen::execSetEditorDropErrorOverlapSound },
			{ "SetWidgets", &UUMGHudEditorScreen::execSetWidgets },
			{ "ShowHudLayout", &UUMGHudEditorScreen::execShowHudLayout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics
	{
		struct UMGHudEditorScreen_eventGetVersionSwapWidget_Parms
		{
			UUMGHudEditorVersionWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorScreen_eventGetVersionSwapWidget_Parms, ReturnValue), Z_Construct_UClass_UUMGHudEditorVersionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorScreen, nullptr, "GetVersionSwapWidget", nullptr, nullptr, sizeof(UMGHudEditorScreen_eventGetVersionSwapWidget_Parms), Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorScreen_Quit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_Quit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorScreen_Quit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorScreen, nullptr, "Quit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_Quit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_Quit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorScreen_Quit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorScreen_Quit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics
	{
		struct UMGHudEditorScreen_eventRegisterEditorLayoutScreen_Parms
		{
			EPlayerRole role;
			UUMGHudEditorLayoutScreen* screen;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_screen;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::NewProp_screen_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::NewProp_screen = { "screen", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorScreen_eventRegisterEditorLayoutScreen_Parms, screen), Z_Construct_UClass_UUMGHudEditorLayoutScreen_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::NewProp_screen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::NewProp_screen_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorScreen_eventRegisterEditorLayoutScreen_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::NewProp_screen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::NewProp_role_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorScreen, nullptr, "RegisterEditorLayoutScreen", nullptr, nullptr, sizeof(UMGHudEditorScreen_eventRegisterEditorLayoutScreen_Parms), Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics
	{
		struct UMGHudEditorScreen_eventSetEditorDropErrorOverlapSound_Parms
		{
			UAkAudioEvent* onDropOverlapSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_onDropOverlapSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::NewProp_onDropOverlapSound = { "onDropOverlapSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorScreen_eventSetEditorDropErrorOverlapSound_Parms, onDropOverlapSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::NewProp_onDropOverlapSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorScreen, nullptr, "SetEditorDropErrorOverlapSound", nullptr, nullptr, sizeof(UMGHudEditorScreen_eventSetEditorDropErrorOverlapSound_Parms), Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_versionSwapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_versionSwapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudEditorLayoutWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hudEditorLayoutWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_versionSwapWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_versionSwapWidget = { "versionSwapWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorScreen_eventSetWidgets_Parms, versionSwapWidget), Z_Construct_UClass_UUMGHudEditorVersionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_versionSwapWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_versionSwapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_hudEditorLayoutWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_hudEditorLayoutWidget = { "hudEditorLayoutWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorScreen_eventSetWidgets_Parms, hudEditorLayoutWidget), Z_Construct_UClass_UUMGHudEditorLayoutWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_hudEditorLayoutWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_hudEditorLayoutWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_versionSwapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::NewProp_hudEditorLayoutWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorScreen, nullptr, "SetWidgets", nullptr, nullptr, sizeof(UMGHudEditorScreen_eventSetWidgets_Parms), Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics
	{
		struct UMGHudEditorScreen_eventShowHudLayout_Parms
		{
			EPlayerRole role;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHudEditorScreen_eventShowHudLayout_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::NewProp_role_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorScreen, nullptr, "ShowHudLayout", nullptr, nullptr, sizeof(UMGHudEditorScreen_eventShowHudLayout_Parms), Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGHudEditorScreen_NoRegister()
	{
		return UUMGHudEditorScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGHudEditorScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onDropOverlapSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onDropOverlapSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentLayoutScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentLayoutScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storedLayoutScreens_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__storedLayoutScreens;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__storedLayoutScreens_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__storedLayoutScreens_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__storedLayoutScreens_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__versionSwapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__versionSwapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hudEditorLayoutWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hudEditorLayoutWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGHudEditorScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGHudEditorScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGHudEditorScreen_GetVersionSwapWidget, "GetVersionSwapWidget" }, // 535905666
		{ &Z_Construct_UFunction_UUMGHudEditorScreen_Quit, "Quit" }, // 1132460158
		{ &Z_Construct_UFunction_UUMGHudEditorScreen_RegisterEditorLayoutScreen, "RegisterEditorLayoutScreen" }, // 559909588
		{ &Z_Construct_UFunction_UUMGHudEditorScreen_SetEditorDropErrorOverlapSound, "SetEditorDropErrorOverlapSound" }, // 1970832021
		{ &Z_Construct_UFunction_UUMGHudEditorScreen_SetWidgets, "SetWidgets" }, // 2817427681
		{ &Z_Construct_UFunction_UUMGHudEditorScreen_ShowHudLayout, "ShowHudLayout" }, // 1479106553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGHudEditorScreen.h" },
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__onDropOverlapSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__onDropOverlapSound = { "_onDropOverlapSound", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorScreen, _onDropOverlapSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__onDropOverlapSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__onDropOverlapSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__currentLayoutScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__currentLayoutScreen = { "_currentLayoutScreen", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorScreen, _currentLayoutScreen), Z_Construct_UClass_UUMGHudEditorLayoutScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__currentLayoutScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__currentLayoutScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens = { "_storedLayoutScreens", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorScreen, _storedLayoutScreens), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens_Key_KeyProp = { "_storedLayoutScreens_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens_ValueProp = { "_storedLayoutScreens", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUMGHudEditorLayoutScreen_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__versionSwapWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__versionSwapWidget = { "_versionSwapWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorScreen, _versionSwapWidget), Z_Construct_UClass_UUMGHudEditorVersionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__versionSwapWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__versionSwapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__hudEditorLayoutWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGHudEditorScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__hudEditorLayoutWidget = { "_hudEditorLayoutWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorScreen, _hudEditorLayoutWidget), Z_Construct_UClass_UUMGHudEditorLayoutWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__hudEditorLayoutWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__hudEditorLayoutWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGHudEditorScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__onDropOverlapSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__currentLayoutScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__storedLayoutScreens_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__versionSwapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorScreen_Statics::NewProp__hudEditorLayoutWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGHudEditorScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGHudEditorScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGHudEditorScreen_Statics::ClassParams = {
		&UUMGHudEditorScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGHudEditorScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGHudEditorScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGHudEditorScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGHudEditorScreen, 3945683001);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGHudEditorScreen>()
	{
		return UUMGHudEditorScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGHudEditorScreen(Z_Construct_UClass_UUMGHudEditorScreen, &UUMGHudEditorScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGHudEditorScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGHudEditorScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
