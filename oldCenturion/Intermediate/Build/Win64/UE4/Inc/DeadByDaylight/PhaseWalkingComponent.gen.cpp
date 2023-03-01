// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PhaseWalkingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhaseWalkingComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPhaseWalkInfo();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnGameEndedVFX__DelegateSignature();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPhaseWalkingComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPhaseWalkingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecoySlasherComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTimer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDBidirectionalTimer();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventPhaseWalkingComponentTriggerKillerVisibilityVFX_Parms
		{
			bool wasPassivePhaseWalking;
			bool wasActivePhaseWalking;
			FPhaseWalkInfo phaseWalkInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phaseWalkInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_phaseWalkInfo;
		static void NewProp_wasActivePhaseWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasActivePhaseWalking;
		static void NewProp_wasPassivePhaseWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasPassivePhaseWalking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_phaseWalkInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_phaseWalkInfo = { "phaseWalkInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerKillerVisibilityVFX_Parms, phaseWalkInfo), Z_Construct_UScriptStruct_FPhaseWalkInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_phaseWalkInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_phaseWalkInfo_MetaData)) };
	void Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_wasActivePhaseWalking_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerKillerVisibilityVFX_Parms*)Obj)->wasActivePhaseWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_wasActivePhaseWalking = { "wasActivePhaseWalking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerKillerVisibilityVFX_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_wasActivePhaseWalking_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_wasPassivePhaseWalking_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerKillerVisibilityVFX_Parms*)Obj)->wasPassivePhaseWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_wasPassivePhaseWalking = { "wasPassivePhaseWalking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerKillerVisibilityVFX_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_wasPassivePhaseWalking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_phaseWalkInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_wasActivePhaseWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::NewProp_wasPassivePhaseWalking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerKillerVisibilityVFX_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnGameEndedVFX__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnGameEndedVFX__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnGameEndedVFX__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "PhaseWalkingComponentOnGameEndedVFX__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnGameEndedVFX__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnGameEndedVFX__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnGameEndedVFX__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnGameEndedVFX__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventPhaseWalkingComponentOnPhaseWalkInfoReceived_Parms
		{
			FPhaseWalkInfo phaseWalkInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phaseWalkInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_phaseWalkInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::NewProp_phaseWalkInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::NewProp_phaseWalkInfo = { "phaseWalkInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventPhaseWalkingComponentOnPhaseWalkInfoReceived_Parms, phaseWalkInfo), Z_Construct_UScriptStruct_FPhaseWalkInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::NewProp_phaseWalkInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::NewProp_phaseWalkInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::NewProp_phaseWalkInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventPhaseWalkingComponentOnPhaseWalkInfoReceived_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventPhaseWalkingComponentTriggerSurvivorVisibilityVFX_Parms
		{
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerSurvivorVisibilityVFX_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerSurvivorVisibilityVFX_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerSurvivorVisibilityVFX_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execCanStartActivePhaseWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartActivePhaseWalk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execGetActivePhaseWalkChargePercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActivePhaseWalkChargePercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execGetActivePhaseWalkCharges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActivePhaseWalkCharges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execGetDecoySlasherComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDecoySlasherComponent**)Z_Param__Result=P_THIS->GetDecoySlasherComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execGetHusk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetHusk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execGetPassivePhaseWalkTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDBDTimer*)Z_Param__Result=P_THIS->GetPassivePhaseWalkTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execGetSpiritPassivePhaseWalkHusksCountToSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSpiritPassivePhaseWalkHusksCountToSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execIsActivePhaseWalking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivePhaseWalking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execIsDecoyActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDecoyActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execIsPassivePhaseWalking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPassivePhaseWalking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execIsPhaseWalking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPhaseWalking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execLocal_EndPhaseWalks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_EndPhaseWalks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execLocal_PhaseWalk)
	{
		P_GET_STRUCT_REF(FPhaseWalkInfo,Z_Param_Out_phaseWalkInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_PhaseWalk(Z_Param_Out_phaseWalkInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execModifyActivePhaseWalkCharges)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyActivePhaseWalkCharges(Z_Param_delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execMulticast_Broadcast_PhaseWalk)
	{
		P_GET_STRUCT(FPhaseWalkInfo,Z_Param_phaseWalkInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_Broadcast_PhaseWalk_Validate(Z_Param_phaseWalkInfo))
		{
			RPC_ValidateFailed(TEXT("Multicast_Broadcast_PhaseWalk_Validate"));
			return;
		}
		P_THIS->Multicast_Broadcast_PhaseWalk_Implementation(Z_Param_phaseWalkInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execRefillActivePhaseWalkCharges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefillActivePhaseWalkCharges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execServer_Broadcast_PhaseWalk)
	{
		P_GET_STRUCT(FPhaseWalkInfo,Z_Param_phaseWalkInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Broadcast_PhaseWalk_Validate(Z_Param_phaseWalkInfo))
		{
			RPC_ValidateFailed(TEXT("Server_Broadcast_PhaseWalk_Validate"));
			return;
		}
		P_THIS->Server_Broadcast_PhaseWalk_Implementation(Z_Param_phaseWalkInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execUpdateKillerVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateKillerVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhaseWalkingComponent::execUpdateSurvivorVisibility)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSurvivorVisibility(Z_Param_visible);
		P_NATIVE_END;
	}
	static FName NAME_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible = FName(TEXT("MakePassivePhaseWalkHusksVisible"));
	void UPhaseWalkingComponent::MakePassivePhaseWalkHusksVisible(FTransform const& huskTransform, float opacityValue, float speedValue)
	{
		PhaseWalkingComponent_eventMakePassivePhaseWalkHusksVisible_Parms Parms;
		Parms.huskTransform=huskTransform;
		Parms.opacityValue=opacityValue;
		Parms.speedValue=speedValue;
		ProcessEvent(FindFunctionChecked(NAME_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible),&Parms);
	}
	static FName NAME_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk = FName(TEXT("Multicast_Broadcast_PhaseWalk"));
	void UPhaseWalkingComponent::Multicast_Broadcast_PhaseWalk(FPhaseWalkInfo const& phaseWalkInfo)
	{
		PhaseWalkingComponent_eventMulticast_Broadcast_PhaseWalk_Parms Parms;
		Parms.phaseWalkInfo=phaseWalkInfo;
		ProcessEvent(FindFunctionChecked(NAME_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk),&Parms);
	}
	static FName NAME_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk = FName(TEXT("Server_Broadcast_PhaseWalk"));
	void UPhaseWalkingComponent::Server_Broadcast_PhaseWalk(FPhaseWalkInfo const& phaseWalkInfo)
	{
		PhaseWalkingComponent_eventServer_Broadcast_PhaseWalk_Parms Parms;
		Parms.phaseWalkInfo=phaseWalkInfo;
		ProcessEvent(FindFunctionChecked(NAME_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk),&Parms);
	}
	static FName NAME_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks = FName(TEXT("SpawnPassivePhaseWalkHusks"));
	void UPhaseWalkingComponent::SpawnPassivePhaseWalkHusks()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks),NULL);
	}
	void UPhaseWalkingComponent::StaticRegisterNativesUPhaseWalkingComponent()
	{
		UClass* Class = UPhaseWalkingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStartActivePhaseWalk", &UPhaseWalkingComponent::execCanStartActivePhaseWalk },
			{ "GetActivePhaseWalkChargePercentage", &UPhaseWalkingComponent::execGetActivePhaseWalkChargePercentage },
			{ "GetActivePhaseWalkCharges", &UPhaseWalkingComponent::execGetActivePhaseWalkCharges },
			{ "GetDecoySlasherComponent", &UPhaseWalkingComponent::execGetDecoySlasherComponent },
			{ "GetHusk", &UPhaseWalkingComponent::execGetHusk },
			{ "GetPassivePhaseWalkTimer", &UPhaseWalkingComponent::execGetPassivePhaseWalkTimer },
			{ "GetSpiritPassivePhaseWalkHusksCountToSpawn", &UPhaseWalkingComponent::execGetSpiritPassivePhaseWalkHusksCountToSpawn },
			{ "IsActivePhaseWalking", &UPhaseWalkingComponent::execIsActivePhaseWalking },
			{ "IsDecoyActive", &UPhaseWalkingComponent::execIsDecoyActive },
			{ "IsPassivePhaseWalking", &UPhaseWalkingComponent::execIsPassivePhaseWalking },
			{ "IsPhaseWalking", &UPhaseWalkingComponent::execIsPhaseWalking },
			{ "Local_EndPhaseWalks", &UPhaseWalkingComponent::execLocal_EndPhaseWalks },
			{ "Local_PhaseWalk", &UPhaseWalkingComponent::execLocal_PhaseWalk },
			{ "ModifyActivePhaseWalkCharges", &UPhaseWalkingComponent::execModifyActivePhaseWalkCharges },
			{ "Multicast_Broadcast_PhaseWalk", &UPhaseWalkingComponent::execMulticast_Broadcast_PhaseWalk },
			{ "OnLevelReadyToPlay", &UPhaseWalkingComponent::execOnLevelReadyToPlay },
			{ "RefillActivePhaseWalkCharges", &UPhaseWalkingComponent::execRefillActivePhaseWalkCharges },
			{ "Server_Broadcast_PhaseWalk", &UPhaseWalkingComponent::execServer_Broadcast_PhaseWalk },
			{ "UpdateKillerVisibility", &UPhaseWalkingComponent::execUpdateKillerVisibility },
			{ "UpdateSurvivorVisibility", &UPhaseWalkingComponent::execUpdateSurvivorVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics
	{
		struct PhaseWalkingComponent_eventCanStartActivePhaseWalk_Parms
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
	void Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhaseWalkingComponent_eventCanStartActivePhaseWalk_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhaseWalkingComponent_eventCanStartActivePhaseWalk_Parms), &Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "CanStartActivePhaseWalk", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventCanStartActivePhaseWalk_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics
	{
		struct PhaseWalkingComponent_eventGetActivePhaseWalkChargePercentage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventGetActivePhaseWalkChargePercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "GetActivePhaseWalkChargePercentage", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventGetActivePhaseWalkChargePercentage_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics
	{
		struct PhaseWalkingComponent_eventGetActivePhaseWalkCharges_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventGetActivePhaseWalkCharges_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "GetActivePhaseWalkCharges", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventGetActivePhaseWalkCharges_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics
	{
		struct PhaseWalkingComponent_eventGetDecoySlasherComponent_Parms
		{
			UDecoySlasherComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventGetDecoySlasherComponent_Parms, ReturnValue), Z_Construct_UClass_UDecoySlasherComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "GetDecoySlasherComponent", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventGetDecoySlasherComponent_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics
	{
		struct PhaseWalkingComponent_eventGetHusk_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventGetHusk_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "GetHusk", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventGetHusk_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics
	{
		struct PhaseWalkingComponent_eventGetPassivePhaseWalkTimer_Parms
		{
			FDBDTimer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventGetPassivePhaseWalkTimer_Parms, ReturnValue), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "GetPassivePhaseWalkTimer", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventGetPassivePhaseWalkTimer_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics
	{
		struct PhaseWalkingComponent_eventGetSpiritPassivePhaseWalkHusksCountToSpawn_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventGetSpiritPassivePhaseWalkHusksCountToSpawn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "GetSpiritPassivePhaseWalkHusksCountToSpawn", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventGetSpiritPassivePhaseWalkHusksCountToSpawn_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics
	{
		struct PhaseWalkingComponent_eventIsActivePhaseWalking_Parms
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
	void Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhaseWalkingComponent_eventIsActivePhaseWalking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhaseWalkingComponent_eventIsActivePhaseWalking_Parms), &Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "IsActivePhaseWalking", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventIsActivePhaseWalking_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics
	{
		struct PhaseWalkingComponent_eventIsDecoyActive_Parms
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
	void Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhaseWalkingComponent_eventIsDecoyActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhaseWalkingComponent_eventIsDecoyActive_Parms), &Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "IsDecoyActive", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventIsDecoyActive_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics
	{
		struct PhaseWalkingComponent_eventIsPassivePhaseWalking_Parms
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
	void Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhaseWalkingComponent_eventIsPassivePhaseWalking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhaseWalkingComponent_eventIsPassivePhaseWalking_Parms), &Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "IsPassivePhaseWalking", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventIsPassivePhaseWalking_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics
	{
		struct PhaseWalkingComponent_eventIsPhaseWalking_Parms
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
	void Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhaseWalkingComponent_eventIsPhaseWalking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhaseWalkingComponent_eventIsPhaseWalking_Parms), &Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "IsPhaseWalking", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventIsPhaseWalking_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_Local_EndPhaseWalks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_Local_EndPhaseWalks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_Local_EndPhaseWalks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "Local_EndPhaseWalks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_Local_EndPhaseWalks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Local_EndPhaseWalks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_Local_EndPhaseWalks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_Local_EndPhaseWalks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics
	{
		struct PhaseWalkingComponent_eventLocal_PhaseWalk_Parms
		{
			FPhaseWalkInfo phaseWalkInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phaseWalkInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_phaseWalkInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::NewProp_phaseWalkInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::NewProp_phaseWalkInfo = { "phaseWalkInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventLocal_PhaseWalk_Parms, phaseWalkInfo), Z_Construct_UScriptStruct_FPhaseWalkInfo, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::NewProp_phaseWalkInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::NewProp_phaseWalkInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::NewProp_phaseWalkInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "Local_PhaseWalk", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventLocal_PhaseWalk_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speedValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_opacityValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_huskTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_huskTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::NewProp_speedValue = { "speedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventMakePassivePhaseWalkHusksVisible_Parms, speedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::NewProp_opacityValue = { "opacityValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventMakePassivePhaseWalkHusksVisible_Parms, opacityValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::NewProp_huskTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::NewProp_huskTransform = { "huskTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventMakePassivePhaseWalkHusksVisible_Parms, huskTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::NewProp_huskTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::NewProp_huskTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::NewProp_speedValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::NewProp_opacityValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::NewProp_huskTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "MakePassivePhaseWalkHusksVisible", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventMakePassivePhaseWalkHusksVisible_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics
	{
		struct PhaseWalkingComponent_eventModifyActivePhaseWalkCharges_Parms
		{
			float delta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventModifyActivePhaseWalkCharges_Parms, delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::NewProp_delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "ModifyActivePhaseWalkCharges", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventModifyActivePhaseWalkCharges_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phaseWalkInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_phaseWalkInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo = { "phaseWalkInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventMulticast_Broadcast_PhaseWalk_Parms, phaseWalkInfo), Z_Construct_UScriptStruct_FPhaseWalkInfo, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "Multicast_Broadcast_PhaseWalk", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventMulticast_Broadcast_PhaseWalk_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_RefillActivePhaseWalkCharges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_RefillActivePhaseWalkCharges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_RefillActivePhaseWalkCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "RefillActivePhaseWalkCharges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_RefillActivePhaseWalkCharges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_RefillActivePhaseWalkCharges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_RefillActivePhaseWalkCharges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_RefillActivePhaseWalkCharges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phaseWalkInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_phaseWalkInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo = { "phaseWalkInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhaseWalkingComponent_eventServer_Broadcast_PhaseWalk_Parms, phaseWalkInfo), Z_Construct_UScriptStruct_FPhaseWalkInfo, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::NewProp_phaseWalkInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "Server_Broadcast_PhaseWalk", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventServer_Broadcast_PhaseWalk_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "SpawnPassivePhaseWalkHusks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_UpdateKillerVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_UpdateKillerVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_UpdateKillerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "UpdateKillerVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_UpdateKillerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_UpdateKillerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_UpdateKillerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_UpdateKillerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics
	{
		struct PhaseWalkingComponent_eventUpdateSurvivorVisibility_Parms
		{
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((PhaseWalkingComponent_eventUpdateSurvivorVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhaseWalkingComponent_eventUpdateSurvivorVisibility_Parms), &Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhaseWalkingComponent, nullptr, "UpdateSurvivorVisibility", nullptr, nullptr, sizeof(PhaseWalkingComponent_eventUpdateSurvivorVisibility_Parms), Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhaseWalkingComponent_NoRegister()
	{
		return UPhaseWalkingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhaseWalkingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultMaxAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__defaultMaxAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activePhaseWalkMaxAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activePhaseWalkMaxAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activePhaseWalkMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activePhaseWalkMaxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__passivePhaseWalkCooldownDurationMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__passivePhaseWalkCooldownDurationMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__passivePhaseWalkCooldownDurationMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__passivePhaseWalkCooldownDurationMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__passivePhaseWalkFirstCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__passivePhaseWalkFirstCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__passivePhaseWalkDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__passivePhaseWalkDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activePhaseWalkChargeGainRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activePhaseWalkChargeGainRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__passivePhaseWalkHusksCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__passivePhaseWalkHusksCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorsAreVisible_MetaData[];
#endif
		static void NewProp__survivorsAreVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__survivorsAreVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activePhaseWalkCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activePhaseWalkCharges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__husk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__husk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInteractionPhaseWalking_MetaData[];
#endif
		static void NewProp__isInteractionPhaseWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInteractionPhaseWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPassivePhaseWalking_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isPassivePhaseWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isActivePhaseWalking_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isActivePhaseWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__huskClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__huskClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMaxActivePhaseWalkCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxActivePhaseWalkCharges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerKillerVisibilityVFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TriggerKillerVisibilityVFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerSurvivorVisibilityVFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TriggerSurvivorVisibilityVFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameEndedVFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameEndedVFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhaseWalkInfoReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhaseWalkInfoReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhaseWalkingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhaseWalkingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_CanStartActivePhaseWalk, "CanStartActivePhaseWalk" }, // 3221446329
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage, "GetActivePhaseWalkChargePercentage" }, // 1035132182
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_GetActivePhaseWalkCharges, "GetActivePhaseWalkCharges" }, // 2729195141
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_GetDecoySlasherComponent, "GetDecoySlasherComponent" }, // 2159635312
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_GetHusk, "GetHusk" }, // 492143754
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_GetPassivePhaseWalkTimer, "GetPassivePhaseWalkTimer" }, // 1203484812
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn, "GetSpiritPassivePhaseWalkHusksCountToSpawn" }, // 1975471308
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_IsActivePhaseWalking, "IsActivePhaseWalking" }, // 2597656140
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_IsDecoyActive, "IsDecoyActive" }, // 1284013354
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_IsPassivePhaseWalking, "IsPassivePhaseWalking" }, // 2037386001
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_IsPhaseWalking, "IsPhaseWalking" }, // 1478125177
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_Local_EndPhaseWalks, "Local_EndPhaseWalks" }, // 3746797148
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_Local_PhaseWalk, "Local_PhaseWalk" }, // 1289612974
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible, "MakePassivePhaseWalkHusksVisible" }, // 3183183775
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_ModifyActivePhaseWalkCharges, "ModifyActivePhaseWalkCharges" }, // 2336302649
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk, "Multicast_Broadcast_PhaseWalk" }, // 821040821
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 3629455295
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_RefillActivePhaseWalkCharges, "RefillActivePhaseWalkCharges" }, // 2117425621
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_Server_Broadcast_PhaseWalk, "Server_Broadcast_PhaseWalk" }, // 3967308803
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks, "SpawnPassivePhaseWalkHusks" }, // 346117198
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_UpdateKillerVisibility, "UpdateKillerVisibility" }, // 2448760731
		{ &Z_Construct_UFunction_UPhaseWalkingComponent_UpdateSurvivorVisibility, "UpdateSurvivorVisibility" }, // 1285697689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhaseWalkingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__defaultMaxAcceleration_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__defaultMaxAcceleration = { "_defaultMaxAcceleration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _defaultMaxAcceleration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__defaultMaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__defaultMaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxAcceleration_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxAcceleration = { "_activePhaseWalkMaxAcceleration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _activePhaseWalkMaxAcceleration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxCharge_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxCharge = { "_activePhaseWalkMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _activePhaseWalkMaxCharge), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMax_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMax = { "_passivePhaseWalkCooldownDurationMax", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkCooldownDurationMax), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMin_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMin = { "_passivePhaseWalkCooldownDurationMin", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkCooldownDurationMin), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkFirstCooldownDuration_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkFirstCooldownDuration = { "_passivePhaseWalkFirstCooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkFirstCooldownDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkFirstCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkFirstCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkDuration_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkDuration = { "_passivePhaseWalkDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkDuration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkChargeGainRate_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkChargeGainRate = { "_activePhaseWalkChargeGainRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _activePhaseWalkChargeGainRate), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkChargeGainRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkChargeGainRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkHusksCount_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkHusksCount = { "_passivePhaseWalkHusksCount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkHusksCount), METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkHusksCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkHusksCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__survivorsAreVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__survivorsAreVisible_SetBit(void* Obj)
	{
		((UPhaseWalkingComponent*)Obj)->_survivorsAreVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__survivorsAreVisible = { "_survivorsAreVisible", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhaseWalkingComponent), &Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__survivorsAreVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__survivorsAreVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__survivorsAreVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkCharges_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkCharges = { "_activePhaseWalkCharges", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _activePhaseWalkCharges), Z_Construct_UScriptStruct_FDBDBidirectionalTimer, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkCharges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__husk_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__husk = { "_husk", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _husk), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__husk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__husk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isInteractionPhaseWalking_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isInteractionPhaseWalking_SetBit(void* Obj)
	{
		((UPhaseWalkingComponent*)Obj)->_isInteractionPhaseWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isInteractionPhaseWalking = { "_isInteractionPhaseWalking", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhaseWalkingComponent), &Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isInteractionPhaseWalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isInteractionPhaseWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isInteractionPhaseWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isPassivePhaseWalking_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isPassivePhaseWalking = { "_isPassivePhaseWalking", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _isPassivePhaseWalking), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isPassivePhaseWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isPassivePhaseWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isActivePhaseWalking_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isActivePhaseWalking = { "_isActivePhaseWalking", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _isActivePhaseWalking), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isActivePhaseWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isActivePhaseWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__huskClass_MetaData[] = {
		{ "Category", "PhaseWalkingComponent" },
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__huskClass = { "_huskClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, _huskClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__huskClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__huskClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnMaxActivePhaseWalkCharges_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnMaxActivePhaseWalkCharges = { "OnMaxActivePhaseWalkCharges", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, OnMaxActivePhaseWalkCharges), Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnMaxActivePhaseWalkCharges__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnMaxActivePhaseWalkCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnMaxActivePhaseWalkCharges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerKillerVisibilityVFX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerKillerVisibilityVFX = { "TriggerKillerVisibilityVFX", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, TriggerKillerVisibilityVFX), Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerKillerVisibilityVFX__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerKillerVisibilityVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerKillerVisibilityVFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerSurvivorVisibilityVFX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerSurvivorVisibilityVFX = { "TriggerSurvivorVisibilityVFX", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, TriggerSurvivorVisibilityVFX), Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentTriggerSurvivorVisibilityVFX__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerSurvivorVisibilityVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerSurvivorVisibilityVFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnGameEndedVFX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnGameEndedVFX = { "OnGameEndedVFX", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, OnGameEndedVFX), Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnGameEndedVFX__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnGameEndedVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnGameEndedVFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnPhaseWalkInfoReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhaseWalkingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnPhaseWalkInfoReceived = { "OnPhaseWalkInfoReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhaseWalkingComponent, OnPhaseWalkInfoReceived), Z_Construct_UDelegateFunction_DeadByDaylight_PhaseWalkingComponentOnPhaseWalkInfoReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnPhaseWalkInfoReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnPhaseWalkInfoReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhaseWalkingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__defaultMaxAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkMaxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkCooldownDurationMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkFirstCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkChargeGainRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__passivePhaseWalkHusksCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__survivorsAreVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__activePhaseWalkCharges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__husk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isInteractionPhaseWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isPassivePhaseWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__isActivePhaseWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp__huskClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnMaxActivePhaseWalkCharges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerKillerVisibilityVFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_TriggerSurvivorVisibilityVFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnGameEndedVFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhaseWalkingComponent_Statics::NewProp_OnPhaseWalkInfoReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhaseWalkingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhaseWalkingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhaseWalkingComponent_Statics::ClassParams = {
		&UPhaseWalkingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhaseWalkingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhaseWalkingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhaseWalkingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhaseWalkingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhaseWalkingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhaseWalkingComponent, 3391056931);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPhaseWalkingComponent>()
	{
		return UPhaseWalkingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhaseWalkingComponent(Z_Construct_UClass_UPhaseWalkingComponent, &UPhaseWalkingComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPhaseWalkingComponent"), false, nullptr, nullptr, nullptr);

	void UPhaseWalkingComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__husk(TEXT("_husk"));

		const bool bIsValid = true
			&& Name__husk == ClassReps[(int32)ENetFields_Private::_husk].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPhaseWalkingComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhaseWalkingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
