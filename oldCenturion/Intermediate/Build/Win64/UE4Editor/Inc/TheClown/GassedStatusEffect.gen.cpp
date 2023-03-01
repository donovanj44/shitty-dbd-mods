// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/GassedStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGassedStatusEffect() {}
// Cross Module References
	THECLOWN_API UClass* Z_Construct_UClass_UGassedStatusEffect_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_UGassedStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheClown();
	THECLOWN_API UClass* Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister();
	THECLOWN_API UEnum* Z_Construct_UEnum_TheClown_EBombType();
// End Cross Module References
	DEFINE_FUNCTION(UGassedStatusEffect::execAuthority_AddOverlappingCloud)
	{
		P_GET_OBJECT(ABaseGasCloudProjectile,Z_Param_cloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddOverlappingCloud(Z_Param_cloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execAuthority_RemoveOverlappingCloud)
	{
		P_GET_OBJECT(ABaseGasCloudProjectile,Z_Param_cloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RemoveOverlappingCloud(Z_Param_cloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execAuthority_SetIsInAntidoteCloud)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetIsInAntidoteCloud(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execAuthority_SetIsInCloud)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetIsInCloud(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execGetAntidoteCloudEffectDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAntidoteCloudEffectDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execGetCloudEffectDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCloudEffectDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execGetRemainingAntidoteDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingAntidoteDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execGetRemainingDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execIsInAntidoteCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInAntidoteCloud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execIsInCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInCloud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execOnRep_IsInAntidoteCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsInAntidoteCloud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execOnRep_TotalTimesEnteringToxicClouds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TotalTimesEnteringToxicClouds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execSetRemainingAntidoteDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainingAntidoteDuration(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGassedStatusEffect::execSetRemainingDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainingDuration(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_UGassedStatusEffect_OnAntidoteEffectBegin = FName(TEXT("OnAntidoteEffectBegin"));
	void UGassedStatusEffect::OnAntidoteEffectBegin(float effectDuration)
	{
		GassedStatusEffect_eventOnAntidoteEffectBegin_Parms Parms;
		Parms.effectDuration=effectDuration;
		ProcessEvent(FindFunctionChecked(NAME_UGassedStatusEffect_OnAntidoteEffectBegin),&Parms);
	}
	static FName NAME_UGassedStatusEffect_OnAntidoteEffectEnd = FName(TEXT("OnAntidoteEffectEnd"));
	void UGassedStatusEffect::OnAntidoteEffectEnd(float durationSkipped)
	{
		GassedStatusEffect_eventOnAntidoteEffectEnd_Parms Parms;
		Parms.durationSkipped=durationSkipped;
		ProcessEvent(FindFunctionChecked(NAME_UGassedStatusEffect_OnAntidoteEffectEnd),&Parms);
	}
	static FName NAME_UGassedStatusEffect_OnDirectBottleHit = FName(TEXT("OnDirectBottleHit"));
	void UGassedStatusEffect::OnDirectBottleHit(EBombType bottleType)
	{
		GassedStatusEffect_eventOnDirectBottleHit_Parms Parms;
		Parms.bottleType=bottleType;
		ProcessEvent(FindFunctionChecked(NAME_UGassedStatusEffect_OnDirectBottleHit),&Parms);
	}
	static FName NAME_UGassedStatusEffect_OnToxinCured = FName(TEXT("OnToxinCured"));
	void UGassedStatusEffect::OnToxinCured()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGassedStatusEffect_OnToxinCured),NULL);
	}
	static FName NAME_UGassedStatusEffect_OnToxinEffectBegin = FName(TEXT("OnToxinEffectBegin"));
	void UGassedStatusEffect::OnToxinEffectBegin(float effectDuration)
	{
		GassedStatusEffect_eventOnToxinEffectBegin_Parms Parms;
		Parms.effectDuration=effectDuration;
		ProcessEvent(FindFunctionChecked(NAME_UGassedStatusEffect_OnToxinEffectBegin),&Parms);
	}
	static FName NAME_UGassedStatusEffect_OnToxinEffectEnd = FName(TEXT("OnToxinEffectEnd"));
	void UGassedStatusEffect::OnToxinEffectEnd(float durationSkipped)
	{
		GassedStatusEffect_eventOnToxinEffectEnd_Parms Parms;
		Parms.durationSkipped=durationSkipped;
		ProcessEvent(FindFunctionChecked(NAME_UGassedStatusEffect_OnToxinEffectEnd),&Parms);
	}
	static FName NAME_UGassedStatusEffect_UpdateAntidoteEffectVFX = FName(TEXT("UpdateAntidoteEffectVFX"));
	void UGassedStatusEffect::UpdateAntidoteEffectVFX(float durationRemaining)
	{
		GassedStatusEffect_eventUpdateAntidoteEffectVFX_Parms Parms;
		Parms.durationRemaining=durationRemaining;
		ProcessEvent(FindFunctionChecked(NAME_UGassedStatusEffect_UpdateAntidoteEffectVFX),&Parms);
	}
	void UGassedStatusEffect::StaticRegisterNativesUGassedStatusEffect()
	{
		UClass* Class = UGassedStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddOverlappingCloud", &UGassedStatusEffect::execAuthority_AddOverlappingCloud },
			{ "Authority_RemoveOverlappingCloud", &UGassedStatusEffect::execAuthority_RemoveOverlappingCloud },
			{ "Authority_SetIsInAntidoteCloud", &UGassedStatusEffect::execAuthority_SetIsInAntidoteCloud },
			{ "Authority_SetIsInCloud", &UGassedStatusEffect::execAuthority_SetIsInCloud },
			{ "GetAntidoteCloudEffectDuration", &UGassedStatusEffect::execGetAntidoteCloudEffectDuration },
			{ "GetCloudEffectDuration", &UGassedStatusEffect::execGetCloudEffectDuration },
			{ "GetRemainingAntidoteDuration", &UGassedStatusEffect::execGetRemainingAntidoteDuration },
			{ "GetRemainingDuration", &UGassedStatusEffect::execGetRemainingDuration },
			{ "IsInAntidoteCloud", &UGassedStatusEffect::execIsInAntidoteCloud },
			{ "IsInCloud", &UGassedStatusEffect::execIsInCloud },
			{ "OnRep_IsInAntidoteCloud", &UGassedStatusEffect::execOnRep_IsInAntidoteCloud },
			{ "OnRep_TotalTimesEnteringToxicClouds", &UGassedStatusEffect::execOnRep_TotalTimesEnteringToxicClouds },
			{ "SetRemainingAntidoteDuration", &UGassedStatusEffect::execSetRemainingAntidoteDuration },
			{ "SetRemainingDuration", &UGassedStatusEffect::execSetRemainingDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics
	{
		struct GassedStatusEffect_eventAuthority_AddOverlappingCloud_Parms
		{
			ABaseGasCloudProjectile* cloud;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cloud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::NewProp_cloud = { "cloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventAuthority_AddOverlappingCloud_Parms, cloud), Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::NewProp_cloud,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "Authority_AddOverlappingCloud", nullptr, nullptr, sizeof(GassedStatusEffect_eventAuthority_AddOverlappingCloud_Parms), Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics
	{
		struct GassedStatusEffect_eventAuthority_RemoveOverlappingCloud_Parms
		{
			ABaseGasCloudProjectile* cloud;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cloud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::NewProp_cloud = { "cloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventAuthority_RemoveOverlappingCloud_Parms, cloud), Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::NewProp_cloud,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "Authority_RemoveOverlappingCloud", nullptr, nullptr, sizeof(GassedStatusEffect_eventAuthority_RemoveOverlappingCloud_Parms), Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics
	{
		struct GassedStatusEffect_eventAuthority_SetIsInAntidoteCloud_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::NewProp_value_SetBit(void* Obj)
	{
		((GassedStatusEffect_eventAuthority_SetIsInAntidoteCloud_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GassedStatusEffect_eventAuthority_SetIsInAntidoteCloud_Parms), &Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "Authority_SetIsInAntidoteCloud", nullptr, nullptr, sizeof(GassedStatusEffect_eventAuthority_SetIsInAntidoteCloud_Parms), Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics
	{
		struct GassedStatusEffect_eventAuthority_SetIsInCloud_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::NewProp_value_SetBit(void* Obj)
	{
		((GassedStatusEffect_eventAuthority_SetIsInCloud_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GassedStatusEffect_eventAuthority_SetIsInCloud_Parms), &Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "Authority_SetIsInCloud", nullptr, nullptr, sizeof(GassedStatusEffect_eventAuthority_SetIsInCloud_Parms), Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics
	{
		struct GassedStatusEffect_eventGetAntidoteCloudEffectDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventGetAntidoteCloudEffectDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "GetAntidoteCloudEffectDuration", nullptr, nullptr, sizeof(GassedStatusEffect_eventGetAntidoteCloudEffectDuration_Parms), Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics
	{
		struct GassedStatusEffect_eventGetCloudEffectDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventGetCloudEffectDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "GetCloudEffectDuration", nullptr, nullptr, sizeof(GassedStatusEffect_eventGetCloudEffectDuration_Parms), Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics
	{
		struct GassedStatusEffect_eventGetRemainingAntidoteDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventGetRemainingAntidoteDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "GetRemainingAntidoteDuration", nullptr, nullptr, sizeof(GassedStatusEffect_eventGetRemainingAntidoteDuration_Parms), Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics
	{
		struct GassedStatusEffect_eventGetRemainingDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventGetRemainingDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "GetRemainingDuration", nullptr, nullptr, sizeof(GassedStatusEffect_eventGetRemainingDuration_Parms), Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics
	{
		struct GassedStatusEffect_eventIsInAntidoteCloud_Parms
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
	void Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GassedStatusEffect_eventIsInAntidoteCloud_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GassedStatusEffect_eventIsInAntidoteCloud_Parms), &Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "IsInAntidoteCloud", nullptr, nullptr, sizeof(GassedStatusEffect_eventIsInAntidoteCloud_Parms), Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics
	{
		struct GassedStatusEffect_eventIsInCloud_Parms
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
	void Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GassedStatusEffect_eventIsInCloud_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GassedStatusEffect_eventIsInCloud_Parms), &Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "IsInCloud", nullptr, nullptr, sizeof(GassedStatusEffect_eventIsInCloud_Parms), Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_IsInCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_IsInCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_effectDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::NewProp_effectDuration = { "effectDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventOnAntidoteEffectBegin_Parms, effectDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::NewProp_effectDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "OnAntidoteEffectBegin", nullptr, nullptr, sizeof(GassedStatusEffect_eventOnAntidoteEffectBegin_Parms), Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_durationSkipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::NewProp_durationSkipped = { "durationSkipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventOnAntidoteEffectEnd_Parms, durationSkipped), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::NewProp_durationSkipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "OnAntidoteEffectEnd", nullptr, nullptr, sizeof(GassedStatusEffect_eventOnAntidoteEffectEnd_Parms), Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bottleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bottleType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::NewProp_bottleType = { "bottleType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventOnDirectBottleHit_Parms, bottleType), Z_Construct_UEnum_TheClown_EBombType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::NewProp_bottleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::NewProp_bottleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::NewProp_bottleType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "OnDirectBottleHit", nullptr, nullptr, sizeof(GassedStatusEffect_eventOnDirectBottleHit_Parms), Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_OnRep_IsInAntidoteCloud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_OnRep_IsInAntidoteCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_OnRep_IsInAntidoteCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "OnRep_IsInAntidoteCloud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_OnRep_IsInAntidoteCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnRep_IsInAntidoteCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_OnRep_IsInAntidoteCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_OnRep_IsInAntidoteCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "OnRep_TotalTimesEnteringToxicClouds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_OnToxinCured_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_OnToxinCured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_OnToxinCured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "OnToxinCured", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_OnToxinCured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnToxinCured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_OnToxinCured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_OnToxinCured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_effectDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::NewProp_effectDuration = { "effectDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventOnToxinEffectBegin_Parms, effectDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::NewProp_effectDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "OnToxinEffectBegin", nullptr, nullptr, sizeof(GassedStatusEffect_eventOnToxinEffectBegin_Parms), Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_durationSkipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::NewProp_durationSkipped = { "durationSkipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventOnToxinEffectEnd_Parms, durationSkipped), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::NewProp_durationSkipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "OnToxinEffectEnd", nullptr, nullptr, sizeof(GassedStatusEffect_eventOnToxinEffectEnd_Parms), Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics
	{
		struct GassedStatusEffect_eventSetRemainingAntidoteDuration_Parms
		{
			float value;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventSetRemainingAntidoteDuration_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "SetRemainingAntidoteDuration", nullptr, nullptr, sizeof(GassedStatusEffect_eventSetRemainingAntidoteDuration_Parms), Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics
	{
		struct GassedStatusEffect_eventSetRemainingDuration_Parms
		{
			float value;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventSetRemainingDuration_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "SetRemainingDuration", nullptr, nullptr, sizeof(GassedStatusEffect_eventSetRemainingDuration_Parms), Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_durationRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::NewProp_durationRemaining = { "durationRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GassedStatusEffect_eventUpdateAntidoteEffectVFX_Parms, durationRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::NewProp_durationRemaining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGassedStatusEffect, nullptr, "UpdateAntidoteEffectVFX", nullptr, nullptr, sizeof(GassedStatusEffect_eventUpdateAntidoteEffectVFX_Parms), Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGassedStatusEffect_NoRegister()
	{
		return UGassedStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UGassedStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totalTimesEnteringToxicClouds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp__totalTimesEnteringToxicClouds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlappingAntidoteClouds_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__overlappingAntidoteClouds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__overlappingAntidoteClouds_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlappingClouds_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__overlappingClouds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__overlappingClouds_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInAntidoteCloud_MetaData[];
#endif
		static void NewProp__isInAntidoteCloud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInAntidoteCloud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInCloud_MetaData[];
#endif
		static void NewProp__isInCloud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInCloud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGassedStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheClown,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGassedStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGassedStatusEffect_Authority_AddOverlappingCloud, "Authority_AddOverlappingCloud" }, // 321640814
		{ &Z_Construct_UFunction_UGassedStatusEffect_Authority_RemoveOverlappingCloud, "Authority_RemoveOverlappingCloud" }, // 2132351944
		{ &Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInAntidoteCloud, "Authority_SetIsInAntidoteCloud" }, // 3984479152
		{ &Z_Construct_UFunction_UGassedStatusEffect_Authority_SetIsInCloud, "Authority_SetIsInCloud" }, // 3782110482
		{ &Z_Construct_UFunction_UGassedStatusEffect_GetAntidoteCloudEffectDuration, "GetAntidoteCloudEffectDuration" }, // 167717006
		{ &Z_Construct_UFunction_UGassedStatusEffect_GetCloudEffectDuration, "GetCloudEffectDuration" }, // 2788543313
		{ &Z_Construct_UFunction_UGassedStatusEffect_GetRemainingAntidoteDuration, "GetRemainingAntidoteDuration" }, // 2177549496
		{ &Z_Construct_UFunction_UGassedStatusEffect_GetRemainingDuration, "GetRemainingDuration" }, // 2798910917
		{ &Z_Construct_UFunction_UGassedStatusEffect_IsInAntidoteCloud, "IsInAntidoteCloud" }, // 1120910435
		{ &Z_Construct_UFunction_UGassedStatusEffect_IsInCloud, "IsInCloud" }, // 296148951
		{ &Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectBegin, "OnAntidoteEffectBegin" }, // 3922074461
		{ &Z_Construct_UFunction_UGassedStatusEffect_OnAntidoteEffectEnd, "OnAntidoteEffectEnd" }, // 2098621101
		{ &Z_Construct_UFunction_UGassedStatusEffect_OnDirectBottleHit, "OnDirectBottleHit" }, // 2971206499
		{ &Z_Construct_UFunction_UGassedStatusEffect_OnRep_IsInAntidoteCloud, "OnRep_IsInAntidoteCloud" }, // 227748226
		{ &Z_Construct_UFunction_UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds, "OnRep_TotalTimesEnteringToxicClouds" }, // 2717038950
		{ &Z_Construct_UFunction_UGassedStatusEffect_OnToxinCured, "OnToxinCured" }, // 3044003247
		{ &Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectBegin, "OnToxinEffectBegin" }, // 3896485716
		{ &Z_Construct_UFunction_UGassedStatusEffect_OnToxinEffectEnd, "OnToxinEffectEnd" }, // 3785493165
		{ &Z_Construct_UFunction_UGassedStatusEffect_SetRemainingAntidoteDuration, "SetRemainingAntidoteDuration" }, // 2997581507
		{ &Z_Construct_UFunction_UGassedStatusEffect_SetRemainingDuration, "SetRemainingDuration" }, // 1304046411
		{ &Z_Construct_UFunction_UGassedStatusEffect_UpdateAntidoteEffectVFX, "UpdateAntidoteEffectVFX" }, // 788976938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGassedStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GassedStatusEffect.h" },
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__totalTimesEnteringToxicClouds_MetaData[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__totalTimesEnteringToxicClouds = { "_totalTimesEnteringToxicClouds", "OnRep_TotalTimesEnteringToxicClouds", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGassedStatusEffect, _totalTimesEnteringToxicClouds), METADATA_PARAMS(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__totalTimesEnteringToxicClouds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__totalTimesEnteringToxicClouds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingAntidoteClouds_MetaData[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingAntidoteClouds = { "_overlappingAntidoteClouds", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGassedStatusEffect, _overlappingAntidoteClouds), METADATA_PARAMS(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingAntidoteClouds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingAntidoteClouds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingAntidoteClouds_ElementProp = { "_overlappingAntidoteClouds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingClouds_MetaData[] = {
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingClouds = { "_overlappingClouds", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGassedStatusEffect, _overlappingClouds), METADATA_PARAMS(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingClouds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingClouds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingClouds_ElementProp = { "_overlappingClouds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInAntidoteCloud_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GassedStatusEffect" },
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInAntidoteCloud_SetBit(void* Obj)
	{
		((UGassedStatusEffect*)Obj)->_isInAntidoteCloud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInAntidoteCloud = { "_isInAntidoteCloud", "OnRep_IsInAntidoteCloud", (EPropertyFlags)0x0040000100002034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGassedStatusEffect), &Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInAntidoteCloud_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInAntidoteCloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInAntidoteCloud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInCloud_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GassedStatusEffect" },
		{ "ModuleRelativePath", "Public/GassedStatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInCloud_SetBit(void* Obj)
	{
		((UGassedStatusEffect*)Obj)->_isInCloud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInCloud = { "_isInCloud", nullptr, (EPropertyFlags)0x0040000000002034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGassedStatusEffect), &Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInCloud_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInCloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInCloud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGassedStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__totalTimesEnteringToxicClouds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingAntidoteClouds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingAntidoteClouds_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingClouds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__overlappingClouds_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInAntidoteCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGassedStatusEffect_Statics::NewProp__isInCloud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGassedStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGassedStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGassedStatusEffect_Statics::ClassParams = {
		&UGassedStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGassedStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGassedStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGassedStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGassedStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGassedStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGassedStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGassedStatusEffect, 1320416750);
	template<> THECLOWN_API UClass* StaticClass<UGassedStatusEffect>()
	{
		return UGassedStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGassedStatusEffect(Z_Construct_UClass_UGassedStatusEffect, &UGassedStatusEffect::StaticClass, TEXT("/Script/TheClown"), TEXT("UGassedStatusEffect"), false, nullptr, nullptr, nullptr);

	void UGassedStatusEffect::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isInCloud(TEXT("_isInCloud"));
		static const FName Name__isInAntidoteCloud(TEXT("_isInAntidoteCloud"));
		static const FName Name__totalTimesEnteringToxicClouds(TEXT("_totalTimesEnteringToxicClouds"));

		const bool bIsValid = true
			&& Name__isInCloud == ClassReps[(int32)ENetFields_Private::_isInCloud].Property->GetFName()
			&& Name__isInAntidoteCloud == ClassReps[(int32)ENetFields_Private::_isInAntidoteCloud].Property->GetFName()
			&& Name__totalTimesEnteringToxicClouds == ClassReps[(int32)ENetFields_Private::_totalTimesEnteringToxicClouds].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGassedStatusEffect"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGassedStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
