// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGhostface/Public/GhostKillerAnalyticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostKillerAnalyticsComponent() {}
// Cross Module References
	THEGHOSTFACE_API UClass* Z_Construct_UClass_UGhostKillerAnalyticsComponent_NoRegister();
	THEGHOSTFACE_API UClass* Z_Construct_UClass_UGhostKillerAnalyticsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheGhostface();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELeanState();
	THEGHOSTFACE_API UScriptStruct* Z_Construct_UScriptStruct_FGhostKillerAnalytics();
// End Cross Module References
	DEFINE_FUNCTION(UGhostKillerAnalyticsComponent::execAuthority_OnPreAttackSuccess)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameplayTag);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnPreAttackSuccess(Z_Param_gameplayTag,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostKillerAnalyticsComponent::execAuthority_OnStalkChargePercentChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentCompletionChange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalPercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnStalkChargePercentChanged(Z_Param_chargeableComponent,Z_Param_percentCompletionChange,Z_Param_totalPercentComplete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostKillerAnalyticsComponent::execLocal_OnIsStealthChanged)
	{
		P_GET_UBOOL(Z_Param_isStealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnIsStealthChanged(Z_Param_isStealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostKillerAnalyticsComponent::execLocal_OnLeanStateChanged)
	{
		P_GET_ENUM(ELeanState,Z_Param_leanState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnLeanStateChanged(ELeanState(Z_Param_leanState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostKillerAnalyticsComponent::execLocal_OnStalkModeChanged)
	{
		P_GET_UBOOL(Z_Param_isInStalkMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnStalkModeChanged(Z_Param_isInStalkMode);
		P_NATIVE_END;
	}
	void UGhostKillerAnalyticsComponent::StaticRegisterNativesUGhostKillerAnalyticsComponent()
	{
		UClass* Class = UGhostKillerAnalyticsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnPreAttackSuccess", &UGhostKillerAnalyticsComponent::execAuthority_OnPreAttackSuccess },
			{ "Authority_OnStalkChargePercentChanged", &UGhostKillerAnalyticsComponent::execAuthority_OnStalkChargePercentChanged },
			{ "Local_OnIsStealthChanged", &UGhostKillerAnalyticsComponent::execLocal_OnIsStealthChanged },
			{ "Local_OnLeanStateChanged", &UGhostKillerAnalyticsComponent::execLocal_OnLeanStateChanged },
			{ "Local_OnStalkModeChanged", &UGhostKillerAnalyticsComponent::execLocal_OnStalkModeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics
	{
		struct GhostKillerAnalyticsComponent_eventAuthority_OnPreAttackSuccess_Parms
		{
			FGameplayTag gameplayTag;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameplayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostKillerAnalyticsComponent_eventAuthority_OnPreAttackSuccess_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameplayTag = { "gameplayTag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostKillerAnalyticsComponent_eventAuthority_OnPreAttackSuccess_Parms, gameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameplayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::NewProp_gameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostKillerAnalyticsComponent, nullptr, "Authority_OnPreAttackSuccess", nullptr, nullptr, sizeof(GhostKillerAnalyticsComponent_eventAuthority_OnPreAttackSuccess_Parms), Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics
	{
		struct GhostKillerAnalyticsComponent_eventAuthority_OnStalkChargePercentChanged_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::NewProp_totalPercentComplete = { "totalPercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostKillerAnalyticsComponent_eventAuthority_OnStalkChargePercentChanged_Parms, totalPercentComplete), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::NewProp_percentCompletionChange = { "percentCompletionChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostKillerAnalyticsComponent_eventAuthority_OnStalkChargePercentChanged_Parms, percentCompletionChange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostKillerAnalyticsComponent_eventAuthority_OnStalkChargePercentChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::NewProp_totalPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::NewProp_percentCompletionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostKillerAnalyticsComponent, nullptr, "Authority_OnStalkChargePercentChanged", nullptr, nullptr, sizeof(GhostKillerAnalyticsComponent_eventAuthority_OnStalkChargePercentChanged_Parms), Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics
	{
		struct GhostKillerAnalyticsComponent_eventLocal_OnIsStealthChanged_Parms
		{
			bool isStealth;
		};
		static void NewProp_isStealth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::NewProp_isStealth_SetBit(void* Obj)
	{
		((GhostKillerAnalyticsComponent_eventLocal_OnIsStealthChanged_Parms*)Obj)->isStealth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::NewProp_isStealth = { "isStealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostKillerAnalyticsComponent_eventLocal_OnIsStealthChanged_Parms), &Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::NewProp_isStealth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::NewProp_isStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostKillerAnalyticsComponent, nullptr, "Local_OnIsStealthChanged", nullptr, nullptr, sizeof(GhostKillerAnalyticsComponent_eventLocal_OnIsStealthChanged_Parms), Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics
	{
		struct GhostKillerAnalyticsComponent_eventLocal_OnLeanStateChanged_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::NewProp_leanState = { "leanState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostKillerAnalyticsComponent_eventLocal_OnLeanStateChanged_Parms, leanState), Z_Construct_UEnum_DBDSharedTypes_ELeanState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::NewProp_leanState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::NewProp_leanState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::NewProp_leanState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostKillerAnalyticsComponent, nullptr, "Local_OnLeanStateChanged", nullptr, nullptr, sizeof(GhostKillerAnalyticsComponent_eventLocal_OnLeanStateChanged_Parms), Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics
	{
		struct GhostKillerAnalyticsComponent_eventLocal_OnStalkModeChanged_Parms
		{
			bool isInStalkMode;
		};
		static void NewProp_isInStalkMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInStalkMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::NewProp_isInStalkMode_SetBit(void* Obj)
	{
		((GhostKillerAnalyticsComponent_eventLocal_OnStalkModeChanged_Parms*)Obj)->isInStalkMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::NewProp_isInStalkMode = { "isInStalkMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostKillerAnalyticsComponent_eventLocal_OnStalkModeChanged_Parms), &Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::NewProp_isInStalkMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::NewProp_isInStalkMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostKillerAnalyticsComponent, nullptr, "Local_OnStalkModeChanged", nullptr, nullptr, sizeof(GhostKillerAnalyticsComponent_eventLocal_OnStalkModeChanged_Parms), Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGhostKillerAnalyticsComponent_NoRegister()
	{
		return UGhostKillerAnalyticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ghostKillerAnalytics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ghostKillerAnalytics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGhostface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess, "Authority_OnPreAttackSuccess" }, // 911529599
		{ &Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged, "Authority_OnStalkChargePercentChanged" }, // 1939911984
		{ &Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged, "Local_OnIsStealthChanged" }, // 2424703915
		{ &Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged, "Local_OnLeanStateChanged" }, // 2373554144
		{ &Z_Construct_UFunction_UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged, "Local_OnStalkModeChanged" }, // 3279588168
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GhostKillerAnalyticsComponent.h" },
		{ "ModuleRelativePath", "Public/GhostKillerAnalyticsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::NewProp__ghostKillerAnalytics_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::NewProp__ghostKillerAnalytics = { "_ghostKillerAnalytics", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostKillerAnalyticsComponent, _ghostKillerAnalytics), Z_Construct_UScriptStruct_FGhostKillerAnalytics, METADATA_PARAMS(Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::NewProp__ghostKillerAnalytics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::NewProp__ghostKillerAnalytics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::NewProp__ghostKillerAnalytics,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGhostKillerAnalyticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::ClassParams = {
		&UGhostKillerAnalyticsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGhostKillerAnalyticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGhostKillerAnalyticsComponent, 2032188706);
	template<> THEGHOSTFACE_API UClass* StaticClass<UGhostKillerAnalyticsComponent>()
	{
		return UGhostKillerAnalyticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGhostKillerAnalyticsComponent(Z_Construct_UClass_UGhostKillerAnalyticsComponent, &UGhostKillerAnalyticsComponent::StaticClass, TEXT("/Script/TheGhostface"), TEXT("UGhostKillerAnalyticsComponent"), false, nullptr, nullptr, nullptr);

	void UGhostKillerAnalyticsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__ghostKillerAnalytics(TEXT("_ghostKillerAnalytics"));

		const bool bIsValid = true
			&& Name__ghostKillerAnalytics == ClassReps[(int32)ENetFields_Private::_ghostKillerAnalytics].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGhostKillerAnalyticsComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGhostKillerAnalyticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
