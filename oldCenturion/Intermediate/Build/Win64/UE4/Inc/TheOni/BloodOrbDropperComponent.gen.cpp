// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbDropperComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbDropperComponent() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbDropperComponent_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbDropperComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	THEONI_API UScriptStruct* Z_Construct_UScriptStruct_FBloodOrbDropParams();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
// End Cross Module References
	DEFINE_FUNCTION(UBloodOrbDropperComponent::execAuthority_OnCamperCrouched)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEvent);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCamperCrouched(Z_Param_gameEvent,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbDropperComponent::execAuthority_OnCamperHooked)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEvent);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCamperHooked(Z_Param_gameEvent,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbDropperComponent::execAuthority_OnCamperUnhooked)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEvent);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCamperUnhooked(Z_Param_gameEvent,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbDropperComponent::execAuthority_OnDropOrbsGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEvent);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_GET_STRUCT(FBloodOrbDropParams,Z_Param_dropParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnDropOrbsGameEvent(Z_Param_gameEvent,Z_Param_Out_gameEventData,Z_Param_dropParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbDropperComponent::execAuthority_OnOwningCamperDamageStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldState);
		P_GET_ENUM(ECamperDamageState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOwningCamperDamageStateChanged(ECamperDamageState(Z_Param_oldState),ECamperDamageState(Z_Param_newState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbDropperComponent::execAuthority_SetPaused)
	{
		P_GET_UBOOL(Z_Param_paused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetPaused(Z_Param_paused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbDropperComponent::execDBD_DropBloodOrbs)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_numOrbs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_DropBloodOrbs(Z_Param_numOrbs);
		P_NATIVE_END;
	}
	void UBloodOrbDropperComponent::StaticRegisterNativesUBloodOrbDropperComponent()
	{
		UClass* Class = UBloodOrbDropperComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnCamperCrouched", &UBloodOrbDropperComponent::execAuthority_OnCamperCrouched },
			{ "Authority_OnCamperHooked", &UBloodOrbDropperComponent::execAuthority_OnCamperHooked },
			{ "Authority_OnCamperUnhooked", &UBloodOrbDropperComponent::execAuthority_OnCamperUnhooked },
			{ "Authority_OnDropOrbsGameEvent", &UBloodOrbDropperComponent::execAuthority_OnDropOrbsGameEvent },
			{ "Authority_OnOwningCamperDamageStateChanged", &UBloodOrbDropperComponent::execAuthority_OnOwningCamperDamageStateChanged },
			{ "Authority_SetPaused", &UBloodOrbDropperComponent::execAuthority_SetPaused },
			{ "DBD_DropBloodOrbs", &UBloodOrbDropperComponent::execDBD_DropBloodOrbs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics
	{
		struct BloodOrbDropperComponent_eventAuthority_OnCamperCrouched_Parms
		{
			FGameplayTag gameEvent;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnCamperCrouched_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEvent = { "gameEvent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnCamperCrouched_Parms, gameEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::NewProp_gameEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbDropperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbDropperComponent, nullptr, "Authority_OnCamperCrouched", nullptr, nullptr, sizeof(BloodOrbDropperComponent_eventAuthority_OnCamperCrouched_Parms), Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics
	{
		struct BloodOrbDropperComponent_eventAuthority_OnCamperHooked_Parms
		{
			FGameplayTag gameEvent;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnCamperHooked_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEvent = { "gameEvent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnCamperHooked_Parms, gameEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::NewProp_gameEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbDropperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbDropperComponent, nullptr, "Authority_OnCamperHooked", nullptr, nullptr, sizeof(BloodOrbDropperComponent_eventAuthority_OnCamperHooked_Parms), Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics
	{
		struct BloodOrbDropperComponent_eventAuthority_OnCamperUnhooked_Parms
		{
			FGameplayTag gameEvent;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnCamperUnhooked_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEvent = { "gameEvent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnCamperUnhooked_Parms, gameEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::NewProp_gameEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbDropperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbDropperComponent, nullptr, "Authority_OnCamperUnhooked", nullptr, nullptr, sizeof(BloodOrbDropperComponent_eventAuthority_OnCamperUnhooked_Parms), Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics
	{
		struct BloodOrbDropperComponent_eventAuthority_OnDropOrbsGameEvent_Parms
		{
			FGameplayTag gameEvent;
			FGameEventData gameEventData;
			FBloodOrbDropParams dropParams;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dropParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dropParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_dropParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_dropParams = { "dropParams", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnDropOrbsGameEvent_Parms, dropParams), Z_Construct_UScriptStruct_FBloodOrbDropParams, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_dropParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_dropParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnDropOrbsGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEvent = { "gameEvent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnDropOrbsGameEvent_Parms, gameEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_dropParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::NewProp_gameEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbDropperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbDropperComponent, nullptr, "Authority_OnDropOrbsGameEvent", nullptr, nullptr, sizeof(BloodOrbDropperComponent_eventAuthority_OnDropOrbsGameEvent_Parms), Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics
	{
		struct BloodOrbDropperComponent_eventAuthority_OnOwningCamperDamageStateChanged_Parms
		{
			ECamperDamageState oldState;
			ECamperDamageState newState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnOwningCamperDamageStateChanged_Parms, newState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_oldState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_oldState = { "oldState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventAuthority_OnOwningCamperDamageStateChanged_Parms, oldState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_oldState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_oldState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_oldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_oldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::NewProp_oldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbDropperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbDropperComponent, nullptr, "Authority_OnOwningCamperDamageStateChanged", nullptr, nullptr, sizeof(BloodOrbDropperComponent_eventAuthority_OnOwningCamperDamageStateChanged_Parms), Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics
	{
		struct BloodOrbDropperComponent_eventAuthority_SetPaused_Parms
		{
			bool paused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_paused_MetaData[];
#endif
		static void NewProp_paused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_paused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::NewProp_paused_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::NewProp_paused_SetBit(void* Obj)
	{
		((BloodOrbDropperComponent_eventAuthority_SetPaused_Parms*)Obj)->paused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::NewProp_paused = { "paused", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BloodOrbDropperComponent_eventAuthority_SetPaused_Parms), &Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::NewProp_paused_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::NewProp_paused_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::NewProp_paused_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::NewProp_paused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbDropperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbDropperComponent, nullptr, "Authority_SetPaused", nullptr, nullptr, sizeof(BloodOrbDropperComponent_eventAuthority_SetPaused_Parms), Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics
	{
		struct BloodOrbDropperComponent_eventDBD_DropBloodOrbs_Parms
		{
			int32 numOrbs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numOrbs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numOrbs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::NewProp_numOrbs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::NewProp_numOrbs = { "numOrbs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbDropperComponent_eventDBD_DropBloodOrbs_Parms, numOrbs), METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::NewProp_numOrbs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::NewProp_numOrbs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::NewProp_numOrbs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbDropperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbDropperComponent, nullptr, "DBD_DropBloodOrbs", nullptr, nullptr, sizeof(BloodOrbDropperComponent_eventDBD_DropBloodOrbs_Parms), Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodOrbDropperComponent_NoRegister()
	{
		return UBloodOrbDropperComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbDropperComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbDropperComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodOrbDropperComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperCrouched, "Authority_OnCamperCrouched" }, // 3350919786
		{ &Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperHooked, "Authority_OnCamperHooked" }, // 3813044696
		{ &Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnCamperUnhooked, "Authority_OnCamperUnhooked" }, // 2230037056
		{ &Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent, "Authority_OnDropOrbsGameEvent" }, // 1873226845
		{ &Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged, "Authority_OnOwningCamperDamageStateChanged" }, // 1628097120
		{ &Z_Construct_UFunction_UBloodOrbDropperComponent_Authority_SetPaused, "Authority_SetPaused" }, // 1282013853
		{ &Z_Construct_UFunction_UBloodOrbDropperComponent_DBD_DropBloodOrbs, "DBD_DropBloodOrbs" }, // 1273369330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbDropperComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BloodOrbDropperComponent.h" },
		{ "ModuleRelativePath", "Public/BloodOrbDropperComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbDropperComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbDropperComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbDropperComponent_Statics::ClassParams = {
		&UBloodOrbDropperComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbDropperComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbDropperComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbDropperComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbDropperComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbDropperComponent, 1549588034);
	template<> THEONI_API UClass* StaticClass<UBloodOrbDropperComponent>()
	{
		return UBloodOrbDropperComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbDropperComponent(Z_Construct_UClass_UBloodOrbDropperComponent, &UBloodOrbDropperComponent::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbDropperComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbDropperComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
