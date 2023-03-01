// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAtlantaInputHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAtlantaInputHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAtlantaInputHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAtlantaInputHandler();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBaseInputHandler();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UDBDAtlantaInputHandler::execGetVirtualJoystickNormalizedOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_controlIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetVirtualJoystickNormalizedOffset(Z_Param_controlIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAtlantaInputHandler::execGetVirtualJoystickPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_controlIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetVirtualJoystickPosition(Z_Param_controlIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAtlantaInputHandler::execGetVirtualJoystickVisualCenter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_controlIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetVirtualJoystickVisualCenter(Z_Param_controlIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAtlantaInputHandler::execGetVirtualJoystickVisualSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_controlIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetVirtualJoystickVisualSize(Z_Param_controlIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAtlantaInputHandler::execSetVirtualJoystickCenter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_controlIndex);
		P_GET_STRUCT(FVector2D,Z_Param_controlCenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVirtualJoystickCenter(Z_Param_controlIndex,Z_Param_controlCenter);
		P_NATIVE_END;
	}
	void UDBDAtlantaInputHandler::StaticRegisterNativesUDBDAtlantaInputHandler()
	{
		UClass* Class = UDBDAtlantaInputHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVirtualJoystickNormalizedOffset", &UDBDAtlantaInputHandler::execGetVirtualJoystickNormalizedOffset },
			{ "GetVirtualJoystickPosition", &UDBDAtlantaInputHandler::execGetVirtualJoystickPosition },
			{ "GetVirtualJoystickVisualCenter", &UDBDAtlantaInputHandler::execGetVirtualJoystickVisualCenter },
			{ "GetVirtualJoystickVisualSize", &UDBDAtlantaInputHandler::execGetVirtualJoystickVisualSize },
			{ "SetVirtualJoystickCenter", &UDBDAtlantaInputHandler::execSetVirtualJoystickCenter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics
	{
		struct DBDAtlantaInputHandler_eventGetVirtualJoystickNormalizedOffset_Parms
		{
			int32 controlIndex;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_controlIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventGetVirtualJoystickNormalizedOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::NewProp_controlIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::NewProp_controlIndex = { "controlIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventGetVirtualJoystickNormalizedOffset_Parms, controlIndex), METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::NewProp_controlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::NewProp_controlIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::NewProp_controlIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAtlantaInputHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAtlantaInputHandler, nullptr, "GetVirtualJoystickNormalizedOffset", nullptr, nullptr, sizeof(DBDAtlantaInputHandler_eventGetVirtualJoystickNormalizedOffset_Parms), Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics
	{
		struct DBDAtlantaInputHandler_eventGetVirtualJoystickPosition_Parms
		{
			int32 controlIndex;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_controlIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventGetVirtualJoystickPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::NewProp_controlIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::NewProp_controlIndex = { "controlIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventGetVirtualJoystickPosition_Parms, controlIndex), METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::NewProp_controlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::NewProp_controlIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::NewProp_controlIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAtlantaInputHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAtlantaInputHandler, nullptr, "GetVirtualJoystickPosition", nullptr, nullptr, sizeof(DBDAtlantaInputHandler_eventGetVirtualJoystickPosition_Parms), Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics
	{
		struct DBDAtlantaInputHandler_eventGetVirtualJoystickVisualCenter_Parms
		{
			int32 controlIndex;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_controlIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventGetVirtualJoystickVisualCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::NewProp_controlIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::NewProp_controlIndex = { "controlIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventGetVirtualJoystickVisualCenter_Parms, controlIndex), METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::NewProp_controlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::NewProp_controlIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::NewProp_controlIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAtlantaInputHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAtlantaInputHandler, nullptr, "GetVirtualJoystickVisualCenter", nullptr, nullptr, sizeof(DBDAtlantaInputHandler_eventGetVirtualJoystickVisualCenter_Parms), Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics
	{
		struct DBDAtlantaInputHandler_eventGetVirtualJoystickVisualSize_Parms
		{
			int32 controlIndex;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_controlIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventGetVirtualJoystickVisualSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::NewProp_controlIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::NewProp_controlIndex = { "controlIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventGetVirtualJoystickVisualSize_Parms, controlIndex), METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::NewProp_controlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::NewProp_controlIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::NewProp_controlIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAtlantaInputHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAtlantaInputHandler, nullptr, "GetVirtualJoystickVisualSize", nullptr, nullptr, sizeof(DBDAtlantaInputHandler_eventGetVirtualJoystickVisualSize_Parms), Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics
	{
		struct DBDAtlantaInputHandler_eventSetVirtualJoystickCenter_Parms
		{
			int32 controlIndex;
			FVector2D controlCenter;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_controlCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_controlIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::NewProp_controlCenter = { "controlCenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventSetVirtualJoystickCenter_Parms, controlCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::NewProp_controlIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::NewProp_controlIndex = { "controlIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAtlantaInputHandler_eventSetVirtualJoystickCenter_Parms, controlIndex), METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::NewProp_controlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::NewProp_controlIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::NewProp_controlCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::NewProp_controlIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAtlantaInputHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAtlantaInputHandler, nullptr, "SetVirtualJoystickCenter", nullptr, nullptr, sizeof(DBDAtlantaInputHandler_eventSetVirtualJoystickCenter_Parms), Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDAtlantaInputHandler_NoRegister()
	{
		return UDBDAtlantaInputHandler::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAtlantaInputHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAtlantaInputHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDBaseInputHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDAtlantaInputHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickNormalizedOffset, "GetVirtualJoystickNormalizedOffset" }, // 240426976
		{ &Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickPosition, "GetVirtualJoystickPosition" }, // 340222849
		{ &Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualCenter, "GetVirtualJoystickVisualCenter" }, // 2856434834
		{ &Z_Construct_UFunction_UDBDAtlantaInputHandler_GetVirtualJoystickVisualSize, "GetVirtualJoystickVisualSize" }, // 4201530462
		{ &Z_Construct_UFunction_UDBDAtlantaInputHandler_SetVirtualJoystickCenter, "SetVirtualJoystickCenter" }, // 4214123309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAtlantaInputHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDAtlantaInputHandler.h" },
		{ "ModuleRelativePath", "Public/DBDAtlantaInputHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAtlantaInputHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAtlantaInputHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAtlantaInputHandler_Statics::ClassParams = {
		&UDBDAtlantaInputHandler::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAtlantaInputHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAtlantaInputHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAtlantaInputHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAtlantaInputHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAtlantaInputHandler, 2122139697);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAtlantaInputHandler>()
	{
		return UDBDAtlantaInputHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAtlantaInputHandler(Z_Construct_UClass_UDBDAtlantaInputHandler, &UDBDAtlantaInputHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAtlantaInputHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAtlantaInputHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
