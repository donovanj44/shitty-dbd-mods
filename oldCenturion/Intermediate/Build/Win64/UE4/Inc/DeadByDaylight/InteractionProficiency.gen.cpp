// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractionProficiency.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionProficiency() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionProficiency_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionProficiency();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionProficiency::execGetIsActive)
	{
		P_GET_OBJECT(UChargeableInteractionDefinition,Z_Param_chargeableInteraction);
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsActive_Implementation(Z_Param_chargeableInteraction,Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionProficiency::execGetLevel)
	{
		P_GET_OBJECT(UChargeableInteractionDefinition,Z_Param_chargeableInteraction);
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevel_Implementation(Z_Param_chargeableInteraction,Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionProficiency::execGetType)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EStatusEffectType*)Z_Param__Result=P_THIS->GetType_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionProficiency::execGetValue)
	{
		P_GET_OBJECT(UChargeableInteractionDefinition,Z_Param_chargeableInteraction);
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue_Implementation(Z_Param_chargeableInteraction,Z_Param_player);
		P_NATIVE_END;
	}
	static FName NAME_UInteractionProficiency_GetIsActive = FName(TEXT("GetIsActive"));
	bool UInteractionProficiency::GetIsActive(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const
	{
		InteractionProficiency_eventGetIsActive_Parms Parms;
		Parms.chargeableInteraction=chargeableInteraction;
		Parms.player=player;
		const_cast<UInteractionProficiency*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInteractionProficiency_GetIsActive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UInteractionProficiency_GetLevel = FName(TEXT("GetLevel"));
	int32 UInteractionProficiency::GetLevel(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const
	{
		InteractionProficiency_eventGetLevel_Parms Parms;
		Parms.chargeableInteraction=chargeableInteraction;
		Parms.player=player;
		const_cast<UInteractionProficiency*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInteractionProficiency_GetLevel),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UInteractionProficiency_GetType = FName(TEXT("GetType"));
	EStatusEffectType UInteractionProficiency::GetType(const float value) const
	{
		InteractionProficiency_eventGetType_Parms Parms;
		Parms.value=value;
		const_cast<UInteractionProficiency*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInteractionProficiency_GetType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UInteractionProficiency_GetValue = FName(TEXT("GetValue"));
	float UInteractionProficiency::GetValue(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const
	{
		InteractionProficiency_eventGetValue_Parms Parms;
		Parms.chargeableInteraction=chargeableInteraction;
		Parms.player=player;
		const_cast<UInteractionProficiency*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInteractionProficiency_GetValue),&Parms);
		return Parms.ReturnValue;
	}
	void UInteractionProficiency::StaticRegisterNativesUInteractionProficiency()
	{
		UClass* Class = UInteractionProficiency::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsActive", &UInteractionProficiency::execGetIsActive },
			{ "GetLevel", &UInteractionProficiency::execGetLevel },
			{ "GetType", &UInteractionProficiency::execGetType },
			{ "GetValue", &UInteractionProficiency::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionProficiency_eventGetIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionProficiency_eventGetIsActive_Parms), &Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetIsActive_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_chargeableInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_chargeableInteraction = { "chargeableInteraction", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetIsActive_Parms, chargeableInteraction), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_chargeableInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_chargeableInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::NewProp_chargeableInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionProficiency.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionProficiency, nullptr, "GetIsActive", nullptr, nullptr, sizeof(InteractionProficiency_eventGetIsActive_Parms), Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionProficiency_GetIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionProficiency_GetIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetLevel_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_chargeableInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_chargeableInteraction = { "chargeableInteraction", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetLevel_Parms, chargeableInteraction), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_chargeableInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_chargeableInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::NewProp_chargeableInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionProficiency.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionProficiency, nullptr, "GetLevel", nullptr, nullptr, sizeof(InteractionProficiency_eventGetLevel_Parms), Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionProficiency_GetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionProficiency_GetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionProficiency_GetType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetType_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionProficiency.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionProficiency, nullptr, "GetType", nullptr, nullptr, sizeof(InteractionProficiency_eventGetType_Parms), Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionProficiency_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionProficiency_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetValue_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_chargeableInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_chargeableInteraction = { "chargeableInteraction", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProficiency_eventGetValue_Parms, chargeableInteraction), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_chargeableInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_chargeableInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::NewProp_chargeableInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionProficiency.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionProficiency, nullptr, "GetValue", nullptr, nullptr, sizeof(InteractionProficiency_eventGetValue_Parms), Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionProficiency_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionProficiency_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionProficiency_NoRegister()
	{
		return UInteractionProficiency::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionProficiency_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractionIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractionIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionProficiency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionProficiency_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionProficiency_GetIsActive, "GetIsActive" }, // 151432675
		{ &Z_Construct_UFunction_UInteractionProficiency_GetLevel, "GetLevel" }, // 2352903854
		{ &Z_Construct_UFunction_UInteractionProficiency_GetType, "GetType" }, // 3769987517
		{ &Z_Construct_UFunction_UInteractionProficiency_GetValue, "GetValue" }, // 1715273926
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionProficiency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InteractionProficiency.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionProficiency.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionProficiency_Statics::NewProp_InteractionIDs_MetaData[] = {
		{ "Category", "InteractionProficiency" },
		{ "ModuleRelativePath", "Public/InteractionProficiency.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionProficiency_Statics::NewProp_InteractionIDs = { "InteractionIDs", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionProficiency, InteractionIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractionProficiency_Statics::NewProp_InteractionIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionProficiency_Statics::NewProp_InteractionIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractionProficiency_Statics::NewProp_InteractionIDs_Inner = { "InteractionIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionProficiency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionProficiency_Statics::NewProp_InteractionIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionProficiency_Statics::NewProp_InteractionIDs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionProficiency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionProficiency>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionProficiency_Statics::ClassParams = {
		&UInteractionProficiency::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionProficiency_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionProficiency_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionProficiency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionProficiency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionProficiency()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionProficiency_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionProficiency, 3147413353);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInteractionProficiency>()
	{
		return UInteractionProficiency::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionProficiency(Z_Construct_UClass_UInteractionProficiency, &UInteractionProficiency::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInteractionProficiency"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionProficiency);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
