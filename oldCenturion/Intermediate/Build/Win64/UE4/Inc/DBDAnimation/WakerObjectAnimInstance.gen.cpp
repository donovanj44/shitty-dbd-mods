// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/WakerObjectAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWakerObjectAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UWakerObjectAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UWakerObjectAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AWakerObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWakerObjectAnimInstance::execGetWakerObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWakerObject**)Z_Param__Result=P_THIS->GetWakerObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWakerObjectAnimInstance::execGetWakerObjectCharge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWakerObjectCharge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWakerObjectAnimInstance::execGetWakerObjectChargeComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWakerObjectChargeComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWakerObjectAnimInstance::execGetWakerObjectStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWakerObjectStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWakerObjectAnimInstance::execResetReappearTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetReappearTimer();
		P_NATIVE_END;
	}
	static FName NAME_UWakerObjectAnimInstance_OnReappear = FName(TEXT("OnReappear"));
	void UWakerObjectAnimInstance::OnReappear()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWakerObjectAnimInstance_OnReappear),NULL);
	}
	void UWakerObjectAnimInstance::StaticRegisterNativesUWakerObjectAnimInstance()
	{
		UClass* Class = UWakerObjectAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWakerObject", &UWakerObjectAnimInstance::execGetWakerObject },
			{ "GetWakerObjectCharge", &UWakerObjectAnimInstance::execGetWakerObjectCharge },
			{ "GetWakerObjectChargeComplete", &UWakerObjectAnimInstance::execGetWakerObjectChargeComplete },
			{ "GetWakerObjectStarted", &UWakerObjectAnimInstance::execGetWakerObjectStarted },
			{ "ResetReappearTimer", &UWakerObjectAnimInstance::execResetReappearTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics
	{
		struct WakerObjectAnimInstance_eventGetWakerObject_Parms
		{
			AWakerObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WakerObjectAnimInstance_eventGetWakerObject_Parms, ReturnValue), Z_Construct_UClass_AWakerObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWakerObjectAnimInstance, nullptr, "GetWakerObject", nullptr, nullptr, sizeof(WakerObjectAnimInstance_eventGetWakerObject_Parms), Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics
	{
		struct WakerObjectAnimInstance_eventGetWakerObjectCharge_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WakerObjectAnimInstance_eventGetWakerObjectCharge_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWakerObjectAnimInstance, nullptr, "GetWakerObjectCharge", nullptr, nullptr, sizeof(WakerObjectAnimInstance_eventGetWakerObjectCharge_Parms), Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics
	{
		struct WakerObjectAnimInstance_eventGetWakerObjectChargeComplete_Parms
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
	void Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WakerObjectAnimInstance_eventGetWakerObjectChargeComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObjectAnimInstance_eventGetWakerObjectChargeComplete_Parms), &Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWakerObjectAnimInstance, nullptr, "GetWakerObjectChargeComplete", nullptr, nullptr, sizeof(WakerObjectAnimInstance_eventGetWakerObjectChargeComplete_Parms), Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics
	{
		struct WakerObjectAnimInstance_eventGetWakerObjectStarted_Parms
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
	void Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WakerObjectAnimInstance_eventGetWakerObjectStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObjectAnimInstance_eventGetWakerObjectStarted_Parms), &Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWakerObjectAnimInstance, nullptr, "GetWakerObjectStarted", nullptr, nullptr, sizeof(WakerObjectAnimInstance_eventGetWakerObjectStarted_Parms), Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWakerObjectAnimInstance_OnReappear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWakerObjectAnimInstance_OnReappear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWakerObjectAnimInstance_OnReappear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWakerObjectAnimInstance, nullptr, "OnReappear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWakerObjectAnimInstance_OnReappear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_OnReappear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWakerObjectAnimInstance_OnReappear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWakerObjectAnimInstance_OnReappear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWakerObjectAnimInstance_ResetReappearTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWakerObjectAnimInstance_ResetReappearTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWakerObjectAnimInstance_ResetReappearTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWakerObjectAnimInstance, nullptr, "ResetReappearTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWakerObjectAnimInstance_ResetReappearTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWakerObjectAnimInstance_ResetReappearTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWakerObjectAnimInstance_ResetReappearTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWakerObjectAnimInstance_ResetReappearTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWakerObjectAnimInstance_NoRegister()
	{
		return UWakerObjectAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWakerObjectAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cancelEnd_MetaData[];
#endif
		static void NewProp__cancelEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__cancelEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__respawnEnd_MetaData[];
#endif
		static void NewProp__respawnEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__respawnEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wakerObjectStarted_MetaData[];
#endif
		static void NewProp__wakerObjectStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__wakerObjectStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inEnd_MetaData[];
#endif
		static void NewProp__inEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reset_MetaData[];
#endif
		static void NewProp__reset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__reset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outEnd_MetaData[];
#endif
		static void NewProp__outEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__outEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionComplete_MetaData[];
#endif
		static void NewProp__interactionComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__interactionComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeStarted_MetaData[];
#endif
		static void NewProp__chargeStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__chargeStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wakeUpCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wakeUpCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reappearTimerCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__reappearTimerCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWakerObjectAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWakerObjectAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObject, "GetWakerObject" }, // 1470755882
		{ &Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectCharge, "GetWakerObjectCharge" }, // 865719094
		{ &Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectChargeComplete, "GetWakerObjectChargeComplete" }, // 3398343558
		{ &Z_Construct_UFunction_UWakerObjectAnimInstance_GetWakerObjectStarted, "GetWakerObjectStarted" }, // 763906995
		{ &Z_Construct_UFunction_UWakerObjectAnimInstance_OnReappear, "OnReappear" }, // 3630740760
		{ &Z_Construct_UFunction_UWakerObjectAnimInstance_ResetReappearTimer, "ResetReappearTimer" }, // 2903978694
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "WakerObjectAnimInstance.h" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__cancelEnd_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__cancelEnd_SetBit(void* Obj)
	{
		((UWakerObjectAnimInstance*)Obj)->_cancelEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__cancelEnd = { "_cancelEnd", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWakerObjectAnimInstance), &Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__cancelEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__cancelEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__cancelEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__respawnEnd_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__respawnEnd_SetBit(void* Obj)
	{
		((UWakerObjectAnimInstance*)Obj)->_respawnEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__respawnEnd = { "_respawnEnd", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWakerObjectAnimInstance), &Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__respawnEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__respawnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__respawnEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakerObjectStarted_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakerObjectStarted_SetBit(void* Obj)
	{
		((UWakerObjectAnimInstance*)Obj)->_wakerObjectStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakerObjectStarted = { "_wakerObjectStarted", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWakerObjectAnimInstance), &Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakerObjectStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakerObjectStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakerObjectStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__inEnd_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__inEnd_SetBit(void* Obj)
	{
		((UWakerObjectAnimInstance*)Obj)->_inEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__inEnd = { "_inEnd", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWakerObjectAnimInstance), &Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__inEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__inEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__inEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reset_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reset_SetBit(void* Obj)
	{
		((UWakerObjectAnimInstance*)Obj)->_reset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reset = { "_reset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWakerObjectAnimInstance), &Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__outEnd_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__outEnd_SetBit(void* Obj)
	{
		((UWakerObjectAnimInstance*)Obj)->_outEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__outEnd = { "_outEnd", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWakerObjectAnimInstance), &Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__outEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__outEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__outEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__interactionComplete_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__interactionComplete_SetBit(void* Obj)
	{
		((UWakerObjectAnimInstance*)Obj)->_interactionComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__interactionComplete = { "_interactionComplete", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWakerObjectAnimInstance), &Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__interactionComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__interactionComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__interactionComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__chargeStarted_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__chargeStarted_SetBit(void* Obj)
	{
		((UWakerObjectAnimInstance*)Obj)->_chargeStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__chargeStarted = { "_chargeStarted", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWakerObjectAnimInstance), &Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__chargeStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__chargeStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__chargeStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakeUpCharge_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakeUpCharge = { "_wakeUpCharge", nullptr, (EPropertyFlags)0x0020080000002015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWakerObjectAnimInstance, _wakeUpCharge), METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakeUpCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakeUpCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reappearTimerCooldown_MetaData[] = {
		{ "Category", "WakerObjectAnimInstance" },
		{ "ModuleRelativePath", "Public/WakerObjectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reappearTimerCooldown = { "_reappearTimerCooldown", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWakerObjectAnimInstance, _reappearTimerCooldown), METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reappearTimerCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reappearTimerCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWakerObjectAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__cancelEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__respawnEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakerObjectStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__inEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__outEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__interactionComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__chargeStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__wakeUpCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWakerObjectAnimInstance_Statics::NewProp__reappearTimerCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWakerObjectAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWakerObjectAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWakerObjectAnimInstance_Statics::ClassParams = {
		&UWakerObjectAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWakerObjectAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWakerObjectAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWakerObjectAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWakerObjectAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWakerObjectAnimInstance, 515604429);
	template<> DBDANIMATION_API UClass* StaticClass<UWakerObjectAnimInstance>()
	{
		return UWakerObjectAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWakerObjectAnimInstance(Z_Construct_UClass_UWakerObjectAnimInstance, &UWakerObjectAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UWakerObjectAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWakerObjectAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
