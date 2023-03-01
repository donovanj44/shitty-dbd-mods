// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/ScaleformBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaleformBlueprintLibrary() {}
// Cross Module References
	SCALEFORMUI_API UClass* Z_Construct_UClass_UScaleformBlueprintLibrary_NoRegister();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UScaleformBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxMoviePlayer_NoRegister();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxObject_NoRegister();
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FASValue();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SCALEFORMUI_API UClass* Z_Construct_UClass_USwfMovie_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScaleformBlueprintLibrary::execCloseMovie)
	{
		P_GET_OBJECT(UGFxMoviePlayer,Z_Param_MoviePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UScaleformBlueprintLibrary::CloseMovie(Z_Param_MoviePlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleformBlueprintLibrary::execGetMember)
	{
		P_GET_OBJECT(UGFxMoviePlayer,Z_Param_MoviePlayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_MemberName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGFxObject**)Z_Param__Result=UScaleformBlueprintLibrary::GetMember(Z_Param_MoviePlayer,Z_Param_MemberName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleformBlueprintLibrary::execGetMovieClip)
	{
		P_GET_OBJECT(UGFxMoviePlayer,Z_Param_MoviePlayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_MovieClipName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGFxObject**)Z_Param__Result=UScaleformBlueprintLibrary::GetMovieClip(Z_Param_MoviePlayer,Z_Param_MovieClipName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleformBlueprintLibrary::execGetVariable)
	{
		P_GET_OBJECT(UGFxMoviePlayer,Z_Param_MoviePlayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariablePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGFxObject**)Z_Param__Result=UScaleformBlueprintLibrary::GetVariable(Z_Param_MoviePlayer,Z_Param_VariablePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleformBlueprintLibrary::execInvoke)
	{
		P_GET_OBJECT(UGFxMoviePlayer,Z_Param_MoviePlayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FASValue,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FASValue*)Z_Param__Result=UScaleformBlueprintLibrary::Invoke(Z_Param_MoviePlayer,Z_Param_FunctionName,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleformBlueprintLibrary::execInvokeNoParams)
	{
		P_GET_OBJECT(UGFxMoviePlayer,Z_Param_MoviePlayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FASValue*)Z_Param__Result=UScaleformBlueprintLibrary::InvokeNoParams(Z_Param_MoviePlayer,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleformBlueprintLibrary::execOpenMovie)
	{
		P_GET_OBJECT(USwfMovie,Z_Param_Movie);
		P_GET_OBJECT(UObject,Z_Param_ExternalInterface);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTexture);
		P_GET_OBJECT(UGFxMoviePlayer,Z_Param_MoviePlayer);
		P_GET_UBOOL(Z_Param_DisplayWithHudOff);
		P_GET_UBOOL(Z_Param_StartPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGFxMoviePlayer**)Z_Param__Result=UScaleformBlueprintLibrary::OpenMovie(Z_Param_Movie,Z_Param_ExternalInterface,Z_Param_RenderTexture,Z_Param_MoviePlayer,Z_Param_DisplayWithHudOff,Z_Param_StartPaused);
		P_NATIVE_END;
	}
	void UScaleformBlueprintLibrary::StaticRegisterNativesUScaleformBlueprintLibrary()
	{
		UClass* Class = UScaleformBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseMovie", &UScaleformBlueprintLibrary::execCloseMovie },
			{ "GetMember", &UScaleformBlueprintLibrary::execGetMember },
			{ "GetMovieClip", &UScaleformBlueprintLibrary::execGetMovieClip },
			{ "GetVariable", &UScaleformBlueprintLibrary::execGetVariable },
			{ "Invoke", &UScaleformBlueprintLibrary::execInvoke },
			{ "InvokeNoParams", &UScaleformBlueprintLibrary::execInvokeNoParams },
			{ "OpenMovie", &UScaleformBlueprintLibrary::execOpenMovie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics
	{
		struct ScaleformBlueprintLibrary_eventCloseMovie_Parms
		{
			UGFxMoviePlayer* MoviePlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoviePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::NewProp_MoviePlayer = { "MoviePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventCloseMovie_Parms, MoviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::NewProp_MoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScaleformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleformBlueprintLibrary, nullptr, "CloseMovie", nullptr, nullptr, sizeof(ScaleformBlueprintLibrary_eventCloseMovie_Parms), Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics
	{
		struct ScaleformBlueprintLibrary_eventGetMember_Parms
		{
			UGFxMoviePlayer* MoviePlayer;
			FString MemberName;
			UGFxObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventGetMember_Parms, ReturnValue), Z_Construct_UClass_UGFxObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::NewProp_MemberName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventGetMember_Parms, MemberName), METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::NewProp_MemberName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::NewProp_MemberName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::NewProp_MoviePlayer = { "MoviePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventGetMember_Parms, MoviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::NewProp_MemberName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::NewProp_MoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScaleformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleformBlueprintLibrary, nullptr, "GetMember", nullptr, nullptr, sizeof(ScaleformBlueprintLibrary_eventGetMember_Parms), Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics
	{
		struct ScaleformBlueprintLibrary_eventGetMovieClip_Parms
		{
			UGFxMoviePlayer* MoviePlayer;
			FString MovieClipName;
			UGFxObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieClipName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovieClipName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoviePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventGetMovieClip_Parms, ReturnValue), Z_Construct_UClass_UGFxObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::NewProp_MovieClipName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::NewProp_MovieClipName = { "MovieClipName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventGetMovieClip_Parms, MovieClipName), METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::NewProp_MovieClipName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::NewProp_MovieClipName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::NewProp_MoviePlayer = { "MoviePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventGetMovieClip_Parms, MoviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::NewProp_MovieClipName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::NewProp_MoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScaleformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleformBlueprintLibrary, nullptr, "GetMovieClip", nullptr, nullptr, sizeof(ScaleformBlueprintLibrary_eventGetMovieClip_Parms), Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics
	{
		struct ScaleformBlueprintLibrary_eventGetVariable_Parms
		{
			UGFxMoviePlayer* MoviePlayer;
			FString VariablePath;
			UGFxObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariablePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoviePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventGetVariable_Parms, ReturnValue), Z_Construct_UClass_UGFxObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::NewProp_VariablePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::NewProp_VariablePath = { "VariablePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventGetVariable_Parms, VariablePath), METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::NewProp_VariablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::NewProp_VariablePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::NewProp_MoviePlayer = { "MoviePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventGetVariable_Parms, MoviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::NewProp_VariablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::NewProp_MoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScaleformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleformBlueprintLibrary, nullptr, "GetVariable", nullptr, nullptr, sizeof(ScaleformBlueprintLibrary_eventGetVariable_Parms), Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics
	{
		struct ScaleformBlueprintLibrary_eventInvoke_Parms
		{
			UGFxMoviePlayer* MoviePlayer;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoviePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventInvoke_Parms, ReturnValue), Z_Construct_UScriptStruct_FASValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventInvoke_Parms, Params), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_Params_Inner = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FASValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventInvoke_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_MoviePlayer = { "MoviePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventInvoke_Parms, MoviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_Params_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::NewProp_MoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScaleformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleformBlueprintLibrary, nullptr, "Invoke", nullptr, nullptr, sizeof(ScaleformBlueprintLibrary_eventInvoke_Parms), Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics
	{
		struct ScaleformBlueprintLibrary_eventInvokeNoParams_Parms
		{
			UGFxMoviePlayer* MoviePlayer;
			FString FunctionName;
			FASValue ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoviePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventInvokeNoParams_Parms, ReturnValue), Z_Construct_UScriptStruct_FASValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventInvokeNoParams_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::NewProp_MoviePlayer = { "MoviePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventInvokeNoParams_Parms, MoviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::NewProp_MoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScaleformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleformBlueprintLibrary, nullptr, "InvokeNoParams", nullptr, nullptr, sizeof(ScaleformBlueprintLibrary_eventInvokeNoParams_Parms), Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics
	{
		struct ScaleformBlueprintLibrary_eventOpenMovie_Parms
		{
			USwfMovie* Movie;
			UObject* ExternalInterface;
			UTextureRenderTarget2D* RenderTexture;
			UGFxMoviePlayer* MoviePlayer;
			bool DisplayWithHudOff;
			bool StartPaused;
			UGFxMoviePlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_StartPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StartPaused;
		static void NewProp_DisplayWithHudOff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayWithHudOff;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoviePlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalInterface;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventOpenMovie_Parms, ReturnValue), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_StartPaused_SetBit(void* Obj)
	{
		((ScaleformBlueprintLibrary_eventOpenMovie_Parms*)Obj)->StartPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_StartPaused = { "StartPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScaleformBlueprintLibrary_eventOpenMovie_Parms), &Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_StartPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_DisplayWithHudOff_SetBit(void* Obj)
	{
		((ScaleformBlueprintLibrary_eventOpenMovie_Parms*)Obj)->DisplayWithHudOff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_DisplayWithHudOff = { "DisplayWithHudOff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScaleformBlueprintLibrary_eventOpenMovie_Parms), &Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_DisplayWithHudOff_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_MoviePlayer = { "MoviePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventOpenMovie_Parms, MoviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventOpenMovie_Parms, RenderTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_ExternalInterface = { "ExternalInterface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventOpenMovie_Parms, ExternalInterface), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_Movie = { "Movie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleformBlueprintLibrary_eventOpenMovie_Parms, Movie), Z_Construct_UClass_USwfMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_StartPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_DisplayWithHudOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_MoviePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_RenderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_ExternalInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::NewProp_Movie,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScaleformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleformBlueprintLibrary, nullptr, "OpenMovie", nullptr, nullptr, sizeof(ScaleformBlueprintLibrary_eventOpenMovie_Parms), Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScaleformBlueprintLibrary_NoRegister()
	{
		return UScaleformBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UScaleformBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaleformBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScaleformBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScaleformBlueprintLibrary_CloseMovie, "CloseMovie" }, // 2063734726
		{ &Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMember, "GetMember" }, // 2750653632
		{ &Z_Construct_UFunction_UScaleformBlueprintLibrary_GetMovieClip, "GetMovieClip" }, // 2121445342
		{ &Z_Construct_UFunction_UScaleformBlueprintLibrary_GetVariable, "GetVariable" }, // 860075473
		{ &Z_Construct_UFunction_UScaleformBlueprintLibrary_Invoke, "Invoke" }, // 2110769154
		{ &Z_Construct_UFunction_UScaleformBlueprintLibrary_InvokeNoParams, "InvokeNoParams" }, // 1226953215
		{ &Z_Construct_UFunction_UScaleformBlueprintLibrary_OpenMovie, "OpenMovie" }, // 1259666264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleformBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ScaleformBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ScaleformBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaleformBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaleformBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScaleformBlueprintLibrary_Statics::ClassParams = {
		&UScaleformBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScaleformBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleformBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScaleformBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScaleformBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScaleformBlueprintLibrary, 1639861865);
	template<> SCALEFORMUI_API UClass* StaticClass<UScaleformBlueprintLibrary>()
	{
		return UScaleformBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaleformBlueprintLibrary(Z_Construct_UClass_UScaleformBlueprintLibrary, &UScaleformBlueprintLibrary::StaticClass, TEXT("/Script/ScaleformUI"), TEXT("UScaleformBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleformBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
