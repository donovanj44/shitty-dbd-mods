// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RootMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMovie() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URootMovie_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URootMovie();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxObject_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_UDBDInputManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUIController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenController_NoRegister();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxMoviePlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URootMovie::execOnAssert)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_type);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAssert(Z_Param_type,Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execOnFlashReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFlashReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execOnMovieClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execOnScreenEnter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_screenId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScreenEnter(Z_Param_screenId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execOnScreenLeave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_screenId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScreenLeave(Z_Param_screenId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execOnScreenReady)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_screenId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScreenReady(Z_Param_screenId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execOpenLinkInBrowser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_linkAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenLinkInBrowser(Z_Param_linkAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execPlaySound)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_soundId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySound(Z_Param_soundId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execRegisterScreenControl)
	{
		P_GET_OBJECT(UGFxObject,Z_Param_flashObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterScreenControl(Z_Param_flashObj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execRegisterUIControl)
	{
		P_GET_OBJECT(UGFxObject,Z_Param_flashObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterUIControl(Z_Param_flashObj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execRegisterView)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_screenId);
		P_GET_OBJECT(UGFxObject,Z_Param_screenObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterView(Z_Param_screenId,Z_Param_screenObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMovie::execSetCursorAsSticky)
	{
		P_GET_UBOOL(Z_Param_isSticky);
		P_GET_UBOOL(Z_Param_lockVertical);
		P_GET_UBOOL(Z_Param_lockHorizontal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_stickinessOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCursorAsSticky(Z_Param_isSticky,Z_Param_lockVertical,Z_Param_lockHorizontal,Z_Param_stickinessOverride);
		P_NATIVE_END;
	}
	void URootMovie::StaticRegisterNativesURootMovie()
	{
		UClass* Class = URootMovie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAssert", &URootMovie::execOnAssert },
			{ "OnFlashReady", &URootMovie::execOnFlashReady },
			{ "OnMovieClosed", &URootMovie::execOnMovieClosed },
			{ "OnScreenEnter", &URootMovie::execOnScreenEnter },
			{ "OnScreenLeave", &URootMovie::execOnScreenLeave },
			{ "OnScreenReady", &URootMovie::execOnScreenReady },
			{ "OpenLinkInBrowser", &URootMovie::execOpenLinkInBrowser },
			{ "PlaySound", &URootMovie::execPlaySound },
			{ "RegisterScreenControl", &URootMovie::execRegisterScreenControl },
			{ "RegisterUIControl", &URootMovie::execRegisterUIControl },
			{ "RegisterView", &URootMovie::execRegisterView },
			{ "SetCursorAsSticky", &URootMovie::execSetCursorAsSticky },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URootMovie_OnAssert_Statics
	{
		struct RootMovie_eventOnAssert_Parms
		{
			int32 type;
			FString message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnAssert_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URootMovie_OnAssert_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventOnAssert_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnAssert_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnAssert_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URootMovie_OnAssert_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventOnAssert_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_OnAssert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_OnAssert_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_OnAssert_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnAssert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_OnAssert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "OnAssert", nullptr, nullptr, sizeof(RootMovie_eventOnAssert_Parms), Z_Construct_UFunction_URootMovie_OnAssert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnAssert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnAssert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnAssert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_OnAssert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_OnAssert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_OnFlashReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnFlashReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_OnFlashReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "OnFlashReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnFlashReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnFlashReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_OnFlashReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_OnFlashReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_OnMovieClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnMovieClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_OnMovieClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "OnMovieClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnMovieClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnMovieClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_OnMovieClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_OnMovieClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics
	{
		struct RootMovie_eventOnScreenEnter_Parms
		{
			FString screenId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screenId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_screenId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::NewProp_screenId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::NewProp_screenId = { "screenId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventOnScreenEnter_Parms, screenId), METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::NewProp_screenId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::NewProp_screenId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::NewProp_screenId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "OnScreenEnter", nullptr, nullptr, sizeof(RootMovie_eventOnScreenEnter_Parms), Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_OnScreenEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_OnScreenEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics
	{
		struct RootMovie_eventOnScreenLeave_Parms
		{
			FString screenId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screenId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_screenId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::NewProp_screenId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::NewProp_screenId = { "screenId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventOnScreenLeave_Parms, screenId), METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::NewProp_screenId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::NewProp_screenId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::NewProp_screenId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "OnScreenLeave", nullptr, nullptr, sizeof(RootMovie_eventOnScreenLeave_Parms), Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_OnScreenLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_OnScreenLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_OnScreenReady_Statics
	{
		struct RootMovie_eventOnScreenReady_Parms
		{
			FString screenId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screenId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_screenId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::NewProp_screenId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::NewProp_screenId = { "screenId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventOnScreenReady_Parms, screenId), METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::NewProp_screenId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::NewProp_screenId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::NewProp_screenId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "OnScreenReady", nullptr, nullptr, sizeof(RootMovie_eventOnScreenReady_Parms), Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_OnScreenReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_OnScreenReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics
	{
		struct RootMovie_eventOpenLinkInBrowser_Parms
		{
			FString linkAddress;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_linkAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_linkAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::NewProp_linkAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::NewProp_linkAddress = { "linkAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventOpenLinkInBrowser_Parms, linkAddress), METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::NewProp_linkAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::NewProp_linkAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::NewProp_linkAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "OpenLinkInBrowser", nullptr, nullptr, sizeof(RootMovie_eventOpenLinkInBrowser_Parms), Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_OpenLinkInBrowser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_OpenLinkInBrowser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_PlaySound_Statics
	{
		struct RootMovie_eventPlaySound_Parms
		{
			FString soundId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_soundId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_soundId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_PlaySound_Statics::NewProp_soundId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URootMovie_PlaySound_Statics::NewProp_soundId = { "soundId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventPlaySound_Parms, soundId), METADATA_PARAMS(Z_Construct_UFunction_URootMovie_PlaySound_Statics::NewProp_soundId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_PlaySound_Statics::NewProp_soundId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_PlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_PlaySound_Statics::NewProp_soundId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_PlaySound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_PlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "PlaySound", nullptr, nullptr, sizeof(RootMovie_eventPlaySound_Parms), Z_Construct_UFunction_URootMovie_PlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_PlaySound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_PlaySound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_PlaySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_PlaySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_PlaySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics
	{
		struct RootMovie_eventRegisterScreenControl_Parms
		{
			UGFxObject* flashObj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_flashObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::NewProp_flashObj = { "flashObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventRegisterScreenControl_Parms, flashObj), Z_Construct_UClass_UGFxObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::NewProp_flashObj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "RegisterScreenControl", nullptr, nullptr, sizeof(RootMovie_eventRegisterScreenControl_Parms), Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_RegisterScreenControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_RegisterScreenControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics
	{
		struct RootMovie_eventRegisterUIControl_Parms
		{
			UGFxObject* flashObj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_flashObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::NewProp_flashObj = { "flashObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventRegisterUIControl_Parms, flashObj), Z_Construct_UClass_UGFxObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::NewProp_flashObj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "RegisterUIControl", nullptr, nullptr, sizeof(RootMovie_eventRegisterUIControl_Parms), Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_RegisterUIControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_RegisterUIControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_RegisterView_Statics
	{
		struct RootMovie_eventRegisterView_Parms
		{
			FString screenId;
			UGFxObject* screenObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_screenObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screenId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_screenId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMovie_RegisterView_Statics::NewProp_screenObject = { "screenObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventRegisterView_Parms, screenObject), Z_Construct_UClass_UGFxObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_RegisterView_Statics::NewProp_screenId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URootMovie_RegisterView_Statics::NewProp_screenId = { "screenId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventRegisterView_Parms, screenId), METADATA_PARAMS(Z_Construct_UFunction_URootMovie_RegisterView_Statics::NewProp_screenId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_RegisterView_Statics::NewProp_screenId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_RegisterView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_RegisterView_Statics::NewProp_screenObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_RegisterView_Statics::NewProp_screenId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_RegisterView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_RegisterView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "RegisterView", nullptr, nullptr, sizeof(RootMovie_eventRegisterView_Parms), Z_Construct_UFunction_URootMovie_RegisterView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_RegisterView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_RegisterView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_RegisterView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_RegisterView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_RegisterView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics
	{
		struct RootMovie_eventSetCursorAsSticky_Parms
		{
			bool isSticky;
			bool lockVertical;
			bool lockHorizontal;
			float stickinessOverride;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stickinessOverride;
		static void NewProp_lockHorizontal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_lockHorizontal;
		static void NewProp_lockVertical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_lockVertical;
		static void NewProp_isSticky_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSticky;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_stickinessOverride = { "stickinessOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMovie_eventSetCursorAsSticky_Parms, stickinessOverride), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_lockHorizontal_SetBit(void* Obj)
	{
		((RootMovie_eventSetCursorAsSticky_Parms*)Obj)->lockHorizontal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_lockHorizontal = { "lockHorizontal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMovie_eventSetCursorAsSticky_Parms), &Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_lockHorizontal_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_lockVertical_SetBit(void* Obj)
	{
		((RootMovie_eventSetCursorAsSticky_Parms*)Obj)->lockVertical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_lockVertical = { "lockVertical", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMovie_eventSetCursorAsSticky_Parms), &Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_lockVertical_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_isSticky_SetBit(void* Obj)
	{
		((RootMovie_eventSetCursorAsSticky_Parms*)Obj)->isSticky = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_isSticky = { "isSticky", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMovie_eventSetCursorAsSticky_Parms), &Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_isSticky_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_stickinessOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_lockHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_lockVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::NewProp_isSticky,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovie, nullptr, "SetCursorAsSticky", nullptr, nullptr, sizeof(RootMovie_eventSetCursorAsSticky_Parms), Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMovie_SetCursorAsSticky()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMovie_SetCursorAsSticky_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URootMovie_NoRegister()
	{
		return URootMovie::StaticClass();
	}
	struct Z_Construct_UClass_URootMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_GameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_UIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_UIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ScreenController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ScreenController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwfMoviePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwfMoviePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwfAssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwfAssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URootMovie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMovie_OnAssert, "OnAssert" }, // 1804137123
		{ &Z_Construct_UFunction_URootMovie_OnFlashReady, "OnFlashReady" }, // 1729673126
		{ &Z_Construct_UFunction_URootMovie_OnMovieClosed, "OnMovieClosed" }, // 3052616084
		{ &Z_Construct_UFunction_URootMovie_OnScreenEnter, "OnScreenEnter" }, // 3337985495
		{ &Z_Construct_UFunction_URootMovie_OnScreenLeave, "OnScreenLeave" }, // 652970801
		{ &Z_Construct_UFunction_URootMovie_OnScreenReady, "OnScreenReady" }, // 4168238561
		{ &Z_Construct_UFunction_URootMovie_OpenLinkInBrowser, "OpenLinkInBrowser" }, // 1508208619
		{ &Z_Construct_UFunction_URootMovie_PlaySound, "PlaySound" }, // 2916748853
		{ &Z_Construct_UFunction_URootMovie_RegisterScreenControl, "RegisterScreenControl" }, // 3736153447
		{ &Z_Construct_UFunction_URootMovie_RegisterUIControl, "RegisterUIControl" }, // 2140302664
		{ &Z_Construct_UFunction_URootMovie_RegisterView, "RegisterView" }, // 3300189154
		{ &Z_Construct_UFunction_URootMovie_SetCursorAsSticky, "SetCursorAsSticky" }, // 155150115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMovie_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RootMovie.h" },
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMovie_Statics::NewProp__inputManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootMovie_Statics::NewProp__inputManager = { "_inputManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMovie, _inputManager), Z_Construct_UClass_UDBDInputManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootMovie_Statics::NewProp__inputManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMovie_Statics::NewProp__inputManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMovie_Statics::NewProp_m_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootMovie_Statics::NewProp_m_GameInstance = { "m_GameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMovie, m_GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootMovie_Statics::NewProp_m_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMovie_Statics::NewProp_m_GameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMovie_Statics::NewProp_m_UIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootMovie_Statics::NewProp_m_UIController = { "m_UIController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMovie, m_UIController), Z_Construct_UClass_UUIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootMovie_Statics::NewProp_m_UIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMovie_Statics::NewProp_m_UIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMovie_Statics::NewProp_m_ScreenController_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootMovie_Statics::NewProp_m_ScreenController = { "m_ScreenController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMovie, m_ScreenController), Z_Construct_UClass_UScreenController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootMovie_Statics::NewProp_m_ScreenController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMovie_Statics::NewProp_m_ScreenController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMovie_Statics::NewProp_SwfMoviePlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootMovie_Statics::NewProp_SwfMoviePlayer = { "SwfMoviePlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMovie, SwfMoviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootMovie_Statics::NewProp_SwfMoviePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMovie_Statics::NewProp_SwfMoviePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMovie_Statics::NewProp_SwfAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URootMovie_Statics::NewProp_SwfAssetName = { "SwfAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMovie, SwfAssetName), METADATA_PARAMS(Z_Construct_UClass_URootMovie_Statics::NewProp_SwfAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMovie_Statics::NewProp_SwfAssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMovie_Statics::NewProp__inputManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMovie_Statics::NewProp_m_GameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMovie_Statics::NewProp_m_UIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMovie_Statics::NewProp_m_ScreenController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMovie_Statics::NewProp_SwfMoviePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMovie_Statics::NewProp_SwfAssetName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMovie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URootMovie_Statics::ClassParams = {
		&URootMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URootMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMovie_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URootMovie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URootMovie, 764714759);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URootMovie>()
	{
		return URootMovie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URootMovie(Z_Construct_UClass_URootMovie, &URootMovie::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URootMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
