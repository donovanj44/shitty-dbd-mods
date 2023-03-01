// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/SleepingAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSleepingAnimInstance() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingAnimInstance_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USleepingAnimInstance::execOnMontageStart)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageStart(Z_Param_montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USleepingAnimInstance::execSetNeverIdle)
	{
		P_GET_UBOOL(Z_Param_neverIdle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNeverIdle(Z_Param_neverIdle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USleepingAnimInstance::execWakeup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Wakeup();
		P_NATIVE_END;
	}
	void USleepingAnimInstance::StaticRegisterNativesUSleepingAnimInstance()
	{
		UClass* Class = USleepingAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageStart", &USleepingAnimInstance::execOnMontageStart },
			{ "SetNeverIdle", &USleepingAnimInstance::execSetNeverIdle },
			{ "Wakeup", &USleepingAnimInstance::execWakeup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics
	{
		struct SleepingAnimInstance_eventOnMontageStart_Parms
		{
			UAnimMontage* montage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SleepingAnimInstance_eventOnMontageStart_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SleepingAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USleepingAnimInstance, nullptr, "OnMontageStart", nullptr, nullptr, sizeof(SleepingAnimInstance_eventOnMontageStart_Parms), Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics
	{
		struct SleepingAnimInstance_eventSetNeverIdle_Parms
		{
			bool neverIdle;
		};
		static void NewProp_neverIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_neverIdle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::NewProp_neverIdle_SetBit(void* Obj)
	{
		((SleepingAnimInstance_eventSetNeverIdle_Parms*)Obj)->neverIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::NewProp_neverIdle = { "neverIdle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SleepingAnimInstance_eventSetNeverIdle_Parms), &Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::NewProp_neverIdle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::NewProp_neverIdle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SleepingAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USleepingAnimInstance, nullptr, "SetNeverIdle", nullptr, nullptr, sizeof(SleepingAnimInstance_eventSetNeverIdle_Parms), Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USleepingAnimInstance_Wakeup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USleepingAnimInstance_Wakeup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SleepingAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USleepingAnimInstance_Wakeup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USleepingAnimInstance, nullptr, "Wakeup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USleepingAnimInstance_Wakeup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USleepingAnimInstance_Wakeup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USleepingAnimInstance_Wakeup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USleepingAnimInstance_Wakeup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USleepingAnimInstance_NoRegister()
	{
		return USleepingAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USleepingAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USleepingAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USleepingAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USleepingAnimInstance_OnMontageStart, "OnMontageStart" }, // 3929735927
		{ &Z_Construct_UFunction_USleepingAnimInstance_SetNeverIdle, "SetNeverIdle" }, // 3256789940
		{ &Z_Construct_UFunction_USleepingAnimInstance_Wakeup, "Wakeup" }, // 3360486935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USleepingAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SleepingAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SleepingAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USleepingAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USleepingAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USleepingAnimInstance_Statics::ClassParams = {
		&USleepingAnimInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USleepingAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USleepingAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USleepingAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USleepingAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USleepingAnimInstance, 1936158892);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<USleepingAnimInstance>()
	{
		return USleepingAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USleepingAnimInstance(Z_Construct_UClass_USleepingAnimInstance, &USleepingAnimInstance::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("USleepingAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USleepingAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
