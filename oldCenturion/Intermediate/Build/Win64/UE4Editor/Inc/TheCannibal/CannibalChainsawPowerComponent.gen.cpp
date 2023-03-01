// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/CannibalChainsawPowerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannibalChainsawPowerComponent() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawPowerComponent_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawPowerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCannibalChainsawPower_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCannibalChainsawPowerComponent::execAuthority_OnChainsawPowerChargeFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnChainsawPowerChargeFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCannibalChainsawPowerComponent::execGetNumberOfChainsawPowerCharges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfChainsawPowerCharges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCannibalChainsawPowerComponent::execLocal_OnTantrumPowerChargeFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnTantrumPowerChargeFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCannibalChainsawPowerComponent::execMulticast_OnTantrumPowerChargeFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnTantrumPowerChargeFull_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCannibalChainsawPowerComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCannibalChainsawPowerComponent::execOnRep_NumPowerCharges)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_previousNumPowerCharges);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NumPowerCharges(Z_Param_previousNumPowerCharges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCannibalChainsawPowerComponent::execServer_OnTantrumPowerChargeFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnTantrumPowerChargeFull_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_OnTantrumPowerChargeFull_Validate"));
			return;
		}
		P_THIS->Server_OnTantrumPowerChargeFull_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull = FName(TEXT("Multicast_OnTantrumPowerChargeFull"));
	void UCannibalChainsawPowerComponent::Multicast_OnTantrumPowerChargeFull()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull),NULL);
	}
	static FName NAME_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull = FName(TEXT("Server_OnTantrumPowerChargeFull"));
	void UCannibalChainsawPowerComponent::Server_OnTantrumPowerChargeFull()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull),NULL);
	}
	void UCannibalChainsawPowerComponent::StaticRegisterNativesUCannibalChainsawPowerComponent()
	{
		UClass* Class = UCannibalChainsawPowerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnChainsawPowerChargeFull", &UCannibalChainsawPowerComponent::execAuthority_OnChainsawPowerChargeFull },
			{ "GetNumberOfChainsawPowerCharges", &UCannibalChainsawPowerComponent::execGetNumberOfChainsawPowerCharges },
			{ "Local_OnTantrumPowerChargeFull", &UCannibalChainsawPowerComponent::execLocal_OnTantrumPowerChargeFull },
			{ "Multicast_OnTantrumPowerChargeFull", &UCannibalChainsawPowerComponent::execMulticast_OnTantrumPowerChargeFull },
			{ "OnLevelReadyToPlay", &UCannibalChainsawPowerComponent::execOnLevelReadyToPlay },
			{ "OnRep_NumPowerCharges", &UCannibalChainsawPowerComponent::execOnRep_NumPowerCharges },
			{ "Server_OnTantrumPowerChargeFull", &UCannibalChainsawPowerComponent::execServer_OnTantrumPowerChargeFull },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCannibalChainsawPowerComponent, nullptr, "Authority_OnChainsawPowerChargeFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics
	{
		struct CannibalChainsawPowerComponent_eventGetNumberOfChainsawPowerCharges_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannibalChainsawPowerComponent_eventGetNumberOfChainsawPowerCharges_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCannibalChainsawPowerComponent, nullptr, "GetNumberOfChainsawPowerCharges", nullptr, nullptr, sizeof(CannibalChainsawPowerComponent_eventGetNumberOfChainsawPowerCharges_Parms), Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCannibalChainsawPowerComponent, nullptr, "Local_OnTantrumPowerChargeFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCannibalChainsawPowerComponent, nullptr, "Multicast_OnTantrumPowerChargeFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCannibalChainsawPowerComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics
	{
		struct CannibalChainsawPowerComponent_eventOnRep_NumPowerCharges_Parms
		{
			int32 previousNumPowerCharges;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_previousNumPowerCharges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::NewProp_previousNumPowerCharges = { "previousNumPowerCharges", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannibalChainsawPowerComponent_eventOnRep_NumPowerCharges_Parms, previousNumPowerCharges), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::NewProp_previousNumPowerCharges,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCannibalChainsawPowerComponent, nullptr, "OnRep_NumPowerCharges", nullptr, nullptr, sizeof(CannibalChainsawPowerComponent_eventOnRep_NumPowerCharges_Parms), Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCannibalChainsawPowerComponent, nullptr, "Server_OnTantrumPowerChargeFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCannibalChainsawPowerComponent_NoRegister()
	{
		return UCannibalChainsawPowerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tantrumMaxDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tantrumMaxDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tantrumDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tantrumDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tantrumDurationIncreaseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tantrumDurationIncreaseRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tantrumMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tantrumMaxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tantrumDischargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tantrumDischargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tantrumChargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tantrumChargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawMaxCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainsawMaxCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainsawCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawCooldownIncreaseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainsawCooldownIncreaseRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawMaxNumberOfCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainsawMaxNumberOfCharges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawChargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainsawChargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawPowerMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainsawPowerMaxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawDashDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainsawDashDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numPowerChargesConsumed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numPowerChargesConsumed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numPowerCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numPowerCharges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInTantrum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isInTantrum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tantrumPowerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tantrumPowerCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawPowerDischarge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainsawPowerDischarge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawPowerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainsawPowerCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull, "Authority_OnChainsawPowerChargeFull" }, // 995515119
		{ &Z_Construct_UFunction_UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges, "GetNumberOfChainsawPowerCharges" }, // 1519079832
		{ &Z_Construct_UFunction_UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull, "Local_OnTantrumPowerChargeFull" }, // 830879353
		{ &Z_Construct_UFunction_UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull, "Multicast_OnTantrumPowerChargeFull" }, // 2959546
		{ &Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 3874162873
		{ &Z_Construct_UFunction_UCannibalChainsawPowerComponent_OnRep_NumPowerCharges, "OnRep_NumPowerCharges" }, // 3641976255
		{ &Z_Construct_UFunction_UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull, "Server_OnTantrumPowerChargeFull" }, // 1855268472
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CannibalChainsawPowerComponent.h" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxDuration_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxDuration = { "_tantrumMaxDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumMaxDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDuration_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDuration = { "_tantrumDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumDuration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDurationIncreaseRate_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDurationIncreaseRate = { "_tantrumDurationIncreaseRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumDurationIncreaseRate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDurationIncreaseRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDurationIncreaseRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxCharge_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxCharge = { "_tantrumMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumMaxCharge), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDischargeRate_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDischargeRate = { "_tantrumDischargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumDischargeRate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDischargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDischargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumChargeRate_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumChargeRate = { "_tantrumChargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumChargeRate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumChargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumChargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxCooldownDuration_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxCooldownDuration = { "_chainsawMaxCooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawMaxCooldownDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownDuration_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownDuration = { "_chainsawCooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawCooldownDuration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownIncreaseRate_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownIncreaseRate = { "_chainsawCooldownIncreaseRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawCooldownIncreaseRate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownIncreaseRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownIncreaseRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxNumberOfCharges_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxNumberOfCharges = { "_chainsawMaxNumberOfCharges", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawMaxNumberOfCharges), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxNumberOfCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxNumberOfCharges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawChargeRate_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawChargeRate = { "_chainsawChargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawChargeRate), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawChargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawChargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerMaxCharge_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerMaxCharge = { "_chainsawPowerMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawPowerMaxCharge), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerMaxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawDashDuration_MetaData[] = {
		{ "Category", "CannibalChainsawPowerComponent" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawDashDuration = { "_chainsawDashDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawDashDuration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawDashDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawDashDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerChargesConsumed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerChargesConsumed = { "_numPowerChargesConsumed", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _numPowerChargesConsumed), METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerChargesConsumed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerChargesConsumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerCharges_MetaData[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerCharges = { "_numPowerCharges", "OnRep_NumPowerCharges", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _numPowerCharges), METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerCharges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__isInTantrum_MetaData[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__isInTantrum = { "_isInTantrum", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _isInTantrum), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__isInTantrum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__isInTantrum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumPowerCharge_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumPowerCharge = { "_tantrumPowerCharge", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumPowerCharge), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumPowerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumPowerCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerDischarge_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerDischarge = { "_chainsawPowerDischarge", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawPowerDischarge), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerDischarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerDischarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerCharge_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CannibalChainsawPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerCharge = { "_chainsawPowerCharge", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawPowerCharge), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDurationIncreaseRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumMaxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumDischargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumChargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawCooldownIncreaseRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawMaxNumberOfCharges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawChargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerMaxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawDashDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerChargesConsumed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__numPowerCharges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__isInTantrum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__tantrumPowerCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerDischarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::NewProp__chainsawPowerCharge,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCannibalChainsawPower_NoRegister, (int32)VTABLE_OFFSET(UCannibalChainsawPowerComponent, ICannibalChainsawPower), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCannibalChainsawPowerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::ClassParams = {
		&UCannibalChainsawPowerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCannibalChainsawPowerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCannibalChainsawPowerComponent, 3999502714);
	template<> THECANNIBAL_API UClass* StaticClass<UCannibalChainsawPowerComponent>()
	{
		return UCannibalChainsawPowerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCannibalChainsawPowerComponent(Z_Construct_UClass_UCannibalChainsawPowerComponent, &UCannibalChainsawPowerComponent::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UCannibalChainsawPowerComponent"), false, nullptr, nullptr, nullptr);

	void UCannibalChainsawPowerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isInTantrum(TEXT("_isInTantrum"));
		static const FName Name__numPowerCharges(TEXT("_numPowerCharges"));
		static const FName Name__numPowerChargesConsumed(TEXT("_numPowerChargesConsumed"));

		const bool bIsValid = true
			&& Name__isInTantrum == ClassReps[(int32)ENetFields_Private::_isInTantrum].Property->GetFName()
			&& Name__numPowerCharges == ClassReps[(int32)ENetFields_Private::_numPowerCharges].Property->GetFName()
			&& Name__numPowerChargesConsumed == ClassReps[(int32)ENetFields_Private::_numPowerChargesConsumed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCannibalChainsawPowerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCannibalChainsawPowerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
