// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDTimerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTimerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTimerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTimerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UDBDTimerComponent::execGetPercentTimeElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentTimeElapsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execGetPercentTimeLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentTimeLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execGetStartTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStartTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execGetTimeElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeElapsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execGetTimeLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execIsDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execIsOnPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnPause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execResetTo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTo(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execUnpause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unpause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTimerComponent::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void UDBDTimerComponent::StaticRegisterNativesUDBDTimerComponent()
	{
		UClass* Class = UDBDTimerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPercentTimeElapsed", &UDBDTimerComponent::execGetPercentTimeElapsed },
			{ "GetPercentTimeLeft", &UDBDTimerComponent::execGetPercentTimeLeft },
			{ "GetStartTime", &UDBDTimerComponent::execGetStartTime },
			{ "GetTimeElapsed", &UDBDTimerComponent::execGetTimeElapsed },
			{ "GetTimeLeft", &UDBDTimerComponent::execGetTimeLeft },
			{ "IsDone", &UDBDTimerComponent::execIsDone },
			{ "IsOnPause", &UDBDTimerComponent::execIsOnPause },
			{ "Pause", &UDBDTimerComponent::execPause },
			{ "Reset", &UDBDTimerComponent::execReset },
			{ "ResetTo", &UDBDTimerComponent::execResetTo },
			{ "Stop", &UDBDTimerComponent::execStop },
			{ "Unpause", &UDBDTimerComponent::execUnpause },
			{ "Update", &UDBDTimerComponent::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics
	{
		struct DBDTimerComponent_eventGetPercentTimeElapsed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTimerComponent_eventGetPercentTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "GetPercentTimeElapsed", nullptr, nullptr, sizeof(DBDTimerComponent_eventGetPercentTimeElapsed_Parms), Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics
	{
		struct DBDTimerComponent_eventGetPercentTimeLeft_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTimerComponent_eventGetPercentTimeLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "GetPercentTimeLeft", nullptr, nullptr, sizeof(DBDTimerComponent_eventGetPercentTimeLeft_Parms), Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics
	{
		struct DBDTimerComponent_eventGetStartTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTimerComponent_eventGetStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "GetStartTime", nullptr, nullptr, sizeof(DBDTimerComponent_eventGetStartTime_Parms), Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_GetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_GetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics
	{
		struct DBDTimerComponent_eventGetTimeElapsed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTimerComponent_eventGetTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "GetTimeElapsed", nullptr, nullptr, sizeof(DBDTimerComponent_eventGetTimeElapsed_Parms), Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics
	{
		struct DBDTimerComponent_eventGetTimeLeft_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTimerComponent_eventGetTimeLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "GetTimeLeft", nullptr, nullptr, sizeof(DBDTimerComponent_eventGetTimeLeft_Parms), Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics
	{
		struct DBDTimerComponent_eventIsDone_Parms
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
	void Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDTimerComponent_eventIsDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTimerComponent_eventIsDone_Parms), &Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "IsDone", nullptr, nullptr, sizeof(DBDTimerComponent_eventIsDone_Parms), Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_IsDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_IsDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics
	{
		struct DBDTimerComponent_eventIsOnPause_Parms
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
	void Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDTimerComponent_eventIsOnPause_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTimerComponent_eventIsOnPause_Parms), &Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "IsOnPause", nullptr, nullptr, sizeof(DBDTimerComponent_eventIsOnPause_Parms), Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_IsOnPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_IsOnPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics
	{
		struct DBDTimerComponent_eventResetTo_Parms
		{
			float time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTimerComponent_eventResetTo_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "ResetTo", nullptr, nullptr, sizeof(DBDTimerComponent_eventResetTo_Parms), Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_ResetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_ResetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_Unpause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_Unpause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_Unpause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "Unpause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_Unpause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_Unpause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_Unpause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_Unpause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTimerComponent_Update_Statics
	{
		struct DBDTimerComponent_eventUpdate_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTimerComponent_eventUpdate_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTimerComponent, nullptr, "Update", nullptr, nullptr, sizeof(DBDTimerComponent_eventUpdate_Parms), Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTimerComponent_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTimerComponent_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDTimerComponent_NoRegister()
	{
		return UDBDTimerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTimerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDTimerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDTimerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeElapsed, "GetPercentTimeElapsed" }, // 2388401675
		{ &Z_Construct_UFunction_UDBDTimerComponent_GetPercentTimeLeft, "GetPercentTimeLeft" }, // 4149527139
		{ &Z_Construct_UFunction_UDBDTimerComponent_GetStartTime, "GetStartTime" }, // 1514629183
		{ &Z_Construct_UFunction_UDBDTimerComponent_GetTimeElapsed, "GetTimeElapsed" }, // 3694759891
		{ &Z_Construct_UFunction_UDBDTimerComponent_GetTimeLeft, "GetTimeLeft" }, // 2489661338
		{ &Z_Construct_UFunction_UDBDTimerComponent_IsDone, "IsDone" }, // 1246460280
		{ &Z_Construct_UFunction_UDBDTimerComponent_IsOnPause, "IsOnPause" }, // 38223526
		{ &Z_Construct_UFunction_UDBDTimerComponent_Pause, "Pause" }, // 2402508448
		{ &Z_Construct_UFunction_UDBDTimerComponent_Reset, "Reset" }, // 3259283374
		{ &Z_Construct_UFunction_UDBDTimerComponent_ResetTo, "ResetTo" }, // 1483834372
		{ &Z_Construct_UFunction_UDBDTimerComponent_Stop, "Stop" }, // 357138775
		{ &Z_Construct_UFunction_UDBDTimerComponent_Unpause, "Unpause" }, // 3320190390
		{ &Z_Construct_UFunction_UDBDTimerComponent_Update, "Update" }, // 1750200673
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTimerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDTimerComponent.h" },
		{ "ModuleRelativePath", "Public/DBDTimerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTimerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTimerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTimerComponent_Statics::ClassParams = {
		&UDBDTimerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDTimerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTimerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTimerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTimerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTimerComponent, 176638033);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDTimerComponent>()
	{
		return UDBDTimerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTimerComponent(Z_Construct_UClass_UDBDTimerComponent, &UDBDTimerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDTimerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTimerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
