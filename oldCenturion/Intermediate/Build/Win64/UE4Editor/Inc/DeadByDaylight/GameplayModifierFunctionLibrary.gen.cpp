// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameplayModifierFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayModifierFunctionLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierFunctionLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayModifierFunctionLibrary::execAuthority_ClearAllPlayerGameplayFlags)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_targetPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayModifierFunctionLibrary::Authority_ClearAllPlayerGameplayFlags(Z_Param_targetPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierFunctionLibrary::execAuthority_ClearAllPlayerGameplayModifiers)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_targetPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayModifierFunctionLibrary::Authority_ClearAllPlayerGameplayModifiers(Z_Param_targetPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierFunctionLibrary::execAuthority_ClearPlayerGameplayFlag)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_targetPlayer);
		P_GET_STRUCT(FGameplayTag,Z_Param_flagType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayModifierFunctionLibrary::Authority_ClearPlayerGameplayFlag(Z_Param_targetPlayer,Z_Param_flagType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierFunctionLibrary::execAuthority_ClearPlayerGameplayModifier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_targetPlayer);
		P_GET_STRUCT(FGameplayTag,Z_Param_modifierType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayModifierFunctionLibrary::Authority_ClearPlayerGameplayModifier(Z_Param_targetPlayer,Z_Param_modifierType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierFunctionLibrary::execAuthority_SetPlayerGameplayFlag)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_targetPlayer);
		P_GET_STRUCT(FGameplayTag,Z_Param_flagType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayModifierFunctionLibrary::Authority_SetPlayerGameplayFlag(Z_Param_targetPlayer,Z_Param_flagType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierFunctionLibrary::execAuthority_SetPlayerGameplayModifier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_targetPlayer);
		P_GET_STRUCT(FGameplayTag,Z_Param_modifierType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_modifierValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayModifierFunctionLibrary::Authority_SetPlayerGameplayModifier(Z_Param_targetPlayer,Z_Param_modifierType,Z_Param_modifierValue);
		P_NATIVE_END;
	}
	void UGameplayModifierFunctionLibrary::StaticRegisterNativesUGameplayModifierFunctionLibrary()
	{
		UClass* Class = UGameplayModifierFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_ClearAllPlayerGameplayFlags", &UGameplayModifierFunctionLibrary::execAuthority_ClearAllPlayerGameplayFlags },
			{ "Authority_ClearAllPlayerGameplayModifiers", &UGameplayModifierFunctionLibrary::execAuthority_ClearAllPlayerGameplayModifiers },
			{ "Authority_ClearPlayerGameplayFlag", &UGameplayModifierFunctionLibrary::execAuthority_ClearPlayerGameplayFlag },
			{ "Authority_ClearPlayerGameplayModifier", &UGameplayModifierFunctionLibrary::execAuthority_ClearPlayerGameplayModifier },
			{ "Authority_SetPlayerGameplayFlag", &UGameplayModifierFunctionLibrary::execAuthority_SetPlayerGameplayFlag },
			{ "Authority_SetPlayerGameplayModifier", &UGameplayModifierFunctionLibrary::execAuthority_SetPlayerGameplayModifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics
	{
		struct GameplayModifierFunctionLibrary_eventAuthority_ClearAllPlayerGameplayFlags_Parms
		{
			ADBDPlayer* targetPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::NewProp_targetPlayer = { "targetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_ClearAllPlayerGameplayFlags_Parms, targetPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::NewProp_targetPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierFunctionLibrary, nullptr, "Authority_ClearAllPlayerGameplayFlags", nullptr, nullptr, sizeof(GameplayModifierFunctionLibrary_eventAuthority_ClearAllPlayerGameplayFlags_Parms), Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics
	{
		struct GameplayModifierFunctionLibrary_eventAuthority_ClearAllPlayerGameplayModifiers_Parms
		{
			ADBDPlayer* targetPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::NewProp_targetPlayer = { "targetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_ClearAllPlayerGameplayModifiers_Parms, targetPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::NewProp_targetPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierFunctionLibrary, nullptr, "Authority_ClearAllPlayerGameplayModifiers", nullptr, nullptr, sizeof(GameplayModifierFunctionLibrary_eventAuthority_ClearAllPlayerGameplayModifiers_Parms), Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics
	{
		struct GameplayModifierFunctionLibrary_eventAuthority_ClearPlayerGameplayFlag_Parms
		{
			ADBDPlayer* targetPlayer;
			FGameplayTag flagType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flagType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::NewProp_flagType = { "flagType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_ClearPlayerGameplayFlag_Parms, flagType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::NewProp_targetPlayer = { "targetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_ClearPlayerGameplayFlag_Parms, targetPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::NewProp_flagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::NewProp_targetPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierFunctionLibrary, nullptr, "Authority_ClearPlayerGameplayFlag", nullptr, nullptr, sizeof(GameplayModifierFunctionLibrary_eventAuthority_ClearPlayerGameplayFlag_Parms), Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics
	{
		struct GameplayModifierFunctionLibrary_eventAuthority_ClearPlayerGameplayModifier_Parms
		{
			ADBDPlayer* targetPlayer;
			FGameplayTag modifierType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_modifierType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::NewProp_modifierType = { "modifierType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_ClearPlayerGameplayModifier_Parms, modifierType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::NewProp_targetPlayer = { "targetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_ClearPlayerGameplayModifier_Parms, targetPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::NewProp_modifierType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::NewProp_targetPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierFunctionLibrary, nullptr, "Authority_ClearPlayerGameplayModifier", nullptr, nullptr, sizeof(GameplayModifierFunctionLibrary_eventAuthority_ClearPlayerGameplayModifier_Parms), Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics
	{
		struct GameplayModifierFunctionLibrary_eventAuthority_SetPlayerGameplayFlag_Parms
		{
			ADBDPlayer* targetPlayer;
			FGameplayTag flagType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flagType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::NewProp_flagType = { "flagType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_SetPlayerGameplayFlag_Parms, flagType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::NewProp_targetPlayer = { "targetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_SetPlayerGameplayFlag_Parms, targetPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::NewProp_flagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::NewProp_targetPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierFunctionLibrary, nullptr, "Authority_SetPlayerGameplayFlag", nullptr, nullptr, sizeof(GameplayModifierFunctionLibrary_eventAuthority_SetPlayerGameplayFlag_Parms), Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics
	{
		struct GameplayModifierFunctionLibrary_eventAuthority_SetPlayerGameplayModifier_Parms
		{
			ADBDPlayer* targetPlayer;
			FGameplayTag modifierType;
			float modifierValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_modifierValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_modifierType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::NewProp_modifierValue = { "modifierValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_SetPlayerGameplayModifier_Parms, modifierValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::NewProp_modifierType = { "modifierType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_SetPlayerGameplayModifier_Parms, modifierType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::NewProp_targetPlayer = { "targetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierFunctionLibrary_eventAuthority_SetPlayerGameplayModifier_Parms, targetPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::NewProp_modifierValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::NewProp_modifierType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::NewProp_targetPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierFunctionLibrary, nullptr, "Authority_SetPlayerGameplayModifier", nullptr, nullptr, sizeof(GameplayModifierFunctionLibrary_eventAuthority_SetPlayerGameplayModifier_Parms), Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayModifierFunctionLibrary_NoRegister()
	{
		return UGameplayModifierFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayFlags, "Authority_ClearAllPlayerGameplayFlags" }, // 515332942
		{ &Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearAllPlayerGameplayModifiers, "Authority_ClearAllPlayerGameplayModifiers" }, // 700674720
		{ &Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayFlag, "Authority_ClearPlayerGameplayFlag" }, // 3555462372
		{ &Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_ClearPlayerGameplayModifier, "Authority_ClearPlayerGameplayModifier" }, // 3493068876
		{ &Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayFlag, "Authority_SetPlayerGameplayFlag" }, // 380185083
		{ &Z_Construct_UFunction_UGameplayModifierFunctionLibrary_Authority_SetPlayerGameplayModifier, "Authority_SetPlayerGameplayModifier" }, // 1526571249
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayModifierFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GameplayModifierFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayModifierFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics::ClassParams = {
		&UGameplayModifierFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayModifierFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayModifierFunctionLibrary, 1934289367);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGameplayModifierFunctionLibrary>()
	{
		return UGameplayModifierFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayModifierFunctionLibrary(Z_Construct_UClass_UGameplayModifierFunctionLibrary, &UGameplayModifierFunctionLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGameplayModifierFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayModifierFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
