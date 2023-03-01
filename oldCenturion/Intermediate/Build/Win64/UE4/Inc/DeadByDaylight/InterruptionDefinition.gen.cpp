// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InterruptionDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterruptionDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInterruptionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInterruptionDefinition();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
// End Cross Module References
	DEFINE_FUNCTION(UInterruptionDefinition::execCanInterruptWhileCarrying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInterruptWhileCarrying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterruptionDefinition::execGetInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AInteractable**)Z_Param__Result=P_THIS->GetInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterruptionDefinition::execGetInteractionDefinition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionDefinition**)Z_Param__Result=P_THIS->GetInteractionDefinition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterruptionDefinition::execGetInterruptionSnapPointPositionForInterruptor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_Interruptor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_Interruptee);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInterruptionSnapPointPositionForInterruptor_Implementation(Z_Param_Interruptor,Z_Param_Interruptee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterruptionDefinition::execGetInterruptionSnapPointRotationForInterruptor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_Interruptor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_Interruptee);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetInterruptionSnapPointRotationForInterruptor_Implementation(Z_Param_Interruptor,Z_Param_Interruptee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterruptionDefinition::execInteractionCheckHeightDelta)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_interruptor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_interruptee);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InteractionCheckHeightDelta(Z_Param_interruptor,Z_Param_interruptee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterruptionDefinition::execIsInterruptionPossible)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_interruptor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_interruptee);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInterruptionPossible_Implementation(Z_Param_interruptor,Z_Param_interruptee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterruptionDefinition::execIsUsingAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterruptionDefinition::execIsUsingMontageFollower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingMontageFollower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterruptionDefinition::execSetInterruptorSnapPoint)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterruptorSnapPoint(Z_Param_Out_Point);
		P_NATIVE_END;
	}
	static FName NAME_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor = FName(TEXT("GetInterruptionSnapPointPositionForInterruptor"));
	FVector UInterruptionDefinition::GetInterruptionSnapPointPositionForInterruptor(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const
	{
		InterruptionDefinition_eventGetInterruptionSnapPointPositionForInterruptor_Parms Parms;
		Parms.Interruptor=Interruptor;
		Parms.Interruptee=Interruptee;
		const_cast<UInterruptionDefinition*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor = FName(TEXT("GetInterruptionSnapPointRotationForInterruptor"));
	FRotator UInterruptionDefinition::GetInterruptionSnapPointRotationForInterruptor(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const
	{
		InterruptionDefinition_eventGetInterruptionSnapPointRotationForInterruptor_Parms Parms;
		Parms.Interruptor=Interruptor;
		Parms.Interruptee=Interruptee;
		const_cast<UInterruptionDefinition*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UInterruptionDefinition_IsInterruptionPossible = FName(TEXT("IsInterruptionPossible"));
	bool UInterruptionDefinition::IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee) const
	{
		InterruptionDefinition_eventIsInterruptionPossible_Parms Parms;
		Parms.interruptor=interruptor;
		Parms.interruptee=interruptee;
		const_cast<UInterruptionDefinition*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInterruptionDefinition_IsInterruptionPossible),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UInterruptionDefinition_OnInterruptionEnterStart = FName(TEXT("OnInterruptionEnterStart"));
	void UInterruptionDefinition::OnInterruptionEnterStart(ADBDPlayer* interruptor, ADBDPlayer* interruptee)
	{
		InterruptionDefinition_eventOnInterruptionEnterStart_Parms Parms;
		Parms.interruptor=interruptor;
		Parms.interruptee=interruptee;
		ProcessEvent(FindFunctionChecked(NAME_UInterruptionDefinition_OnInterruptionEnterStart),&Parms);
	}
	static FName NAME_UInterruptionDefinition_OnInterruptionExitEnd = FName(TEXT("OnInterruptionExitEnd"));
	void UInterruptionDefinition::OnInterruptionExitEnd(ADBDPlayer* interruptor, ADBDPlayer* interruptee)
	{
		InterruptionDefinition_eventOnInterruptionExitEnd_Parms Parms;
		Parms.interruptor=interruptor;
		Parms.interruptee=interruptee;
		ProcessEvent(FindFunctionChecked(NAME_UInterruptionDefinition_OnInterruptionExitEnd),&Parms);
	}
	static FName NAME_UInterruptionDefinition_OnInterruptionUpdateStart = FName(TEXT("OnInterruptionUpdateStart"));
	void UInterruptionDefinition::OnInterruptionUpdateStart(ADBDPlayer* interruptor, ADBDPlayer* interruptee)
	{
		InterruptionDefinition_eventOnInterruptionUpdateStart_Parms Parms;
		Parms.interruptor=interruptor;
		Parms.interruptee=interruptee;
		ProcessEvent(FindFunctionChecked(NAME_UInterruptionDefinition_OnInterruptionUpdateStart),&Parms);
	}
	void UInterruptionDefinition::StaticRegisterNativesUInterruptionDefinition()
	{
		UClass* Class = UInterruptionDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInterruptWhileCarrying", &UInterruptionDefinition::execCanInterruptWhileCarrying },
			{ "GetInteractable", &UInterruptionDefinition::execGetInteractable },
			{ "GetInteractionDefinition", &UInterruptionDefinition::execGetInteractionDefinition },
			{ "GetInterruptionSnapPointPositionForInterruptor", &UInterruptionDefinition::execGetInterruptionSnapPointPositionForInterruptor },
			{ "GetInterruptionSnapPointRotationForInterruptor", &UInterruptionDefinition::execGetInterruptionSnapPointRotationForInterruptor },
			{ "InteractionCheckHeightDelta", &UInterruptionDefinition::execInteractionCheckHeightDelta },
			{ "IsInterruptionPossible", &UInterruptionDefinition::execIsInterruptionPossible },
			{ "IsUsingAttack", &UInterruptionDefinition::execIsUsingAttack },
			{ "IsUsingMontageFollower", &UInterruptionDefinition::execIsUsingMontageFollower },
			{ "SetInterruptorSnapPoint", &UInterruptionDefinition::execSetInterruptorSnapPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics
	{
		struct InterruptionDefinition_eventCanInterruptWhileCarrying_Parms
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
	void Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterruptionDefinition_eventCanInterruptWhileCarrying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InterruptionDefinition_eventCanInterruptWhileCarrying_Parms), &Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "CanInterruptWhileCarrying", nullptr, nullptr, sizeof(InterruptionDefinition_eventCanInterruptWhileCarrying_Parms), Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics
	{
		struct InterruptionDefinition_eventGetInteractable_Parms
		{
			AInteractable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventGetInteractable_Parms, ReturnValue), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "GetInteractable", nullptr, nullptr, sizeof(InterruptionDefinition_eventGetInteractable_Parms), Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_GetInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_GetInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics
	{
		struct InterruptionDefinition_eventGetInteractionDefinition_Parms
		{
			UInteractionDefinition* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventGetInteractionDefinition_Parms, ReturnValue), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "GetInteractionDefinition", nullptr, nullptr, sizeof(InterruptionDefinition_eventGetInteractionDefinition_Parms), Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interruptee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interruptee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interruptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interruptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventGetInterruptionSnapPointPositionForInterruptor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptee_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptee = { "Interruptee", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventGetInterruptionSnapPointPositionForInterruptor_Parms, Interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptee_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptor = { "Interruptor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventGetInterruptionSnapPointPositionForInterruptor_Parms, Interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::NewProp_Interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "GetInterruptionSnapPointPositionForInterruptor", nullptr, nullptr, sizeof(InterruptionDefinition_eventGetInterruptionSnapPointPositionForInterruptor_Parms), Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interruptee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interruptee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interruptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interruptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventGetInterruptionSnapPointRotationForInterruptor_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptee_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptee = { "Interruptee", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventGetInterruptionSnapPointRotationForInterruptor_Parms, Interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptee_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptor = { "Interruptor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventGetInterruptionSnapPointRotationForInterruptor_Parms, Interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::NewProp_Interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "GetInterruptionSnapPointRotationForInterruptor", nullptr, nullptr, sizeof(InterruptionDefinition_eventGetInterruptionSnapPointRotationForInterruptor_Parms), Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics
	{
		struct InterruptionDefinition_eventInteractionCheckHeightDelta_Parms
		{
			const ADBDPlayer* interruptor;
			const ADBDPlayer* interruptee;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interruptee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interruptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterruptionDefinition_eventInteractionCheckHeightDelta_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InterruptionDefinition_eventInteractionCheckHeightDelta_Parms), &Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptee_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptee = { "interruptee", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventInteractionCheckHeightDelta_Parms, interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptee_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptor = { "interruptor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventInteractionCheckHeightDelta_Parms, interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::NewProp_interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "InteractionCheckHeightDelta", nullptr, nullptr, sizeof(InterruptionDefinition_eventInteractionCheckHeightDelta_Parms), Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interruptee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interruptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterruptionDefinition_eventIsInterruptionPossible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InterruptionDefinition_eventIsInterruptionPossible_Parms), &Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptee_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptee = { "interruptee", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventIsInterruptionPossible_Parms, interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptee_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptor = { "interruptor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventIsInterruptionPossible_Parms, interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::NewProp_interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "IsInterruptionPossible", nullptr, nullptr, sizeof(InterruptionDefinition_eventIsInterruptionPossible_Parms), Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics
	{
		struct InterruptionDefinition_eventIsUsingAttack_Parms
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
	void Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterruptionDefinition_eventIsUsingAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InterruptionDefinition_eventIsUsingAttack_Parms), &Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "IsUsingAttack", nullptr, nullptr, sizeof(InterruptionDefinition_eventIsUsingAttack_Parms), Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics
	{
		struct InterruptionDefinition_eventIsUsingMontageFollower_Parms
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
	void Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterruptionDefinition_eventIsUsingMontageFollower_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InterruptionDefinition_eventIsUsingMontageFollower_Parms), &Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "IsUsingMontageFollower", nullptr, nullptr, sizeof(InterruptionDefinition_eventIsUsingMontageFollower_Parms), Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptee;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::NewProp_interruptee = { "interruptee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventOnInterruptionEnterStart_Parms, interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::NewProp_interruptor = { "interruptor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventOnInterruptionEnterStart_Parms, interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::NewProp_interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::NewProp_interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "OnInterruptionEnterStart", nullptr, nullptr, sizeof(InterruptionDefinition_eventOnInterruptionEnterStart_Parms), Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptee;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::NewProp_interruptee = { "interruptee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventOnInterruptionExitEnd_Parms, interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::NewProp_interruptor = { "interruptor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventOnInterruptionExitEnd_Parms, interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::NewProp_interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::NewProp_interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "OnInterruptionExitEnd", nullptr, nullptr, sizeof(InterruptionDefinition_eventOnInterruptionExitEnd_Parms), Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptee;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::NewProp_interruptee = { "interruptee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventOnInterruptionUpdateStart_Parms, interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::NewProp_interruptor = { "interruptor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventOnInterruptionUpdateStart_Parms, interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::NewProp_interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::NewProp_interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "OnInterruptionUpdateStart", nullptr, nullptr, sizeof(InterruptionDefinition_eventOnInterruptionUpdateStart_Parms), Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics
	{
		struct InterruptionDefinition_eventSetInterruptorSnapPoint_Parms
		{
			FTransform Point;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterruptionDefinition_eventSetInterruptorSnapPoint_Parms, Point), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterruptionDefinition, nullptr, "SetInterruptorSnapPoint", nullptr, nullptr, sizeof(InterruptionDefinition_eventSetInterruptorSnapPoint_Parms), Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInterruptionDefinition_NoRegister()
	{
		return UInterruptionDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UInterruptionDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interruptionScoreEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interruptionScoreEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxHeightDeltaBetweenCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxHeightDeltaBetweenCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useMontageFollower_MetaData[];
#endif
		static void NewProp__useMontageFollower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useMontageFollower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canInterruptWhileCarrying_MetaData[];
#endif
		static void NewProp__canInterruptWhileCarrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canInterruptWhileCarrying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pickUpOnInterrupt_MetaData[];
#endif
		static void NewProp__pickUpOnInterrupt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__pickUpOnInterrupt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationMontageToPlayOnInterruptionForInterrupteeNew_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__animationMontageToPlayOnInterruptionForInterrupteeNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationMontageToPlayOnInterruptionForInterruptorNew_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__animationMontageToPlayOnInterruptionForInterruptorNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationMontageToPlayOnInterruptionEnterForInterruptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__animationMontageToPlayOnInterruptionEnterForInterruptor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interruptionSnapPointForInterruptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interruptionSnapPointForInterruptor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snapInterruptor_MetaData[];
#endif
		static void NewProp__snapInterruptor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__snapInterruptor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__usesWorldCoordinates_MetaData[];
#endif
		static void NewProp__usesWorldCoordinates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__usesWorldCoordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InterruptionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterruptionDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterruptionDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterruptionDefinition_CanInterruptWhileCarrying, "CanInterruptWhileCarrying" }, // 4286782545
		{ &Z_Construct_UFunction_UInterruptionDefinition_GetInteractable, "GetInteractable" }, // 2409383130
		{ &Z_Construct_UFunction_UInterruptionDefinition_GetInteractionDefinition, "GetInteractionDefinition" }, // 345990699
		{ &Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor, "GetInterruptionSnapPointPositionForInterruptor" }, // 1204262832
		{ &Z_Construct_UFunction_UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor, "GetInterruptionSnapPointRotationForInterruptor" }, // 3231553350
		{ &Z_Construct_UFunction_UInterruptionDefinition_InteractionCheckHeightDelta, "InteractionCheckHeightDelta" }, // 3650779255
		{ &Z_Construct_UFunction_UInterruptionDefinition_IsInterruptionPossible, "IsInterruptionPossible" }, // 2604094128
		{ &Z_Construct_UFunction_UInterruptionDefinition_IsUsingAttack, "IsUsingAttack" }, // 1535213657
		{ &Z_Construct_UFunction_UInterruptionDefinition_IsUsingMontageFollower, "IsUsingMontageFollower" }, // 1512661052
		{ &Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionEnterStart, "OnInterruptionEnterStart" }, // 2273866925
		{ &Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionExitEnd, "OnInterruptionExitEnd" }, // 155038945
		{ &Z_Construct_UFunction_UInterruptionDefinition_OnInterruptionUpdateStart, "OnInterruptionUpdateStart" }, // 798744875
		{ &Z_Construct_UFunction_UInterruptionDefinition_SetInterruptorSnapPoint, "SetInterruptorSnapPoint" }, // 1080483965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "InterruptionDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionScoreEvent_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionScoreEvent = { "_interruptionScoreEvent", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterruptionDefinition, _interruptionScoreEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionScoreEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionScoreEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__maxHeightDeltaBetweenCharacters_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__maxHeightDeltaBetweenCharacters = { "_maxHeightDeltaBetweenCharacters", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterruptionDefinition, _maxHeightDeltaBetweenCharacters), METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__maxHeightDeltaBetweenCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__maxHeightDeltaBetweenCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__useMontageFollower_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__useMontageFollower_SetBit(void* Obj)
	{
		((UInterruptionDefinition*)Obj)->_useMontageFollower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__useMontageFollower = { "_useMontageFollower", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInterruptionDefinition), &Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__useMontageFollower_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__useMontageFollower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__useMontageFollower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__canInterruptWhileCarrying_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__canInterruptWhileCarrying_SetBit(void* Obj)
	{
		((UInterruptionDefinition*)Obj)->_canInterruptWhileCarrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__canInterruptWhileCarrying = { "_canInterruptWhileCarrying", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInterruptionDefinition), &Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__canInterruptWhileCarrying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__canInterruptWhileCarrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__canInterruptWhileCarrying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__pickUpOnInterrupt_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__pickUpOnInterrupt_SetBit(void* Obj)
	{
		((UInterruptionDefinition*)Obj)->_pickUpOnInterrupt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__pickUpOnInterrupt = { "_pickUpOnInterrupt", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInterruptionDefinition), &Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__pickUpOnInterrupt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__pickUpOnInterrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__pickUpOnInterrupt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterrupteeNew_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterrupteeNew = { "_animationMontageToPlayOnInterruptionForInterrupteeNew", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterruptionDefinition, _animationMontageToPlayOnInterruptionForInterrupteeNew), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterrupteeNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterrupteeNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterruptorNew_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterruptorNew = { "_animationMontageToPlayOnInterruptionForInterruptorNew", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterruptionDefinition, _animationMontageToPlayOnInterruptionForInterruptorNew), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterruptorNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterruptorNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionEnterForInterruptor_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionEnterForInterruptor = { "_animationMontageToPlayOnInterruptionEnterForInterruptor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterruptionDefinition, _animationMontageToPlayOnInterruptionEnterForInterruptor), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionEnterForInterruptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionEnterForInterruptor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionSnapPointForInterruptor_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionSnapPointForInterruptor = { "_interruptionSnapPointForInterruptor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterruptionDefinition, _interruptionSnapPointForInterruptor), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionSnapPointForInterruptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionSnapPointForInterruptor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__snapInterruptor_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__snapInterruptor_SetBit(void* Obj)
	{
		((UInterruptionDefinition*)Obj)->_snapInterruptor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__snapInterruptor = { "_snapInterruptor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInterruptionDefinition), &Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__snapInterruptor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__snapInterruptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__snapInterruptor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__usesWorldCoordinates_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__usesWorldCoordinates_SetBit(void* Obj)
	{
		((UInterruptionDefinition*)Obj)->_usesWorldCoordinates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__usesWorldCoordinates = { "_usesWorldCoordinates", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInterruptionDefinition), &Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__usesWorldCoordinates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__usesWorldCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__usesWorldCoordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp_InterruptionID_MetaData[] = {
		{ "Category", "InterruptionDefinition" },
		{ "ModuleRelativePath", "Public/InterruptionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp_InterruptionID = { "InterruptionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterruptionDefinition, InterruptionID), METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp_InterruptionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp_InterruptionID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterruptionDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionScoreEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__maxHeightDeltaBetweenCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__useMontageFollower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__canInterruptWhileCarrying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__pickUpOnInterrupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterrupteeNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionForInterruptorNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__animationMontageToPlayOnInterruptionEnterForInterruptor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__interruptionSnapPointForInterruptor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__snapInterruptor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp__usesWorldCoordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterruptionDefinition_Statics::NewProp_InterruptionID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterruptionDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterruptionDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterruptionDefinition_Statics::ClassParams = {
		&UInterruptionDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInterruptionDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInterruptionDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterruptionDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterruptionDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterruptionDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterruptionDefinition, 1087336699);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInterruptionDefinition>()
	{
		return UInterruptionDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterruptionDefinition(Z_Construct_UClass_UInterruptionDefinition, &UInterruptionDefinition::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInterruptionDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterruptionDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
