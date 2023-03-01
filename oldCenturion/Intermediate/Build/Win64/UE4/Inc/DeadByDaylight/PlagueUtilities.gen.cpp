// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlagueUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlagueUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlagueUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlagueUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorPlagueEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlagueUtilities::execAuthority_AddSicknessToPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_sicknessToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlagueUtilities::Authority_AddSicknessToPlayer(Z_Param_player,Z_Param_sicknessToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlagueUtilities::execGetPlagueEffect)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USurvivorPlagueEffect**)Z_Param__Result=UPlagueUtilities::GetPlagueEffect(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlagueUtilities::execHasMaxLevelSickness)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlagueUtilities::HasMaxLevelSickness(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlagueUtilities::execIsInfected)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlagueUtilities::IsInfected(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlagueUtilities::execIsPlagueDebugModeActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlagueUtilities::IsPlagueDebugModeActive();
		P_NATIVE_END;
	}
	void UPlagueUtilities::StaticRegisterNativesUPlagueUtilities()
	{
		UClass* Class = UPlagueUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddSicknessToPlayer", &UPlagueUtilities::execAuthority_AddSicknessToPlayer },
			{ "GetPlagueEffect", &UPlagueUtilities::execGetPlagueEffect },
			{ "HasMaxLevelSickness", &UPlagueUtilities::execHasMaxLevelSickness },
			{ "IsInfected", &UPlagueUtilities::execIsInfected },
			{ "IsPlagueDebugModeActive", &UPlagueUtilities::execIsPlagueDebugModeActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics
	{
		struct PlagueUtilities_eventAuthority_AddSicknessToPlayer_Parms
		{
			ADBDPlayer* player;
			float sicknessToAdd;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sicknessToAdd;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::NewProp_sicknessToAdd = { "sicknessToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlagueUtilities_eventAuthority_AddSicknessToPlayer_Parms, sicknessToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlagueUtilities_eventAuthority_AddSicknessToPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::NewProp_sicknessToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlagueUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlagueUtilities, nullptr, "Authority_AddSicknessToPlayer", nullptr, nullptr, sizeof(PlagueUtilities_eventAuthority_AddSicknessToPlayer_Parms), Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics
	{
		struct PlagueUtilities_eventGetPlagueEffect_Parms
		{
			const ADBDPlayer* player;
			USurvivorPlagueEffect* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlagueUtilities_eventGetPlagueEffect_Parms, ReturnValue), Z_Construct_UClass_USurvivorPlagueEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlagueUtilities_eventGetPlagueEffect_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlagueUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlagueUtilities, nullptr, "GetPlagueEffect", nullptr, nullptr, sizeof(PlagueUtilities_eventGetPlagueEffect_Parms), Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics
	{
		struct PlagueUtilities_eventHasMaxLevelSickness_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlagueUtilities_eventHasMaxLevelSickness_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlagueUtilities_eventHasMaxLevelSickness_Parms), &Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlagueUtilities_eventHasMaxLevelSickness_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlagueUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlagueUtilities, nullptr, "HasMaxLevelSickness", nullptr, nullptr, sizeof(PlagueUtilities_eventHasMaxLevelSickness_Parms), Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics
	{
		struct PlagueUtilities_eventIsInfected_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlagueUtilities_eventIsInfected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlagueUtilities_eventIsInfected_Parms), &Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlagueUtilities_eventIsInfected_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlagueUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlagueUtilities, nullptr, "IsInfected", nullptr, nullptr, sizeof(PlagueUtilities_eventIsInfected_Parms), Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlagueUtilities_IsInfected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlagueUtilities_IsInfected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics
	{
		struct PlagueUtilities_eventIsPlagueDebugModeActive_Parms
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
	void Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlagueUtilities_eventIsPlagueDebugModeActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlagueUtilities_eventIsPlagueDebugModeActive_Parms), &Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlagueUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlagueUtilities, nullptr, "IsPlagueDebugModeActive", nullptr, nullptr, sizeof(PlagueUtilities_eventIsPlagueDebugModeActive_Parms), Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlagueUtilities_NoRegister()
	{
		return UPlagueUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPlagueUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlagueUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlagueUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlagueUtilities_Authority_AddSicknessToPlayer, "Authority_AddSicknessToPlayer" }, // 1749871392
		{ &Z_Construct_UFunction_UPlagueUtilities_GetPlagueEffect, "GetPlagueEffect" }, // 3580363806
		{ &Z_Construct_UFunction_UPlagueUtilities_HasMaxLevelSickness, "HasMaxLevelSickness" }, // 3048650740
		{ &Z_Construct_UFunction_UPlagueUtilities_IsInfected, "IsInfected" }, // 2000837652
		{ &Z_Construct_UFunction_UPlagueUtilities_IsPlagueDebugModeActive, "IsPlagueDebugModeActive" }, // 58152083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlagueUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlagueUtilities.h" },
		{ "ModuleRelativePath", "Public/PlagueUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlagueUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlagueUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlagueUtilities_Statics::ClassParams = {
		&UPlagueUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlagueUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlagueUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlagueUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlagueUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlagueUtilities, 2347225725);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPlagueUtilities>()
	{
		return UPlagueUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlagueUtilities(Z_Construct_UClass_UPlagueUtilities, &UPlagueUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPlagueUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlagueUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
