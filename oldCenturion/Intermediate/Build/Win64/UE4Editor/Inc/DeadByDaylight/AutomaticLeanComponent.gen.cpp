// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AutomaticLeanComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomaticLeanComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELeanState();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAutomaticLeanComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAutomaticLeanComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSocketOrBoneCache();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventAutomaticLeanComponentOnLeanStateChanged_Parms
		{
			ELeanState leanState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leanState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leanState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::NewProp_leanState = { "leanState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventAutomaticLeanComponentOnLeanStateChanged_Parms, leanState), Z_Construct_UEnum_DBDSharedTypes_ELeanState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::NewProp_leanState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::NewProp_leanState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::NewProp_leanState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "AutomaticLeanComponentOnLeanStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventAutomaticLeanComponentOnLeanStateChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventAutomaticLeanComponentOnCanInitiateLeanChanged_Parms
		{
			bool canInitiate;
		};
		static void NewProp_canInitiate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canInitiate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::NewProp_canInitiate_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventAutomaticLeanComponentOnCanInitiateLeanChanged_Parms*)Obj)->canInitiate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::NewProp_canInitiate = { "canInitiate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventAutomaticLeanComponentOnCanInitiateLeanChanged_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::NewProp_canInitiate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::NewProp_canInitiate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventAutomaticLeanComponentOnCanInitiateLeanChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAutomaticLeanComponent::execCanInitiateLean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInitiateLean();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomaticLeanComponent::execGetAvailableDistanceInFrontOfCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAvailableDistanceInFrontOfCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomaticLeanComponent::execGetLeanState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELeanState*)Z_Param__Result=P_THIS->GetLeanState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomaticLeanComponent::execGetPotentialLeanState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELeanState*)Z_Param__Result=P_THIS->GetPotentialLeanState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomaticLeanComponent::execIsLeaning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLeaning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomaticLeanComponent::execLocal_Lean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_Lean();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomaticLeanComponent::execLocal_Unlean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_Unlean();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomaticLeanComponent::execOnRep_LeanState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LeanState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomaticLeanComponent::execServer_SetLeanState)
	{
		P_GET_ENUM(ELeanState,Z_Param_leanState);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetLeanState_Validate(ELeanState(Z_Param_leanState)))
		{
			RPC_ValidateFailed(TEXT("Server_SetLeanState_Validate"));
			return;
		}
		P_THIS->Server_SetLeanState_Implementation(ELeanState(Z_Param_leanState));
		P_NATIVE_END;
	}
	static FName NAME_UAutomaticLeanComponent_Server_SetLeanState = FName(TEXT("Server_SetLeanState"));
	void UAutomaticLeanComponent::Server_SetLeanState(ELeanState leanState)
	{
		AutomaticLeanComponent_eventServer_SetLeanState_Parms Parms;
		Parms.leanState=leanState;
		ProcessEvent(FindFunctionChecked(NAME_UAutomaticLeanComponent_Server_SetLeanState),&Parms);
	}
	void UAutomaticLeanComponent::StaticRegisterNativesUAutomaticLeanComponent()
	{
		UClass* Class = UAutomaticLeanComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInitiateLean", &UAutomaticLeanComponent::execCanInitiateLean },
			{ "GetAvailableDistanceInFrontOfCamera", &UAutomaticLeanComponent::execGetAvailableDistanceInFrontOfCamera },
			{ "GetLeanState", &UAutomaticLeanComponent::execGetLeanState },
			{ "GetPotentialLeanState", &UAutomaticLeanComponent::execGetPotentialLeanState },
			{ "IsLeaning", &UAutomaticLeanComponent::execIsLeaning },
			{ "Local_Lean", &UAutomaticLeanComponent::execLocal_Lean },
			{ "Local_Unlean", &UAutomaticLeanComponent::execLocal_Unlean },
			{ "OnRep_LeanState", &UAutomaticLeanComponent::execOnRep_LeanState },
			{ "Server_SetLeanState", &UAutomaticLeanComponent::execServer_SetLeanState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics
	{
		struct AutomaticLeanComponent_eventCanInitiateLean_Parms
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
	void Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomaticLeanComponent_eventCanInitiateLean_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutomaticLeanComponent_eventCanInitiateLean_Parms), &Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomaticLeanComponent, nullptr, "CanInitiateLean", nullptr, nullptr, sizeof(AutomaticLeanComponent_eventCanInitiateLean_Parms), Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics
	{
		struct AutomaticLeanComponent_eventGetAvailableDistanceInFrontOfCamera_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomaticLeanComponent_eventGetAvailableDistanceInFrontOfCamera_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomaticLeanComponent, nullptr, "GetAvailableDistanceInFrontOfCamera", nullptr, nullptr, sizeof(AutomaticLeanComponent_eventGetAvailableDistanceInFrontOfCamera_Parms), Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics
	{
		struct AutomaticLeanComponent_eventGetLeanState_Parms
		{
			ELeanState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomaticLeanComponent_eventGetLeanState_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_ELeanState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomaticLeanComponent, nullptr, "GetLeanState", nullptr, nullptr, sizeof(AutomaticLeanComponent_eventGetLeanState_Parms), Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics
	{
		struct AutomaticLeanComponent_eventGetPotentialLeanState_Parms
		{
			ELeanState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomaticLeanComponent_eventGetPotentialLeanState_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_ELeanState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomaticLeanComponent, nullptr, "GetPotentialLeanState", nullptr, nullptr, sizeof(AutomaticLeanComponent_eventGetPotentialLeanState_Parms), Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics
	{
		struct AutomaticLeanComponent_eventIsLeaning_Parms
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
	void Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomaticLeanComponent_eventIsLeaning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutomaticLeanComponent_eventIsLeaning_Parms), &Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomaticLeanComponent, nullptr, "IsLeaning", nullptr, nullptr, sizeof(AutomaticLeanComponent_eventIsLeaning_Parms), Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomaticLeanComponent_Local_Lean_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomaticLeanComponent_Local_Lean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticLeanComponent_Local_Lean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomaticLeanComponent, nullptr, "Local_Lean", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomaticLeanComponent_Local_Lean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_Local_Lean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomaticLeanComponent_Local_Lean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomaticLeanComponent_Local_Lean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomaticLeanComponent_Local_Unlean_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomaticLeanComponent_Local_Unlean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticLeanComponent_Local_Unlean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomaticLeanComponent, nullptr, "Local_Unlean", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomaticLeanComponent_Local_Unlean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_Local_Unlean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomaticLeanComponent_Local_Unlean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomaticLeanComponent_Local_Unlean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomaticLeanComponent_OnRep_LeanState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomaticLeanComponent_OnRep_LeanState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticLeanComponent_OnRep_LeanState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomaticLeanComponent, nullptr, "OnRep_LeanState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomaticLeanComponent_OnRep_LeanState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_OnRep_LeanState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomaticLeanComponent_OnRep_LeanState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomaticLeanComponent_OnRep_LeanState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leanState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leanState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::NewProp_leanState = { "leanState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomaticLeanComponent_eventServer_SetLeanState_Parms, leanState), Z_Construct_UEnum_DBDSharedTypes_ELeanState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::NewProp_leanState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::NewProp_leanState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::NewProp_leanState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomaticLeanComponent, nullptr, "Server_SetLeanState", nullptr, nullptr, sizeof(AutomaticLeanComponent_eventServer_SetLeanState_Parms), Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutomaticLeanComponent_NoRegister()
	{
		return UAutomaticLeanComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAutomaticLeanComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leanState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__leanState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__leanState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugMode_MetaData[];
#endif
		static void NewProp__debugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__debugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxCameraAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxCameraAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxMovementDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxMovementDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sideTraceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sideTraceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crouchingTraceHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__crouchingTraceHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__standingTraceHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__standingTraceHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sphereTraceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sphereTraceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sideSphereTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sideSphereTraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__middleSphereTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__middleSphereTraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraCrouchRightLeanLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraCrouchRightLeanLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraCrouchLeftLeanLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraCrouchLeftLeanLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraCrouchLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraCrouchLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraRightLeanLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraRightLeanLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraLeftLeanLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraLeftLeanLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraIdleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraIdleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCanInitiateLeanChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCanInitiateLeanChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeanStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeanStateChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomaticLeanComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutomaticLeanComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomaticLeanComponent_CanInitiateLean, "CanInitiateLean" }, // 731014168
		{ &Z_Construct_UFunction_UAutomaticLeanComponent_GetAvailableDistanceInFrontOfCamera, "GetAvailableDistanceInFrontOfCamera" }, // 4151163080
		{ &Z_Construct_UFunction_UAutomaticLeanComponent_GetLeanState, "GetLeanState" }, // 2190861808
		{ &Z_Construct_UFunction_UAutomaticLeanComponent_GetPotentialLeanState, "GetPotentialLeanState" }, // 3574054844
		{ &Z_Construct_UFunction_UAutomaticLeanComponent_IsLeaning, "IsLeaning" }, // 2612047788
		{ &Z_Construct_UFunction_UAutomaticLeanComponent_Local_Lean, "Local_Lean" }, // 2411048224
		{ &Z_Construct_UFunction_UAutomaticLeanComponent_Local_Unlean, "Local_Unlean" }, // 3123468885
		{ &Z_Construct_UFunction_UAutomaticLeanComponent_OnRep_LeanState, "OnRep_LeanState" }, // 876095689
		{ &Z_Construct_UFunction_UAutomaticLeanComponent_Server_SetLeanState, "Server_SetLeanState" }, // 3150631910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AutomaticLeanComponent.h" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__leanState_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__leanState = { "_leanState", "OnRep_LeanState", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _leanState), Z_Construct_UEnum_DBDSharedTypes_ELeanState, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__leanState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__leanState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__leanState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__debugMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__debugMode_SetBit(void* Obj)
	{
		((UAutomaticLeanComponent*)Obj)->_debugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__debugMode = { "_debugMode", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutomaticLeanComponent), &Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__debugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__debugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__debugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxCameraAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxCameraAngle = { "_maxCameraAngle", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _maxCameraAngle), METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxCameraAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxCameraAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxMovementDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxMovementDistance = { "_maxMovementDistance", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _maxMovementDistance), METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxMovementDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxMovementDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideTraceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideTraceOffset = { "_sideTraceOffset", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _sideTraceOffset), METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideTraceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideTraceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__crouchingTraceHeightOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__crouchingTraceHeightOffset = { "_crouchingTraceHeightOffset", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _crouchingTraceHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__crouchingTraceHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__crouchingTraceHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__standingTraceHeightOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__standingTraceHeightOffset = { "_standingTraceHeightOffset", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _standingTraceHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__standingTraceHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__standingTraceHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sphereTraceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sphereTraceRadius = { "_sphereTraceRadius", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _sphereTraceRadius), METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sphereTraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sphereTraceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideSphereTraceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideSphereTraceLength = { "_sideSphereTraceLength", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _sideSphereTraceLength), METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideSphereTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideSphereTraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__middleSphereTraceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__middleSphereTraceLength = { "_middleSphereTraceLength", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _middleSphereTraceLength), METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__middleSphereTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__middleSphereTraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchRightLeanLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchRightLeanLocation = { "_cameraCrouchRightLeanLocation", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _cameraCrouchRightLeanLocation), Z_Construct_UScriptStruct_FSocketOrBoneCache, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchRightLeanLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchRightLeanLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLeftLeanLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLeftLeanLocation = { "_cameraCrouchLeftLeanLocation", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _cameraCrouchLeftLeanLocation), Z_Construct_UScriptStruct_FSocketOrBoneCache, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLeftLeanLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLeftLeanLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLocation = { "_cameraCrouchLocation", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _cameraCrouchLocation), Z_Construct_UScriptStruct_FSocketOrBoneCache, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraRightLeanLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraRightLeanLocation = { "_cameraRightLeanLocation", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _cameraRightLeanLocation), Z_Construct_UScriptStruct_FSocketOrBoneCache, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraRightLeanLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraRightLeanLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraLeftLeanLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraLeftLeanLocation = { "_cameraLeftLeanLocation", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _cameraLeftLeanLocation), Z_Construct_UScriptStruct_FSocketOrBoneCache, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraLeftLeanLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraLeftLeanLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraIdleLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutomaticLeanComponent" },
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraIdleLocation = { "_cameraIdleLocation", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, _cameraIdleLocation), Z_Construct_UScriptStruct_FSocketOrBoneCache, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraIdleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraIdleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnCanInitiateLeanChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnCanInitiateLeanChanged = { "OnCanInitiateLeanChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, OnCanInitiateLeanChanged), Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnCanInitiateLeanChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnCanInitiateLeanChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnCanInitiateLeanChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnLeanStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomaticLeanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnLeanStateChanged = { "OnLeanStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomaticLeanComponent, OnLeanStateChanged), Z_Construct_UDelegateFunction_DeadByDaylight_AutomaticLeanComponentOnLeanStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnLeanStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnLeanStateChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomaticLeanComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__leanState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__leanState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__debugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxCameraAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__maxMovementDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideTraceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__crouchingTraceHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__standingTraceHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sphereTraceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__sideSphereTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__middleSphereTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchRightLeanLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLeftLeanLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraCrouchLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraRightLeanLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraLeftLeanLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp__cameraIdleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnCanInitiateLeanChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomaticLeanComponent_Statics::NewProp_OnLeanStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomaticLeanComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomaticLeanComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutomaticLeanComponent_Statics::ClassParams = {
		&UAutomaticLeanComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutomaticLeanComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomaticLeanComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticLeanComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomaticLeanComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutomaticLeanComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomaticLeanComponent, 4064090803);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAutomaticLeanComponent>()
	{
		return UAutomaticLeanComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomaticLeanComponent(Z_Construct_UClass_UAutomaticLeanComponent, &UAutomaticLeanComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAutomaticLeanComponent"), false, nullptr, nullptr, nullptr);

	void UAutomaticLeanComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__leanState(TEXT("_leanState"));

		const bool bIsValid = true
			&& Name__leanState == ClassReps[(int32)ENetFields_Private::_leanState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAutomaticLeanComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomaticLeanComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
