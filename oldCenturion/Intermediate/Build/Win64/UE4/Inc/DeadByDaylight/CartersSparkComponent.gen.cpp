// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CartersSparkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCartersSparkComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCartersSparkComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCartersSparkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCartersSparkComponent::execAuthority_AddTotallyInsaneSurvivor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_insaneSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddTotallyInsaneSurvivor(Z_Param_insaneSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartersSparkComponent::execAuthority_RegisterToGameEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RegisterToGameEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartersSparkComponent::execGetStaticBlastCooldownPercentElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStaticBlastCooldownPercentElapsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartersSparkComponent::execIsShockTherapyOnCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShockTherapyOnCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartersSparkComponent::execIsStaticBlastOnCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStaticBlastOnCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartersSparkComponent::execMulticast_OnShockTherapyCooldownCheatEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_OnShockTherapyCooldownCheatEntered_Validate())
		{
			RPC_ValidateFailed(TEXT("Multicast_OnShockTherapyCooldownCheatEntered_Validate"));
			return;
		}
		P_THIS->Multicast_OnShockTherapyCooldownCheatEntered_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartersSparkComponent::execOnRequestAndBeginInteraction)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_interaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRequestAndBeginInteraction(Z_Param_interaction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartersSparkComponent::execTriggerShockTherapyCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerShockTherapyCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartersSparkComponent::execTriggerStaticBlastCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerStaticBlastCooldown();
		P_NATIVE_END;
	}
	static FName NAME_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered = FName(TEXT("Multicast_OnShockTherapyCooldownCheatEntered"));
	void UCartersSparkComponent::Multicast_OnShockTherapyCooldownCheatEntered()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered),NULL);
	}
	void UCartersSparkComponent::StaticRegisterNativesUCartersSparkComponent()
	{
		UClass* Class = UCartersSparkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddTotallyInsaneSurvivor", &UCartersSparkComponent::execAuthority_AddTotallyInsaneSurvivor },
			{ "Authority_RegisterToGameEvents", &UCartersSparkComponent::execAuthority_RegisterToGameEvents },
			{ "GetStaticBlastCooldownPercentElapsed", &UCartersSparkComponent::execGetStaticBlastCooldownPercentElapsed },
			{ "IsShockTherapyOnCooldown", &UCartersSparkComponent::execIsShockTherapyOnCooldown },
			{ "IsStaticBlastOnCooldown", &UCartersSparkComponent::execIsStaticBlastOnCooldown },
			{ "Multicast_OnShockTherapyCooldownCheatEntered", &UCartersSparkComponent::execMulticast_OnShockTherapyCooldownCheatEntered },
			{ "OnRequestAndBeginInteraction", &UCartersSparkComponent::execOnRequestAndBeginInteraction },
			{ "TriggerShockTherapyCooldown", &UCartersSparkComponent::execTriggerShockTherapyCooldown },
			{ "TriggerStaticBlastCooldown", &UCartersSparkComponent::execTriggerStaticBlastCooldown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics
	{
		struct CartersSparkComponent_eventAuthority_AddTotallyInsaneSurvivor_Parms
		{
			ADBDPlayer* insaneSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_insaneSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::NewProp_insaneSurvivor = { "insaneSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CartersSparkComponent_eventAuthority_AddTotallyInsaneSurvivor_Parms, insaneSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::NewProp_insaneSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartersSparkComponent, nullptr, "Authority_AddTotallyInsaneSurvivor", nullptr, nullptr, sizeof(CartersSparkComponent_eventAuthority_AddTotallyInsaneSurvivor_Parms), Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartersSparkComponent_Authority_RegisterToGameEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_Authority_RegisterToGameEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartersSparkComponent_Authority_RegisterToGameEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartersSparkComponent, nullptr, "Authority_RegisterToGameEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_Authority_RegisterToGameEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_Authority_RegisterToGameEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartersSparkComponent_Authority_RegisterToGameEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCartersSparkComponent_Authority_RegisterToGameEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics
	{
		struct CartersSparkComponent_eventGetStaticBlastCooldownPercentElapsed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CartersSparkComponent_eventGetStaticBlastCooldownPercentElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartersSparkComponent, nullptr, "GetStaticBlastCooldownPercentElapsed", nullptr, nullptr, sizeof(CartersSparkComponent_eventGetStaticBlastCooldownPercentElapsed_Parms), Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics
	{
		struct CartersSparkComponent_eventIsShockTherapyOnCooldown_Parms
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
	void Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CartersSparkComponent_eventIsShockTherapyOnCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CartersSparkComponent_eventIsShockTherapyOnCooldown_Parms), &Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartersSparkComponent, nullptr, "IsShockTherapyOnCooldown", nullptr, nullptr, sizeof(CartersSparkComponent_eventIsShockTherapyOnCooldown_Parms), Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics
	{
		struct CartersSparkComponent_eventIsStaticBlastOnCooldown_Parms
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
	void Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CartersSparkComponent_eventIsStaticBlastOnCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CartersSparkComponent_eventIsStaticBlastOnCooldown_Parms), &Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartersSparkComponent, nullptr, "IsStaticBlastOnCooldown", nullptr, nullptr, sizeof(CartersSparkComponent_eventIsStaticBlastOnCooldown_Parms), Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartersSparkComponent, nullptr, "Multicast_OnShockTherapyCooldownCheatEntered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics
	{
		struct CartersSparkComponent_eventOnRequestAndBeginInteraction_Parms
		{
			UInteractionDefinition* interaction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CartersSparkComponent_eventOnRequestAndBeginInteraction_Parms, interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartersSparkComponent, nullptr, "OnRequestAndBeginInteraction", nullptr, nullptr, sizeof(CartersSparkComponent_eventOnRequestAndBeginInteraction_Parms), Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartersSparkComponent_TriggerShockTherapyCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_TriggerShockTherapyCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartersSparkComponent_TriggerShockTherapyCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartersSparkComponent, nullptr, "TriggerShockTherapyCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_TriggerShockTherapyCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_TriggerShockTherapyCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartersSparkComponent_TriggerShockTherapyCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCartersSparkComponent_TriggerShockTherapyCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartersSparkComponent_TriggerStaticBlastCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartersSparkComponent_TriggerStaticBlastCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartersSparkComponent_TriggerStaticBlastCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartersSparkComponent, nullptr, "TriggerStaticBlastCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartersSparkComponent_TriggerStaticBlastCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartersSparkComponent_TriggerStaticBlastCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartersSparkComponent_TriggerStaticBlastCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCartersSparkComponent_TriggerStaticBlastCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCartersSparkComponent_NoRegister()
	{
		return UCartersSparkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCartersSparkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totallyInsanePlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__totallyInsanePlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__totallyInsanePlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__staticBlastEnabled_MetaData[];
#endif
		static void NewProp__staticBlastEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__staticBlastEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCartersSparkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCartersSparkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCartersSparkComponent_Authority_AddTotallyInsaneSurvivor, "Authority_AddTotallyInsaneSurvivor" }, // 2350662723
		{ &Z_Construct_UFunction_UCartersSparkComponent_Authority_RegisterToGameEvents, "Authority_RegisterToGameEvents" }, // 589734232
		{ &Z_Construct_UFunction_UCartersSparkComponent_GetStaticBlastCooldownPercentElapsed, "GetStaticBlastCooldownPercentElapsed" }, // 2401229626
		{ &Z_Construct_UFunction_UCartersSparkComponent_IsShockTherapyOnCooldown, "IsShockTherapyOnCooldown" }, // 1591549419
		{ &Z_Construct_UFunction_UCartersSparkComponent_IsStaticBlastOnCooldown, "IsStaticBlastOnCooldown" }, // 542591766
		{ &Z_Construct_UFunction_UCartersSparkComponent_Multicast_OnShockTherapyCooldownCheatEntered, "Multicast_OnShockTherapyCooldownCheatEntered" }, // 1499023270
		{ &Z_Construct_UFunction_UCartersSparkComponent_OnRequestAndBeginInteraction, "OnRequestAndBeginInteraction" }, // 3336803892
		{ &Z_Construct_UFunction_UCartersSparkComponent_TriggerShockTherapyCooldown, "TriggerShockTherapyCooldown" }, // 2247372882
		{ &Z_Construct_UFunction_UCartersSparkComponent_TriggerStaticBlastCooldown, "TriggerStaticBlastCooldown" }, // 4202939683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCartersSparkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CartersSparkComponent.h" },
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__owningPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__owningPlayer = { "_owningPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCartersSparkComponent, _owningPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__owningPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__owningPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__totallyInsanePlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__totallyInsanePlayers = { "_totallyInsanePlayers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCartersSparkComponent, _totallyInsanePlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__totallyInsanePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__totallyInsanePlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__totallyInsanePlayers_Inner = { "_totallyInsanePlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__staticBlastEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CartersSparkComponent" },
		{ "ModuleRelativePath", "Public/CartersSparkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__staticBlastEnabled_SetBit(void* Obj)
	{
		((UCartersSparkComponent*)Obj)->_staticBlastEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__staticBlastEnabled = { "_staticBlastEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCartersSparkComponent), &Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__staticBlastEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__staticBlastEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__staticBlastEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCartersSparkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__owningPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__totallyInsanePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__totallyInsanePlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCartersSparkComponent_Statics::NewProp__staticBlastEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCartersSparkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCartersSparkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCartersSparkComponent_Statics::ClassParams = {
		&UCartersSparkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCartersSparkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCartersSparkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCartersSparkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCartersSparkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCartersSparkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCartersSparkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCartersSparkComponent, 2523821868);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCartersSparkComponent>()
	{
		return UCartersSparkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCartersSparkComponent(Z_Construct_UClass_UCartersSparkComponent, &UCartersSparkComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCartersSparkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCartersSparkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
