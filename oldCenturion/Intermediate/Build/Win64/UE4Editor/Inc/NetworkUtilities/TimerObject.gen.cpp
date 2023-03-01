// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/TimerObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerObject() {}
// Cross Module References
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FReplicationTimerData();
// End Cross Module References
	DEFINE_FUNCTION(UTimerObject::execAuthority_Clear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execAuthority_Pause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execAuthority_SetPaused)
	{
		P_GET_UBOOL(Z_Param_paused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetPaused(Z_Param_paused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execAuthority_Start)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Start(Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execAuthority_Unpause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Unpause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execCreateTimer)
	{
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTimerObject**)Z_Param__Result=UTimerObject::CreateTimer(Z_Param_owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execGetElapsedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetElapsedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execGetElapsedTimePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetElapsedTimePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execGetRemainingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execGetRemainingTimePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingTimePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execIsDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execIsTimerActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTimerActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerObject::execOnRep_TimerDataUpdated)
	{
		P_GET_STRUCT(FReplicationTimerData,Z_Param_oldData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TimerDataUpdated(Z_Param_oldData);
		P_NATIVE_END;
	}
	void UTimerObject::StaticRegisterNativesUTimerObject()
	{
		UClass* Class = UTimerObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_Clear", &UTimerObject::execAuthority_Clear },
			{ "Authority_Pause", &UTimerObject::execAuthority_Pause },
			{ "Authority_SetPaused", &UTimerObject::execAuthority_SetPaused },
			{ "Authority_Start", &UTimerObject::execAuthority_Start },
			{ "Authority_Unpause", &UTimerObject::execAuthority_Unpause },
			{ "CreateTimer", &UTimerObject::execCreateTimer },
			{ "GetDuration", &UTimerObject::execGetDuration },
			{ "GetElapsedTime", &UTimerObject::execGetElapsedTime },
			{ "GetElapsedTimePercent", &UTimerObject::execGetElapsedTimePercent },
			{ "GetRemainingTime", &UTimerObject::execGetRemainingTime },
			{ "GetRemainingTimePercent", &UTimerObject::execGetRemainingTimePercent },
			{ "IsDone", &UTimerObject::execIsDone },
			{ "IsPaused", &UTimerObject::execIsPaused },
			{ "IsTimerActive", &UTimerObject::execIsTimerActive },
			{ "OnRep_TimerDataUpdated", &UTimerObject::execOnRep_TimerDataUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimerObject_Authority_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_Authority_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_Authority_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "Authority_Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_Authority_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_Authority_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_Authority_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_Authority_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_Authority_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_Authority_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_Authority_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "Authority_Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_Authority_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_Authority_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_Authority_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_Authority_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics
	{
		struct TimerObject_eventAuthority_SetPaused_Parms
		{
			bool paused;
		};
		static void NewProp_paused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_paused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::NewProp_paused_SetBit(void* Obj)
	{
		((TimerObject_eventAuthority_SetPaused_Parms*)Obj)->paused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::NewProp_paused = { "paused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimerObject_eventAuthority_SetPaused_Parms), &Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::NewProp_paused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::NewProp_paused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "Authority_SetPaused", nullptr, nullptr, sizeof(TimerObject_eventAuthority_SetPaused_Parms), Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_Authority_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_Authority_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_Authority_Start_Statics
	{
		struct TimerObject_eventAuthority_Start_Parms
		{
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerObject_eventAuthority_Start_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "Authority_Start", nullptr, nullptr, sizeof(TimerObject_eventAuthority_Start_Parms), Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_Authority_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_Authority_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_Authority_Unpause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_Authority_Unpause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_Authority_Unpause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "Authority_Unpause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_Authority_Unpause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_Authority_Unpause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_Authority_Unpause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_Authority_Unpause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_CreateTimer_Statics
	{
		struct TimerObject_eventCreateTimer_Parms
		{
			AActor* owner;
			UTimerObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerObject_eventCreateTimer_Parms, ReturnValue), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerObject_eventCreateTimer_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "CreateTimer", nullptr, nullptr, sizeof(TimerObject_eventCreateTimer_Parms), Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_CreateTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_CreateTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_GetDuration_Statics
	{
		struct TimerObject_eventGetDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerObject_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerObject_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "GetDuration", nullptr, nullptr, sizeof(TimerObject_eventGetDuration_Parms), Z_Construct_UFunction_UTimerObject_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics
	{
		struct TimerObject_eventGetElapsedTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerObject_eventGetElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "GetElapsedTime", nullptr, nullptr, sizeof(TimerObject_eventGetElapsedTime_Parms), Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_GetElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_GetElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics
	{
		struct TimerObject_eventGetElapsedTimePercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerObject_eventGetElapsedTimePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "GetElapsedTimePercent", nullptr, nullptr, sizeof(TimerObject_eventGetElapsedTimePercent_Parms), Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics
	{
		struct TimerObject_eventGetRemainingTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerObject_eventGetRemainingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "GetRemainingTime", nullptr, nullptr, sizeof(TimerObject_eventGetRemainingTime_Parms), Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_GetRemainingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_GetRemainingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics
	{
		struct TimerObject_eventGetRemainingTimePercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerObject_eventGetRemainingTimePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "GetRemainingTimePercent", nullptr, nullptr, sizeof(TimerObject_eventGetRemainingTimePercent_Parms), Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_IsDone_Statics
	{
		struct TimerObject_eventIsDone_Parms
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
	void Z_Construct_UFunction_UTimerObject_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimerObject_eventIsDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimerObject_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimerObject_eventIsDone_Parms), &Z_Construct_UFunction_UTimerObject_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_IsDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_IsDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_IsDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_IsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "IsDone", nullptr, nullptr, sizeof(TimerObject_eventIsDone_Parms), Z_Construct_UFunction_UTimerObject_IsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_IsDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_IsDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_IsDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_IsDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_IsDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_IsPaused_Statics
	{
		struct TimerObject_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UTimerObject_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimerObject_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimerObject_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimerObject_eventIsPaused_Parms), &Z_Construct_UFunction_UTimerObject_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "IsPaused", nullptr, nullptr, sizeof(TimerObject_eventIsPaused_Parms), Z_Construct_UFunction_UTimerObject_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics
	{
		struct TimerObject_eventIsTimerActive_Parms
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
	void Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimerObject_eventIsTimerActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimerObject_eventIsTimerActive_Parms), &Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "IsTimerActive", nullptr, nullptr, sizeof(TimerObject_eventIsTimerActive_Parms), Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_IsTimerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_IsTimerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics
	{
		struct TimerObject_eventOnRep_TimerDataUpdated_Parms
		{
			FReplicationTimerData oldData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_oldData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::NewProp_oldData = { "oldData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerObject_eventOnRep_TimerDataUpdated_Parms, oldData), Z_Construct_UScriptStruct_FReplicationTimerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::NewProp_oldData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerObject, nullptr, "OnRep_TimerDataUpdated", nullptr, nullptr, sizeof(TimerObject_eventOnRep_TimerDataUpdated_Parms), Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimerObject_NoRegister()
	{
		return UTimerObject::StaticClass();
	}
	struct Z_Construct_UClass_UTimerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__replicationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimerObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimerObject_Authority_Clear, "Authority_Clear" }, // 3938040920
		{ &Z_Construct_UFunction_UTimerObject_Authority_Pause, "Authority_Pause" }, // 203845401
		{ &Z_Construct_UFunction_UTimerObject_Authority_SetPaused, "Authority_SetPaused" }, // 3098016509
		{ &Z_Construct_UFunction_UTimerObject_Authority_Start, "Authority_Start" }, // 2096260009
		{ &Z_Construct_UFunction_UTimerObject_Authority_Unpause, "Authority_Unpause" }, // 4237424465
		{ &Z_Construct_UFunction_UTimerObject_CreateTimer, "CreateTimer" }, // 1241321889
		{ &Z_Construct_UFunction_UTimerObject_GetDuration, "GetDuration" }, // 3834041730
		{ &Z_Construct_UFunction_UTimerObject_GetElapsedTime, "GetElapsedTime" }, // 2336006540
		{ &Z_Construct_UFunction_UTimerObject_GetElapsedTimePercent, "GetElapsedTimePercent" }, // 277973286
		{ &Z_Construct_UFunction_UTimerObject_GetRemainingTime, "GetRemainingTime" }, // 2106837881
		{ &Z_Construct_UFunction_UTimerObject_GetRemainingTimePercent, "GetRemainingTimePercent" }, // 1066809004
		{ &Z_Construct_UFunction_UTimerObject_IsDone, "IsDone" }, // 275810781
		{ &Z_Construct_UFunction_UTimerObject_IsPaused, "IsPaused" }, // 2172638137
		{ &Z_Construct_UFunction_UTimerObject_IsTimerActive, "IsTimerActive" }, // 116350815
		{ &Z_Construct_UFunction_UTimerObject_OnRep_TimerDataUpdated, "OnRep_TimerDataUpdated" }, // 3213605239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TimerObject.h" },
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerObject_Statics::NewProp__replicationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/TimerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimerObject_Statics::NewProp__replicationData = { "_replicationData", "OnRep_TimerDataUpdated", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimerObject, _replicationData), Z_Construct_UScriptStruct_FReplicationTimerData, METADATA_PARAMS(Z_Construct_UClass_UTimerObject_Statics::NewProp__replicationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimerObject_Statics::NewProp__replicationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimerObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerObject_Statics::NewProp__replicationData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimerObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimerObject_Statics::ClassParams = {
		&UTimerObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTimerObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimerObject_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTimerObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimerObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimerObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimerObject, 2235667373);
	template<> NETWORKUTILITIES_API UClass* StaticClass<UTimerObject>()
	{
		return UTimerObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimerObject(Z_Construct_UClass_UTimerObject, &UTimerObject::StaticClass, TEXT("/Script/NetworkUtilities"), TEXT("UTimerObject"), false, nullptr, nullptr, nullptr);

	void UTimerObject::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__replicationData(TEXT("_replicationData"));

		const bool bIsValid = true
			&& Name__replicationData == ClassReps[(int32)ENetFields_Private::_replicationData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTimerObject"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
