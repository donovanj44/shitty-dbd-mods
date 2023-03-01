// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Perk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerk() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPerkInitializationData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePerkIconStrategy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventPerkOnTokenCountChangedBP_Parms
		{
			int32 tokenCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tokenCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::NewProp_tokenCount = { "tokenCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventPerkOnTokenCountChangedBP_Parms, tokenCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::NewProp_tokenCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "PerkOnTokenCountChangedBP__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventPerkOnTokenCountChangedBP_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPerk::execAuthority_DecrementToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_DecrementToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execAuthority_IncrementToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_IncrementToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execAuthority_SetIsUsable)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetIsUsable(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execAuthority_SetMaxTokenCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetMaxTokenCount(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execAuthority_SetTokenCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetTokenCount(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execAuthority_TriggerCooldownTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_coolddownTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_TriggerCooldownTimer(Z_Param_coolddownTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execAuthority_TriggerHudIconTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_TriggerHudIconTimer(Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execFireActivePerkEvent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentage);
		P_GET_PROPERTY(FIntProperty,Z_Param_chargeCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireActivePerkEvent(Z_Param_percentage,Z_Param_chargeCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execGetCooldownTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTimerObject**)Z_Param__Result=P_THIS->GetCooldownTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execGetHudIconTimerElapsedTimePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHudIconTimerElapsedTimePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execGetIsUsable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUsable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execGetMaxTokenCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxTokenCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execGetPerkLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPerkLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execGetTokenCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTokenCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execIsCooldownTimerDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCooldownTimerDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execIsHudIconTimerDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHudIconTimerDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execOnRep_CooldownTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CooldownTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execOnRep_IsUsable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsUsable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execOnRep_PerkInitializationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PerkInitializationData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execOnRep_PerkLevelData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PerkLevelData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execOnRep_TokenCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_oldCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TokenCount(Z_Param_oldCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerk::execSetIsUsable)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUsable(Z_Param_value);
		P_NATIVE_END;
	}
	void UPerk::StaticRegisterNativesUPerk()
	{
		UClass* Class = UPerk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_DecrementToken", &UPerk::execAuthority_DecrementToken },
			{ "Authority_IncrementToken", &UPerk::execAuthority_IncrementToken },
			{ "Authority_SetIsUsable", &UPerk::execAuthority_SetIsUsable },
			{ "Authority_SetMaxTokenCount", &UPerk::execAuthority_SetMaxTokenCount },
			{ "Authority_SetTokenCount", &UPerk::execAuthority_SetTokenCount },
			{ "Authority_TriggerCooldownTimer", &UPerk::execAuthority_TriggerCooldownTimer },
			{ "Authority_TriggerHudIconTimer", &UPerk::execAuthority_TriggerHudIconTimer },
			{ "FireActivePerkEvent", &UPerk::execFireActivePerkEvent },
			{ "GetCooldownTimer", &UPerk::execGetCooldownTimer },
			{ "GetHudIconTimerElapsedTimePercent", &UPerk::execGetHudIconTimerElapsedTimePercent },
			{ "GetIsUsable", &UPerk::execGetIsUsable },
			{ "GetMaxTokenCount", &UPerk::execGetMaxTokenCount },
			{ "GetPerkLevel", &UPerk::execGetPerkLevel },
			{ "GetTokenCount", &UPerk::execGetTokenCount },
			{ "IsCooldownTimerDone", &UPerk::execIsCooldownTimerDone },
			{ "IsHudIconTimerDone", &UPerk::execIsHudIconTimerDone },
			{ "OnRep_CooldownTimer", &UPerk::execOnRep_CooldownTimer },
			{ "OnRep_IsUsable", &UPerk::execOnRep_IsUsable },
			{ "OnRep_PerkInitializationData", &UPerk::execOnRep_PerkInitializationData },
			{ "OnRep_PerkLevelData", &UPerk::execOnRep_PerkLevelData },
			{ "OnRep_TokenCount", &UPerk::execOnRep_TokenCount },
			{ "SetIsUsable", &UPerk::execSetIsUsable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerk_Authority_DecrementToken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_Authority_DecrementToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_Authority_DecrementToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "Authority_DecrementToken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_Authority_DecrementToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_DecrementToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_Authority_DecrementToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_Authority_DecrementToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_Authority_IncrementToken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_Authority_IncrementToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_Authority_IncrementToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "Authority_IncrementToken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_Authority_IncrementToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_IncrementToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_Authority_IncrementToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_Authority_IncrementToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics
	{
		struct Perk_eventAuthority_SetIsUsable_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::NewProp_value_SetBit(void* Obj)
	{
		((Perk_eventAuthority_SetIsUsable_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Perk_eventAuthority_SetIsUsable_Parms), &Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "Authority_SetIsUsable", nullptr, nullptr, sizeof(Perk_eventAuthority_SetIsUsable_Parms), Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_Authority_SetIsUsable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_Authority_SetIsUsable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics
	{
		struct Perk_eventAuthority_SetMaxTokenCount_Parms
		{
			int32 value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventAuthority_SetMaxTokenCount_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "Authority_SetMaxTokenCount", nullptr, nullptr, sizeof(Perk_eventAuthority_SetMaxTokenCount_Parms), Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics
	{
		struct Perk_eventAuthority_SetTokenCount_Parms
		{
			int32 value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventAuthority_SetTokenCount_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "Authority_SetTokenCount", nullptr, nullptr, sizeof(Perk_eventAuthority_SetTokenCount_Parms), Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_Authority_SetTokenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_Authority_SetTokenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics
	{
		struct Perk_eventAuthority_TriggerCooldownTimer_Parms
		{
			float coolddownTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coolddownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_coolddownTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::NewProp_coolddownTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::NewProp_coolddownTime = { "coolddownTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventAuthority_TriggerCooldownTimer_Parms, coolddownTime), METADATA_PARAMS(Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::NewProp_coolddownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::NewProp_coolddownTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::NewProp_coolddownTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "Authority_TriggerCooldownTimer", nullptr, nullptr, sizeof(Perk_eventAuthority_TriggerCooldownTimer_Parms), Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics
	{
		struct Perk_eventAuthority_TriggerHudIconTimer_Parms
		{
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventAuthority_TriggerHudIconTimer_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "Authority_TriggerHudIconTimer", nullptr, nullptr, sizeof(Perk_eventAuthority_TriggerHudIconTimer_Parms), Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics
	{
		struct Perk_eventFireActivePerkEvent_Parms
		{
			float percentage;
			int32 chargeCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chargeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_chargeCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_chargeCount = { "chargeCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventFireActivePerkEvent_Parms, chargeCount), METADATA_PARAMS(Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_chargeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_chargeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_percentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventFireActivePerkEvent_Parms, percentage), METADATA_PARAMS(Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_percentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_percentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_chargeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::NewProp_percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "FireActivePerkEvent", nullptr, nullptr, sizeof(Perk_eventFireActivePerkEvent_Parms), Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_FireActivePerkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_FireActivePerkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics
	{
		struct Perk_eventGetCooldownTimer_Parms
		{
			UTimerObject* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventGetCooldownTimer_Parms, ReturnValue), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "GetCooldownTimer", nullptr, nullptr, sizeof(Perk_eventGetCooldownTimer_Parms), Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_GetCooldownTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_GetCooldownTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics
	{
		struct Perk_eventGetHudIconTimerElapsedTimePercent_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventGetHudIconTimerElapsedTimePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "GetHudIconTimerElapsedTimePercent", nullptr, nullptr, sizeof(Perk_eventGetHudIconTimerElapsedTimePercent_Parms), Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_GetIsUsable_Statics
	{
		struct Perk_eventGetIsUsable_Parms
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
	void Z_Construct_UFunction_UPerk_GetIsUsable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Perk_eventGetIsUsable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerk_GetIsUsable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Perk_eventGetIsUsable_Parms), &Z_Construct_UFunction_UPerk_GetIsUsable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_GetIsUsable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_GetIsUsable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_GetIsUsable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_GetIsUsable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "GetIsUsable", nullptr, nullptr, sizeof(Perk_eventGetIsUsable_Parms), Z_Construct_UFunction_UPerk_GetIsUsable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetIsUsable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_GetIsUsable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetIsUsable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_GetIsUsable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_GetIsUsable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics
	{
		struct Perk_eventGetMaxTokenCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventGetMaxTokenCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "GetMaxTokenCount", nullptr, nullptr, sizeof(Perk_eventGetMaxTokenCount_Parms), Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_GetMaxTokenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_GetMaxTokenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_GetPerkLevel_Statics
	{
		struct Perk_eventGetPerkLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventGetPerkLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "GetPerkLevel", nullptr, nullptr, sizeof(Perk_eventGetPerkLevel_Parms), Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_GetPerkLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_GetPerkLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_GetTokenCount_Statics
	{
		struct Perk_eventGetTokenCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerk_GetTokenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventGetTokenCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_GetTokenCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_GetTokenCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_GetTokenCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_GetTokenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "GetTokenCount", nullptr, nullptr, sizeof(Perk_eventGetTokenCount_Parms), Z_Construct_UFunction_UPerk_GetTokenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetTokenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_GetTokenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_GetTokenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_GetTokenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_GetTokenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics
	{
		struct Perk_eventIsCooldownTimerDone_Parms
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
	void Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Perk_eventIsCooldownTimerDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Perk_eventIsCooldownTimerDone_Parms), &Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "IsCooldownTimerDone", nullptr, nullptr, sizeof(Perk_eventIsCooldownTimerDone_Parms), Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_IsCooldownTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_IsCooldownTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics
	{
		struct Perk_eventIsHudIconTimerDone_Parms
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
	void Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Perk_eventIsHudIconTimerDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Perk_eventIsHudIconTimerDone_Parms), &Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "IsHudIconTimerDone", nullptr, nullptr, sizeof(Perk_eventIsHudIconTimerDone_Parms), Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_IsHudIconTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_IsHudIconTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_OnRep_CooldownTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_OnRep_CooldownTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_OnRep_CooldownTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "OnRep_CooldownTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_OnRep_CooldownTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_OnRep_CooldownTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_OnRep_CooldownTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_OnRep_CooldownTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_OnRep_IsUsable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_OnRep_IsUsable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_OnRep_IsUsable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "OnRep_IsUsable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_OnRep_IsUsable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_OnRep_IsUsable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_OnRep_IsUsable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_OnRep_IsUsable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_OnRep_PerkInitializationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_OnRep_PerkInitializationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_OnRep_PerkInitializationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "OnRep_PerkInitializationData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_OnRep_PerkInitializationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_OnRep_PerkInitializationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_OnRep_PerkInitializationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_OnRep_PerkInitializationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_OnRep_PerkLevelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_OnRep_PerkLevelData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_OnRep_PerkLevelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "OnRep_PerkLevelData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_OnRep_PerkLevelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_OnRep_PerkLevelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_OnRep_PerkLevelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_OnRep_PerkLevelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics
	{
		struct Perk_eventOnRep_TokenCount_Parms
		{
			int32 oldCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::NewProp_oldCount = { "oldCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perk_eventOnRep_TokenCount_Parms, oldCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::NewProp_oldCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "OnRep_TokenCount", nullptr, nullptr, sizeof(Perk_eventOnRep_TokenCount_Parms), Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_OnRep_TokenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_OnRep_TokenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerk_SetIsUsable_Statics
	{
		struct Perk_eventSetIsUsable_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerk_SetIsUsable_Statics::NewProp_value_SetBit(void* Obj)
	{
		((Perk_eventSetIsUsable_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerk_SetIsUsable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Perk_eventSetIsUsable_Parms), &Z_Construct_UFunction_UPerk_SetIsUsable_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerk_SetIsUsable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerk_SetIsUsable_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerk_SetIsUsable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerk_SetIsUsable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerk, nullptr, "SetIsUsable", nullptr, nullptr, sizeof(Perk_eventSetIsUsable_Parms), Z_Construct_UFunction_UPerk_SetIsUsable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_SetIsUsable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerk_SetIsUsable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerk_SetIsUsable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerk_SetIsUsable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerk_SetIsUsable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerk_NoRegister()
	{
		return UPerk::StaticClass();
	}
	struct Z_Construct_UClass_UPerk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hudIconTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hudIconTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTokenCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxTokenCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tokenCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__tokenCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkInitializationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__perkInitializationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkIconStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perkIconStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastAlways_MetaData[];
#endif
		static void NewProp_BroadcastAlways_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastAlways;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastInactiveCooldownTimer_MetaData[];
#endif
		static void NewProp_BroadcastInactiveCooldownTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastInactiveCooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastCooldownTimer_MetaData[];
#endif
		static void NewProp_BroadcastCooldownTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastCooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastOnTimer_MetaData[];
#endif
		static void NewProp_BroadcastOnTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastOnTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastWhenApplicable_MetaData[];
#endif
		static void NewProp_BroadcastWhenApplicable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastWhenApplicable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUsable_MetaData[];
#endif
		static void NewProp__isUsable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUsable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTokenCountChangedBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTokenCountChangedBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkIconStrategyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PerkIconStrategyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerkLevelData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerk_Authority_DecrementToken, "Authority_DecrementToken" }, // 507911722
		{ &Z_Construct_UFunction_UPerk_Authority_IncrementToken, "Authority_IncrementToken" }, // 2133231655
		{ &Z_Construct_UFunction_UPerk_Authority_SetIsUsable, "Authority_SetIsUsable" }, // 3059708597
		{ &Z_Construct_UFunction_UPerk_Authority_SetMaxTokenCount, "Authority_SetMaxTokenCount" }, // 1372537467
		{ &Z_Construct_UFunction_UPerk_Authority_SetTokenCount, "Authority_SetTokenCount" }, // 1548042958
		{ &Z_Construct_UFunction_UPerk_Authority_TriggerCooldownTimer, "Authority_TriggerCooldownTimer" }, // 2122639073
		{ &Z_Construct_UFunction_UPerk_Authority_TriggerHudIconTimer, "Authority_TriggerHudIconTimer" }, // 1579851910
		{ &Z_Construct_UFunction_UPerk_FireActivePerkEvent, "FireActivePerkEvent" }, // 1900611861
		{ &Z_Construct_UFunction_UPerk_GetCooldownTimer, "GetCooldownTimer" }, // 4064751688
		{ &Z_Construct_UFunction_UPerk_GetHudIconTimerElapsedTimePercent, "GetHudIconTimerElapsedTimePercent" }, // 1964981933
		{ &Z_Construct_UFunction_UPerk_GetIsUsable, "GetIsUsable" }, // 792221449
		{ &Z_Construct_UFunction_UPerk_GetMaxTokenCount, "GetMaxTokenCount" }, // 3342266694
		{ &Z_Construct_UFunction_UPerk_GetPerkLevel, "GetPerkLevel" }, // 3929465908
		{ &Z_Construct_UFunction_UPerk_GetTokenCount, "GetTokenCount" }, // 1505810827
		{ &Z_Construct_UFunction_UPerk_IsCooldownTimerDone, "IsCooldownTimerDone" }, // 1668182437
		{ &Z_Construct_UFunction_UPerk_IsHudIconTimerDone, "IsHudIconTimerDone" }, // 3290370837
		{ &Z_Construct_UFunction_UPerk_OnRep_CooldownTimer, "OnRep_CooldownTimer" }, // 2149464831
		{ &Z_Construct_UFunction_UPerk_OnRep_IsUsable, "OnRep_IsUsable" }, // 1445995489
		{ &Z_Construct_UFunction_UPerk_OnRep_PerkInitializationData, "OnRep_PerkInitializationData" }, // 1809156094
		{ &Z_Construct_UFunction_UPerk_OnRep_PerkLevelData, "OnRep_PerkLevelData" }, // 1892286152
		{ &Z_Construct_UFunction_UPerk_OnRep_TokenCount, "OnRep_TokenCount" }, // 3629967742
		{ &Z_Construct_UFunction_UPerk_SetIsUsable, "SetIsUsable" }, // 3379297345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Perk.h" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp__hudIconTimer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp__hudIconTimer = { "_hudIconTimer", nullptr, (EPropertyFlags)0x0040000000082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerk, _hudIconTimer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp__hudIconTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp__hudIconTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp__cooldownTimer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp__cooldownTimer = { "_cooldownTimer", "OnRep_CooldownTimer", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerk, _cooldownTimer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp__cooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp__cooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp__maxTokenCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp__maxTokenCount = { "_maxTokenCount", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerk, _maxTokenCount), METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp__maxTokenCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp__maxTokenCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp__tokenCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp__tokenCount = { "_tokenCount", "OnRep_TokenCount", (EPropertyFlags)0x0040000100002024, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerk, _tokenCount), METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp__tokenCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp__tokenCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp__perkInitializationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp__perkInitializationData = { "_perkInitializationData", "OnRep_PerkInitializationData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerk, _perkInitializationData), Z_Construct_UScriptStruct_FPerkInitializationData, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp__perkInitializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp__perkInitializationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp__perkIconStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp__perkIconStrategy = { "_perkIconStrategy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerk, _perkIconStrategy), Z_Construct_UClass_UBasePerkIconStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp__perkIconStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp__perkIconStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastAlways_MetaData[] = {
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	void Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastAlways_SetBit(void* Obj)
	{
		((UPerk*)Obj)->BroadcastAlways = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastAlways = { "BroadcastAlways", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPerk), &Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastAlways_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastAlways_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastAlways_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastInactiveCooldownTimer_MetaData[] = {
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	void Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastInactiveCooldownTimer_SetBit(void* Obj)
	{
		((UPerk*)Obj)->BroadcastInactiveCooldownTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastInactiveCooldownTimer = { "BroadcastInactiveCooldownTimer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPerk), &Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastInactiveCooldownTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastInactiveCooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastInactiveCooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastCooldownTimer_MetaData[] = {
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	void Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastCooldownTimer_SetBit(void* Obj)
	{
		((UPerk*)Obj)->BroadcastCooldownTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastCooldownTimer = { "BroadcastCooldownTimer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPerk), &Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastCooldownTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastCooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastCooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastOnTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	void Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastOnTimer_SetBit(void* Obj)
	{
		((UPerk*)Obj)->BroadcastOnTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastOnTimer = { "BroadcastOnTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPerk), &Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastOnTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastOnTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastOnTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastWhenApplicable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	void Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastWhenApplicable_SetBit(void* Obj)
	{
		((UPerk*)Obj)->BroadcastWhenApplicable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastWhenApplicable = { "BroadcastWhenApplicable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPerk), &Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastWhenApplicable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastWhenApplicable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastWhenApplicable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp__isUsable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	void Z_Construct_UClass_UPerk_Statics::NewProp__isUsable_SetBit(void* Obj)
	{
		((UPerk*)Obj)->_isUsable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp__isUsable = { "_isUsable", "OnRep_IsUsable", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPerk), &Z_Construct_UClass_UPerk_Statics::NewProp__isUsable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp__isUsable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp__isUsable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_OnTokenCountChangedBP_MetaData[] = {
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_OnTokenCountChangedBP = { "OnTokenCountChangedBP", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerk, OnTokenCountChangedBP), Z_Construct_UDelegateFunction_DeadByDaylight_PerkOnTokenCountChangedBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_OnTokenCountChangedBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_OnTokenCountChangedBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_PerkIconStrategyClass_MetaData[] = {
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_PerkIconStrategyClass = { "PerkIconStrategyClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerk, PerkIconStrategyClass), Z_Construct_UClass_UBasePerkIconStrategy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_PerkIconStrategyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_PerkIconStrategyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_PerkLevelData_MetaData[] = {
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Public/Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_PerkLevelData = { "PerkLevelData", "OnRep_PerkLevelData", (EPropertyFlags)0x0020080100000061, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(PerkLevelData, UPerk), STRUCT_OFFSET(UPerk, PerkLevelData), Z_Construct_UScriptStruct_FGameplayModifierData, METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_PerkLevelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_PerkLevelData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp__hudIconTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp__cooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp__maxTokenCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp__tokenCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp__perkInitializationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp__perkIconStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastAlways,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastInactiveCooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastCooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastOnTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_BroadcastWhenApplicable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp__isUsable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_OnTokenCountChangedBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_PerkIconStrategyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_PerkLevelData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerk_Statics::ClassParams = {
		&UPerk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPerk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerk, 2547682831);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerk>()
	{
		return UPerk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerk(Z_Construct_UClass_UPerk, &UPerk::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerk"), false, nullptr, nullptr, nullptr);

	void UPerk::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PerkLevelData(TEXT("PerkLevelData"));
		static const FName Name__isUsable(TEXT("_isUsable"));
		static const FName Name__perkInitializationData(TEXT("_perkInitializationData"));
		static const FName Name__tokenCount(TEXT("_tokenCount"));
		static const FName Name__maxTokenCount(TEXT("_maxTokenCount"));
		static const FName Name__cooldownTimer(TEXT("_cooldownTimer"));
		static const FName Name__hudIconTimer(TEXT("_hudIconTimer"));

		const bool bIsValid = true
			&& Name_PerkLevelData == ClassReps[(int32)ENetFields_Private::PerkLevelData_STATIC_ARRAY].Property->GetFName()
			&& Name__isUsable == ClassReps[(int32)ENetFields_Private::_isUsable].Property->GetFName()
			&& Name__perkInitializationData == ClassReps[(int32)ENetFields_Private::_perkInitializationData].Property->GetFName()
			&& Name__tokenCount == ClassReps[(int32)ENetFields_Private::_tokenCount].Property->GetFName()
			&& Name__maxTokenCount == ClassReps[(int32)ENetFields_Private::_maxTokenCount].Property->GetFName()
			&& Name__cooldownTimer == ClassReps[(int32)ENetFields_Private::_cooldownTimer].Property->GetFName()
			&& Name__hudIconTimer == ClassReps[(int32)ENetFields_Private::_hudIconTimer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPerk"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
