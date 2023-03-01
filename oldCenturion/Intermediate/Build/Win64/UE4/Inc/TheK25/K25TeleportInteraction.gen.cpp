// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25TeleportInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25TeleportInteraction() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25TeleportInteraction_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25TeleportInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UK25TeleportInteraction::execMulticast_InitializeHusk)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_InitializeHusk_Implementation(Z_Param_location,Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25TeleportInteraction::execMulticast_TeleportKillerToTargetPosition)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TeleportKillerToTargetPosition_Implementation(Z_Param_killer,Z_Param_location,Z_Param_rotation);
		P_NATIVE_END;
	}
	static FName NAME_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects = FName(TEXT("Cosmetic_TeleportAbortedEffects"));
	void UK25TeleportInteraction::Cosmetic_TeleportAbortedEffects(ASlasherPlayer* killer)
	{
		K25TeleportInteraction_eventCosmetic_TeleportAbortedEffects_Parms Parms;
		Parms.killer=killer;
		ProcessEvent(FindFunctionChecked(NAME_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects),&Parms);
	}
	static FName NAME_UK25TeleportInteraction_Cosmetic_TeleportEndEffects = FName(TEXT("Cosmetic_TeleportEndEffects"));
	void UK25TeleportInteraction::Cosmetic_TeleportEndEffects(ASlasherPlayer* killer)
	{
		K25TeleportInteraction_eventCosmetic_TeleportEndEffects_Parms Parms;
		Parms.killer=killer;
		ProcessEvent(FindFunctionChecked(NAME_UK25TeleportInteraction_Cosmetic_TeleportEndEffects),&Parms);
	}
	static FName NAME_UK25TeleportInteraction_Cosmetic_TeleportStartEffects = FName(TEXT("Cosmetic_TeleportStartEffects"));
	void UK25TeleportInteraction::Cosmetic_TeleportStartEffects(ASlasherPlayer* killer)
	{
		K25TeleportInteraction_eventCosmetic_TeleportStartEffects_Parms Parms;
		Parms.killer=killer;
		ProcessEvent(FindFunctionChecked(NAME_UK25TeleportInteraction_Cosmetic_TeleportStartEffects),&Parms);
	}
	static FName NAME_UK25TeleportInteraction_Multicast_InitializeHusk = FName(TEXT("Multicast_InitializeHusk"));
	void UK25TeleportInteraction::Multicast_InitializeHusk(FVector location, FRotator rotation)
	{
		K25TeleportInteraction_eventMulticast_InitializeHusk_Parms Parms;
		Parms.location=location;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_UK25TeleportInteraction_Multicast_InitializeHusk),&Parms);
	}
	static FName NAME_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition = FName(TEXT("Multicast_TeleportKillerToTargetPosition"));
	void UK25TeleportInteraction::Multicast_TeleportKillerToTargetPosition(ASlasherPlayer* killer, FVector location, FRotator rotation)
	{
		K25TeleportInteraction_eventMulticast_TeleportKillerToTargetPosition_Parms Parms;
		Parms.killer=killer;
		Parms.location=location;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition),&Parms);
	}
	void UK25TeleportInteraction::StaticRegisterNativesUK25TeleportInteraction()
	{
		UClass* Class = UK25TeleportInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_InitializeHusk", &UK25TeleportInteraction::execMulticast_InitializeHusk },
			{ "Multicast_TeleportKillerToTargetPosition", &UK25TeleportInteraction::execMulticast_TeleportKillerToTargetPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25TeleportInteraction_eventCosmetic_TeleportAbortedEffects_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25TeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25TeleportInteraction, nullptr, "Cosmetic_TeleportAbortedEffects", nullptr, nullptr, sizeof(K25TeleportInteraction_eventCosmetic_TeleportAbortedEffects_Parms), Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25TeleportInteraction_eventCosmetic_TeleportEndEffects_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25TeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25TeleportInteraction, nullptr, "Cosmetic_TeleportEndEffects", nullptr, nullptr, sizeof(K25TeleportInteraction_eventCosmetic_TeleportEndEffects_Parms), Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25TeleportInteraction_eventCosmetic_TeleportStartEffects_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25TeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25TeleportInteraction, nullptr, "Cosmetic_TeleportStartEffects", nullptr, nullptr, sizeof(K25TeleportInteraction_eventCosmetic_TeleportStartEffects_Parms), Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25TeleportInteraction_eventMulticast_InitializeHusk_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25TeleportInteraction_eventMulticast_InitializeHusk_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25TeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25TeleportInteraction, nullptr, "Multicast_InitializeHusk", nullptr, nullptr, sizeof(K25TeleportInteraction_eventMulticast_InitializeHusk_Parms), Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25TeleportInteraction_eventMulticast_TeleportKillerToTargetPosition_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25TeleportInteraction_eventMulticast_TeleportKillerToTargetPosition_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25TeleportInteraction_eventMulticast_TeleportKillerToTargetPosition_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25TeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25TeleportInteraction, nullptr, "Multicast_TeleportKillerToTargetPosition", nullptr, nullptr, sizeof(K25TeleportInteraction_eventMulticast_TeleportKillerToTargetPosition_Parms), Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25TeleportInteraction_NoRegister()
	{
		return UK25TeleportInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UK25TeleportInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slowdownAfterTeleportDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__slowdownAfterTeleportDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeSensingLamentConfigurationAfterInteractionEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeSensingLamentConfigurationAfterInteractionEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxNumberLocationQueriesPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxNumberLocationQueriesPerTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25TeleportInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25TeleportInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects, "Cosmetic_TeleportAbortedEffects" }, // 1016872506
		{ &Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportEndEffects, "Cosmetic_TeleportEndEffects" }, // 526179389
		{ &Z_Construct_UFunction_UK25TeleportInteraction_Cosmetic_TeleportStartEffects, "Cosmetic_TeleportStartEffects" }, // 1981879192
		{ &Z_Construct_UFunction_UK25TeleportInteraction_Multicast_InitializeHusk, "Multicast_InitializeHusk" }, // 4100426297
		{ &Z_Construct_UFunction_UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition, "Multicast_TeleportKillerToTargetPosition" }, // 1266094048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25TeleportInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "K25TeleportInteraction.h" },
		{ "ModuleRelativePath", "Public/K25TeleportInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__slowdownAfterTeleportDuration_MetaData[] = {
		{ "Category", "K25TeleportInteraction" },
		{ "ModuleRelativePath", "Public/K25TeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__slowdownAfterTeleportDuration = { "_slowdownAfterTeleportDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25TeleportInteraction, _slowdownAfterTeleportDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__slowdownAfterTeleportDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__slowdownAfterTeleportDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__timeSensingLamentConfigurationAfterInteractionEnded_MetaData[] = {
		{ "Category", "K25TeleportInteraction" },
		{ "ModuleRelativePath", "Public/K25TeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__timeSensingLamentConfigurationAfterInteractionEnded = { "_timeSensingLamentConfigurationAfterInteractionEnded", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25TeleportInteraction, _timeSensingLamentConfigurationAfterInteractionEnded), METADATA_PARAMS(Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__timeSensingLamentConfigurationAfterInteractionEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__timeSensingLamentConfigurationAfterInteractionEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__maxNumberLocationQueriesPerTick_MetaData[] = {
		{ "Category", "K25TeleportInteraction" },
		{ "ModuleRelativePath", "Public/K25TeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__maxNumberLocationQueriesPerTick = { "_maxNumberLocationQueriesPerTick", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25TeleportInteraction, _maxNumberLocationQueriesPerTick), METADATA_PARAMS(Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__maxNumberLocationQueriesPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__maxNumberLocationQueriesPerTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25TeleportInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__slowdownAfterTeleportDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__timeSensingLamentConfigurationAfterInteractionEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25TeleportInteraction_Statics::NewProp__maxNumberLocationQueriesPerTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25TeleportInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25TeleportInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25TeleportInteraction_Statics::ClassParams = {
		&UK25TeleportInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25TeleportInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25TeleportInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25TeleportInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25TeleportInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25TeleportInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25TeleportInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25TeleportInteraction, 3231504124);
	template<> THEK25_API UClass* StaticClass<UK25TeleportInteraction>()
	{
		return UK25TeleportInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25TeleportInteraction(Z_Construct_UClass_UK25TeleportInteraction, &UK25TeleportInteraction::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25TeleportInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25TeleportInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
