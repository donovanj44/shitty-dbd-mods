// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDAIStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAIStateComponent() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIStateComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIPressureZoneLevel();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FGameStatePressureZoneLevelMapContainer();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIObjectiveState();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDAIStateComponent::execOnSpecialAttackEventDispatched)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpecialAttackEventDispatched(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAIStateComponent::execOnStartAimingEventDispatched)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartAimingEventDispatched(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAIStateComponent::execOnUniqueGameplayEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_eventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUniqueGameplayEvent(EDBDScoreTypes(Z_Param_eventType),Z_Param_amount,Z_Param_instigator,Z_Param_target);
		P_NATIVE_END;
	}
	void UDBDAIStateComponent::StaticRegisterNativesUDBDAIStateComponent()
	{
		UClass* Class = UDBDAIStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSpecialAttackEventDispatched", &UDBDAIStateComponent::execOnSpecialAttackEventDispatched },
			{ "OnStartAimingEventDispatched", &UDBDAIStateComponent::execOnStartAimingEventDispatched },
			{ "OnUniqueGameplayEvent", &UDBDAIStateComponent::execOnUniqueGameplayEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics
	{
		struct DBDAIStateComponent_eventOnSpecialAttackEventDispatched_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIStateComponent_eventOnSpecialAttackEventDispatched_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIStateComponent_eventOnSpecialAttackEventDispatched_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAIStateComponent, nullptr, "OnSpecialAttackEventDispatched", nullptr, nullptr, sizeof(DBDAIStateComponent_eventOnSpecialAttackEventDispatched_Parms), Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics
	{
		struct DBDAIStateComponent_eventOnStartAimingEventDispatched_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIStateComponent_eventOnStartAimingEventDispatched_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIStateComponent_eventOnStartAimingEventDispatched_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAIStateComponent, nullptr, "OnStartAimingEventDispatched", nullptr, nullptr, sizeof(DBDAIStateComponent_eventOnStartAimingEventDispatched_Parms), Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics
	{
		struct DBDAIStateComponent_eventOnUniqueGameplayEvent_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIStateComponent_eventOnUniqueGameplayEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIStateComponent_eventOnUniqueGameplayEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIStateComponent_eventOnUniqueGameplayEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIStateComponent_eventOnUniqueGameplayEvent_Parms, eventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_eventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::NewProp_eventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAIStateComponent, nullptr, "OnUniqueGameplayEvent", nullptr, nullptr, sizeof(DBDAIStateComponent_eventOnUniqueGameplayEvent_Parms), Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDAIStateComponent_NoRegister()
	{
		return UDBDAIStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAIStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoVToStimulusValidDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoVToStimulusValidDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoSToStimulusValidDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoSToStimulusValidDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoSFoVToStimulusCheckPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoSFoVToStimulusCheckPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StimulusWasInSightDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StimulusWasInSightDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjuredBeingAimedAtPhaseOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InjuredBeingAimedAtPhaseOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBeingAimedAtPhaseOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultBeingAimedAtPhaseOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjuredChasedPhaseOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InjuredChasedPhaseOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultChasedPhaseOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultChasedPhaseOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressureZoneHighToLowRangeLerpRatios_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PressureZoneHighToLowRangeLerpRatios;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PressureZoneHighToLowRangeLerpRatios_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PressureZoneHighToLowRangeLerpRatios_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PressureZoneHighToLowRangeLerpRatios_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressureZoneLevelTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PressureZoneLevelTable;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PressureZoneLevelTable_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PressureZoneLevelTable_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressureZoneLevelTable_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStateTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GameStateTable;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameStateTable_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameStateTable_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameStateTable_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidObjectiveStateProgressionRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MidObjectiveStateProgressionRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DireStateAtHookedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DireStateAtHookedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsafeStateAtHookedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnsafeStateAtHookedCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAIStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDAIStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDAIStateComponent_OnSpecialAttackEventDispatched, "OnSpecialAttackEventDispatched" }, // 4126890230
		{ &Z_Construct_UFunction_UDBDAIStateComponent_OnStartAimingEventDispatched, "OnStartAimingEventDispatched" }, // 2556052728
		{ &Z_Construct_UFunction_UDBDAIStateComponent_OnUniqueGameplayEvent, "OnUniqueGameplayEvent" }, // 1742889379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAIStateComponent.h" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_FoVToStimulusValidDuration_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_FoVToStimulusValidDuration = { "FoVToStimulusValidDuration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, FoVToStimulusValidDuration), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_FoVToStimulusValidDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_FoVToStimulusValidDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSToStimulusValidDuration_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSToStimulusValidDuration = { "LoSToStimulusValidDuration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, LoSToStimulusValidDuration), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSToStimulusValidDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSToStimulusValidDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSFoVToStimulusCheckPeriod_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSFoVToStimulusCheckPeriod = { "LoSFoVToStimulusCheckPeriod", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, LoSFoVToStimulusCheckPeriod), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSFoVToStimulusCheckPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSFoVToStimulusCheckPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_StimulusWasInSightDuration_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_StimulusWasInSightDuration = { "StimulusWasInSightDuration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, StimulusWasInSightDuration), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_StimulusWasInSightDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_StimulusWasInSightDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredBeingAimedAtPhaseOutDuration_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredBeingAimedAtPhaseOutDuration = { "InjuredBeingAimedAtPhaseOutDuration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, InjuredBeingAimedAtPhaseOutDuration), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredBeingAimedAtPhaseOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredBeingAimedAtPhaseOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultBeingAimedAtPhaseOutDuration_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultBeingAimedAtPhaseOutDuration = { "DefaultBeingAimedAtPhaseOutDuration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, DefaultBeingAimedAtPhaseOutDuration), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultBeingAimedAtPhaseOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultBeingAimedAtPhaseOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredChasedPhaseOutDuration_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredChasedPhaseOutDuration = { "InjuredChasedPhaseOutDuration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, InjuredChasedPhaseOutDuration), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredChasedPhaseOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredChasedPhaseOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultChasedPhaseOutDuration_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultChasedPhaseOutDuration = { "DefaultChasedPhaseOutDuration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, DefaultChasedPhaseOutDuration), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultChasedPhaseOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultChasedPhaseOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios = { "PressureZoneHighToLowRangeLerpRatios", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, PressureZoneHighToLowRangeLerpRatios), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios_Key_KeyProp = { "PressureZoneHighToLowRangeLerpRatios_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDBots_EAIPressureZoneLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios_ValueProp = { "PressureZoneHighToLowRangeLerpRatios", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable = { "PressureZoneLevelTable", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, PressureZoneLevelTable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable_Key_KeyProp = { "PressureZoneLevelTable_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable_ValueProp = { "PressureZoneLevelTable", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameStatePressureZoneLevelMapContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable = { "GameStateTable", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, GameStateTable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable_Key_KeyProp = { "GameStateTable_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDBots_EAIObjectiveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable_ValueProp = { "GameStateTable", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_MidObjectiveStateProgressionRatio_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_MidObjectiveStateProgressionRatio = { "MidObjectiveStateProgressionRatio", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, MidObjectiveStateProgressionRatio), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_MidObjectiveStateProgressionRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_MidObjectiveStateProgressionRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DireStateAtHookedCount_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DireStateAtHookedCount = { "DireStateAtHookedCount", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, DireStateAtHookedCount), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DireStateAtHookedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DireStateAtHookedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_UnsafeStateAtHookedCount_MetaData[] = {
		{ "Category", "DBDAIStateComponent" },
		{ "ModuleRelativePath", "Public/DBDAIStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_UnsafeStateAtHookedCount = { "UnsafeStateAtHookedCount", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIStateComponent, UnsafeStateAtHookedCount), METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_UnsafeStateAtHookedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_UnsafeStateAtHookedCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAIStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_FoVToStimulusValidDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSToStimulusValidDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_LoSFoVToStimulusCheckPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_StimulusWasInSightDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredBeingAimedAtPhaseOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultBeingAimedAtPhaseOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_InjuredChasedPhaseOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DefaultChasedPhaseOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneHighToLowRangeLerpRatios_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_PressureZoneLevelTable_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_GameStateTable_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_MidObjectiveStateProgressionRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_DireStateAtHookedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIStateComponent_Statics::NewProp_UnsafeStateAtHookedCount,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDBDAIStateComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister, (int32)VTABLE_OFFSET(UDBDAIStateComponent, IAIDisplayDebugInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAIStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAIStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAIStateComponent_Statics::ClassParams = {
		&UDBDAIStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDAIStateComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAIStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAIStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAIStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAIStateComponent, 1066607851);
	template<> DBDBOTS_API UClass* StaticClass<UDBDAIStateComponent>()
	{
		return UDBDAIStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAIStateComponent(Z_Construct_UClass_UDBDAIStateComponent, &UDBDAIStateComponent::StaticClass, TEXT("/Script/DBDBots"), TEXT("UDBDAIStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAIStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
