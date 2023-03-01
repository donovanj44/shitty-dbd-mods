// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/ArmIKSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmIKSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UArmIKSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DBDANIMATION_API UEnum* Z_Construct_UEnum_DBDAnimation_EArmIkMode();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UArmDetectionFanComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UArmIKSurvivorSubAnimInstance::execChangeMode)
	{
		P_GET_ENUM(EArmIkMode,Z_Param_newMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMode(EArmIkMode(Z_Param_newMode));
		P_NATIVE_END;
	}
	void UArmIKSurvivorSubAnimInstance::StaticRegisterNativesUArmIKSurvivorSubAnimInstance()
	{
		UClass* Class = UArmIKSurvivorSubAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMode", &UArmIKSurvivorSubAnimInstance::execChangeMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics
	{
		struct ArmIKSurvivorSubAnimInstance_eventChangeMode_Parms
		{
			EArmIkMode newMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::NewProp_newMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::NewProp_newMode = { "newMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArmIKSurvivorSubAnimInstance_eventChangeMode_Parms, newMode), Z_Construct_UEnum_DBDAnimation_EArmIkMode, METADATA_PARAMS(Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::NewProp_newMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::NewProp_newMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::NewProp_newMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::NewProp_newMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::NewProp_newMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArmIKSurvivorSubAnimInstance, nullptr, "ChangeMode", nullptr, nullptr, sizeof(ArmIKSurvivorSubAnimInstance_eventChangeMode_Parms), Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_NoRegister()
	{
		return UArmIKSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__meshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftDetectionFan_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__leftDetectionFan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightDetectionFan_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rightDetectionFan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__armIkMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__armIkMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__armIkMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftArmIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__leftArmIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightArmIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rightArmIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reachPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__reachPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__alphaLerpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__alphaLerpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__handInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__handInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__armInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__armInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localWristPitchRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__localWristPitchRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localWristYawRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__localWristYawRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftWristUpRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftWristUpRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightWristUpRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightWristUpRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArmIKSurvivorSubAnimInstance_ChangeMode, "ChangeMode" }, // 1414001072
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ArmIKSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__meshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__meshComponent = { "_meshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _meshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__meshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftDetectionFan_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftDetectionFan = { "_leftDetectionFan", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _leftDetectionFan), Z_Construct_UClass_UArmDetectionFanComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftDetectionFan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftDetectionFan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightDetectionFan_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightDetectionFan = { "_rightDetectionFan", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _rightDetectionFan), Z_Construct_UClass_UArmDetectionFanComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightDetectionFan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightDetectionFan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armIkMode_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armIkMode = { "_armIkMode", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _armIkMode), Z_Construct_UEnum_DBDAnimation_EArmIkMode, METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armIkMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armIkMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armIkMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftArmIKAlpha_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftArmIKAlpha = { "_leftArmIKAlpha", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _leftArmIKAlpha), METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftArmIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftArmIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightArmIKAlpha_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightArmIKAlpha = { "_rightArmIKAlpha", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _rightArmIKAlpha), METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightArmIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightArmIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__reachPadding_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__reachPadding = { "_reachPadding", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _reachPadding), METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__reachPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__reachPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__alphaLerpTime_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__alphaLerpTime = { "_alphaLerpTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _alphaLerpTime), METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__alphaLerpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__alphaLerpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__handInterpolationSpeed_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__handInterpolationSpeed = { "_handInterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _handInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__handInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__handInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armInterpolationSpeed_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armInterpolationSpeed = { "_armInterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _armInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristPitchRange_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristPitchRange = { "_localWristPitchRange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _localWristPitchRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristPitchRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristPitchRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristYawRange_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristYawRange = { "_localWristYawRange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _localWristYawRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristYawRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristYawRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftWristUpRotation_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftWristUpRotation = { "_leftWristUpRotation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _leftWristUpRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftWristUpRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftWristUpRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightWristUpRotation_MetaData[] = {
		{ "Category", "ArmIKSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ArmIKSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightWristUpRotation = { "_rightWristUpRotation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _rightWristUpRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightWristUpRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightWristUpRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__meshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftDetectionFan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightDetectionFan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armIkMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armIkMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftArmIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightArmIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__reachPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__alphaLerpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__handInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__armInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristPitchRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__localWristYawRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__leftWristUpRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::NewProp__rightWristUpRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArmIKSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::ClassParams = {
		&UArmIKSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArmIKSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArmIKSurvivorSubAnimInstance, 1835479282);
	template<> DBDANIMATION_API UClass* StaticClass<UArmIKSurvivorSubAnimInstance>()
	{
		return UArmIKSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArmIKSurvivorSubAnimInstance(Z_Construct_UClass_UArmIKSurvivorSubAnimInstance, &UArmIKSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UArmIKSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArmIKSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
