// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterBehaviour() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UAICharacterBehaviour::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICharacterBehaviour::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICharacterBehaviour::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Resume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICharacterBehaviour::execSetEnable)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnable(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICharacterBehaviour::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICharacterBehaviour::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICharacterBehaviour::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void UAICharacterBehaviour::StaticRegisterNativesUAICharacterBehaviour()
	{
		UClass* Class = UAICharacterBehaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnabled", &UAICharacterBehaviour::execIsEnabled },
			{ "Pause", &UAICharacterBehaviour::execPause },
			{ "Resume", &UAICharacterBehaviour::execResume },
			{ "SetEnable", &UAICharacterBehaviour::execSetEnable },
			{ "Start", &UAICharacterBehaviour::execStart },
			{ "Stop", &UAICharacterBehaviour::execStop },
			{ "Update", &UAICharacterBehaviour::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics
	{
		struct AICharacterBehaviour_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AICharacterBehaviour_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AICharacterBehaviour_eventIsEnabled_Parms), &Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviour, nullptr, "IsEnabled", nullptr, nullptr, sizeof(AICharacterBehaviour_eventIsEnabled_Parms), Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICharacterBehaviour_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviour_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviour_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviour, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviour_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviour_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviour_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICharacterBehaviour_Resume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviour_Resume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviour_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviour, nullptr, "Resume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviour_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviour_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviour_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics
	{
		struct AICharacterBehaviour_eventSetEnable_Parms
		{
			bool enable;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((AICharacterBehaviour_eventSetEnable_Parms*)Obj)->enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AICharacterBehaviour_eventSetEnable_Parms), &Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::NewProp_enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviour, nullptr, "SetEnable", nullptr, nullptr, sizeof(AICharacterBehaviour_eventSetEnable_Parms), Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviour_SetEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviour_SetEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICharacterBehaviour_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviour_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviour_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviour, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviour_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviour_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviour_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICharacterBehaviour_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviour_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviour_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviour, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviour_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviour_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviour_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics
	{
		struct AICharacterBehaviour_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBehaviour_eventUpdate_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviour, nullptr, "Update", nullptr, nullptr, sizeof(AICharacterBehaviour_eventUpdate_Parms), Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviour_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviour_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICharacterBehaviour_NoRegister()
	{
		return UAICharacterBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICharacterBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICharacterBehaviour_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICharacterBehaviour_IsEnabled, "IsEnabled" }, // 1395024514
		{ &Z_Construct_UFunction_UAICharacterBehaviour_Pause, "Pause" }, // 2743002933
		{ &Z_Construct_UFunction_UAICharacterBehaviour_Resume, "Resume" }, // 2777107299
		{ &Z_Construct_UFunction_UAICharacterBehaviour_SetEnable, "SetEnable" }, // 2344573454
		{ &Z_Construct_UFunction_UAICharacterBehaviour_Start, "Start" }, // 3368875193
		{ &Z_Construct_UFunction_UAICharacterBehaviour_Stop, "Stop" }, // 315652396
		{ &Z_Construct_UFunction_UAICharacterBehaviour_Update, "Update" }, // 840577969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviour_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AICharacterBehaviour.h" },
		{ "ModuleRelativePath", "Public/AICharacterBehaviour.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterBehaviour_Statics::ClassParams = {
		&UAICharacterBehaviour::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterBehaviour, 2219272801);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterBehaviour>()
	{
		return UAICharacterBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterBehaviour(Z_Construct_UClass_UAICharacterBehaviour, &UAICharacterBehaviour::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
