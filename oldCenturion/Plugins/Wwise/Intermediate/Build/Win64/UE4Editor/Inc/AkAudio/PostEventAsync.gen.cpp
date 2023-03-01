// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/PostEventAsync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostEventAsync() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAsync_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAsync();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventPostEventAsyncCompleted_Parms
		{
			int32 PlayingID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventPostEventAsyncCompleted_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::NewProp_PlayingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "PostEventAsyncCompleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_AkAudio_eventPostEventAsyncCompleted_Parms), Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventPostEventAsyncPostEventCallback_Parms
		{
			EAkCallbackType CallbackType;
			UAkCallbackInfo* CallbackInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallbackInfo;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallbackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::NewProp_CallbackInfo = { "CallbackInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventPostEventAsyncPostEventCallback_Parms, CallbackInfo), Z_Construct_UClass_UAkCallbackInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType = { "CallbackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventPostEventAsyncPostEventCallback_Parms, CallbackType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::NewProp_CallbackInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "PostEventAsyncPostEventCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_AkAudio_eventPostEventAsyncPostEventCallback_Parms), Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPostEventAsync::execPollPostEventFuture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PollPostEventFuture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPostEventAsync::execPostEventAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPostEventAsync**)Z_Param__Result=UPostEventAsync::PostEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FPostEventAsyncPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources,Z_Param_bStopWhenAttachedToDestroyed);
		P_NATIVE_END;
	}
	void UPostEventAsync::StaticRegisterNativesUPostEventAsync()
	{
		UClass* Class = UPostEventAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PollPostEventFuture", &UPostEventAsync::execPollPostEventFuture },
			{ "PostEventAsync", &UPostEventAsync::execPostEventAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostEventAsync, nullptr, "PollPostEventFuture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics
	{
		struct PostEventAsync_eventPostEventAsync_Parms
		{
			const UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			bool bStopWhenAttachedToDestroyed;
			UPostEventAsync* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, ReturnValue), Z_Construct_UClass_UPostEventAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((PostEventAsync_eventPostEventAsync_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PostEventAsync_eventPostEventAsync_Parms), &Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, CallbackMask), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_AkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostEventAsync, nullptr, "PostEventAsync", nullptr, nullptr, sizeof(PostEventAsync_eventPostEventAsync_Parms), Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostEventAsync_PostEventAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPostEventAsync_NoRegister()
	{
		return UPostEventAsync::StaticClass();
	}
	struct Z_Construct_UClass_UPostEventAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPostEventAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPostEventAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture, "PollPostEventFuture" }, // 1463184917
		{ &Z_Construct_UFunction_UPostEventAsync_PostEventAsync, "PostEventAsync" }, // 903255832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostEventAsync_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PostEventAsync.h" },
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostEventAsync, Completed), Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostEventAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostEventAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostEventAsync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPostEventAsync_Statics::ClassParams = {
		&UPostEventAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPostEventAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPostEventAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostEventAsync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPostEventAsync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPostEventAsync, 3626038997);
	template<> AKAUDIO_API UClass* StaticClass<UPostEventAsync>()
	{
		return UPostEventAsync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPostEventAsync(Z_Construct_UClass_UPostEventAsync, &UPostEventAsync::StaticClass, TEXT("/Script/AkAudio"), TEXT("UPostEventAsync"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostEventAsync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
