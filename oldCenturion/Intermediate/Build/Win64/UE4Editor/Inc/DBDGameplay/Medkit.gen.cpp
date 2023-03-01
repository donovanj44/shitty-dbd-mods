// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/Medkit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMedkit() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_AMedkit_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_AMedkit();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ABaseCamperCollectable();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargerComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMedkit::execAuthority_ConsumeIfNotInteracting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ConsumeIfNotInteracting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMedkit::execAuthority_OnAnyOngoingInteractionChanged)
	{
		P_GET_UBOOL(Z_Param_isInteracting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnAnyOngoingInteractionChanged(Z_Param_isInteracting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMedkit::execAuthority_OnChargeStateChange)
	{
		P_GET_UBOOL(Z_Param_empty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnChargeStateChange(Z_Param_empty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMedkit::execGetChargeMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChargeMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMedkit::execHasCharge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCharge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMedkit::execOnMedkitHealedCamper)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_healedPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMedkitHealedCamper_Implementation(Z_Param_healedPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMedkit::execUseCharge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseCharge(Z_Param_seconds);
		P_NATIVE_END;
	}
	static FName NAME_AMedkit_OnMedkitHealedCamper = FName(TEXT("OnMedkitHealedCamper"));
	void AMedkit::OnMedkitHealedCamper(ADBDPlayer* healedPlayer)
	{
		Medkit_eventOnMedkitHealedCamper_Parms Parms;
		Parms.healedPlayer=healedPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AMedkit_OnMedkitHealedCamper),&Parms);
	}
	void AMedkit::StaticRegisterNativesAMedkit()
	{
		UClass* Class = AMedkit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_ConsumeIfNotInteracting", &AMedkit::execAuthority_ConsumeIfNotInteracting },
			{ "Authority_OnAnyOngoingInteractionChanged", &AMedkit::execAuthority_OnAnyOngoingInteractionChanged },
			{ "Authority_OnChargeStateChange", &AMedkit::execAuthority_OnChargeStateChange },
			{ "GetChargeMultiplier", &AMedkit::execGetChargeMultiplier },
			{ "HasCharge", &AMedkit::execHasCharge },
			{ "OnMedkitHealedCamper", &AMedkit::execOnMedkitHealedCamper },
			{ "UseCharge", &AMedkit::execUseCharge },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMedkit_Authority_ConsumeIfNotInteracting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedkit_Authority_ConsumeIfNotInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMedkit_Authority_ConsumeIfNotInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMedkit, nullptr, "Authority_ConsumeIfNotInteracting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMedkit_Authority_ConsumeIfNotInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_Authority_ConsumeIfNotInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMedkit_Authority_ConsumeIfNotInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMedkit_Authority_ConsumeIfNotInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics
	{
		struct Medkit_eventAuthority_OnAnyOngoingInteractionChanged_Parms
		{
			bool isInteracting;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isInteracting_MetaData[];
#endif
		static void NewProp_isInteracting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInteracting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::NewProp_isInteracting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::NewProp_isInteracting_SetBit(void* Obj)
	{
		((Medkit_eventAuthority_OnAnyOngoingInteractionChanged_Parms*)Obj)->isInteracting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::NewProp_isInteracting = { "isInteracting", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Medkit_eventAuthority_OnAnyOngoingInteractionChanged_Parms), &Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::NewProp_isInteracting_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::NewProp_isInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::NewProp_isInteracting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::NewProp_isInteracting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMedkit, nullptr, "Authority_OnAnyOngoingInteractionChanged", nullptr, nullptr, sizeof(Medkit_eventAuthority_OnAnyOngoingInteractionChanged_Parms), Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics
	{
		struct Medkit_eventAuthority_OnChargeStateChange_Parms
		{
			bool empty;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_empty_MetaData[];
#endif
		static void NewProp_empty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_empty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::NewProp_empty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::NewProp_empty_SetBit(void* Obj)
	{
		((Medkit_eventAuthority_OnChargeStateChange_Parms*)Obj)->empty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::NewProp_empty = { "empty", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Medkit_eventAuthority_OnChargeStateChange_Parms), &Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::NewProp_empty_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::NewProp_empty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::NewProp_empty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::NewProp_empty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMedkit, nullptr, "Authority_OnChargeStateChange", nullptr, nullptr, sizeof(Medkit_eventAuthority_OnChargeStateChange_Parms), Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics
	{
		struct Medkit_eventGetChargeMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Medkit_eventGetChargeMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMedkit, nullptr, "GetChargeMultiplier", nullptr, nullptr, sizeof(Medkit_eventGetChargeMultiplier_Parms), Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMedkit_GetChargeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMedkit_GetChargeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMedkit_HasCharge_Statics
	{
		struct Medkit_eventHasCharge_Parms
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
	void Z_Construct_UFunction_AMedkit_HasCharge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Medkit_eventHasCharge_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMedkit_HasCharge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Medkit_eventHasCharge_Parms), &Z_Construct_UFunction_AMedkit_HasCharge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMedkit_HasCharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedkit_HasCharge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedkit_HasCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMedkit_HasCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMedkit, nullptr, "HasCharge", nullptr, nullptr, sizeof(Medkit_eventHasCharge_Parms), Z_Construct_UFunction_AMedkit_HasCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_HasCharge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMedkit_HasCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_HasCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMedkit_HasCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMedkit_HasCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::NewProp_healedPlayer = { "healedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Medkit_eventOnMedkitHealedCamper_Parms, healedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::NewProp_healedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMedkit, nullptr, "OnMedkitHealedCamper", nullptr, nullptr, sizeof(Medkit_eventOnMedkitHealedCamper_Parms), Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMedkit_UseCharge_Statics
	{
		struct Medkit_eventUseCharge_Parms
		{
			float seconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMedkit_UseCharge_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Medkit_eventUseCharge_Parms, seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMedkit_UseCharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedkit_UseCharge_Statics::NewProp_seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedkit_UseCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMedkit_UseCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMedkit, nullptr, "UseCharge", nullptr, nullptr, sizeof(Medkit_eventUseCharge_Parms), Z_Construct_UFunction_AMedkit_UseCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_UseCharge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMedkit_UseCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedkit_UseCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMedkit_UseCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMedkit_UseCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMedkit_NoRegister()
	{
		return AMedkit::StaticClass();
	}
	struct Z_Construct_UClass_AMedkit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__healOtherChargeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__healOtherChargeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__medkitBank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__medkitBank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__medkitDropAkEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__medkitDropAkEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__medkitGetAkEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__medkitGetAkEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dustRingTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dustRingTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__charger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__charger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__akComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__akComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMedkit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCamperCollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMedkit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMedkit_Authority_ConsumeIfNotInteracting, "Authority_ConsumeIfNotInteracting" }, // 2241112031
		{ &Z_Construct_UFunction_AMedkit_Authority_OnAnyOngoingInteractionChanged, "Authority_OnAnyOngoingInteractionChanged" }, // 739734025
		{ &Z_Construct_UFunction_AMedkit_Authority_OnChargeStateChange, "Authority_OnChargeStateChange" }, // 553398791
		{ &Z_Construct_UFunction_AMedkit_GetChargeMultiplier, "GetChargeMultiplier" }, // 888389422
		{ &Z_Construct_UFunction_AMedkit_HasCharge, "HasCharge" }, // 307454218
		{ &Z_Construct_UFunction_AMedkit_OnMedkitHealedCamper, "OnMedkitHealedCamper" }, // 3937347918
		{ &Z_Construct_UFunction_AMedkit_UseCharge, "UseCharge" }, // 1448112756
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedkit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Medkit.h" },
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedkit_Statics::NewProp__healOtherChargeMultiplier_MetaData[] = {
		{ "Category", "Medkit" },
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMedkit_Statics::NewProp__healOtherChargeMultiplier = { "_healOtherChargeMultiplier", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedkit, _healOtherChargeMultiplier), METADATA_PARAMS(Z_Construct_UClass_AMedkit_Statics::NewProp__healOtherChargeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMedkit_Statics::NewProp__healOtherChargeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedkit_Statics::NewProp__medkitBank_MetaData[] = {
		{ "Category", "Medkit" },
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMedkit_Statics::NewProp__medkitBank = { "_medkitBank", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedkit, _medkitBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMedkit_Statics::NewProp__medkitBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMedkit_Statics::NewProp__medkitBank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedkit_Statics::NewProp__medkitDropAkEvent_MetaData[] = {
		{ "Category", "Medkit" },
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMedkit_Statics::NewProp__medkitDropAkEvent = { "_medkitDropAkEvent", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedkit, _medkitDropAkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMedkit_Statics::NewProp__medkitDropAkEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMedkit_Statics::NewProp__medkitDropAkEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedkit_Statics::NewProp__medkitGetAkEvent_MetaData[] = {
		{ "Category", "Medkit" },
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMedkit_Statics::NewProp__medkitGetAkEvent = { "_medkitGetAkEvent", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedkit, _medkitGetAkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMedkit_Statics::NewProp__medkitGetAkEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMedkit_Statics::NewProp__medkitGetAkEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedkit_Statics::NewProp__dustRingTemplate_MetaData[] = {
		{ "Category", "Medkit" },
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMedkit_Statics::NewProp__dustRingTemplate = { "_dustRingTemplate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedkit, _dustRingTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMedkit_Statics::NewProp__dustRingTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMedkit_Statics::NewProp__dustRingTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedkit_Statics::NewProp__charger_MetaData[] = {
		{ "Category", "Medkit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMedkit_Statics::NewProp__charger = { "_charger", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedkit, _charger), Z_Construct_UClass_UChargerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMedkit_Statics::NewProp__charger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMedkit_Statics::NewProp__charger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedkit_Statics::NewProp__akComponent_MetaData[] = {
		{ "Category", "Medkit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Medkit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMedkit_Statics::NewProp__akComponent = { "_akComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedkit, _akComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMedkit_Statics::NewProp__akComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMedkit_Statics::NewProp__akComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMedkit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedkit_Statics::NewProp__healOtherChargeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedkit_Statics::NewProp__medkitBank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedkit_Statics::NewProp__medkitDropAkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedkit_Statics::NewProp__medkitGetAkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedkit_Statics::NewProp__dustRingTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedkit_Statics::NewProp__charger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedkit_Statics::NewProp__akComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMedkit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMedkit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMedkit_Statics::ClassParams = {
		&AMedkit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMedkit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMedkit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMedkit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMedkit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMedkit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMedkit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMedkit, 2718683211);
	template<> DBDGAMEPLAY_API UClass* StaticClass<AMedkit>()
	{
		return AMedkit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMedkit(Z_Construct_UClass_AMedkit, &AMedkit::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("AMedkit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMedkit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
