// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TimerGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerGate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATimerGate_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATimerGate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGate();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(ATimerGate::execAddTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTime(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimerGate::execRemoveTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTime(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimerGate::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimerGate::execRushed)
	{
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rushed(Z_Param_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimerGate::execSetValues)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimerDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RushGain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RushBlockDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValues(Z_Param_TimerDuration,Z_Param_RushGain,Z_Param_RushBlockDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimerGate::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void ATimerGate::StaticRegisterNativesATimerGate()
	{
		UClass* Class = ATimerGate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTime", &ATimerGate::execAddTime },
			{ "RemoveTime", &ATimerGate::execRemoveTime },
			{ "Reset", &ATimerGate::execReset },
			{ "Rushed", &ATimerGate::execRushed },
			{ "SetValues", &ATimerGate::execSetValues },
			{ "Update", &ATimerGate::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATimerGate_AddTime_Statics
	{
		struct TimerGate_eventAddTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimerGate_AddTime_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerGate_eventAddTime_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimerGate_AddTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerGate_AddTime_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimerGate_AddTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimerGate_AddTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimerGate, nullptr, "AddTime", nullptr, nullptr, sizeof(TimerGate_eventAddTime_Parms), Z_Construct_UFunction_ATimerGate_AddTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_AddTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimerGate_AddTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_AddTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimerGate_AddTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimerGate_AddTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimerGate_RemoveTime_Statics
	{
		struct TimerGate_eventRemoveTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerGate_eventRemoveTime_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimerGate, nullptr, "RemoveTime", nullptr, nullptr, sizeof(TimerGate_eventRemoveTime_Parms), Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimerGate_RemoveTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimerGate_RemoveTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimerGate_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimerGate_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimerGate_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimerGate, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimerGate_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimerGate_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimerGate_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimerGate_Rushed_Statics
	{
		struct TimerGate_eventRushed_Parms
		{
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATimerGate_Rushed_Statics::NewProp_success_SetBit(void* Obj)
	{
		((TimerGate_eventRushed_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATimerGate_Rushed_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimerGate_eventRushed_Parms), &Z_Construct_UFunction_ATimerGate_Rushed_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimerGate_Rushed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerGate_Rushed_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimerGate_Rushed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimerGate_Rushed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimerGate, nullptr, "Rushed", nullptr, nullptr, sizeof(TimerGate_eventRushed_Parms), Z_Construct_UFunction_ATimerGate_Rushed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_Rushed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimerGate_Rushed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_Rushed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimerGate_Rushed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimerGate_Rushed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimerGate_SetValues_Statics
	{
		struct TimerGate_eventSetValues_Parms
		{
			float TimerDuration;
			float RushGain;
			float RushBlockDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RushBlockDuration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RushGain;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimerGate_SetValues_Statics::NewProp_RushBlockDuration = { "RushBlockDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerGate_eventSetValues_Parms, RushBlockDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimerGate_SetValues_Statics::NewProp_RushGain = { "RushGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerGate_eventSetValues_Parms, RushGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimerGate_SetValues_Statics::NewProp_TimerDuration = { "TimerDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerGate_eventSetValues_Parms, TimerDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimerGate_SetValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerGate_SetValues_Statics::NewProp_RushBlockDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerGate_SetValues_Statics::NewProp_RushGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerGate_SetValues_Statics::NewProp_TimerDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimerGate_SetValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimerGate_SetValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimerGate, nullptr, "SetValues", nullptr, nullptr, sizeof(TimerGate_eventSetValues_Parms), Z_Construct_UFunction_ATimerGate_SetValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_SetValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimerGate_SetValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_SetValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimerGate_SetValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimerGate_SetValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimerGate_Update_Statics
	{
		struct TimerGate_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimerGate_Update_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerGate_eventUpdate_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimerGate_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerGate_Update_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimerGate_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimerGate_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimerGate, nullptr, "Update", nullptr, nullptr, sizeof(TimerGate_eventUpdate_Parms), Z_Construct_UFunction_ATimerGate_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimerGate_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGate_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimerGate_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimerGate_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATimerGate_NoRegister()
	{
		return ATimerGate::StaticClass();
	}
	struct Z_Construct_UClass_ATimerGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__currentTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGate,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATimerGate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimerGate_AddTime, "AddTime" }, // 3995530279
		{ &Z_Construct_UFunction_ATimerGate_RemoveTime, "RemoveTime" }, // 1010322799
		{ &Z_Construct_UFunction_ATimerGate_Reset, "Reset" }, // 773324111
		{ &Z_Construct_UFunction_ATimerGate_Rushed, "Rushed" }, // 554570862
		{ &Z_Construct_UFunction_ATimerGate_SetValues, "SetValues" }, // 3403994462
		{ &Z_Construct_UFunction_ATimerGate_Update, "Update" }, // 1887958043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerGate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimerGate.h" },
		{ "ModuleRelativePath", "Public/TimerGate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerGate_Statics::NewProp__currentTime_MetaData[] = {
		{ "Category", "TimerGate" },
		{ "ModuleRelativePath", "Public/TimerGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimerGate_Statics::NewProp__currentTime = { "_currentTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerGate, _currentTime), METADATA_PARAMS(Z_Construct_UClass_ATimerGate_Statics::NewProp__currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerGate_Statics::NewProp__currentTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimerGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerGate_Statics::NewProp__currentTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerGate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerGate_Statics::ClassParams = {
		&ATimerGate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATimerGate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimerGate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATimerGate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerGate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerGate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerGate, 4149381225);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ATimerGate>()
	{
		return ATimerGate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerGate(Z_Construct_UClass_ATimerGate, &ATimerGate::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ATimerGate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerGate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
