// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Bloodlust.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodlust() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodlust_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodlust();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBloodlust::execDBD_SetBloodlust)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_GET_UBOOL(Z_Param_enableDecay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetBloodlust(Z_Param_amount,Z_Param_enableDecay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodlust::execGetBloodlustTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBloodlustTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodlust::execMulticast_ResetBloodlust)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetBloodlust_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodlust::execOnAllChaseEndedEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAllChaseEndedEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodlust::execOnChaseStartedEvent)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_chasedPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChaseStartedEvent(Z_Param_chasedPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodlust::execOnRep_BloodlustTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_oldBloodlustTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BloodlustTime(Z_Param_oldBloodlustTime);
		P_NATIVE_END;
	}
	static FName NAME_UBloodlust_Multicast_ResetBloodlust = FName(TEXT("Multicast_ResetBloodlust"));
	void UBloodlust::Multicast_ResetBloodlust()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBloodlust_Multicast_ResetBloodlust),NULL);
	}
	void UBloodlust::StaticRegisterNativesUBloodlust()
	{
		UClass* Class = UBloodlust::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_SetBloodlust", &UBloodlust::execDBD_SetBloodlust },
			{ "GetBloodlustTime", &UBloodlust::execGetBloodlustTime },
			{ "Multicast_ResetBloodlust", &UBloodlust::execMulticast_ResetBloodlust },
			{ "OnAllChaseEndedEvent", &UBloodlust::execOnAllChaseEndedEvent },
			{ "OnChaseStartedEvent", &UBloodlust::execOnChaseStartedEvent },
			{ "OnRep_BloodlustTime", &UBloodlust::execOnRep_BloodlustTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics
	{
		struct Bloodlust_eventDBD_SetBloodlust_Parms
		{
			int32 amount;
			bool enableDecay;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enableDecay_MetaData[];
#endif
		static void NewProp_enableDecay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enableDecay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_enableDecay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_enableDecay_SetBit(void* Obj)
	{
		((Bloodlust_eventDBD_SetBloodlust_Parms*)Obj)->enableDecay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_enableDecay = { "enableDecay", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Bloodlust_eventDBD_SetBloodlust_Parms), &Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_enableDecay_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_enableDecay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_enableDecay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bloodlust_eventDBD_SetBloodlust_Parms, amount), METADATA_PARAMS(Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_enableDecay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodlust, nullptr, "DBD_SetBloodlust", nullptr, nullptr, sizeof(Bloodlust_eventDBD_SetBloodlust_Parms), Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics
	{
		struct Bloodlust_eventGetBloodlustTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bloodlust_eventGetBloodlustTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodlust, nullptr, "GetBloodlustTime", nullptr, nullptr, sizeof(Bloodlust_eventGetBloodlustTime_Parms), Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodlust_GetBloodlustTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodlust_GetBloodlustTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodlust_Multicast_ResetBloodlust_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodlust_Multicast_ResetBloodlust_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodlust_Multicast_ResetBloodlust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodlust, nullptr, "Multicast_ResetBloodlust", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodlust_Multicast_ResetBloodlust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_Multicast_ResetBloodlust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodlust_Multicast_ResetBloodlust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodlust_Multicast_ResetBloodlust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodlust_OnAllChaseEndedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodlust_OnAllChaseEndedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodlust_OnAllChaseEndedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodlust, nullptr, "OnAllChaseEndedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodlust_OnAllChaseEndedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_OnAllChaseEndedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodlust_OnAllChaseEndedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodlust_OnAllChaseEndedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics
	{
		struct Bloodlust_eventOnChaseStartedEvent_Parms
		{
			ADBDPlayer* chasedPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chasedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::NewProp_chasedPlayer = { "chasedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bloodlust_eventOnChaseStartedEvent_Parms, chasedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::NewProp_chasedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodlust, nullptr, "OnChaseStartedEvent", nullptr, nullptr, sizeof(Bloodlust_eventOnChaseStartedEvent_Parms), Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics
	{
		struct Bloodlust_eventOnRep_BloodlustTime_Parms
		{
			float oldBloodlustTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldBloodlustTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::NewProp_oldBloodlustTime = { "oldBloodlustTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bloodlust_eventOnRep_BloodlustTime_Parms, oldBloodlustTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::NewProp_oldBloodlustTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodlust, nullptr, "OnRep_BloodlustTime", nullptr, nullptr, sizeof(Bloodlust_eventOnRep_BloodlustTime_Parms), Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodlust_NoRegister()
	{
		return UBloodlust::StaticClass();
	}
	struct Z_Construct_UClass_UBloodlust_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodlustTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__bloodlustTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodlustCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodlust_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodlust_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodlust_DBD_SetBloodlust, "DBD_SetBloodlust" }, // 677882799
		{ &Z_Construct_UFunction_UBloodlust_GetBloodlustTime, "GetBloodlustTime" }, // 2217952393
		{ &Z_Construct_UFunction_UBloodlust_Multicast_ResetBloodlust, "Multicast_ResetBloodlust" }, // 677626858
		{ &Z_Construct_UFunction_UBloodlust_OnAllChaseEndedEvent, "OnAllChaseEndedEvent" }, // 1120387261
		{ &Z_Construct_UFunction_UBloodlust_OnChaseStartedEvent, "OnChaseStartedEvent" }, // 820665046
		{ &Z_Construct_UFunction_UBloodlust_OnRep_BloodlustTime, "OnRep_BloodlustTime" }, // 2381059568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodlust_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bloodlust.h" },
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodlust_Statics::NewProp__owningKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodlust_Statics::NewProp__owningKiller = { "_owningKiller", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodlust, _owningKiller), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodlust_Statics::NewProp__owningKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodlust_Statics::NewProp__owningKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodlust_Statics::NewProp__bloodlustTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodlust_Statics::NewProp__bloodlustTime = { "_bloodlustTime", "OnRep_BloodlustTime", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodlust, _bloodlustTime), METADATA_PARAMS(Z_Construct_UClass_UBloodlust_Statics::NewProp__bloodlustTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodlust_Statics::NewProp__bloodlustTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodlust_Statics::NewProp_BloodlustCurve_MetaData[] = {
		{ "Category", "Bloodlust" },
		{ "ModuleRelativePath", "Public/Bloodlust.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodlust_Statics::NewProp_BloodlustCurve = { "BloodlustCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodlust, BloodlustCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodlust_Statics::NewProp_BloodlustCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodlust_Statics::NewProp_BloodlustCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodlust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodlust_Statics::NewProp__owningKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodlust_Statics::NewProp__bloodlustTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodlust_Statics::NewProp_BloodlustCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodlust_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodlust>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodlust_Statics::ClassParams = {
		&UBloodlust::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBloodlust_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodlust_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodlust_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodlust_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodlust()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodlust_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodlust, 397938410);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBloodlust>()
	{
		return UBloodlust::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodlust(Z_Construct_UClass_UBloodlust, &UBloodlust::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBloodlust"), false, nullptr, nullptr, nullptr);

	void UBloodlust::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__bloodlustTime(TEXT("_bloodlustTime"));

		const bool bIsValid = true
			&& Name__bloodlustTime == ClassReps[(int32)ENetFields_Private::_bloodlustTime].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBloodlust"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodlust);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
