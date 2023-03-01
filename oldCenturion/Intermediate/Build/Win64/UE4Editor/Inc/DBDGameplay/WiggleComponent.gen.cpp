// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/WiggleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWiggleComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UWiggleComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UWiggleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableProgressSource_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWiggleComponent::execAuthority_AddWiggleCharge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_chargeAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddWiggleCharge(Z_Param_chargeAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execGetWiggleChargeable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChargeableComponent**)Z_Param__Result=P_THIS->GetWiggleChargeable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execOnChargeableCompleteEvent)
	{
		P_GET_UBOOL(Z_Param_completed);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_instigatorsForCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChargeableCompleteEvent(Z_Param_completed,Z_Param_Out_instigatorsForCompletion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execOnHideWiggleSkillCheck)
	{
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideWiggleSkillCheck(ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execOnKeyBindingsChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKeyBindingsChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execOnPickedUpSkillCheckEnd)
	{
		P_GET_UBOOL(Z_Param_hadInput);
		P_GET_UBOOL(Z_Param_success);
		P_GET_UBOOL(Z_Param_bonus);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickedUpSkillCheckEnd(Z_Param_hadInput,Z_Param_success,Z_Param_bonus,ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execOnPlayerPickedUpEnd)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerPickedUpEnd(Z_Param_picker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execOnPlayerPickedUpStart)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerPickedUpStart(Z_Param_picker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execOnWiggleEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWiggleEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execOnWiggleInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWiggleInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execOnWiggleSkillCheckEnd)
	{
		P_GET_UBOOL(Z_Param_hadInput);
		P_GET_UBOOL(Z_Param_success);
		P_GET_UBOOL(Z_Param_bonus);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWiggleSkillCheckEnd(Z_Param_hadInput,Z_Param_success,Z_Param_bonus,ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleComponent::execServer_OnWiggleEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_OnWiggleEnd_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UWiggleComponent_Server_OnWiggleEnd = FName(TEXT("Server_OnWiggleEnd"));
	void UWiggleComponent::Server_OnWiggleEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWiggleComponent_Server_OnWiggleEnd),NULL);
	}
	void UWiggleComponent::StaticRegisterNativesUWiggleComponent()
	{
		UClass* Class = UWiggleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddWiggleCharge", &UWiggleComponent::execAuthority_AddWiggleCharge },
			{ "GetWiggleChargeable", &UWiggleComponent::execGetWiggleChargeable },
			{ "OnChargeableCompleteEvent", &UWiggleComponent::execOnChargeableCompleteEvent },
			{ "OnHideWiggleSkillCheck", &UWiggleComponent::execOnHideWiggleSkillCheck },
			{ "OnKeyBindingsChanged", &UWiggleComponent::execOnKeyBindingsChanged },
			{ "OnPickedUpSkillCheckEnd", &UWiggleComponent::execOnPickedUpSkillCheckEnd },
			{ "OnPlayerPickedUpEnd", &UWiggleComponent::execOnPlayerPickedUpEnd },
			{ "OnPlayerPickedUpStart", &UWiggleComponent::execOnPlayerPickedUpStart },
			{ "OnWiggleEnd", &UWiggleComponent::execOnWiggleEnd },
			{ "OnWiggleInput", &UWiggleComponent::execOnWiggleInput },
			{ "OnWiggleSkillCheckEnd", &UWiggleComponent::execOnWiggleSkillCheckEnd },
			{ "Server_OnWiggleEnd", &UWiggleComponent::execServer_OnWiggleEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics
	{
		struct WiggleComponent_eventAuthority_AddWiggleCharge_Parms
		{
			float chargeAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chargeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::NewProp_chargeAmount = { "chargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleComponent_eventAuthority_AddWiggleCharge_Parms, chargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::NewProp_chargeAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "Authority_AddWiggleCharge", nullptr, nullptr, sizeof(WiggleComponent_eventAuthority_AddWiggleCharge_Parms), Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics
	{
		struct WiggleComponent_eventGetWiggleChargeable_Parms
		{
			UChargeableComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleComponent_eventGetWiggleChargeable_Parms, ReturnValue), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "GetWiggleChargeable", nullptr, nullptr, sizeof(WiggleComponent_eventGetWiggleChargeable_Parms), Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics
	{
		struct WiggleComponent_eventOnChargeableCompleteEvent_Parms
		{
			bool completed;
			TArray<AActor*> instigatorsForCompletion;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instigatorsForCompletion_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_instigatorsForCompletion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatorsForCompletion_Inner;
		static void NewProp_completed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_instigatorsForCompletion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_instigatorsForCompletion = { "instigatorsForCompletion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleComponent_eventOnChargeableCompleteEvent_Parms, instigatorsForCompletion), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_instigatorsForCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_instigatorsForCompletion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_instigatorsForCompletion_Inner = { "instigatorsForCompletion", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_completed_SetBit(void* Obj)
	{
		((WiggleComponent_eventOnChargeableCompleteEvent_Parms*)Obj)->completed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_completed = { "completed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleComponent_eventOnChargeableCompleteEvent_Parms), &Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_completed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_instigatorsForCompletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_instigatorsForCompletion_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::NewProp_completed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "OnChargeableCompleteEvent", nullptr, nullptr, sizeof(WiggleComponent_eventOnChargeableCompleteEvent_Parms), Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics
	{
		struct WiggleComponent_eventOnHideWiggleSkillCheck_Parms
		{
			ESkillCheckCustomType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleComponent_eventOnHideWiggleSkillCheck_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "OnHideWiggleSkillCheck", nullptr, nullptr, sizeof(WiggleComponent_eventOnHideWiggleSkillCheck_Parms), Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_OnKeyBindingsChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnKeyBindingsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_OnKeyBindingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "OnKeyBindingsChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnKeyBindingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnKeyBindingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_OnKeyBindingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_OnKeyBindingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics
	{
		struct WiggleComponent_eventOnPickedUpSkillCheckEnd_Parms
		{
			bool hadInput;
			bool success;
			bool bonus;
			ESkillCheckCustomType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static void NewProp_bonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bonus;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static void NewProp_hadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hadInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleComponent_eventOnPickedUpSkillCheckEnd_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((WiggleComponent_eventOnPickedUpSkillCheckEnd_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleComponent_eventOnPickedUpSkillCheckEnd_Parms), &Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_success_SetBit(void* Obj)
	{
		((WiggleComponent_eventOnPickedUpSkillCheckEnd_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleComponent_eventOnPickedUpSkillCheckEnd_Parms), &Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_hadInput_SetBit(void* Obj)
	{
		((WiggleComponent_eventOnPickedUpSkillCheckEnd_Parms*)Obj)->hadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_hadInput = { "hadInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleComponent_eventOnPickedUpSkillCheckEnd_Parms), &Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_hadInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::NewProp_hadInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "OnPickedUpSkillCheckEnd", nullptr, nullptr, sizeof(WiggleComponent_eventOnPickedUpSkillCheckEnd_Parms), Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics
	{
		struct WiggleComponent_eventOnPlayerPickedUpEnd_Parms
		{
			ADBDPlayer* picker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::NewProp_picker = { "picker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleComponent_eventOnPlayerPickedUpEnd_Parms, picker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::NewProp_picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "OnPlayerPickedUpEnd", nullptr, nullptr, sizeof(WiggleComponent_eventOnPlayerPickedUpEnd_Parms), Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics
	{
		struct WiggleComponent_eventOnPlayerPickedUpStart_Parms
		{
			ADBDPlayer* picker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::NewProp_picker = { "picker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleComponent_eventOnPlayerPickedUpStart_Parms, picker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::NewProp_picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "OnPlayerPickedUpStart", nullptr, nullptr, sizeof(WiggleComponent_eventOnPlayerPickedUpStart_Parms), Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_OnWiggleEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnWiggleEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_OnWiggleEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "OnWiggleEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnWiggleEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnWiggleEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_OnWiggleEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_OnWiggleEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_OnWiggleInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnWiggleInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_OnWiggleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "OnWiggleInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnWiggleInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnWiggleInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_OnWiggleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_OnWiggleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics
	{
		struct WiggleComponent_eventOnWiggleSkillCheckEnd_Parms
		{
			bool hadInput;
			bool success;
			bool bonus;
			ESkillCheckCustomType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static void NewProp_bonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bonus;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static void NewProp_hadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hadInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleComponent_eventOnWiggleSkillCheckEnd_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((WiggleComponent_eventOnWiggleSkillCheckEnd_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleComponent_eventOnWiggleSkillCheckEnd_Parms), &Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_success_SetBit(void* Obj)
	{
		((WiggleComponent_eventOnWiggleSkillCheckEnd_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleComponent_eventOnWiggleSkillCheckEnd_Parms), &Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_hadInput_SetBit(void* Obj)
	{
		((WiggleComponent_eventOnWiggleSkillCheckEnd_Parms*)Obj)->hadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_hadInput = { "hadInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleComponent_eventOnWiggleSkillCheckEnd_Parms), &Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_hadInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::NewProp_hadInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "OnWiggleSkillCheckEnd", nullptr, nullptr, sizeof(WiggleComponent_eventOnWiggleSkillCheckEnd_Parms), Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleComponent_Server_OnWiggleEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleComponent_Server_OnWiggleEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleComponent_Server_OnWiggleEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleComponent, nullptr, "Server_OnWiggleEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleComponent_Server_OnWiggleEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleComponent_Server_OnWiggleEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleComponent_Server_OnWiggleEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleComponent_Server_OnWiggleEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWiggleComponent_NoRegister()
	{
		return UWiggleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWiggleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerWigglingFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerWigglingFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wiggleProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__wiggleProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWiggleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWiggleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWiggleComponent_Authority_AddWiggleCharge, "Authority_AddWiggleCharge" }, // 2479459486
		{ &Z_Construct_UFunction_UWiggleComponent_GetWiggleChargeable, "GetWiggleChargeable" }, // 1945865813
		{ &Z_Construct_UFunction_UWiggleComponent_OnChargeableCompleteEvent, "OnChargeableCompleteEvent" }, // 3015422290
		{ &Z_Construct_UFunction_UWiggleComponent_OnHideWiggleSkillCheck, "OnHideWiggleSkillCheck" }, // 3109347620
		{ &Z_Construct_UFunction_UWiggleComponent_OnKeyBindingsChanged, "OnKeyBindingsChanged" }, // 1193525931
		{ &Z_Construct_UFunction_UWiggleComponent_OnPickedUpSkillCheckEnd, "OnPickedUpSkillCheckEnd" }, // 3297973530
		{ &Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpEnd, "OnPlayerPickedUpEnd" }, // 1336936564
		{ &Z_Construct_UFunction_UWiggleComponent_OnPlayerPickedUpStart, "OnPlayerPickedUpStart" }, // 2177583171
		{ &Z_Construct_UFunction_UWiggleComponent_OnWiggleEnd, "OnWiggleEnd" }, // 3438524048
		{ &Z_Construct_UFunction_UWiggleComponent_OnWiggleInput, "OnWiggleInput" }, // 368506364
		{ &Z_Construct_UFunction_UWiggleComponent_OnWiggleSkillCheckEnd, "OnWiggleSkillCheckEnd" }, // 2776733245
		{ &Z_Construct_UFunction_UWiggleComponent_Server_OnWiggleEnd, "Server_OnWiggleEnd" }, // 1078009526
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WiggleComponent.h" },
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleComponent_Statics::NewProp__inputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWiggleComponent_Statics::NewProp__inputComponent = { "_inputComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWiggleComponent, _inputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWiggleComponent_Statics::NewProp__inputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleComponent_Statics::NewProp__inputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleComponent_Statics::NewProp__killerWigglingFrom_MetaData[] = {
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWiggleComponent_Statics::NewProp__killerWigglingFrom = { "_killerWigglingFrom", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWiggleComponent, _killerWigglingFrom), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWiggleComponent_Statics::NewProp__killerWigglingFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleComponent_Statics::NewProp__killerWigglingFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleComponent_Statics::NewProp__wiggleProgress_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WiggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWiggleComponent_Statics::NewProp__wiggleProgress = { "_wiggleProgress", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWiggleComponent, _wiggleProgress), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWiggleComponent_Statics::NewProp__wiggleProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleComponent_Statics::NewProp__wiggleProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWiggleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWiggleComponent_Statics::NewProp__inputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWiggleComponent_Statics::NewProp__killerWigglingFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWiggleComponent_Statics::NewProp__wiggleProgress,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWiggleComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChargeableProgressSource_NoRegister, (int32)VTABLE_OFFSET(UWiggleComponent, IChargeableProgressSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWiggleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWiggleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWiggleComponent_Statics::ClassParams = {
		&UWiggleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWiggleComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWiggleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWiggleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWiggleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWiggleComponent, 1312168218);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UWiggleComponent>()
	{
		return UWiggleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWiggleComponent(Z_Construct_UClass_UWiggleComponent, &UWiggleComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UWiggleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWiggleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
