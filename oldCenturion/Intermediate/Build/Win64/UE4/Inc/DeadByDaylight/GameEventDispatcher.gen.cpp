// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameEventDispatcher.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEventDispatcher() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameEventDispatcher_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameEventDispatcher();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventDispatcherHandleBP();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOngoingGameEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameEventDispatcher::execAuthority_AccumulateOngoingGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ongoingWaitTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AccumulateOngoingGameEvent(Z_Param_gameEventType,Z_Param_Out_gameEventData,Z_Param_ongoingWaitTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameEventDispatcher::execAuthority_RemotelyDispatch)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RemotelyDispatch(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameEventDispatcher::execLocallyDispatch)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocallyDispatch(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameEventDispatcher::execRegisterListener)
	{
		P_GET_STRUCT_REF(FGameEventDispatcherHandleBP,Z_Param_Out_gameEventDispatcherHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterListener(Z_Param_Out_gameEventDispatcherHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameEventDispatcher::execRemotelyDispatch)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemotelyDispatch(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameEventDispatcher::execUnregisterListener)
	{
		P_GET_STRUCT_REF(FGameEventDispatcherHandleBP,Z_Param_Out_gameEventDispatcherHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterListener(Z_Param_Out_gameEventDispatcherHandle);
		P_NATIVE_END;
	}
	void UGameEventDispatcher::StaticRegisterNativesUGameEventDispatcher()
	{
		UClass* Class = UGameEventDispatcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AccumulateOngoingGameEvent", &UGameEventDispatcher::execAuthority_AccumulateOngoingGameEvent },
			{ "Authority_RemotelyDispatch", &UGameEventDispatcher::execAuthority_RemotelyDispatch },
			{ "LocallyDispatch", &UGameEventDispatcher::execLocallyDispatch },
			{ "RegisterListener", &UGameEventDispatcher::execRegisterListener },
			{ "RemotelyDispatch", &UGameEventDispatcher::execRemotelyDispatch },
			{ "UnregisterListener", &UGameEventDispatcher::execUnregisterListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics
	{
		struct GameEventDispatcher_eventAuthority_AccumulateOngoingGameEvent_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
			float ongoingWaitTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ongoingWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_ongoingWaitTime = { "ongoingWaitTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventAuthority_AccumulateOngoingGameEvent_Parms, ongoingWaitTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventAuthority_AccumulateOngoingGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventAuthority_AccumulateOngoingGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_ongoingWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventDispatcher, nullptr, "Authority_AccumulateOngoingGameEvent", nullptr, nullptr, sizeof(GameEventDispatcher_eventAuthority_AccumulateOngoingGameEvent_Parms), Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics
	{
		struct GameEventDispatcher_eventAuthority_RemotelyDispatch_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventAuthority_RemotelyDispatch_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventAuthority_RemotelyDispatch_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventDispatcher, nullptr, "Authority_RemotelyDispatch", nullptr, nullptr, sizeof(GameEventDispatcher_eventAuthority_RemotelyDispatch_Parms), Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics
	{
		struct GameEventDispatcher_eventLocallyDispatch_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventLocallyDispatch_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventLocallyDispatch_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventDispatcher, nullptr, "LocallyDispatch", nullptr, nullptr, sizeof(GameEventDispatcher_eventLocallyDispatch_Parms), Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics
	{
		struct GameEventDispatcher_eventRegisterListener_Parms
		{
			FGameEventDispatcherHandleBP gameEventDispatcherHandle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventDispatcherHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventDispatcherHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::NewProp_gameEventDispatcherHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::NewProp_gameEventDispatcherHandle = { "gameEventDispatcherHandle", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventRegisterListener_Parms, gameEventDispatcherHandle), Z_Construct_UScriptStruct_FGameEventDispatcherHandleBP, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::NewProp_gameEventDispatcherHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::NewProp_gameEventDispatcherHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::NewProp_gameEventDispatcherHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventDispatcher, nullptr, "RegisterListener", nullptr, nullptr, sizeof(GameEventDispatcher_eventRegisterListener_Parms), Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameEventDispatcher_RegisterListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameEventDispatcher_RegisterListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics
	{
		struct GameEventDispatcher_eventRemotelyDispatch_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventRemotelyDispatch_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventRemotelyDispatch_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventDispatcher, nullptr, "RemotelyDispatch", nullptr, nullptr, sizeof(GameEventDispatcher_eventRemotelyDispatch_Parms), Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics
	{
		struct GameEventDispatcher_eventUnregisterListener_Parms
		{
			FGameEventDispatcherHandleBP gameEventDispatcherHandle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventDispatcherHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventDispatcherHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::NewProp_gameEventDispatcherHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::NewProp_gameEventDispatcherHandle = { "gameEventDispatcherHandle", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventDispatcher_eventUnregisterListener_Parms, gameEventDispatcherHandle), Z_Construct_UScriptStruct_FGameEventDispatcherHandleBP, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::NewProp_gameEventDispatcherHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::NewProp_gameEventDispatcherHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::NewProp_gameEventDispatcherHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventDispatcher, nullptr, "UnregisterListener", nullptr, nullptr, sizeof(GameEventDispatcher_eventUnregisterListener_Parms), Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameEventDispatcher_NoRegister()
	{
		return UGameEventDispatcher::StaticClass();
	}
	struct Z_Construct_UClass_UGameEventDispatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ongoingEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ongoingEvents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ongoingEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameEventDispatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameEventDispatcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameEventDispatcher_Authority_AccumulateOngoingGameEvent, "Authority_AccumulateOngoingGameEvent" }, // 1503695187
		{ &Z_Construct_UFunction_UGameEventDispatcher_Authority_RemotelyDispatch, "Authority_RemotelyDispatch" }, // 2396916170
		{ &Z_Construct_UFunction_UGameEventDispatcher_LocallyDispatch, "LocallyDispatch" }, // 1711156984
		{ &Z_Construct_UFunction_UGameEventDispatcher_RegisterListener, "RegisterListener" }, // 1496858896
		{ &Z_Construct_UFunction_UGameEventDispatcher_RemotelyDispatch, "RemotelyDispatch" }, // 2245507071
		{ &Z_Construct_UFunction_UGameEventDispatcher_UnregisterListener, "UnregisterListener" }, // 1855132865
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEventDispatcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameEventDispatcher.h" },
		{ "ModuleRelativePath", "Public/GameEventDispatcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEventDispatcher_Statics::NewProp__ongoingEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameEventDispatcher_Statics::NewProp__ongoingEvents = { "_ongoingEvents", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameEventDispatcher, _ongoingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameEventDispatcher_Statics::NewProp__ongoingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventDispatcher_Statics::NewProp__ongoingEvents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameEventDispatcher_Statics::NewProp__ongoingEvents_Inner = { "_ongoingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UOngoingGameEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEventDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEventDispatcher_Statics::NewProp__ongoingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEventDispatcher_Statics::NewProp__ongoingEvents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameEventDispatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEventDispatcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameEventDispatcher_Statics::ClassParams = {
		&UGameEventDispatcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameEventDispatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventDispatcher_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameEventDispatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventDispatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameEventDispatcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameEventDispatcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameEventDispatcher, 70937804);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGameEventDispatcher>()
	{
		return UGameEventDispatcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameEventDispatcher(Z_Construct_UClass_UGameEventDispatcher, &UGameEventDispatcher::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGameEventDispatcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEventDispatcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
