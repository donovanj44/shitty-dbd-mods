// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ChargerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChargerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEnergyTypeEnum();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEnergyPoweredInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventChargerComponentOnChargePercentChange_Parms
		{
			float ChargePercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargePercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::NewProp_ChargePercent = { "ChargePercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventChargerComponentOnChargePercentChange_Parms, ChargePercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::NewProp_ChargePercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "ChargerComponentOnChargePercentChange__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventChargerComponentOnChargePercentChange_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventChargerComponentOnChargeStateChange_Parms
		{
			bool Empty;
		};
		static void NewProp_Empty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Empty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::NewProp_Empty_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventChargerComponentOnChargeStateChange_Parms*)Obj)->Empty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::NewProp_Empty = { "Empty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventChargerComponentOnChargeStateChange_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::NewProp_Empty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::NewProp_Empty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "ChargerComponentOnChargeStateChange__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventChargerComponentOnChargeStateChange_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UChargerComponent::execGetEnergyLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergyLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargerComponent::execGetMaxEnergyLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxEnergyLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargerComponent::execGetNormalizedEnergyLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizedEnergyLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargerComponent::execHasCharge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCharge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargerComponent::execOnRep_EnergyLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_previousEnergyLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EnergyLevel(Z_Param_previousEnergyLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargerComponent::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargerComponent::execSetEnergyLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_energyLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnergyLevel(Z_Param_energyLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargerComponent::execSetMaxEnergyLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_energyLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxEnergyLevel(Z_Param_energyLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargerComponent::execSetNormalizedEnergyLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_energyLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNormalizedEnergyLevel(Z_Param_energyLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargerComponent::execUseEnergy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_seconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_energyUseModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseEnergy(Z_Param_seconds,Z_Param_energyUseModifier);
		P_NATIVE_END;
	}
	void UChargerComponent::StaticRegisterNativesUChargerComponent()
	{
		UClass* Class = UChargerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnergyLevel", &UChargerComponent::execGetEnergyLevel },
			{ "GetMaxEnergyLevel", &UChargerComponent::execGetMaxEnergyLevel },
			{ "GetNormalizedEnergyLevel", &UChargerComponent::execGetNormalizedEnergyLevel },
			{ "HasCharge", &UChargerComponent::execHasCharge },
			{ "OnRep_EnergyLevel", &UChargerComponent::execOnRep_EnergyLevel },
			{ "Reset", &UChargerComponent::execReset },
			{ "SetEnergyLevel", &UChargerComponent::execSetEnergyLevel },
			{ "SetMaxEnergyLevel", &UChargerComponent::execSetMaxEnergyLevel },
			{ "SetNormalizedEnergyLevel", &UChargerComponent::execSetNormalizedEnergyLevel },
			{ "UseEnergy", &UChargerComponent::execUseEnergy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics
	{
		struct ChargerComponent_eventGetEnergyLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargerComponent_eventGetEnergyLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "GetEnergyLevel", nullptr, nullptr, sizeof(ChargerComponent_eventGetEnergyLevel_Parms), Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_GetEnergyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_GetEnergyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics
	{
		struct ChargerComponent_eventGetMaxEnergyLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargerComponent_eventGetMaxEnergyLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "GetMaxEnergyLevel", nullptr, nullptr, sizeof(ChargerComponent_eventGetMaxEnergyLevel_Parms), Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics
	{
		struct ChargerComponent_eventGetNormalizedEnergyLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargerComponent_eventGetNormalizedEnergyLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "GetNormalizedEnergyLevel", nullptr, nullptr, sizeof(ChargerComponent_eventGetNormalizedEnergyLevel_Parms), Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargerComponent_HasCharge_Statics
	{
		struct ChargerComponent_eventHasCharge_Parms
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
	void Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChargerComponent_eventHasCharge_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChargerComponent_eventHasCharge_Parms), &Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "HasCharge", nullptr, nullptr, sizeof(ChargerComponent_eventHasCharge_Parms), Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_HasCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_HasCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics
	{
		struct ChargerComponent_eventOnRep_EnergyLevel_Parms
		{
			float previousEnergyLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_previousEnergyLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::NewProp_previousEnergyLevel = { "previousEnergyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargerComponent_eventOnRep_EnergyLevel_Parms, previousEnergyLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::NewProp_previousEnergyLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "OnRep_EnergyLevel", nullptr, nullptr, sizeof(ChargerComponent_eventOnRep_EnergyLevel_Parms), Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargerComponent_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics
	{
		struct ChargerComponent_eventSetEnergyLevel_Parms
		{
			float energyLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::NewProp_energyLevel = { "energyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargerComponent_eventSetEnergyLevel_Parms, energyLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::NewProp_energyLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "SetEnergyLevel", nullptr, nullptr, sizeof(ChargerComponent_eventSetEnergyLevel_Parms), Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_SetEnergyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_SetEnergyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics
	{
		struct ChargerComponent_eventSetMaxEnergyLevel_Parms
		{
			float energyLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::NewProp_energyLevel = { "energyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargerComponent_eventSetMaxEnergyLevel_Parms, energyLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::NewProp_energyLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "SetMaxEnergyLevel", nullptr, nullptr, sizeof(ChargerComponent_eventSetMaxEnergyLevel_Parms), Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics
	{
		struct ChargerComponent_eventSetNormalizedEnergyLevel_Parms
		{
			float energyLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::NewProp_energyLevel = { "energyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargerComponent_eventSetNormalizedEnergyLevel_Parms, energyLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::NewProp_energyLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "SetNormalizedEnergyLevel", nullptr, nullptr, sizeof(ChargerComponent_eventSetNormalizedEnergyLevel_Parms), Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics
	{
		struct ChargerComponent_eventUseEnergy_Parms
		{
			float seconds;
			float energyUseModifier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyUseModifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::NewProp_energyUseModifier = { "energyUseModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargerComponent_eventUseEnergy_Parms, energyUseModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargerComponent_eventUseEnergy_Parms, seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::NewProp_energyUseModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::NewProp_seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargerComponent, nullptr, "UseEnergy", nullptr, nullptr, sizeof(ChargerComponent_eventUseEnergy_Parms), Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargerComponent_UseEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargerComponent_UseEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChargerComponent_NoRegister()
	{
		return UChargerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChargerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxEnergyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxEnergyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentEnergyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__currentEnergyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnergyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnergyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChargePercentChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChargePercentChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChargeStateChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChargeStateChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargerComponentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChargerComponentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChargerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChargerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChargerComponent_GetEnergyLevel, "GetEnergyLevel" }, // 1184237284
		{ &Z_Construct_UFunction_UChargerComponent_GetMaxEnergyLevel, "GetMaxEnergyLevel" }, // 1756327151
		{ &Z_Construct_UFunction_UChargerComponent_GetNormalizedEnergyLevel, "GetNormalizedEnergyLevel" }, // 4082611723
		{ &Z_Construct_UFunction_UChargerComponent_HasCharge, "HasCharge" }, // 1729917738
		{ &Z_Construct_UFunction_UChargerComponent_OnRep_EnergyLevel, "OnRep_EnergyLevel" }, // 1064431387
		{ &Z_Construct_UFunction_UChargerComponent_Reset, "Reset" }, // 2734427720
		{ &Z_Construct_UFunction_UChargerComponent_SetEnergyLevel, "SetEnergyLevel" }, // 3417052361
		{ &Z_Construct_UFunction_UChargerComponent_SetMaxEnergyLevel, "SetMaxEnergyLevel" }, // 1998458780
		{ &Z_Construct_UFunction_UChargerComponent_SetNormalizedEnergyLevel, "SetNormalizedEnergyLevel" }, // 3196171754
		{ &Z_Construct_UFunction_UChargerComponent_UseEnergy, "UseEnergy" }, // 372200376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChargerComponent.h" },
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargerComponent_Statics::NewProp__maxEnergyLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChargerComponent_Statics::NewProp__maxEnergyLevel = { "_maxEnergyLevel", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargerComponent, _maxEnergyLevel), METADATA_PARAMS(Z_Construct_UClass_UChargerComponent_Statics::NewProp__maxEnergyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargerComponent_Statics::NewProp__maxEnergyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargerComponent_Statics::NewProp__currentEnergyLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChargerComponent_Statics::NewProp__currentEnergyLevel = { "_currentEnergyLevel", "OnRep_EnergyLevel", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargerComponent, _currentEnergyLevel), METADATA_PARAMS(Z_Construct_UClass_UChargerComponent_Statics::NewProp__currentEnergyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargerComponent_Statics::NewProp__currentEnergyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargerComponent_Statics::NewProp_EnergyType_MetaData[] = {
		{ "Category", "ChargerComponent" },
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChargerComponent_Statics::NewProp_EnergyType = { "EnergyType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargerComponent, EnergyType), Z_Construct_UEnum_DeadByDaylight_EEnergyTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UChargerComponent_Statics::NewProp_EnergyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargerComponent_Statics::NewProp_EnergyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChargerComponent_Statics::NewProp_EnergyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargePercentChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargePercentChange = { "OnChargePercentChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargerComponent, OnChargePercentChange), Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargePercentChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargePercentChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargePercentChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargeStateChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargeStateChange = { "OnChargeStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargerComponent, OnChargeStateChange), Z_Construct_UDelegateFunction_DeadByDaylight_ChargerComponentOnChargeStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargeStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargeStateChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargerComponent_Statics::NewProp_ChargerComponentID_MetaData[] = {
		{ "Category", "ChargerComponent" },
		{ "ModuleRelativePath", "Public/ChargerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChargerComponent_Statics::NewProp_ChargerComponentID = { "ChargerComponentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargerComponent, ChargerComponentID), METADATA_PARAMS(Z_Construct_UClass_UChargerComponent_Statics::NewProp_ChargerComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargerComponent_Statics::NewProp_ChargerComponentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChargerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargerComponent_Statics::NewProp__maxEnergyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargerComponent_Statics::NewProp__currentEnergyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargerComponent_Statics::NewProp_EnergyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargerComponent_Statics::NewProp_EnergyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargePercentChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargerComponent_Statics::NewProp_OnChargeStateChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargerComponent_Statics::NewProp_ChargerComponentID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UChargerComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnergyPoweredInterface_NoRegister, (int32)VTABLE_OFFSET(UChargerComponent, IEnergyPoweredInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChargerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChargerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChargerComponent_Statics::ClassParams = {
		&UChargerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChargerComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChargerComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChargerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChargerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChargerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChargerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChargerComponent, 1404009185);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UChargerComponent>()
	{
		return UChargerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChargerComponent(Z_Construct_UClass_UChargerComponent, &UChargerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UChargerComponent"), false, nullptr, nullptr, nullptr);

	void UChargerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__currentEnergyLevel(TEXT("_currentEnergyLevel"));
		static const FName Name__maxEnergyLevel(TEXT("_maxEnergyLevel"));

		const bool bIsValid = true
			&& Name__currentEnergyLevel == ClassReps[(int32)ENetFields_Private::_currentEnergyLevel].Property->GetFName()
			&& Name__maxEnergyLevel == ClassReps[(int32)ENetFields_Private::_maxEnergyLevel].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UChargerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChargerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
