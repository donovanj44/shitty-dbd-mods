// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/LookAtTargetKillerSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtTargetKillerSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULookAtTargetKillerSubAnimInstance::execOnChaseEnded)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_chaseTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChaseEnded(Z_Param_target,Z_Param_chaseTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULookAtTargetKillerSubAnimInstance::execOnChaseStarted)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChaseStarted(Z_Param_target);
		P_NATIVE_END;
	}
	void ULookAtTargetKillerSubAnimInstance::StaticRegisterNativesULookAtTargetKillerSubAnimInstance()
	{
		UClass* Class = ULookAtTargetKillerSubAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChaseEnded", &ULookAtTargetKillerSubAnimInstance::execOnChaseEnded },
			{ "OnChaseStarted", &ULookAtTargetKillerSubAnimInstance::execOnChaseStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics
	{
		struct LookAtTargetKillerSubAnimInstance_eventOnChaseEnded_Parms
		{
			ADBDPlayer* target;
			float chaseTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chaseTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::NewProp_chaseTime = { "chaseTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LookAtTargetKillerSubAnimInstance_eventOnChaseEnded_Parms, chaseTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LookAtTargetKillerSubAnimInstance_eventOnChaseEnded_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::NewProp_chaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance, nullptr, "OnChaseEnded", nullptr, nullptr, sizeof(LookAtTargetKillerSubAnimInstance_eventOnChaseEnded_Parms), Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics
	{
		struct LookAtTargetKillerSubAnimInstance_eventOnChaseStarted_Parms
		{
			ADBDPlayer* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LookAtTargetKillerSubAnimInstance_eventOnChaseStarted_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance, nullptr, "OnChaseStarted", nullptr, nullptr, sizeof(LookAtTargetKillerSubAnimInstance_eventOnChaseStarted_Parms), Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_NoRegister()
	{
		return ULookAtTargetKillerSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasVisibleTarget_MetaData[];
#endif
		static void NewProp__hasVisibleTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasVisibleTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pitchToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pitchToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sameTargetScoreFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sameTargetScoreFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__angleScoreFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__angleScoreFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceScoreFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__distanceScoreFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preferredMinLookAtTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__preferredMinLookAtTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__rootSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__headSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__headSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDistanceForTargetDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxDistanceForTargetDetection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseEnded, "OnChaseEnded" }, // 1578156530
		{ &Z_Construct_UFunction_ULookAtTargetKillerSubAnimInstance_OnChaseStarted, "OnChaseStarted" }, // 4272123207
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "LookAtTargetKillerSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__hasVisibleTarget_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__hasVisibleTarget_SetBit(void* Obj)
	{
		((ULookAtTargetKillerSubAnimInstance*)Obj)->_hasVisibleTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__hasVisibleTarget = { "_hasVisibleTarget", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULookAtTargetKillerSubAnimInstance), &Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__hasVisibleTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__hasVisibleTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__hasVisibleTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__pitchToTarget_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__pitchToTarget = { "_pitchToTarget", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _pitchToTarget), METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__pitchToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__pitchToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__yawToTarget_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__yawToTarget = { "_yawToTarget", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _yawToTarget), METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__yawToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__yawToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__sameTargetScoreFactor_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__sameTargetScoreFactor = { "_sameTargetScoreFactor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _sameTargetScoreFactor), METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__sameTargetScoreFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__sameTargetScoreFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__angleScoreFactor_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__angleScoreFactor = { "_angleScoreFactor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _angleScoreFactor), METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__angleScoreFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__angleScoreFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__distanceScoreFactor_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__distanceScoreFactor = { "_distanceScoreFactor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _distanceScoreFactor), METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__distanceScoreFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__distanceScoreFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__preferredMinLookAtTime_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__preferredMinLookAtTime = { "_preferredMinLookAtTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _preferredMinLookAtTime), METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__preferredMinLookAtTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__preferredMinLookAtTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__rootSocket_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__rootSocket = { "_rootSocket", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _rootSocket), METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__rootSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__rootSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__headSocket_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__headSocket = { "_headSocket", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _headSocket), METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__headSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__headSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__maxDistanceForTargetDetection_MetaData[] = {
		{ "Category", "LookAtTargetKillerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtTargetKillerSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__maxDistanceForTargetDetection = { "_maxDistanceForTargetDetection", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _maxDistanceForTargetDetection), METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__maxDistanceForTargetDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__maxDistanceForTargetDetection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__hasVisibleTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__pitchToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__yawToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__sameTargetScoreFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__angleScoreFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__distanceScoreFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__preferredMinLookAtTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__rootSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__headSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::NewProp__maxDistanceForTargetDetection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAtTargetKillerSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::ClassParams = {
		&ULookAtTargetKillerSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULookAtTargetKillerSubAnimInstance, 3907769562);
	template<> DBDANIMATION_API UClass* StaticClass<ULookAtTargetKillerSubAnimInstance>()
	{
		return ULookAtTargetKillerSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULookAtTargetKillerSubAnimInstance(Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance, &ULookAtTargetKillerSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("ULookAtTargetKillerSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtTargetKillerSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
