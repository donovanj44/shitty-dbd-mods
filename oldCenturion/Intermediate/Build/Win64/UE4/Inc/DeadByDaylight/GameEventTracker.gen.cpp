// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameEventTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEventTracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameEventTracker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameEventTracker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventGameEventTrackerOnGameflowEvent_Parms
		{
			EDBDScoreTypes playerGameplayEventType;
			float amount;
			const ADBDPlayerState* effector;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_effector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerGameplayEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerGameplayEventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_effector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_effector = { "effector", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGameEventTrackerOnGameflowEvent_Parms, effector), Z_Construct_UClass_ADBDPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_effector_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGameEventTrackerOnGameflowEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType = { "playerGameplayEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGameEventTrackerOnGameflowEvent_Parms, playerGameplayEventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_effector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "GameEventTrackerOnGameflowEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventGameEventTrackerOnGameflowEvent_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventGameEventTrackerOnGameplayEvent_Parms
		{
			EDBDScoreTypes playerGameplayEventType;
			float amount;
			AActor* effector;
			AActor* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerGameplayEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerGameplayEventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGameEventTrackerOnGameplayEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_effector = { "effector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGameEventTrackerOnGameplayEvent_Parms, effector), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGameEventTrackerOnGameplayEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType = { "playerGameplayEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGameEventTrackerOnGameplayEvent_Parms, playerGameplayEventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_effector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "GameEventTrackerOnGameplayEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventGameEventTrackerOnGameplayEvent_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGameEventTracker::execFireGameEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_eventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireGameEvent(EDBDScoreTypes(Z_Param_eventType),Z_Param_amount,Z_Param_instigator,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameEventTracker::execFireGameflowEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_eventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(ADBDPlayerState,Z_Param_instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireGameflowEvent(EDBDScoreTypes(Z_Param_eventType),Z_Param_amount,Z_Param_instigator,Z_Param_data);
		P_NATIVE_END;
	}
	void UGameEventTracker::StaticRegisterNativesUGameEventTracker()
	{
		UClass* Class = UGameEventTracker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireGameEvent", &UGameEventTracker::execFireGameEvent },
			{ "FireGameflowEvent", &UGameEventTracker::execFireGameflowEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics
	{
		struct GameEventTracker_eventFireGameEvent_Parms
		{
			EDBDScoreTypes eventType;
			float amount;
			AActor* instigator;
			AActor* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventTracker_eventFireGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventTracker_eventFireGameEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventTracker_eventFireGameEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventTracker_eventFireGameEvent_Parms, eventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_eventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::NewProp_eventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventTracker, nullptr, "FireGameEvent", nullptr, nullptr, sizeof(GameEventTracker_eventFireGameEvent_Parms), Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameEventTracker_FireGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameEventTracker_FireGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics
	{
		struct GameEventTracker_eventFireGameflowEvent_Parms
		{
			EDBDScoreTypes eventType;
			float amount;
			const ADBDPlayerState* instigator;
			FName data;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventTracker_eventFireGameflowEvent_Parms, data), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventTracker_eventFireGameflowEvent_Parms, instigator), Z_Construct_UClass_ADBDPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_instigator_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventTracker_eventFireGameflowEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEventTracker_eventFireGameflowEvent_Parms, eventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_eventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::NewProp_eventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEventTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventTracker, nullptr, "FireGameflowEvent", nullptr, nullptr, sizeof(GameEventTracker_eventFireGameflowEvent_Parms), Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameEventTracker_NoRegister()
	{
		return UGameEventTracker::StaticClass();
	}
	struct Z_Construct_UClass_UGameEventTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameflowEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameflowEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameEventTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameEventTracker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameEventTracker_FireGameEvent, "FireGameEvent" }, // 2079987669
		{ &Z_Construct_UFunction_UGameEventTracker_FireGameflowEvent, "FireGameflowEvent" }, // 4076752839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEventTracker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameEventTracker.h" },
		{ "ModuleRelativePath", "Public/GameEventTracker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameflowEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameEventTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameflowEvent = { "OnGameflowEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameEventTracker, OnGameflowEvent), Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameflowEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameflowEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameflowEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameplayEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameEventTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameplayEvent = { "OnGameplayEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameEventTracker, OnGameplayEvent), Z_Construct_UDelegateFunction_DeadByDaylight_GameEventTrackerOnGameplayEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameplayEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameplayEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEventTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameflowEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEventTracker_Statics::NewProp_OnGameplayEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameEventTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEventTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameEventTracker_Statics::ClassParams = {
		&UGameEventTracker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameEventTracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventTracker_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameEventTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameEventTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameEventTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameEventTracker, 3165445584);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGameEventTracker>()
	{
		return UGameEventTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameEventTracker(Z_Construct_UClass_UGameEventTracker, &UGameEventTracker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGameEventTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEventTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
