// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlinkerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlinkerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlinkerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlinkerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTimerComponent_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBlinkerState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UBlinkerComponent::execGetAutomaticBlinkDelay)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_chainBlinkCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAutomaticBlinkDelay(Z_Param_chainBlinkCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execGetBlinkChainTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDBDTimerComponent**)Z_Param__Result=P_THIS->GetBlinkChainTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execGetBlinkerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBlinkerState*)Z_Param__Result=P_THIS->GetBlinkerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execGetChainedBlinkCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChainedBlinkCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execGetFatigueDuration)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_UBOOL(Z_Param_attacked);
		P_GET_PROPERTY(FIntProperty,Z_Param_blinkCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFatigueDuration(Z_Param_player,Z_Param_attacked,Z_Param_blinkCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execGetInterpolatedIndicatorPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_blinkTarget);
		P_GET_STRUCT(FVector,Z_Param_indicatorPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInterpolatedIndicatorPosition(Z_Param_blinkTarget,Z_Param_indicatorPosition,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execIncrementChainedBlinkCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementChainedBlinkCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execIsReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execLocalAddRandomToTargetLocation)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT(FVector,Z_Param_targetLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->LocalAddRandomToTargetLocation(Z_Param_player,Z_Param_targetLocation,Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execSetBlinkerState)
	{
		P_GET_ENUM(EBlinkerState,Z_Param_blinkerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlinkerState(EBlinkerState(Z_Param_blinkerState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execSetChainedBlinkCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_blinkCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChainedBlinkCount(Z_Param_blinkCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execShouldInterpolateIndicatorPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldInterpolateIndicatorPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkerComponent::execUpdateTargetLocation)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_blinkDistance);
		P_GET_TARRAY_REF(float,Z_Param_Out_scanPercentLocations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->UpdateTargetLocation(Z_Param_player,Z_Param_blinkDistance,Z_Param_Out_scanPercentLocations);
		P_NATIVE_END;
	}
	void UBlinkerComponent::StaticRegisterNativesUBlinkerComponent()
	{
		UClass* Class = UBlinkerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAutomaticBlinkDelay", &UBlinkerComponent::execGetAutomaticBlinkDelay },
			{ "GetBlinkChainTimer", &UBlinkerComponent::execGetBlinkChainTimer },
			{ "GetBlinkerState", &UBlinkerComponent::execGetBlinkerState },
			{ "GetChainedBlinkCount", &UBlinkerComponent::execGetChainedBlinkCount },
			{ "GetFatigueDuration", &UBlinkerComponent::execGetFatigueDuration },
			{ "GetInterpolatedIndicatorPosition", &UBlinkerComponent::execGetInterpolatedIndicatorPosition },
			{ "IncrementChainedBlinkCount", &UBlinkerComponent::execIncrementChainedBlinkCount },
			{ "IsReady", &UBlinkerComponent::execIsReady },
			{ "LocalAddRandomToTargetLocation", &UBlinkerComponent::execLocalAddRandomToTargetLocation },
			{ "SetBlinkerState", &UBlinkerComponent::execSetBlinkerState },
			{ "SetChainedBlinkCount", &UBlinkerComponent::execSetChainedBlinkCount },
			{ "ShouldInterpolateIndicatorPosition", &UBlinkerComponent::execShouldInterpolateIndicatorPosition },
			{ "UpdateTargetLocation", &UBlinkerComponent::execUpdateTargetLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics
	{
		struct BlinkerComponent_eventGetAutomaticBlinkDelay_Parms
		{
			int32 chainBlinkCount;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chainBlinkCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetAutomaticBlinkDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::NewProp_chainBlinkCount = { "chainBlinkCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetAutomaticBlinkDelay_Parms, chainBlinkCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::NewProp_chainBlinkCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "GetAutomaticBlinkDelay", nullptr, nullptr, sizeof(BlinkerComponent_eventGetAutomaticBlinkDelay_Parms), Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics
	{
		struct BlinkerComponent_eventGetBlinkChainTimer_Parms
		{
			UDBDTimerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetBlinkChainTimer_Parms, ReturnValue), Z_Construct_UClass_UDBDTimerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "GetBlinkChainTimer", nullptr, nullptr, sizeof(BlinkerComponent_eventGetBlinkChainTimer_Parms), Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics
	{
		struct BlinkerComponent_eventGetBlinkerState_Parms
		{
			EBlinkerState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetBlinkerState_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_EBlinkerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "GetBlinkerState", nullptr, nullptr, sizeof(BlinkerComponent_eventGetBlinkerState_Parms), Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics
	{
		struct BlinkerComponent_eventGetChainedBlinkCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetChainedBlinkCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "GetChainedBlinkCount", nullptr, nullptr, sizeof(BlinkerComponent_eventGetChainedBlinkCount_Parms), Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics
	{
		struct BlinkerComponent_eventGetFatigueDuration_Parms
		{
			ADBDPlayer* player;
			bool attacked;
			int32 blinkCount;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_blinkCount;
		static void NewProp_attacked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_attacked;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetFatigueDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_blinkCount = { "blinkCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetFatigueDuration_Parms, blinkCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_attacked_SetBit(void* Obj)
	{
		((BlinkerComponent_eventGetFatigueDuration_Parms*)Obj)->attacked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_attacked = { "attacked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlinkerComponent_eventGetFatigueDuration_Parms), &Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_attacked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetFatigueDuration_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_blinkCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_attacked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "GetFatigueDuration", nullptr, nullptr, sizeof(BlinkerComponent_eventGetFatigueDuration_Parms), Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics
	{
		struct BlinkerComponent_eventGetInterpolatedIndicatorPosition_Parms
		{
			FVector blinkTarget;
			FVector indicatorPosition;
			float deltaTime;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_indicatorPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_blinkTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetInterpolatedIndicatorPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetInterpolatedIndicatorPosition_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::NewProp_indicatorPosition = { "indicatorPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetInterpolatedIndicatorPosition_Parms, indicatorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::NewProp_blinkTarget = { "blinkTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventGetInterpolatedIndicatorPosition_Parms, blinkTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::NewProp_indicatorPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::NewProp_blinkTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "GetInterpolatedIndicatorPosition", nullptr, nullptr, sizeof(BlinkerComponent_eventGetInterpolatedIndicatorPosition_Parms), Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_IncrementChainedBlinkCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_IncrementChainedBlinkCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_IncrementChainedBlinkCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "IncrementChainedBlinkCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_IncrementChainedBlinkCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_IncrementChainedBlinkCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_IncrementChainedBlinkCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_IncrementChainedBlinkCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics
	{
		struct BlinkerComponent_eventIsReady_Parms
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
	void Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlinkerComponent_eventIsReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlinkerComponent_eventIsReady_Parms), &Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "IsReady", nullptr, nullptr, sizeof(BlinkerComponent_eventIsReady_Parms), Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_IsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_IsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics
	{
		struct BlinkerComponent_eventLocalAddRandomToTargetLocation_Parms
		{
			ADBDPlayer* player;
			FVector targetLocation;
			float distance;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventLocalAddRandomToTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventLocalAddRandomToTargetLocation_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventLocalAddRandomToTargetLocation_Parms, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventLocalAddRandomToTargetLocation_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::NewProp_targetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "LocalAddRandomToTargetLocation", nullptr, nullptr, sizeof(BlinkerComponent_eventLocalAddRandomToTargetLocation_Parms), Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics
	{
		struct BlinkerComponent_eventSetBlinkerState_Parms
		{
			EBlinkerState blinkerState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_blinkerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_blinkerState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::NewProp_blinkerState = { "blinkerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventSetBlinkerState_Parms, blinkerState), Z_Construct_UEnum_DeadByDaylight_EBlinkerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::NewProp_blinkerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::NewProp_blinkerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::NewProp_blinkerState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "SetBlinkerState", nullptr, nullptr, sizeof(BlinkerComponent_eventSetBlinkerState_Parms), Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics
	{
		struct BlinkerComponent_eventSetChainedBlinkCount_Parms
		{
			int32 blinkCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_blinkCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::NewProp_blinkCount = { "blinkCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventSetChainedBlinkCount_Parms, blinkCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::NewProp_blinkCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "SetChainedBlinkCount", nullptr, nullptr, sizeof(BlinkerComponent_eventSetChainedBlinkCount_Parms), Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics
	{
		struct BlinkerComponent_eventShouldInterpolateIndicatorPosition_Parms
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
	void Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlinkerComponent_eventShouldInterpolateIndicatorPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlinkerComponent_eventShouldInterpolateIndicatorPosition_Parms), &Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "ShouldInterpolateIndicatorPosition", nullptr, nullptr, sizeof(BlinkerComponent_eventShouldInterpolateIndicatorPosition_Parms), Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics
	{
		struct BlinkerComponent_eventUpdateTargetLocation_Parms
		{
			ADBDPlayer* player;
			float blinkDistance;
			TArray<float> scanPercentLocations;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scanPercentLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_scanPercentLocations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scanPercentLocations_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_blinkDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventUpdateTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_scanPercentLocations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_scanPercentLocations = { "scanPercentLocations", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventUpdateTargetLocation_Parms, scanPercentLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_scanPercentLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_scanPercentLocations_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_scanPercentLocations_Inner = { "scanPercentLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_blinkDistance = { "blinkDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventUpdateTargetLocation_Parms, blinkDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkerComponent_eventUpdateTargetLocation_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_scanPercentLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_scanPercentLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_blinkDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkerComponent, nullptr, "UpdateTargetLocation", nullptr, nullptr, sizeof(BlinkerComponent_eventUpdateTargetLocation_Parms), Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlinkerComponent_NoRegister()
	{
		return UBlinkerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlinkerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blinkChainTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blinkChainTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lineOfSightBlinkOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lineOfSightBlinkOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__IndicatorVelocityEasingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__IndicatorVelocityEasingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumIndicatorVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumIndicatorVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rayCastLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rayCastLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rayCastZOffet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rayCastZOffet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlinkerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlinkerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlinkerComponent_GetAutomaticBlinkDelay, "GetAutomaticBlinkDelay" }, // 2331589662
		{ &Z_Construct_UFunction_UBlinkerComponent_GetBlinkChainTimer, "GetBlinkChainTimer" }, // 4145421204
		{ &Z_Construct_UFunction_UBlinkerComponent_GetBlinkerState, "GetBlinkerState" }, // 326122718
		{ &Z_Construct_UFunction_UBlinkerComponent_GetChainedBlinkCount, "GetChainedBlinkCount" }, // 1721857793
		{ &Z_Construct_UFunction_UBlinkerComponent_GetFatigueDuration, "GetFatigueDuration" }, // 408265748
		{ &Z_Construct_UFunction_UBlinkerComponent_GetInterpolatedIndicatorPosition, "GetInterpolatedIndicatorPosition" }, // 1520032237
		{ &Z_Construct_UFunction_UBlinkerComponent_IncrementChainedBlinkCount, "IncrementChainedBlinkCount" }, // 1954167886
		{ &Z_Construct_UFunction_UBlinkerComponent_IsReady, "IsReady" }, // 3086789850
		{ &Z_Construct_UFunction_UBlinkerComponent_LocalAddRandomToTargetLocation, "LocalAddRandomToTargetLocation" }, // 1451768295
		{ &Z_Construct_UFunction_UBlinkerComponent_SetBlinkerState, "SetBlinkerState" }, // 2725817219
		{ &Z_Construct_UFunction_UBlinkerComponent_SetChainedBlinkCount, "SetChainedBlinkCount" }, // 85446964
		{ &Z_Construct_UFunction_UBlinkerComponent_ShouldInterpolateIndicatorPosition, "ShouldInterpolateIndicatorPosition" }, // 3145375268
		{ &Z_Construct_UFunction_UBlinkerComponent_UpdateTargetLocation, "UpdateTargetLocation" }, // 3761941880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlinkerComponent.h" },
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__blinkChainTimer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__blinkChainTimer = { "_blinkChainTimer", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlinkerComponent, _blinkChainTimer), Z_Construct_UClass_UDBDTimerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__blinkChainTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__blinkChainTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__lineOfSightBlinkOffset_MetaData[] = {
		{ "Category", "BlinkerComponent" },
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__lineOfSightBlinkOffset = { "_lineOfSightBlinkOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlinkerComponent, _lineOfSightBlinkOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__lineOfSightBlinkOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__lineOfSightBlinkOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__IndicatorVelocityEasingFactor_MetaData[] = {
		{ "Category", "BlinkerComponent" },
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__IndicatorVelocityEasingFactor = { "_IndicatorVelocityEasingFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlinkerComponent, _IndicatorVelocityEasingFactor), METADATA_PARAMS(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__IndicatorVelocityEasingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__IndicatorVelocityEasingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__minimumIndicatorVelocity_MetaData[] = {
		{ "Category", "BlinkerComponent" },
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__minimumIndicatorVelocity = { "_minimumIndicatorVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlinkerComponent, _minimumIndicatorVelocity), METADATA_PARAMS(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__minimumIndicatorVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__minimumIndicatorVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastLength_MetaData[] = {
		{ "Category", "BlinkerComponent" },
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastLength = { "_rayCastLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlinkerComponent, _rayCastLength), METADATA_PARAMS(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastZOffet_MetaData[] = {
		{ "Category", "BlinkerComponent" },
		{ "ModuleRelativePath", "Public/BlinkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastZOffet = { "_rayCastZOffet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlinkerComponent, _rayCastZOffet), METADATA_PARAMS(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastZOffet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastZOffet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlinkerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__blinkChainTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__lineOfSightBlinkOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__IndicatorVelocityEasingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__minimumIndicatorVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkerComponent_Statics::NewProp__rayCastZOffet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlinkerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlinkerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlinkerComponent_Statics::ClassParams = {
		&UBlinkerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlinkerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlinkerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlinkerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlinkerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlinkerComponent, 2758042334);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlinkerComponent>()
	{
		return UBlinkerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlinkerComponent(Z_Construct_UClass_UBlinkerComponent, &UBlinkerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlinkerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlinkerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
