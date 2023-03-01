// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/FlashlightFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashlightFXComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FlashlightFXComponentOnFlashEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightFXComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightTargetFXComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDGameplay_FlashlightFXComponentOnFlashEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDGameplay_FlashlightFXComponentOnFlashEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDGameplay_FlashlightFXComponentOnFlashEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDGameplay, nullptr, "FlashlightFXComponentOnFlashEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightFXComponentOnFlashEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightFXComponentOnFlashEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FlashlightFXComponentOnFlashEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDGameplay_FlashlightFXComponentOnFlashEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFlashlightFXComponent::execGetBlindingSuccessRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBlindingSuccessRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlashlightFXComponent::execOnTurnedOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTurnedOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlashlightFXComponent::execOnTurnedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTurnedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlashlightFXComponent::execUpdateFXTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFXTargets();
		P_NATIVE_END;
	}
	static FName NAME_UFlashlightFXComponent_OnCollectedEvent = FName(TEXT("OnCollectedEvent"));
	void UFlashlightFXComponent::OnCollectedEvent(ADBDPlayer* collector)
	{
		FlashlightFXComponent_eventOnCollectedEvent_Parms Parms;
		Parms.collector=collector;
		ProcessEvent(FindFunctionChecked(NAME_UFlashlightFXComponent_OnCollectedEvent),&Parms);
	}
	static FName NAME_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent = FName(TEXT("OnCollectorLocallyObservedChangedEvent"));
	void UFlashlightFXComponent::OnCollectorLocallyObservedChangedEvent(bool isLocallyObserved)
	{
		FlashlightFXComponent_eventOnCollectorLocallyObservedChangedEvent_Parms Parms;
		Parms.isLocallyObserved=isLocallyObserved ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent),&Parms);
	}
	static FName NAME_UFlashlightFXComponent_OnDroppedEvent = FName(TEXT("OnDroppedEvent"));
	void UFlashlightFXComponent::OnDroppedEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlashlightFXComponent_OnDroppedEvent),NULL);
	}
	static FName NAME_UFlashlightFXComponent_OnStartEvent = FName(TEXT("OnStartEvent"));
	void UFlashlightFXComponent::OnStartEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlashlightFXComponent_OnStartEvent),NULL);
	}
	static FName NAME_UFlashlightFXComponent_OnStopEvent = FName(TEXT("OnStopEvent"));
	void UFlashlightFXComponent::OnStopEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlashlightFXComponent_OnStopEvent),NULL);
	}
	static FName NAME_UFlashlightFXComponent_PostUpdateEvent = FName(TEXT("PostUpdateEvent"));
	void UFlashlightFXComponent::PostUpdateEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlashlightFXComponent_PostUpdateEvent),NULL);
	}
	static FName NAME_UFlashlightFXComponent_UpdateConeEvent = FName(TEXT("UpdateConeEvent"));
	void UFlashlightFXComponent::UpdateConeEvent(float length, float halfAngle)
	{
		FlashlightFXComponent_eventUpdateConeEvent_Parms Parms;
		Parms.length=length;
		Parms.halfAngle=halfAngle;
		ProcessEvent(FindFunctionChecked(NAME_UFlashlightFXComponent_UpdateConeEvent),&Parms);
	}
	void UFlashlightFXComponent::StaticRegisterNativesUFlashlightFXComponent()
	{
		UClass* Class = UFlashlightFXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlindingSuccessRatio", &UFlashlightFXComponent::execGetBlindingSuccessRatio },
			{ "OnTurnedOff", &UFlashlightFXComponent::execOnTurnedOff },
			{ "OnTurnedOn", &UFlashlightFXComponent::execOnTurnedOn },
			{ "UpdateFXTargets", &UFlashlightFXComponent::execUpdateFXTargets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics
	{
		struct FlashlightFXComponent_eventGetBlindingSuccessRatio_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlashlightFXComponent_eventGetBlindingSuccessRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "GetBlindingSuccessRatio", nullptr, nullptr, sizeof(FlashlightFXComponent_eventGetBlindingSuccessRatio_Parms), Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlashlightFXComponent_eventOnCollectedEvent_Parms, collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::NewProp_collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "OnCollectedEvent", nullptr, nullptr, sizeof(FlashlightFXComponent_eventOnCollectedEvent_Parms), Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics
	{
		static void NewProp_isLocallyObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocallyObserved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::NewProp_isLocallyObserved_SetBit(void* Obj)
	{
		((FlashlightFXComponent_eventOnCollectorLocallyObservedChangedEvent_Parms*)Obj)->isLocallyObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::NewProp_isLocallyObserved = { "isLocallyObserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlashlightFXComponent_eventOnCollectorLocallyObservedChangedEvent_Parms), &Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::NewProp_isLocallyObserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::NewProp_isLocallyObserved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "OnCollectorLocallyObservedChangedEvent", nullptr, nullptr, sizeof(FlashlightFXComponent_eventOnCollectorLocallyObservedChangedEvent_Parms), Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_OnDroppedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_OnDroppedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_OnDroppedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "OnDroppedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_OnDroppedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_OnDroppedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_OnDroppedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_OnDroppedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_OnStartEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_OnStartEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_OnStartEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "OnStartEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_OnStartEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_OnStartEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_OnStartEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_OnStartEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_OnStopEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_OnStopEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_OnStopEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "OnStopEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_OnStopEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_OnStopEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_OnStopEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_OnStopEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "OnTurnedOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "OnTurnedOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_PostUpdateEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_PostUpdateEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_PostUpdateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "PostUpdateEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_PostUpdateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_PostUpdateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_PostUpdateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_PostUpdateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_halfAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::NewProp_halfAngle = { "halfAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlashlightFXComponent_eventUpdateConeEvent_Parms, halfAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlashlightFXComponent_eventUpdateConeEvent_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::NewProp_halfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::NewProp_length,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "UpdateConeEvent", nullptr, nullptr, sizeof(FlashlightFXComponent_eventUpdateConeEvent_Parms), Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightFXComponent_UpdateFXTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightFXComponent_UpdateFXTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightFXComponent_UpdateFXTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightFXComponent, nullptr, "UpdateFXTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightFXComponent_UpdateFXTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightFXComponent_UpdateFXTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightFXComponent_UpdateFXTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightFXComponent_UpdateFXTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlashlightFXComponent_NoRegister()
	{
		return UFlashlightFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFlashlightFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__targets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targets_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentBeamModifyingTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentBeamModifyingTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimedAtSoundLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimedAtSoundLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__centerGlowLengthMaxScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__centerGlowLengthMaxScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__centerGlowShrinkDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__centerGlowShrinkDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__centerGlowWidthScaleDuringFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__centerGlowWidthScaleDuringFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__centerGlowWidthScaleWithBlindTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__centerGlowWidthScaleWithBlindTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__centerGlowWidthScaleWithoutBlindTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__centerGlowWidthScaleWithoutBlindTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__resizeConeLength_MetaData[];
#endif
		static void NewProp__resizeConeLength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__resizeConeLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__beamBlindingRatioInterpSpeedWithoutTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__beamBlindingRatioInterpSpeedWithoutTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__beamBlindingRatioInterpSpeedWithTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__beamBlindingRatioInterpSpeedWithTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__beamFlashHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__beamFlashHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__beamBlindingHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__beamBlindingHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__visualReworkSpotLightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__visualReworkSpotLightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spotLightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__spotLightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spotLightHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__spotLightHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashEffectDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__flashEffectDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashEffectIntensityCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__flashEffectIntensityCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumOcclusionDistanceForSpotlight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumOcclusionDistanceForSpotlight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__beamMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__beamMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__centerGlowMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__centerGlowMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFlashEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlashEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlashlightFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlashlightFXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlashlightFXComponent_GetBlindingSuccessRatio, "GetBlindingSuccessRatio" }, // 2426642542
		{ &Z_Construct_UFunction_UFlashlightFXComponent_OnCollectedEvent, "OnCollectedEvent" }, // 3651326947
		{ &Z_Construct_UFunction_UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent, "OnCollectorLocallyObservedChangedEvent" }, // 3504949842
		{ &Z_Construct_UFunction_UFlashlightFXComponent_OnDroppedEvent, "OnDroppedEvent" }, // 1306208674
		{ &Z_Construct_UFunction_UFlashlightFXComponent_OnStartEvent, "OnStartEvent" }, // 2376978353
		{ &Z_Construct_UFunction_UFlashlightFXComponent_OnStopEvent, "OnStopEvent" }, // 2843484505
		{ &Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOff, "OnTurnedOff" }, // 3536396115
		{ &Z_Construct_UFunction_UFlashlightFXComponent_OnTurnedOn, "OnTurnedOn" }, // 3615634328
		{ &Z_Construct_UFunction_UFlashlightFXComponent_PostUpdateEvent, "PostUpdateEvent" }, // 1514382265
		{ &Z_Construct_UFunction_UFlashlightFXComponent_UpdateConeEvent, "UpdateConeEvent" }, // 2155704026
		{ &Z_Construct_UFunction_UFlashlightFXComponent_UpdateFXTargets, "UpdateFXTargets" }, // 763293621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlashlightFXComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__targets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__targets = { "_targets", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _targets), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__targets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__targets_ElementProp = { "_targets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlashlightTargetFXComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__currentBeamModifyingTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__currentBeamModifyingTarget = { "_currentBeamModifyingTarget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _currentBeamModifyingTarget), Z_Construct_UClass_UFlashlightTargetFXComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__currentBeamModifyingTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__currentBeamModifyingTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__aimedAtSoundLoop_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__aimedAtSoundLoop = { "_aimedAtSoundLoop", nullptr, (EPropertyFlags)0x0020088000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _aimedAtSoundLoop), Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop, METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__aimedAtSoundLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__aimedAtSoundLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowLengthMaxScale_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowLengthMaxScale = { "_centerGlowLengthMaxScale", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowLengthMaxScale), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowLengthMaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowLengthMaxScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowShrinkDistance_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowShrinkDistance = { "_centerGlowShrinkDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowShrinkDistance), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowShrinkDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowShrinkDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleDuringFlash_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleDuringFlash = { "_centerGlowWidthScaleDuringFlash", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowWidthScaleDuringFlash), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleDuringFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleDuringFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithBlindTarget_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithBlindTarget = { "_centerGlowWidthScaleWithBlindTarget", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowWidthScaleWithBlindTarget), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithBlindTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithBlindTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithoutBlindTarget_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithoutBlindTarget = { "_centerGlowWidthScaleWithoutBlindTarget", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowWidthScaleWithoutBlindTarget), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithoutBlindTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithoutBlindTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__resizeConeLength_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__resizeConeLength_SetBit(void* Obj)
	{
		((UFlashlightFXComponent*)Obj)->_resizeConeLength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__resizeConeLength = { "_resizeConeLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlashlightFXComponent), &Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__resizeConeLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__resizeConeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__resizeConeLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithoutTarget_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithoutTarget = { "_beamBlindingRatioInterpSpeedWithoutTarget", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _beamBlindingRatioInterpSpeedWithoutTarget), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithoutTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithoutTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithTarget_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithTarget = { "_beamBlindingRatioInterpSpeedWithTarget", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _beamBlindingRatioInterpSpeedWithTarget), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamFlashHalfAngle_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamFlashHalfAngle = { "_beamFlashHalfAngle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _beamFlashHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamFlashHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamFlashHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingHalfAngle_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingHalfAngle = { "_beamBlindingHalfAngle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _beamBlindingHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__visualReworkSpotLightIntensity_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__visualReworkSpotLightIntensity = { "_visualReworkSpotLightIntensity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _visualReworkSpotLightIntensity), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__visualReworkSpotLightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__visualReworkSpotLightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightIntensity_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightIntensity = { "_spotLightIntensity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _spotLightIntensity), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightHalfAngle_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightHalfAngle = { "_spotLightHalfAngle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _spotLightHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectDuration_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectDuration = { "_flashEffectDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _flashEffectDuration), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectIntensityCurve_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectIntensityCurve = { "_flashEffectIntensityCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _flashEffectIntensityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectIntensityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectIntensityCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__minimumOcclusionDistanceForSpotlight_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__minimumOcclusionDistanceForSpotlight = { "_minimumOcclusionDistanceForSpotlight", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _minimumOcclusionDistanceForSpotlight), METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__minimumOcclusionDistanceForSpotlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__minimumOcclusionDistanceForSpotlight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamMesh_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamMesh = { "_beamMesh", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _beamMesh), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowMesh_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowMesh = { "_centerGlowMesh", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__tip_MetaData[] = {
		{ "Category", "FlashlightFXComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__tip = { "_tip", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, _tip), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__tip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__tip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp_OnFlashEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlashlightFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp_OnFlashEvent = { "OnFlashEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightFXComponent, OnFlashEvent), Z_Construct_UDelegateFunction_DBDGameplay_FlashlightFXComponentOnFlashEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp_OnFlashEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp_OnFlashEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlashlightFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__targets_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__currentBeamModifyingTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__aimedAtSoundLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowLengthMaxScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowShrinkDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleDuringFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithBlindTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowWidthScaleWithoutBlindTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__resizeConeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithoutTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingRatioInterpSpeedWithTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamFlashHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamBlindingHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__visualReworkSpotLightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__spotLightHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__flashEffectIntensityCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__minimumOcclusionDistanceForSpotlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__beamMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__centerGlowMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp__tip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightFXComponent_Statics::NewProp_OnFlashEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlashlightFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlashlightFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlashlightFXComponent_Statics::ClassParams = {
		&UFlashlightFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlashlightFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlashlightFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlashlightFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlashlightFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlashlightFXComponent, 1538907269);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UFlashlightFXComponent>()
	{
		return UFlashlightFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlashlightFXComponent(Z_Construct_UClass_UFlashlightFXComponent, &UFlashlightFXComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UFlashlightFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlashlightFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
