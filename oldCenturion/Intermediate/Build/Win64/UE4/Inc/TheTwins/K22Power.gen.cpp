// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/K22Power.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK22Power() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_AK22Power_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_AK22Power();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THETWINS_API UClass* Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AK22Power::execAuthority_OnDestroyTwinChargePercentChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentCompletionChange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalPercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnDestroyTwinChargePercentChanged(Z_Param_chargeableComponent,Z_Param_percentCompletionChange,Z_Param_totalPercentComplete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK22Power::execAuthority_OnPossessTwinChargePercentChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentCompletionChange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalPercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnPossessTwinChargePercentChanged(Z_Param_chargeableComponent,Z_Param_percentCompletionChange,Z_Param_totalPercentComplete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK22Power::execGetConjoinedTwin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AConjoinedTwin**)Z_Param__Result=P_THIS->GetConjoinedTwin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK22Power::execOnFirstAttachmentToSister)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFirstAttachmentToSister();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK22Power::execOnPowerChargeEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPowerChargeEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK22Power::execOnRep_ConjoinedTwin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ConjoinedTwin();
		P_NATIVE_END;
	}
	void AK22Power::StaticRegisterNativesAK22Power()
	{
		UClass* Class = AK22Power::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnDestroyTwinChargePercentChanged", &AK22Power::execAuthority_OnDestroyTwinChargePercentChanged },
			{ "Authority_OnPossessTwinChargePercentChanged", &AK22Power::execAuthority_OnPossessTwinChargePercentChanged },
			{ "GetConjoinedTwin", &AK22Power::execGetConjoinedTwin },
			{ "OnFirstAttachmentToSister", &AK22Power::execOnFirstAttachmentToSister },
			{ "OnPowerChargeEmpty", &AK22Power::execOnPowerChargeEmpty },
			{ "OnRep_ConjoinedTwin", &AK22Power::execOnRep_ConjoinedTwin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics
	{
		struct K22Power_eventAuthority_OnDestroyTwinChargePercentChanged_Parms
		{
			UChargeableComponent* chargeableComponent;
			float percentCompletionChange;
			float totalPercentComplete;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalPercentComplete;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentCompletionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::NewProp_totalPercentComplete = { "totalPercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K22Power_eventAuthority_OnDestroyTwinChargePercentChanged_Parms, totalPercentComplete), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::NewProp_percentCompletionChange = { "percentCompletionChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K22Power_eventAuthority_OnDestroyTwinChargePercentChanged_Parms, percentCompletionChange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K22Power_eventAuthority_OnDestroyTwinChargePercentChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::NewProp_totalPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::NewProp_percentCompletionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK22Power, nullptr, "Authority_OnDestroyTwinChargePercentChanged", nullptr, nullptr, sizeof(K22Power_eventAuthority_OnDestroyTwinChargePercentChanged_Parms), Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics
	{
		struct K22Power_eventAuthority_OnPossessTwinChargePercentChanged_Parms
		{
			UChargeableComponent* chargeableComponent;
			float percentCompletionChange;
			float totalPercentComplete;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalPercentComplete;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentCompletionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::NewProp_totalPercentComplete = { "totalPercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K22Power_eventAuthority_OnPossessTwinChargePercentChanged_Parms, totalPercentComplete), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::NewProp_percentCompletionChange = { "percentCompletionChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K22Power_eventAuthority_OnPossessTwinChargePercentChanged_Parms, percentCompletionChange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K22Power_eventAuthority_OnPossessTwinChargePercentChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::NewProp_totalPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::NewProp_percentCompletionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK22Power, nullptr, "Authority_OnPossessTwinChargePercentChanged", nullptr, nullptr, sizeof(K22Power_eventAuthority_OnPossessTwinChargePercentChanged_Parms), Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics
	{
		struct K22Power_eventGetConjoinedTwin_Parms
		{
			AConjoinedTwin* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K22Power_eventGetConjoinedTwin_Parms, ReturnValue), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK22Power, nullptr, "GetConjoinedTwin", nullptr, nullptr, sizeof(K22Power_eventGetConjoinedTwin_Parms), Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK22Power_GetConjoinedTwin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK22Power_GetConjoinedTwin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK22Power_OnFirstAttachmentToSister_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK22Power_OnFirstAttachmentToSister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK22Power_OnFirstAttachmentToSister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK22Power, nullptr, "OnFirstAttachmentToSister", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK22Power_OnFirstAttachmentToSister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_OnFirstAttachmentToSister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK22Power_OnFirstAttachmentToSister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK22Power_OnFirstAttachmentToSister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK22Power_OnPowerChargeEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK22Power_OnPowerChargeEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK22Power_OnPowerChargeEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK22Power, nullptr, "OnPowerChargeEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK22Power_OnPowerChargeEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_OnPowerChargeEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK22Power_OnPowerChargeEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK22Power_OnPowerChargeEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK22Power_OnRep_ConjoinedTwin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK22Power_OnRep_ConjoinedTwin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK22Power_OnRep_ConjoinedTwin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK22Power, nullptr, "OnRep_ConjoinedTwin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK22Power_OnRep_ConjoinedTwin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK22Power_OnRep_ConjoinedTwin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK22Power_OnRep_ConjoinedTwin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK22Power_OnRep_ConjoinedTwin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK22Power_NoRegister()
	{
		return AK22Power::StaticClass();
	}
	struct Z_Construct_UClass_AK22Power_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBeforeRecallAvailable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeBeforeRecallAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBeforeAutoDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeBeforeAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerRechargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerRechargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__conjoinedTwinClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__conjoinedTwinClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerMaxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerChargePresentationItemProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__powerChargePresentationItemProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__powerCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__conjoinedTwinParadise_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__conjoinedTwinParadise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__conjoinedTwin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__conjoinedTwin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__possessConjoinedTwinChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__possessConjoinedTwinChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__releaseConjoinedTwinChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__releaseConjoinedTwinChargeable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK22Power_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK22Power_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK22Power_Authority_OnDestroyTwinChargePercentChanged, "Authority_OnDestroyTwinChargePercentChanged" }, // 1150428055
		{ &Z_Construct_UFunction_AK22Power_Authority_OnPossessTwinChargePercentChanged, "Authority_OnPossessTwinChargePercentChanged" }, // 3616002341
		{ &Z_Construct_UFunction_AK22Power_GetConjoinedTwin, "GetConjoinedTwin" }, // 563308695
		{ &Z_Construct_UFunction_AK22Power_OnFirstAttachmentToSister, "OnFirstAttachmentToSister" }, // 2460381573
		{ &Z_Construct_UFunction_AK22Power_OnPowerChargeEmpty, "OnPowerChargeEmpty" }, // 1690701132
		{ &Z_Construct_UFunction_AK22Power_OnRep_ConjoinedTwin, "OnRep_ConjoinedTwin" }, // 4027919543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K22Power.h" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeRecallAvailable_MetaData[] = {
		{ "Category", "K22Power" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeRecallAvailable = { "_timeBeforeRecallAvailable", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _timeBeforeRecallAvailable), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeRecallAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeRecallAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeAutoDestroy_MetaData[] = {
		{ "Category", "K22Power" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeAutoDestroy = { "_timeBeforeAutoDestroy", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _timeBeforeAutoDestroy), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__powerRechargeRate_MetaData[] = {
		{ "Category", "K22Power" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__powerRechargeRate = { "_powerRechargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _powerRechargeRate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__powerRechargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__powerRechargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinClass_MetaData[] = {
		{ "Category", "K22Power" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinClass = { "_conjoinedTwinClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _conjoinedTwinClass), Z_Construct_UClass_AConjoinedTwin_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__powerMaxCharge_MetaData[] = {
		{ "Category", "K22Power" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__powerMaxCharge = { "_powerMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _powerMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__powerMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__powerMaxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__powerChargePresentationItemProgress_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__powerChargePresentationItemProgress = { "_powerChargePresentationItemProgress", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _powerChargePresentationItemProgress), Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__powerChargePresentationItemProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__powerChargePresentationItemProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__powerCharge_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__powerCharge = { "_powerCharge", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _powerCharge), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__powerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__powerCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinParadise_MetaData[] = {
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinParadise = { "_conjoinedTwinParadise", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _conjoinedTwinParadise), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinParadise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinParadise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwin_MetaData[] = {
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwin = { "_conjoinedTwin", "OnRep_ConjoinedTwin", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _conjoinedTwin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__possessConjoinedTwinChargeable_MetaData[] = {
		{ "Category", "K22Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__possessConjoinedTwinChargeable = { "_possessConjoinedTwinChargeable", nullptr, (EPropertyFlags)0x002008000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _possessConjoinedTwinChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__possessConjoinedTwinChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__possessConjoinedTwinChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK22Power_Statics::NewProp__releaseConjoinedTwinChargeable_MetaData[] = {
		{ "Category", "K22Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K22Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK22Power_Statics::NewProp__releaseConjoinedTwinChargeable = { "_releaseConjoinedTwinChargeable", nullptr, (EPropertyFlags)0x002008000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK22Power, _releaseConjoinedTwinChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::NewProp__releaseConjoinedTwinChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::NewProp__releaseConjoinedTwinChargeable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK22Power_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeRecallAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__timeBeforeAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__powerRechargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__powerMaxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__powerChargePresentationItemProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__powerCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwinParadise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__conjoinedTwin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__possessConjoinedTwinChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK22Power_Statics::NewProp__releaseConjoinedTwinChargeable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK22Power_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK22Power>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK22Power_Statics::ClassParams = {
		&AK22Power::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK22Power_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK22Power_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK22Power_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK22Power()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK22Power_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK22Power, 2062951593);
	template<> THETWINS_API UClass* StaticClass<AK22Power>()
	{
		return AK22Power::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK22Power(Z_Construct_UClass_AK22Power, &AK22Power::StaticClass, TEXT("/Script/TheTwins"), TEXT("AK22Power"), false, nullptr, nullptr, nullptr);

	void AK22Power::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__conjoinedTwin(TEXT("_conjoinedTwin"));

		const bool bIsValid = true
			&& Name__conjoinedTwin == ClassReps[(int32)ENetFields_Private::_conjoinedTwin].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AK22Power"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK22Power);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
