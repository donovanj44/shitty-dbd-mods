// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDUtilTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDUtilTimer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDUtilTimer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDUtilTimer();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTimer();
// End Cross Module References
	DEFINE_FUNCTION(UDBDUtilTimer::execGetPercentTimeElapsed)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilTimer::GetPercentTimeElapsed(Z_Param_Out_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilTimer::execGetPercentTimeLeft)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilTimer::GetPercentTimeLeft(Z_Param_Out_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilTimer::execGetStartTime)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilTimer::GetStartTime(Z_Param_Out_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilTimer::execGetTimeElapsed)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilTimer::GetTimeElapsed(Z_Param_Out_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilTimer::execGetTimeLeft)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilTimer::GetTimeLeft(Z_Param_Out_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilTimer::execIsDone)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilTimer::IsDone(Z_Param_Out_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilTimer::execReset)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilTimer::Reset(Z_Param_Out_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilTimer::execResetTo)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilTimer::ResetTo(Z_Param_Out_Timer,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilTimer::execStop)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilTimer::Stop(Z_Param_Out_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilTimer::execUpdate)
	{
		P_GET_STRUCT_REF(FDBDTimer,Z_Param_Out_Timer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilTimer::Update(Z_Param_Out_Timer,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void UDBDUtilTimer::StaticRegisterNativesUDBDUtilTimer()
	{
		UClass* Class = UDBDUtilTimer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPercentTimeElapsed", &UDBDUtilTimer::execGetPercentTimeElapsed },
			{ "GetPercentTimeLeft", &UDBDUtilTimer::execGetPercentTimeLeft },
			{ "GetStartTime", &UDBDUtilTimer::execGetStartTime },
			{ "GetTimeElapsed", &UDBDUtilTimer::execGetTimeElapsed },
			{ "GetTimeLeft", &UDBDUtilTimer::execGetTimeLeft },
			{ "IsDone", &UDBDUtilTimer::execIsDone },
			{ "Reset", &UDBDUtilTimer::execReset },
			{ "ResetTo", &UDBDUtilTimer::execResetTo },
			{ "Stop", &UDBDUtilTimer::execStop },
			{ "Update", &UDBDUtilTimer::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics
	{
		struct DBDUtilTimer_eventGetPercentTimeElapsed_Parms
		{
			FDBDTimer Timer;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetPercentTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::NewProp_Timer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetPercentTimeElapsed_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "GetPercentTimeElapsed", nullptr, nullptr, sizeof(DBDUtilTimer_eventGetPercentTimeElapsed_Parms), Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics
	{
		struct DBDUtilTimer_eventGetPercentTimeLeft_Parms
		{
			FDBDTimer Timer;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetPercentTimeLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::NewProp_Timer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetPercentTimeLeft_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "GetPercentTimeLeft", nullptr, nullptr, sizeof(DBDUtilTimer_eventGetPercentTimeLeft_Parms), Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics
	{
		struct DBDUtilTimer_eventGetStartTime_Parms
		{
			FDBDTimer Timer;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::NewProp_Timer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetStartTime_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "GetStartTime", nullptr, nullptr, sizeof(DBDUtilTimer_eventGetStartTime_Parms), Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_GetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_GetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics
	{
		struct DBDUtilTimer_eventGetTimeElapsed_Parms
		{
			FDBDTimer Timer;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::NewProp_Timer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetTimeElapsed_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "GetTimeElapsed", nullptr, nullptr, sizeof(DBDUtilTimer_eventGetTimeElapsed_Parms), Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics
	{
		struct DBDUtilTimer_eventGetTimeLeft_Parms
		{
			FDBDTimer Timer;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetTimeLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::NewProp_Timer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventGetTimeLeft_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "GetTimeLeft", nullptr, nullptr, sizeof(DBDUtilTimer_eventGetTimeLeft_Parms), Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics
	{
		struct DBDUtilTimer_eventIsDone_Parms
		{
			FDBDTimer Timer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilTimer_eventIsDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilTimer_eventIsDone_Parms), &Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::NewProp_Timer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventIsDone_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "IsDone", nullptr, nullptr, sizeof(DBDUtilTimer_eventIsDone_Parms), Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_IsDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_IsDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics
	{
		struct DBDUtilTimer_eventReset_Parms
		{
			FDBDTimer Timer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventReset_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "Reset", nullptr, nullptr, sizeof(DBDUtilTimer_eventReset_Parms), Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics
	{
		struct DBDUtilTimer_eventResetTo_Parms
		{
			FDBDTimer Timer;
			float time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventResetTo_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventResetTo_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "ResetTo", nullptr, nullptr, sizeof(DBDUtilTimer_eventResetTo_Parms), Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_ResetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_ResetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics
	{
		struct DBDUtilTimer_eventStop_Parms
		{
			FDBDTimer Timer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventStop_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "Stop", nullptr, nullptr, sizeof(DBDUtilTimer_eventStop_Parms), Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilTimer_Update_Statics
	{
		struct DBDUtilTimer_eventUpdate_Parms
		{
			FDBDTimer Timer;
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventUpdate_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilTimer_eventUpdate_Parms, Timer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilTimer, nullptr, "Update", nullptr, nullptr, sizeof(DBDUtilTimer_eventUpdate_Parms), Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilTimer_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilTimer_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDUtilTimer_NoRegister()
	{
		return UDBDUtilTimer::StaticClass();
	}
	struct Z_Construct_UClass_UDBDUtilTimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDUtilTimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDUtilTimer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeElapsed, "GetPercentTimeElapsed" }, // 4162655636
		{ &Z_Construct_UFunction_UDBDUtilTimer_GetPercentTimeLeft, "GetPercentTimeLeft" }, // 1876091152
		{ &Z_Construct_UFunction_UDBDUtilTimer_GetStartTime, "GetStartTime" }, // 3310563343
		{ &Z_Construct_UFunction_UDBDUtilTimer_GetTimeElapsed, "GetTimeElapsed" }, // 2640866469
		{ &Z_Construct_UFunction_UDBDUtilTimer_GetTimeLeft, "GetTimeLeft" }, // 2644406277
		{ &Z_Construct_UFunction_UDBDUtilTimer_IsDone, "IsDone" }, // 1799862738
		{ &Z_Construct_UFunction_UDBDUtilTimer_Reset, "Reset" }, // 321435327
		{ &Z_Construct_UFunction_UDBDUtilTimer_ResetTo, "ResetTo" }, // 3023211573
		{ &Z_Construct_UFunction_UDBDUtilTimer_Stop, "Stop" }, // 2291918901
		{ &Z_Construct_UFunction_UDBDUtilTimer_Update, "Update" }, // 88018326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDUtilTimer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDUtilTimer.h" },
		{ "ModuleRelativePath", "Public/DBDUtilTimer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDUtilTimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDUtilTimer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDUtilTimer_Statics::ClassParams = {
		&UDBDUtilTimer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDUtilTimer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDUtilTimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDUtilTimer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDUtilTimer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDUtilTimer, 514236647);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDUtilTimer>()
	{
		return UDBDUtilTimer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDUtilTimer(Z_Construct_UClass_UDBDUtilTimer, &UDBDUtilTimer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDUtilTimer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDUtilTimer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
