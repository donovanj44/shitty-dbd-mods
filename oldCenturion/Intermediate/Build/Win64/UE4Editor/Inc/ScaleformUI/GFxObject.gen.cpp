// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/GFxObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFxObject() {}
// Cross Module References
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxObject_NoRegister();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FASColorTransform();
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FASDisplayInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FASValue();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxMoviePlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGFxObject::execGetColorTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FASColorTransform*)Z_Param__Result=P_THIS->GetColorTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGetDisplayInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FASDisplayInfo*)Z_Param__Result=P_THIS->GetDisplayInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGetDisplayTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetDisplayTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGetMemberValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MemberName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FASValue*)Z_Param__Result=P_THIS->GetMemberValue(Z_Param_MemberName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGetMemberValueArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MemberName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FASValue>*)Z_Param__Result=P_THIS->GetMemberValueArray(Z_Param_MemberName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGetPosition)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_X);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPosition(Z_Param_Out_X,Z_Param_Out_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGetScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_XScale);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_YScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetScale(Z_Param_Out_XScale,Z_Param_Out_YScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGetVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGotoAndPlay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FrameString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GotoAndPlay(Z_Param_FrameString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGotoAndPlayI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GotoAndPlayI(Z_Param_FrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGotoAndStop)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FrameString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GotoAndStop(Z_Param_FrameString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execGotoAndStopI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GotoAndStopI(Z_Param_FrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execInvoke)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FASValue,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FASValue*)Z_Param__Result=P_THIS->Invoke(Z_Param_FunctionName,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execSetColorTransform)
	{
		P_GET_STRUCT_REF(FASColorTransform,Z_Param_Out_UnrealColorTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorTransform(Z_Param_Out_UnrealColorTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execSetDisplayInfo)
	{
		P_GET_STRUCT_REF(FASDisplayInfo,Z_Param_Out_UnrealDisplayInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayInfo(Z_Param_Out_UnrealDisplayInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execSetDisplayTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DisplayTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayTransform(Z_Param_Out_DisplayTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execSetMemberValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MemberName);
		P_GET_STRUCT_REF(FASValue,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMemberValue(Z_Param_MemberName,Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execSetMemberValueArray)
	{
		P_GET_OBJECT(UGFxMoviePlayer,Z_Param_MoviePlayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_MemberName);
		P_GET_TARRAY_REF(FASValue,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMemberValueArray(Z_Param_MoviePlayer,Z_Param_MemberName,Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execSetPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execSetScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_XScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_YScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScale(Z_Param_XScale,Z_Param_YScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFxObject::execSetVisible)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisible(Z_Param_bVisible);
		P_NATIVE_END;
	}
	void UGFxObject::StaticRegisterNativesUGFxObject()
	{
		UClass* Class = UGFxObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColorTransform", &UGFxObject::execGetColorTransform },
			{ "GetDisplayInfo", &UGFxObject::execGetDisplayInfo },
			{ "GetDisplayTransform", &UGFxObject::execGetDisplayTransform },
			{ "GetMemberValue", &UGFxObject::execGetMemberValue },
			{ "GetMemberValueArray", &UGFxObject::execGetMemberValueArray },
			{ "GetPosition", &UGFxObject::execGetPosition },
			{ "GetScale", &UGFxObject::execGetScale },
			{ "GetVisible", &UGFxObject::execGetVisible },
			{ "GotoAndPlay", &UGFxObject::execGotoAndPlay },
			{ "GotoAndPlayI", &UGFxObject::execGotoAndPlayI },
			{ "GotoAndStop", &UGFxObject::execGotoAndStop },
			{ "GotoAndStopI", &UGFxObject::execGotoAndStopI },
			{ "Invoke", &UGFxObject::execInvoke },
			{ "SetColorTransform", &UGFxObject::execSetColorTransform },
			{ "SetDisplayInfo", &UGFxObject::execSetDisplayInfo },
			{ "SetDisplayTransform", &UGFxObject::execSetDisplayTransform },
			{ "SetMemberValue", &UGFxObject::execSetMemberValue },
			{ "SetMemberValueArray", &UGFxObject::execSetMemberValueArray },
			{ "SetPosition", &UGFxObject::execSetPosition },
			{ "SetScale", &UGFxObject::execSetScale },
			{ "SetVisible", &UGFxObject::execSetVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics
	{
		struct GFxObject_eventGetColorTransform_Parms
		{
			FASColorTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetColorTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FASColorTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GetColorTransform", nullptr, nullptr, sizeof(GFxObject_eventGetColorTransform_Parms), Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GetColorTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GetColorTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics
	{
		struct GFxObject_eventGetDisplayInfo_Parms
		{
			FASDisplayInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetDisplayInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FASDisplayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GetDisplayInfo", nullptr, nullptr, sizeof(GFxObject_eventGetDisplayInfo_Parms), Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GetDisplayInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GetDisplayInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics
	{
		struct GFxObject_eventGetDisplayTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetDisplayTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GetDisplayTransform", nullptr, nullptr, sizeof(GFxObject_eventGetDisplayTransform_Parms), Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GetDisplayTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GetDisplayTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics
	{
		struct GFxObject_eventGetMemberValue_Parms
		{
			FString MemberName;
			FASValue ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetMemberValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FASValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::NewProp_MemberName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetMemberValue_Parms, MemberName), METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::NewProp_MemberName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::NewProp_MemberName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::NewProp_MemberName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GetMemberValue", nullptr, nullptr, sizeof(GFxObject_eventGetMemberValue_Parms), Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GetMemberValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GetMemberValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics
	{
		struct GFxObject_eventGetMemberValueArray_Parms
		{
			FString MemberName;
			TArray<FASValue> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetMemberValueArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FASValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::NewProp_MemberName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetMemberValueArray_Parms, MemberName), METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::NewProp_MemberName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::NewProp_MemberName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::NewProp_MemberName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GetMemberValueArray", nullptr, nullptr, sizeof(GFxObject_eventGetMemberValueArray_Parms), Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GetMemberValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GetMemberValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GetPosition_Statics
	{
		struct GFxObject_eventGetPosition_Parms
		{
			float X;
			float Y;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGFxObject_GetPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GFxObject_eventGetPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGFxObject_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GFxObject_eventGetPosition_Parms), &Z_Construct_UFunction_UGFxObject_GetPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFxObject_GetPosition_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetPosition_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFxObject_GetPosition_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetPosition_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetPosition_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetPosition_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GetPosition", nullptr, nullptr, sizeof(GFxObject_eventGetPosition_Parms), Z_Construct_UFunction_UGFxObject_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GetScale_Statics
	{
		struct GFxObject_eventGetScale_Parms
		{
			float XScale;
			float YScale;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGFxObject_GetScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GFxObject_eventGetScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGFxObject_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GFxObject_eventGetScale_Parms), &Z_Construct_UFunction_UGFxObject_GetScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFxObject_GetScale_Statics::NewProp_YScale = { "YScale", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetScale_Parms, YScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFxObject_GetScale_Statics::NewProp_XScale = { "XScale", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGetScale_Parms, XScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetScale_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetScale_Statics::NewProp_YScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetScale_Statics::NewProp_XScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GetScale", nullptr, nullptr, sizeof(GFxObject_eventGetScale_Parms), Z_Construct_UFunction_UGFxObject_GetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GetVisible_Statics
	{
		struct GFxObject_eventGetVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGFxObject_GetVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GFxObject_eventGetVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGFxObject_GetVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GFxObject_eventGetVisible_Parms), &Z_Construct_UFunction_UGFxObject_GetVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GetVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GetVisible", nullptr, nullptr, sizeof(GFxObject_eventGetVisible_Parms), Z_Construct_UFunction_UGFxObject_GetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics
	{
		struct GFxObject_eventGotoAndPlay_Parms
		{
			FString FrameString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FrameString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::NewProp_FrameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::NewProp_FrameString = { "FrameString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGotoAndPlay_Parms, FrameString), METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::NewProp_FrameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::NewProp_FrameString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::NewProp_FrameString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GotoAndPlay", nullptr, nullptr, sizeof(GFxObject_eventGotoAndPlay_Parms), Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GotoAndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GotoAndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics
	{
		struct GFxObject_eventGotoAndPlayI_Parms
		{
			int32 FrameNumber;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGotoAndPlayI_Parms, FrameNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::NewProp_FrameNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GotoAndPlayI", nullptr, nullptr, sizeof(GFxObject_eventGotoAndPlayI_Parms), Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GotoAndPlayI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GotoAndPlayI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics
	{
		struct GFxObject_eventGotoAndStop_Parms
		{
			FString FrameString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FrameString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::NewProp_FrameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::NewProp_FrameString = { "FrameString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGotoAndStop_Parms, FrameString), METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::NewProp_FrameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::NewProp_FrameString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::NewProp_FrameString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GotoAndStop", nullptr, nullptr, sizeof(GFxObject_eventGotoAndStop_Parms), Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GotoAndStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GotoAndStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics
	{
		struct GFxObject_eventGotoAndStopI_Parms
		{
			int32 FrameNumber;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventGotoAndStopI_Parms, FrameNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::NewProp_FrameNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "GotoAndStopI", nullptr, nullptr, sizeof(GFxObject_eventGotoAndStopI_Parms), Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_GotoAndStopI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_GotoAndStopI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_Invoke_Statics
	{
		struct GFxObject_eventInvoke_Parms
		{
			FString FunctionName;
			TArray<FASValue> Params;
			FASValue ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventInvoke_Parms, ReturnValue), Z_Construct_UScriptStruct_FASValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventInvoke_Parms, Params), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_Params_Inner = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FASValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventInvoke_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_Invoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_Params_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_Invoke_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_Invoke_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_Invoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "Invoke", nullptr, nullptr, sizeof(GFxObject_eventInvoke_Parms), Z_Construct_UFunction_UGFxObject_Invoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_Invoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_Invoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_Invoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_Invoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_Invoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics
	{
		struct GFxObject_eventSetColorTransform_Parms
		{
			FASColorTransform UnrealColorTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnrealColorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnrealColorTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::NewProp_UnrealColorTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::NewProp_UnrealColorTransform = { "UnrealColorTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetColorTransform_Parms, UnrealColorTransform), Z_Construct_UScriptStruct_FASColorTransform, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::NewProp_UnrealColorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::NewProp_UnrealColorTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::NewProp_UnrealColorTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "SetColorTransform", nullptr, nullptr, sizeof(GFxObject_eventSetColorTransform_Parms), Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_SetColorTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_SetColorTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics
	{
		struct GFxObject_eventSetDisplayInfo_Parms
		{
			FASDisplayInfo UnrealDisplayInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnrealDisplayInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnrealDisplayInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::NewProp_UnrealDisplayInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::NewProp_UnrealDisplayInfo = { "UnrealDisplayInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetDisplayInfo_Parms, UnrealDisplayInfo), Z_Construct_UScriptStruct_FASDisplayInfo, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::NewProp_UnrealDisplayInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::NewProp_UnrealDisplayInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::NewProp_UnrealDisplayInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "SetDisplayInfo", nullptr, nullptr, sizeof(GFxObject_eventSetDisplayInfo_Parms), Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_SetDisplayInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_SetDisplayInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics
	{
		struct GFxObject_eventSetDisplayTransform_Parms
		{
			FTransform DisplayTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::NewProp_DisplayTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::NewProp_DisplayTransform = { "DisplayTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetDisplayTransform_Parms, DisplayTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::NewProp_DisplayTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::NewProp_DisplayTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::NewProp_DisplayTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "SetDisplayTransform", nullptr, nullptr, sizeof(GFxObject_eventSetDisplayTransform_Parms), Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_SetDisplayTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_SetDisplayTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics
	{
		struct GFxObject_eventSetMemberValue_Parms
		{
			FString MemberName;
			FASValue Input;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetMemberValue_Parms, Input), Z_Construct_UScriptStruct_FASValue, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_MemberName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetMemberValue_Parms, MemberName), METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_MemberName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_MemberName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::NewProp_MemberName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "SetMemberValue", nullptr, nullptr, sizeof(GFxObject_eventSetMemberValue_Parms), Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_SetMemberValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_SetMemberValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics
	{
		struct GFxObject_eventSetMemberValueArray_Parms
		{
			UGFxMoviePlayer* MoviePlayer;
			FString MemberName;
			TArray<FASValue> Input;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoviePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetMemberValueArray_Parms, Input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_Input_Inner = { "Input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FASValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_MemberName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetMemberValueArray_Parms, MemberName), METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_MemberName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_MemberName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_MoviePlayer = { "MoviePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetMemberValueArray_Parms, MoviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_Input_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_MemberName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::NewProp_MoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "SetMemberValueArray", nullptr, nullptr, sizeof(GFxObject_eventSetMemberValueArray_Parms), Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_SetMemberValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_SetMemberValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_SetPosition_Statics
	{
		struct GFxObject_eventSetPosition_Parms
		{
			float X;
			float Y;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFxObject_SetPosition_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetPosition_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFxObject_SetPosition_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetPosition_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetPosition_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetPosition_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "SetPosition", nullptr, nullptr, sizeof(GFxObject_eventSetPosition_Parms), Z_Construct_UFunction_UGFxObject_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_SetScale_Statics
	{
		struct GFxObject_eventSetScale_Parms
		{
			float XScale;
			float YScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFxObject_SetScale_Statics::NewProp_YScale = { "YScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetScale_Parms, YScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFxObject_SetScale_Statics::NewProp_XScale = { "XScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFxObject_eventSetScale_Parms, XScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_SetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetScale_Statics::NewProp_YScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetScale_Statics::NewProp_XScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "SetScale", nullptr, nullptr, sizeof(GFxObject_eventSetScale_Parms), Z_Construct_UFunction_UGFxObject_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFxObject_SetVisible_Statics
	{
		struct GFxObject_eventSetVisible_Parms
		{
			bool bVisible;
		};
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGFxObject_SetVisible_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((GFxObject_eventSetVisible_Parms*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGFxObject_SetVisible_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GFxObject_eventSetVisible_Parms), &Z_Construct_UFunction_UGFxObject_SetVisible_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFxObject_SetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFxObject_SetVisible_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFxObject_SetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFxObject_SetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFxObject, nullptr, "SetVisible", nullptr, nullptr, sizeof(GFxObject_eventSetVisible_Parms), Z_Construct_UFunction_UGFxObject_SetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFxObject_SetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFxObject_SetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFxObject_SetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFxObject_SetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGFxObject_NoRegister()
	{
		return UGFxObject::StaticClass();
	}
	struct Z_Construct_UClass_UGFxObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFxObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGFxObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFxObject_GetColorTransform, "GetColorTransform" }, // 4109013137
		{ &Z_Construct_UFunction_UGFxObject_GetDisplayInfo, "GetDisplayInfo" }, // 3468923924
		{ &Z_Construct_UFunction_UGFxObject_GetDisplayTransform, "GetDisplayTransform" }, // 1190270167
		{ &Z_Construct_UFunction_UGFxObject_GetMemberValue, "GetMemberValue" }, // 3637872406
		{ &Z_Construct_UFunction_UGFxObject_GetMemberValueArray, "GetMemberValueArray" }, // 3211374054
		{ &Z_Construct_UFunction_UGFxObject_GetPosition, "GetPosition" }, // 3461719952
		{ &Z_Construct_UFunction_UGFxObject_GetScale, "GetScale" }, // 2404683961
		{ &Z_Construct_UFunction_UGFxObject_GetVisible, "GetVisible" }, // 279203607
		{ &Z_Construct_UFunction_UGFxObject_GotoAndPlay, "GotoAndPlay" }, // 1473422139
		{ &Z_Construct_UFunction_UGFxObject_GotoAndPlayI, "GotoAndPlayI" }, // 2147204286
		{ &Z_Construct_UFunction_UGFxObject_GotoAndStop, "GotoAndStop" }, // 3503191930
		{ &Z_Construct_UFunction_UGFxObject_GotoAndStopI, "GotoAndStopI" }, // 1402336202
		{ &Z_Construct_UFunction_UGFxObject_Invoke, "Invoke" }, // 3609312950
		{ &Z_Construct_UFunction_UGFxObject_SetColorTransform, "SetColorTransform" }, // 2043953764
		{ &Z_Construct_UFunction_UGFxObject_SetDisplayInfo, "SetDisplayInfo" }, // 2902661682
		{ &Z_Construct_UFunction_UGFxObject_SetDisplayTransform, "SetDisplayTransform" }, // 2780392438
		{ &Z_Construct_UFunction_UGFxObject_SetMemberValue, "SetMemberValue" }, // 631089493
		{ &Z_Construct_UFunction_UGFxObject_SetMemberValueArray, "SetMemberValueArray" }, // 570914064
		{ &Z_Construct_UFunction_UGFxObject_SetPosition, "SetPosition" }, // 2610949729
		{ &Z_Construct_UFunction_UGFxObject_SetScale, "SetScale" }, // 1333767009
		{ &Z_Construct_UFunction_UGFxObject_SetVisible, "SetVisible" }, // 1292846256
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFxObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GFxObject.h" },
		{ "ModuleRelativePath", "Public/GFxObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFxObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFxObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGFxObject_Statics::ClassParams = {
		&UGFxObject::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGFxObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGFxObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGFxObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGFxObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGFxObject, 2878684062);
	template<> SCALEFORMUI_API UClass* StaticClass<UGFxObject>()
	{
		return UGFxObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGFxObject(Z_Construct_UClass_UGFxObject, &UGFxObject::StaticClass, TEXT("/Script/ScaleformUI"), TEXT("UGFxObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFxObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
