// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGameEventUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGameEventUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameEventUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameEventUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
// End Cross Module References
	DEFINE_FUNCTION(UDBDGameEventUtilities::execAuthority_AccumulateOngoingGameEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_OBJECT(ADBDPlayer,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_customValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ongoingWaitTime);
		P_GET_OBJECT(UObject,Z_Param_customObjectParameter);
		P_GET_PROPERTY(FIntProperty,Z_Param_customIntValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDGameEventUtilities::Authority_AccumulateOngoingGameEvent(Z_Param_worldContextObject,Z_Param_gameEventType,Z_Param_instigator,Z_Param_target,Z_Param_customValue,Z_Param_ongoingWaitTime,Z_Param_customObjectParameter,Z_Param_customIntValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameEventUtilities::execAuthority_DispatcherFireGameEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_UBOOL(Z_Param_broadcastOverNetwork);
		P_GET_OBJECT(ADBDPlayer,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_customValue);
		P_GET_OBJECT(UObject,Z_Param_customObjectParameter);
		P_GET_PROPERTY(FIntProperty,Z_Param_customIntValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDGameEventUtilities::Authority_DispatcherFireGameEvent(Z_Param_worldContextObject,Z_Param_gameEventType,Z_Param_broadcastOverNetwork,Z_Param_instigator,Z_Param_target,Z_Param_customValue,Z_Param_customObjectParameter,Z_Param_customIntValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameEventUtilities::execDispatcherFireGameEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_UBOOL(Z_Param_broadcastOverNetwork);
		P_GET_OBJECT(ADBDPlayer,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_customValue);
		P_GET_OBJECT(UObject,Z_Param_customObjectParameter);
		P_GET_PROPERTY(FIntProperty,Z_Param_customIntValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDGameEventUtilities::DispatcherFireGameEvent(Z_Param_worldContextObject,Z_Param_gameEventType,Z_Param_broadcastOverNetwork,Z_Param_instigator,Z_Param_target,Z_Param_customValue,Z_Param_customObjectParameter,Z_Param_customIntValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameEventUtilities::execFireGameEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_ENUM(EDBDScoreTypes,Z_Param_scoreType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDGameEventUtilities::FireGameEvent(Z_Param_worldContextObject,EDBDScoreTypes(Z_Param_scoreType),Z_Param_amount,Z_Param_instigator,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameEventUtilities::execLocallyDispatchGameEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_OBJECT(ADBDPlayer,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_customValue);
		P_GET_OBJECT(UObject,Z_Param_customObjectParameter);
		P_GET_PROPERTY(FIntProperty,Z_Param_customIntValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDGameEventUtilities::LocallyDispatchGameEvent(Z_Param_worldContextObject,Z_Param_gameEventType,Z_Param_instigator,Z_Param_target,Z_Param_customValue,Z_Param_customObjectParameter,Z_Param_customIntValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameEventUtilities::execRemotelyDispatchGameEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_OBJECT(ADBDPlayer,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_customValue);
		P_GET_OBJECT(UObject,Z_Param_customObjectParameter);
		P_GET_PROPERTY(FIntProperty,Z_Param_customIntValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDGameEventUtilities::RemotelyDispatchGameEvent(Z_Param_worldContextObject,Z_Param_gameEventType,Z_Param_instigator,Z_Param_target,Z_Param_customValue,Z_Param_customObjectParameter,Z_Param_customIntValue);
		P_NATIVE_END;
	}
	void UDBDGameEventUtilities::StaticRegisterNativesUDBDGameEventUtilities()
	{
		UClass* Class = UDBDGameEventUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AccumulateOngoingGameEvent", &UDBDGameEventUtilities::execAuthority_AccumulateOngoingGameEvent },
			{ "Authority_DispatcherFireGameEvent", &UDBDGameEventUtilities::execAuthority_DispatcherFireGameEvent },
			{ "DispatcherFireGameEvent", &UDBDGameEventUtilities::execDispatcherFireGameEvent },
			{ "FireGameEvent", &UDBDGameEventUtilities::execFireGameEvent },
			{ "LocallyDispatchGameEvent", &UDBDGameEventUtilities::execLocallyDispatchGameEvent },
			{ "RemotelyDispatchGameEvent", &UDBDGameEventUtilities::execRemotelyDispatchGameEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics
	{
		struct DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms
		{
			const UObject* worldContextObject;
			FGameplayTag gameEventType;
			ADBDPlayer* instigator;
			AActor* target;
			float customValue;
			float ongoingWaitTime;
			UObject* customObjectParameter;
			int32 customIntValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_customIntValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customObjectParameter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ongoingWaitTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_customValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_customIntValue = { "customIntValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms, customIntValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_customObjectParameter = { "customObjectParameter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms, customObjectParameter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_ongoingWaitTime = { "ongoingWaitTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms, ongoingWaitTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_customValue = { "customValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms, customValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms, instigator), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_customIntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_customObjectParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_ongoingWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_customValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_gameEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameEventUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameEventUtilities, nullptr, "Authority_AccumulateOngoingGameEvent", nullptr, nullptr, sizeof(DBDGameEventUtilities_eventAuthority_AccumulateOngoingGameEvent_Parms), Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics
	{
		struct DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms
		{
			const UObject* worldContextObject;
			FGameplayTag gameEventType;
			bool broadcastOverNetwork;
			ADBDPlayer* instigator;
			AActor* target;
			float customValue;
			UObject* customObjectParameter;
			int32 customIntValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_customIntValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customObjectParameter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_customValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static void NewProp_broadcastOverNetwork_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_broadcastOverNetwork;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_customIntValue = { "customIntValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms, customIntValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_customObjectParameter = { "customObjectParameter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms, customObjectParameter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_customValue = { "customValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms, customValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms, instigator), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_broadcastOverNetwork_SetBit(void* Obj)
	{
		((DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms*)Obj)->broadcastOverNetwork = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_broadcastOverNetwork = { "broadcastOverNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms), &Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_broadcastOverNetwork_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_gameEventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_customIntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_customObjectParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_customValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_broadcastOverNetwork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_gameEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameEventUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameEventUtilities, nullptr, "Authority_DispatcherFireGameEvent", nullptr, nullptr, sizeof(DBDGameEventUtilities_eventAuthority_DispatcherFireGameEvent_Parms), Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics
	{
		struct DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms
		{
			const UObject* worldContextObject;
			FGameplayTag gameEventType;
			bool broadcastOverNetwork;
			ADBDPlayer* instigator;
			AActor* target;
			float customValue;
			UObject* customObjectParameter;
			int32 customIntValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_customIntValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customObjectParameter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_customValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static void NewProp_broadcastOverNetwork_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_broadcastOverNetwork;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_customIntValue = { "customIntValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms, customIntValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_customObjectParameter = { "customObjectParameter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms, customObjectParameter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_customValue = { "customValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms, customValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms, instigator), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_broadcastOverNetwork_SetBit(void* Obj)
	{
		((DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms*)Obj)->broadcastOverNetwork = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_broadcastOverNetwork = { "broadcastOverNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms), &Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_broadcastOverNetwork_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_gameEventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_customIntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_customObjectParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_customValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_broadcastOverNetwork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_gameEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameEventUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameEventUtilities, nullptr, "DispatcherFireGameEvent", nullptr, nullptr, sizeof(DBDGameEventUtilities_eventDispatcherFireGameEvent_Parms), Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics
	{
		struct DBDGameEventUtilities_eventFireGameEvent_Parms
		{
			const UObject* worldContextObject;
			EDBDScoreTypes scoreType;
			float amount;
			AActor* instigator;
			AActor* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_scoreType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_scoreType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventFireGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventFireGameEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventFireGameEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_scoreType = { "scoreType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventFireGameEvent_Parms, scoreType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_scoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventFireGameEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_scoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_scoreType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameEventUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameEventUtilities, nullptr, "FireGameEvent", nullptr, nullptr, sizeof(DBDGameEventUtilities_eventFireGameEvent_Parms), Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics
	{
		struct DBDGameEventUtilities_eventLocallyDispatchGameEvent_Parms
		{
			const UObject* worldContextObject;
			FGameplayTag gameEventType;
			ADBDPlayer* instigator;
			AActor* target;
			float customValue;
			UObject* customObjectParameter;
			int32 customIntValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_customIntValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customObjectParameter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_customValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_customIntValue = { "customIntValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventLocallyDispatchGameEvent_Parms, customIntValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_customObjectParameter = { "customObjectParameter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventLocallyDispatchGameEvent_Parms, customObjectParameter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_customValue = { "customValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventLocallyDispatchGameEvent_Parms, customValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventLocallyDispatchGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventLocallyDispatchGameEvent_Parms, instigator), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventLocallyDispatchGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_gameEventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventLocallyDispatchGameEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_customIntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_customObjectParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_customValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_gameEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameEventUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameEventUtilities, nullptr, "LocallyDispatchGameEvent", nullptr, nullptr, sizeof(DBDGameEventUtilities_eventLocallyDispatchGameEvent_Parms), Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics
	{
		struct DBDGameEventUtilities_eventRemotelyDispatchGameEvent_Parms
		{
			const UObject* worldContextObject;
			FGameplayTag gameEventType;
			ADBDPlayer* instigator;
			AActor* target;
			float customValue;
			UObject* customObjectParameter;
			int32 customIntValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_customIntValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customObjectParameter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_customValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_customIntValue = { "customIntValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventRemotelyDispatchGameEvent_Parms, customIntValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_customObjectParameter = { "customObjectParameter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventRemotelyDispatchGameEvent_Parms, customObjectParameter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_customValue = { "customValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventRemotelyDispatchGameEvent_Parms, customValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventRemotelyDispatchGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventRemotelyDispatchGameEvent_Parms, instigator), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventRemotelyDispatchGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameEventUtilities_eventRemotelyDispatchGameEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_customIntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_customObjectParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_customValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameEventUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameEventUtilities, nullptr, "RemotelyDispatchGameEvent", nullptr, nullptr, sizeof(DBDGameEventUtilities_eventRemotelyDispatchGameEvent_Parms), Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDGameEventUtilities_NoRegister()
	{
		return UDBDGameEventUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDGameEventUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDGameEventUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDGameEventUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDGameEventUtilities_Authority_AccumulateOngoingGameEvent, "Authority_AccumulateOngoingGameEvent" }, // 143049905
		{ &Z_Construct_UFunction_UDBDGameEventUtilities_Authority_DispatcherFireGameEvent, "Authority_DispatcherFireGameEvent" }, // 2632228496
		{ &Z_Construct_UFunction_UDBDGameEventUtilities_DispatcherFireGameEvent, "DispatcherFireGameEvent" }, // 3062896804
		{ &Z_Construct_UFunction_UDBDGameEventUtilities_FireGameEvent, "FireGameEvent" }, // 2018822185
		{ &Z_Construct_UFunction_UDBDGameEventUtilities_LocallyDispatchGameEvent, "LocallyDispatchGameEvent" }, // 574458946
		{ &Z_Construct_UFunction_UDBDGameEventUtilities_RemotelyDispatchGameEvent, "RemotelyDispatchGameEvent" }, // 2758548072
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameEventUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDGameEventUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDGameEventUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDGameEventUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDGameEventUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDGameEventUtilities_Statics::ClassParams = {
		&UDBDGameEventUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDGameEventUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameEventUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDGameEventUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDGameEventUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDGameEventUtilities, 1198861792);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDGameEventUtilities>()
	{
		return UDBDGameEventUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDGameEventUtilities(Z_Construct_UClass_UDBDGameEventUtilities, &UDBDGameEventUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDGameEventUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDGameEventUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
