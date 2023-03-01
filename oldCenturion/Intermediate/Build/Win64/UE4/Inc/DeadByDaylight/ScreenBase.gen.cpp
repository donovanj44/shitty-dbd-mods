// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScreenBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenBase() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenController_NoRegister();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScreenBase::execBroadcastOnHighlightedElementClickedEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_onBoardingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOnHighlightedElementClickedEvent(Z_Param_onBoardingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenBase::execOnAnimationUpdate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIsAnimationDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationUpdate(Z_Param_NewIsAnimationDone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenBase::execOnAnyKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_code);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnyKey(Z_Param_code);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenBase::execOnBack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenBase::execOnEscape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEscape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenBase::execOnHideVirtualKeyboardRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideVirtualKeyboardRequested();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenBase::execOnNavKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_navKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavKey(Z_Param_navKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenBase::execOnStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenBase::execOnTextInputMouseClicked)
	{
		P_GET_UBOOL(Z_Param_isPassword);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextInputMouseClicked(Z_Param_isPassword);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenBase::execSetFadesOut)
	{
		P_GET_UBOOL(Z_Param_fadesOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFadesOut(Z_Param_fadesOut);
		P_NATIVE_END;
	}
	void UScreenBase::StaticRegisterNativesUScreenBase()
	{
		UClass* Class = UScreenBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastOnHighlightedElementClickedEvent", &UScreenBase::execBroadcastOnHighlightedElementClickedEvent },
			{ "OnAnimationUpdate", &UScreenBase::execOnAnimationUpdate },
			{ "OnAnyKey", &UScreenBase::execOnAnyKey },
			{ "OnBack", &UScreenBase::execOnBack },
			{ "OnEscape", &UScreenBase::execOnEscape },
			{ "OnHideVirtualKeyboardRequested", &UScreenBase::execOnHideVirtualKeyboardRequested },
			{ "OnNavKey", &UScreenBase::execOnNavKey },
			{ "OnStart", &UScreenBase::execOnStart },
			{ "OnTextInputMouseClicked", &UScreenBase::execOnTextInputMouseClicked },
			{ "SetFadesOut", &UScreenBase::execSetFadesOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics
	{
		struct ScreenBase_eventBroadcastOnHighlightedElementClickedEvent_Parms
		{
			FName onBoardingID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onBoardingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_onBoardingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::NewProp_onBoardingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::NewProp_onBoardingID = { "onBoardingID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenBase_eventBroadcastOnHighlightedElementClickedEvent_Parms, onBoardingID), METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::NewProp_onBoardingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::NewProp_onBoardingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::NewProp_onBoardingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "BroadcastOnHighlightedElementClickedEvent", nullptr, nullptr, sizeof(ScreenBase_eventBroadcastOnHighlightedElementClickedEvent_Parms), Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics
	{
		struct ScreenBase_eventOnAnimationUpdate_Parms
		{
			int32 NewIsAnimationDone;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewIsAnimationDone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::NewProp_NewIsAnimationDone = { "NewIsAnimationDone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenBase_eventOnAnimationUpdate_Parms, NewIsAnimationDone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::NewProp_NewIsAnimationDone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "OnAnimationUpdate", nullptr, nullptr, sizeof(ScreenBase_eventOnAnimationUpdate_Parms), Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_OnAnimationUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_OnAnimationUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics
	{
		struct ScreenBase_eventOnAnyKey_Parms
		{
			float code;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenBase_eventOnAnyKey_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::NewProp_code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "OnAnyKey", nullptr, nullptr, sizeof(ScreenBase_eventOnAnyKey_Parms), Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_OnAnyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_OnAnyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenBase_OnBack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_OnBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_OnBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "OnBack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_OnBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_OnBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_OnBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenBase_OnEscape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_OnEscape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_OnEscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "OnEscape", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_OnEscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnEscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_OnEscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_OnEscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenBase_OnHideVirtualKeyboardRequested_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_OnHideVirtualKeyboardRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_OnHideVirtualKeyboardRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "OnHideVirtualKeyboardRequested", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_OnHideVirtualKeyboardRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnHideVirtualKeyboardRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_OnHideVirtualKeyboardRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_OnHideVirtualKeyboardRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenBase_OnNavKey_Statics
	{
		struct ScreenBase_eventOnNavKey_Parms
		{
			FString navKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_navKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_navKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::NewProp_navKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::NewProp_navKey = { "navKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenBase_eventOnNavKey_Parms, navKey), METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::NewProp_navKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::NewProp_navKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::NewProp_navKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "OnNavKey", nullptr, nullptr, sizeof(ScreenBase_eventOnNavKey_Parms), Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_OnNavKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_OnNavKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenBase_OnStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_OnStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_OnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "OnStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_OnStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_OnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_OnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics
	{
		struct ScreenBase_eventOnTextInputMouseClicked_Parms
		{
			bool isPassword;
		};
		static void NewProp_isPassword_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPassword;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::NewProp_isPassword_SetBit(void* Obj)
	{
		((ScreenBase_eventOnTextInputMouseClicked_Parms*)Obj)->isPassword = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::NewProp_isPassword = { "isPassword", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreenBase_eventOnTextInputMouseClicked_Parms), &Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::NewProp_isPassword_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::NewProp_isPassword,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "OnTextInputMouseClicked", nullptr, nullptr, sizeof(ScreenBase_eventOnTextInputMouseClicked_Parms), Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics
	{
		struct ScreenBase_eventSetFadesOut_Parms
		{
			bool fadesOut;
		};
		static void NewProp_fadesOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fadesOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::NewProp_fadesOut_SetBit(void* Obj)
	{
		((ScreenBase_eventSetFadesOut_Parms*)Obj)->fadesOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::NewProp_fadesOut = { "fadesOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreenBase_eventSetFadesOut_Parms), &Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::NewProp_fadesOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::NewProp_fadesOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenBase, nullptr, "SetFadesOut", nullptr, nullptr, sizeof(ScreenBase_eventSetFadesOut_Parms), Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenBase_SetFadesOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenBase_SetFadesOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreenBase_NoRegister()
	{
		return UScreenBase::StaticClass();
	}
	struct Z_Construct_UClass_UScreenBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screenController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__screenController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAnimationDone_MetaData[];
#endif
		static void NewProp_IsAnimationDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAnimationDone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreenBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenBase_BroadcastOnHighlightedElementClickedEvent, "BroadcastOnHighlightedElementClickedEvent" }, // 781123844
		{ &Z_Construct_UFunction_UScreenBase_OnAnimationUpdate, "OnAnimationUpdate" }, // 1235027804
		{ &Z_Construct_UFunction_UScreenBase_OnAnyKey, "OnAnyKey" }, // 1937299757
		{ &Z_Construct_UFunction_UScreenBase_OnBack, "OnBack" }, // 3648493768
		{ &Z_Construct_UFunction_UScreenBase_OnEscape, "OnEscape" }, // 3516194084
		{ &Z_Construct_UFunction_UScreenBase_OnHideVirtualKeyboardRequested, "OnHideVirtualKeyboardRequested" }, // 1756473744
		{ &Z_Construct_UFunction_UScreenBase_OnNavKey, "OnNavKey" }, // 877984918
		{ &Z_Construct_UFunction_UScreenBase_OnStart, "OnStart" }, // 3474647577
		{ &Z_Construct_UFunction_UScreenBase_OnTextInputMouseClicked, "OnTextInputMouseClicked" }, // 436339150
		{ &Z_Construct_UFunction_UScreenBase_SetFadesOut, "SetFadesOut" }, // 2823181720
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScreenBase.h" },
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenBase_Statics::NewProp__screenController_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenBase_Statics::NewProp__screenController = { "_screenController", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenBase, _screenController), Z_Construct_UClass_UScreenController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreenBase_Statics::NewProp__screenController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenBase_Statics::NewProp__screenController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenBase_Statics::NewProp_ScreenObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenBase_Statics::NewProp_ScreenObject = { "ScreenObject", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenBase, ScreenObject), Z_Construct_UClass_UGFxObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreenBase_Statics::NewProp_ScreenObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenBase_Statics::NewProp_ScreenObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenBase_Statics::NewProp_IsAnimationDone_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenBase.h" },
	};
#endif
	void Z_Construct_UClass_UScreenBase_Statics::NewProp_IsAnimationDone_SetBit(void* Obj)
	{
		((UScreenBase*)Obj)->IsAnimationDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenBase_Statics::NewProp_IsAnimationDone = { "IsAnimationDone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScreenBase), &Z_Construct_UClass_UScreenBase_Statics::NewProp_IsAnimationDone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScreenBase_Statics::NewProp_IsAnimationDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenBase_Statics::NewProp_IsAnimationDone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenBase_Statics::NewProp__screenController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenBase_Statics::NewProp_ScreenObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenBase_Statics::NewProp_IsAnimationDone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenBase_Statics::ClassParams = {
		&UScreenBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScreenBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenBase_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenBase, 724410409);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UScreenBase>()
	{
		return UScreenBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenBase(Z_Construct_UClass_UScreenBase, &UScreenBase::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UScreenBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
