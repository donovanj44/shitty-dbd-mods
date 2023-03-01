// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDDiceRoller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDDiceRoller() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDiceRoller_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDiceRoller();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDiceRollType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDDiceRoller::execCalculateOverTimeRollResult)
	{
		P_GET_OBJECT(AActor,Z_Param_RollingActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MultiplicativeModifier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdditiveModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDDiceRoller::CalculateOverTimeRollResult(Z_Param_RollingActor,Z_Param_BaseProbability,Z_Param_DeltaTime,Z_Param_ExpectedTime,Z_Param_MultiplicativeModifier,Z_Param_AdditiveModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDiceRoller::execCalculateRollResult)
	{
		P_GET_OBJECT(AActor,Z_Param_RollingActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MultiplicativeModifier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdditiveModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDDiceRoller::CalculateRollResult(Z_Param_RollingActor,Z_Param_BaseProbability,Z_Param_MultiplicativeModifier,Z_Param_AdditiveModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDiceRoller::execCalculateTickedRollResult)
	{
		P_GET_OBJECT(AActor,Z_Param_RollingActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ticks);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MultiplicativeModifier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdditiveModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDDiceRoller::CalculateTickedRollResult(Z_Param_RollingActor,Z_Param_BaseProbability,Z_Param_ticks,Z_Param_MultiplicativeModifier,Z_Param_AdditiveModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDiceRoller::execGetInteractionRollSuccessPercentageByDiceRollType)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_interaction);
		P_GET_OBJECT(ADBDPlayer,Z_Param_RollingPlayer);
		P_GET_ENUM(EDiceRollType,Z_Param_DiceRollType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDDiceRoller::GetInteractionRollSuccessPercentageByDiceRollType(Z_Param_interaction,Z_Param_RollingPlayer,EDiceRollType(Z_Param_DiceRollType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDiceRoller::execGetRollResultByDiceRollType)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_RollingPlayer);
		P_GET_ENUM(EDiceRollType,Z_Param_DiceRollType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDDiceRoller::GetRollResultByDiceRollType(Z_Param_RollingPlayer,EDiceRollType(Z_Param_DiceRollType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDiceRoller::execGetRollResultByTunableValue)
	{
		P_GET_OBJECT(AActor,Z_Param_RollingActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_TunableValueName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MultiplicativeModifier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdditiveModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDDiceRoller::GetRollResultByTunableValue(Z_Param_RollingActor,Z_Param_TunableValueName,Z_Param_MultiplicativeModifier,Z_Param_AdditiveModifier);
		P_NATIVE_END;
	}
	void UDBDDiceRoller::StaticRegisterNativesUDBDDiceRoller()
	{
		UClass* Class = UDBDDiceRoller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateOverTimeRollResult", &UDBDDiceRoller::execCalculateOverTimeRollResult },
			{ "CalculateRollResult", &UDBDDiceRoller::execCalculateRollResult },
			{ "CalculateTickedRollResult", &UDBDDiceRoller::execCalculateTickedRollResult },
			{ "GetInteractionRollSuccessPercentageByDiceRollType", &UDBDDiceRoller::execGetInteractionRollSuccessPercentageByDiceRollType },
			{ "GetRollResultByDiceRollType", &UDBDDiceRoller::execGetRollResultByDiceRollType },
			{ "GetRollResultByTunableValue", &UDBDDiceRoller::execGetRollResultByTunableValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics
	{
		struct DBDDiceRoller_eventCalculateOverTimeRollResult_Parms
		{
			const AActor* RollingActor;
			float BaseProbability;
			float DeltaTime;
			float ExpectedTime;
			float MultiplicativeModifier;
			float AdditiveModifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveModifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplicativeModifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpectedTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDDiceRoller_eventCalculateOverTimeRollResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDDiceRoller_eventCalculateOverTimeRollResult_Parms), &Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_AdditiveModifier = { "AdditiveModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateOverTimeRollResult_Parms, AdditiveModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_MultiplicativeModifier = { "MultiplicativeModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateOverTimeRollResult_Parms, MultiplicativeModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_ExpectedTime = { "ExpectedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateOverTimeRollResult_Parms, ExpectedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateOverTimeRollResult_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_BaseProbability = { "BaseProbability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateOverTimeRollResult_Parms, BaseProbability), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_RollingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_RollingActor = { "RollingActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateOverTimeRollResult_Parms, RollingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_RollingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_RollingActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_AdditiveModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_MultiplicativeModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_ExpectedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_BaseProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::NewProp_RollingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDiceRoller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDiceRoller, nullptr, "CalculateOverTimeRollResult", nullptr, nullptr, sizeof(DBDDiceRoller_eventCalculateOverTimeRollResult_Parms), Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics
	{
		struct DBDDiceRoller_eventCalculateRollResult_Parms
		{
			const AActor* RollingActor;
			float BaseProbability;
			float MultiplicativeModifier;
			float AdditiveModifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveModifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplicativeModifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDDiceRoller_eventCalculateRollResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDDiceRoller_eventCalculateRollResult_Parms), &Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_AdditiveModifier = { "AdditiveModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateRollResult_Parms, AdditiveModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_MultiplicativeModifier = { "MultiplicativeModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateRollResult_Parms, MultiplicativeModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_BaseProbability = { "BaseProbability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateRollResult_Parms, BaseProbability), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_RollingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_RollingActor = { "RollingActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateRollResult_Parms, RollingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_RollingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_RollingActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_AdditiveModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_MultiplicativeModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_BaseProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::NewProp_RollingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDiceRoller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDiceRoller, nullptr, "CalculateRollResult", nullptr, nullptr, sizeof(DBDDiceRoller_eventCalculateRollResult_Parms), Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics
	{
		struct DBDDiceRoller_eventCalculateTickedRollResult_Parms
		{
			const AActor* RollingActor;
			float BaseProbability;
			float ticks;
			float MultiplicativeModifier;
			float AdditiveModifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveModifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplicativeModifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ticks;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDDiceRoller_eventCalculateTickedRollResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDDiceRoller_eventCalculateTickedRollResult_Parms), &Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_AdditiveModifier = { "AdditiveModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateTickedRollResult_Parms, AdditiveModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_MultiplicativeModifier = { "MultiplicativeModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateTickedRollResult_Parms, MultiplicativeModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_ticks = { "ticks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateTickedRollResult_Parms, ticks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_BaseProbability = { "BaseProbability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateTickedRollResult_Parms, BaseProbability), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_RollingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_RollingActor = { "RollingActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventCalculateTickedRollResult_Parms, RollingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_RollingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_RollingActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_AdditiveModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_MultiplicativeModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_ticks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_BaseProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::NewProp_RollingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDiceRoller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDiceRoller, nullptr, "CalculateTickedRollResult", nullptr, nullptr, sizeof(DBDDiceRoller_eventCalculateTickedRollResult_Parms), Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics
	{
		struct DBDDiceRoller_eventGetInteractionRollSuccessPercentageByDiceRollType_Parms
		{
			const UInteractionDefinition* interaction;
			const ADBDPlayer* RollingPlayer;
			EDiceRollType DiceRollType;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DiceRollType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DiceRollType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetInteractionRollSuccessPercentageByDiceRollType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_DiceRollType = { "DiceRollType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetInteractionRollSuccessPercentageByDiceRollType_Parms, DiceRollType), Z_Construct_UEnum_DeadByDaylight_EDiceRollType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_DiceRollType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_RollingPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_RollingPlayer = { "RollingPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetInteractionRollSuccessPercentageByDiceRollType_Parms, RollingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_RollingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_RollingPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetInteractionRollSuccessPercentageByDiceRollType_Parms, interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_DiceRollType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_DiceRollType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_RollingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDiceRoller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDiceRoller, nullptr, "GetInteractionRollSuccessPercentageByDiceRollType", nullptr, nullptr, sizeof(DBDDiceRoller_eventGetInteractionRollSuccessPercentageByDiceRollType_Parms), Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics
	{
		struct DBDDiceRoller_eventGetRollResultByDiceRollType_Parms
		{
			const ADBDPlayer* RollingPlayer;
			EDiceRollType DiceRollType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DiceRollType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DiceRollType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDDiceRoller_eventGetRollResultByDiceRollType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDDiceRoller_eventGetRollResultByDiceRollType_Parms), &Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_DiceRollType = { "DiceRollType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetRollResultByDiceRollType_Parms, DiceRollType), Z_Construct_UEnum_DeadByDaylight_EDiceRollType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_DiceRollType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_RollingPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_RollingPlayer = { "RollingPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetRollResultByDiceRollType_Parms, RollingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_RollingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_RollingPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_DiceRollType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_DiceRollType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::NewProp_RollingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDiceRoller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDiceRoller, nullptr, "GetRollResultByDiceRollType", nullptr, nullptr, sizeof(DBDDiceRoller_eventGetRollResultByDiceRollType_Parms), Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics
	{
		struct DBDDiceRoller_eventGetRollResultByTunableValue_Parms
		{
			const AActor* RollingActor;
			FName TunableValueName;
			float MultiplicativeModifier;
			float AdditiveModifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveModifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplicativeModifier;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TunableValueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDDiceRoller_eventGetRollResultByTunableValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDDiceRoller_eventGetRollResultByTunableValue_Parms), &Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_AdditiveModifier = { "AdditiveModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetRollResultByTunableValue_Parms, AdditiveModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_MultiplicativeModifier = { "MultiplicativeModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetRollResultByTunableValue_Parms, MultiplicativeModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_TunableValueName = { "TunableValueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetRollResultByTunableValue_Parms, TunableValueName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_RollingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_RollingActor = { "RollingActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDiceRoller_eventGetRollResultByTunableValue_Parms, RollingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_RollingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_RollingActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_AdditiveModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_MultiplicativeModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_TunableValueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::NewProp_RollingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDiceRoller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDiceRoller, nullptr, "GetRollResultByTunableValue", nullptr, nullptr, sizeof(DBDDiceRoller_eventGetRollResultByTunableValue_Parms), Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDDiceRoller_NoRegister()
	{
		return UDBDDiceRoller::StaticClass();
	}
	struct Z_Construct_UClass_UDBDDiceRoller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDDiceRoller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDDiceRoller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDDiceRoller_CalculateOverTimeRollResult, "CalculateOverTimeRollResult" }, // 3054226604
		{ &Z_Construct_UFunction_UDBDDiceRoller_CalculateRollResult, "CalculateRollResult" }, // 2234487531
		{ &Z_Construct_UFunction_UDBDDiceRoller_CalculateTickedRollResult, "CalculateTickedRollResult" }, // 3932849829
		{ &Z_Construct_UFunction_UDBDDiceRoller_GetInteractionRollSuccessPercentageByDiceRollType, "GetInteractionRollSuccessPercentageByDiceRollType" }, // 1163384651
		{ &Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByDiceRollType, "GetRollResultByDiceRollType" }, // 1842556825
		{ &Z_Construct_UFunction_UDBDDiceRoller_GetRollResultByTunableValue, "GetRollResultByTunableValue" }, // 2581822901
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDiceRoller_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDDiceRoller.h" },
		{ "ModuleRelativePath", "Public/DBDDiceRoller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDDiceRoller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDDiceRoller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDDiceRoller_Statics::ClassParams = {
		&UDBDDiceRoller::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDDiceRoller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDiceRoller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDDiceRoller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDDiceRoller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDDiceRoller, 1485824143);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDDiceRoller>()
	{
		return UDBDDiceRoller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDDiceRoller(Z_Construct_UClass_UDBDDiceRoller, &UDBDDiceRoller::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDDiceRoller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDDiceRoller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
