// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GlyphNavMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlyphNavMovementComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGlyphNavMovementComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGlyphNavMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGlyphNavMovementComponent::execGetGlyphOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetGlyphOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlyphNavMovementComponent::execSetAcceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_acceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAcceleration(Z_Param_acceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlyphNavMovementComponent::execSetDeceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeceleration(Z_Param_deceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlyphNavMovementComponent::execSetMaxSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSpeed(Z_Param_maxSpeed);
		P_NATIVE_END;
	}
	void UGlyphNavMovementComponent::StaticRegisterNativesUGlyphNavMovementComponent()
	{
		UClass* Class = UGlyphNavMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlyphOwner", &UGlyphNavMovementComponent::execGetGlyphOwner },
			{ "SetAcceleration", &UGlyphNavMovementComponent::execSetAcceleration },
			{ "SetDeceleration", &UGlyphNavMovementComponent::execSetDeceleration },
			{ "SetMaxSpeed", &UGlyphNavMovementComponent::execSetMaxSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics
	{
		struct GlyphNavMovementComponent_eventGetGlyphOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlyphNavMovementComponent_eventGetGlyphOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlyphNavMovementComponent, nullptr, "GetGlyphOwner", nullptr, nullptr, sizeof(GlyphNavMovementComponent_eventGetGlyphOwner_Parms), Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics
	{
		struct GlyphNavMovementComponent_eventSetAcceleration_Parms
		{
			float acceleration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_acceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::NewProp_acceleration = { "acceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlyphNavMovementComponent_eventSetAcceleration_Parms, acceleration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::NewProp_acceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlyphNavMovementComponent, nullptr, "SetAcceleration", nullptr, nullptr, sizeof(GlyphNavMovementComponent_eventSetAcceleration_Parms), Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics
	{
		struct GlyphNavMovementComponent_eventSetDeceleration_Parms
		{
			float deceleration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::NewProp_deceleration = { "deceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlyphNavMovementComponent_eventSetDeceleration_Parms, deceleration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::NewProp_deceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlyphNavMovementComponent, nullptr, "SetDeceleration", nullptr, nullptr, sizeof(GlyphNavMovementComponent_eventSetDeceleration_Parms), Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics
	{
		struct GlyphNavMovementComponent_eventSetMaxSpeed_Parms
		{
			float maxSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlyphNavMovementComponent_eventSetMaxSpeed_Parms, maxSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::NewProp_maxSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlyphNavMovementComponent, nullptr, "SetMaxSpeed", nullptr, nullptr, sizeof(GlyphNavMovementComponent_eventSetMaxSpeed_Parms), Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGlyphNavMovementComponent_NoRegister()
	{
		return UGlyphNavMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGlyphNavMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__brakingDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__brakingDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__deceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPositionCorrected_MetaData[];
#endif
		static void NewProp_bPositionCorrected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPositionCorrected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathFollowingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pathFollowingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__glyphOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlyphNavMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGlyphNavMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlyphNavMovementComponent_GetGlyphOwner, "GetGlyphOwner" }, // 2591084799
		{ &Z_Construct_UFunction_UGlyphNavMovementComponent_SetAcceleration, "SetAcceleration" }, // 3101940659
		{ &Z_Construct_UFunction_UGlyphNavMovementComponent_SetDeceleration, "SetDeceleration" }, // 236397565
		{ &Z_Construct_UFunction_UGlyphNavMovementComponent_SetMaxSpeed, "SetMaxSpeed" }, // 3450568576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphNavMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GlyphNavMovementComponent.h" },
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__brakingDeceleration_MetaData[] = {
		{ "Category", "GlyphNavMovementComponent" },
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__brakingDeceleration = { "_brakingDeceleration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlyphNavMovementComponent, _brakingDeceleration), METADATA_PARAMS(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__brakingDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__brakingDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__deceleration_MetaData[] = {
		{ "Category", "GlyphNavMovementComponent" },
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__deceleration = { "_deceleration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlyphNavMovementComponent, _deceleration), METADATA_PARAMS(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__deceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__deceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__acceleration_MetaData[] = {
		{ "Category", "GlyphNavMovementComponent" },
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__acceleration = { "_acceleration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlyphNavMovementComponent, _acceleration), METADATA_PARAMS(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__maxSpeed_MetaData[] = {
		{ "Category", "GlyphNavMovementComponent" },
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__maxSpeed = { "_maxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlyphNavMovementComponent, _maxSpeed), METADATA_PARAMS(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__maxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__maxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp_bPositionCorrected_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp_bPositionCorrected_SetBit(void* Obj)
	{
		((UGlyphNavMovementComponent*)Obj)->bPositionCorrected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp_bPositionCorrected = { "bPositionCorrected", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGlyphNavMovementComponent), &Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp_bPositionCorrected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp_bPositionCorrected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp_bPositionCorrected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__pathFollowingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__pathFollowingComponent = { "_pathFollowingComponent", nullptr, (EPropertyFlags)0x0020080000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlyphNavMovementComponent, _pathFollowingComponent), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__pathFollowingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__pathFollowingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__glyphOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlyphNavMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__glyphOwner = { "_glyphOwner", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlyphNavMovementComponent, _glyphOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__glyphOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__glyphOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlyphNavMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__brakingDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__deceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__maxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp_bPositionCorrected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__pathFollowingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlyphNavMovementComponent_Statics::NewProp__glyphOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlyphNavMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlyphNavMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlyphNavMovementComponent_Statics::ClassParams = {
		&UGlyphNavMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGlyphNavMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphNavMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlyphNavMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlyphNavMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlyphNavMovementComponent, 2973765013);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGlyphNavMovementComponent>()
	{
		return UGlyphNavMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlyphNavMovementComponent(Z_Construct_UClass_UGlyphNavMovementComponent, &UGlyphNavMovementComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGlyphNavMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlyphNavMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
