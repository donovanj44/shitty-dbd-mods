// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/TheClownUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheClownUtilities() {}
// Cross Module References
	THECLOWN_API UClass* Z_Construct_UClass_UTheClownUtilities_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_UTheClownUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TheClown();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_UActiveGasCloudTrackerComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_UGassedStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTheClownUtilities::execCanBeGassed)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTheClownUtilities::CanBeGassed(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheClownUtilities::execGetActiveGasCloudTrackerComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActiveGasCloudTrackerComponent**)Z_Param__Result=UTheClownUtilities::GetActiveGasCloudTrackerComponent(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheClownUtilities::execGetGassedStatusEffect)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGassedStatusEffect**)Z_Param__Result=UTheClownUtilities::GetGassedStatusEffect(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheClownUtilities::execIsAffectedByAntidote)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTheClownUtilities::IsAffectedByAntidote(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheClownUtilities::execIsGassed)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTheClownUtilities::IsGassed(Z_Param_player);
		P_NATIVE_END;
	}
	void UTheClownUtilities::StaticRegisterNativesUTheClownUtilities()
	{
		UClass* Class = UTheClownUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeGassed", &UTheClownUtilities::execCanBeGassed },
			{ "GetActiveGasCloudTrackerComponent", &UTheClownUtilities::execGetActiveGasCloudTrackerComponent },
			{ "GetGassedStatusEffect", &UTheClownUtilities::execGetGassedStatusEffect },
			{ "IsAffectedByAntidote", &UTheClownUtilities::execIsAffectedByAntidote },
			{ "IsGassed", &UTheClownUtilities::execIsGassed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics
	{
		struct TheClownUtilities_eventCanBeGassed_Parms
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
	void Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TheClownUtilities_eventCanBeGassed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheClownUtilities_eventCanBeGassed_Parms), &Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheClownUtilities_eventCanBeGassed_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheClownUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheClownUtilities, nullptr, "CanBeGassed", nullptr, nullptr, sizeof(TheClownUtilities_eventCanBeGassed_Parms), Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheClownUtilities_CanBeGassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheClownUtilities_CanBeGassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics
	{
		struct TheClownUtilities_eventGetActiveGasCloudTrackerComponent_Parms
		{
			const UObject* worldContextObject;
			UActiveGasCloudTrackerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheClownUtilities_eventGetActiveGasCloudTrackerComponent_Parms, ReturnValue), Z_Construct_UClass_UActiveGasCloudTrackerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheClownUtilities_eventGetActiveGasCloudTrackerComponent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheClownUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheClownUtilities, nullptr, "GetActiveGasCloudTrackerComponent", nullptr, nullptr, sizeof(TheClownUtilities_eventGetActiveGasCloudTrackerComponent_Parms), Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics
	{
		struct TheClownUtilities_eventGetGassedStatusEffect_Parms
		{
			const ADBDPlayer* player;
			UGassedStatusEffect* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheClownUtilities_eventGetGassedStatusEffect_Parms, ReturnValue), Z_Construct_UClass_UGassedStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheClownUtilities_eventGetGassedStatusEffect_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheClownUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheClownUtilities, nullptr, "GetGassedStatusEffect", nullptr, nullptr, sizeof(TheClownUtilities_eventGetGassedStatusEffect_Parms), Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics
	{
		struct TheClownUtilities_eventIsAffectedByAntidote_Parms
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
	void Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TheClownUtilities_eventIsAffectedByAntidote_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheClownUtilities_eventIsAffectedByAntidote_Parms), &Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheClownUtilities_eventIsAffectedByAntidote_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheClownUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheClownUtilities, nullptr, "IsAffectedByAntidote", nullptr, nullptr, sizeof(TheClownUtilities_eventIsAffectedByAntidote_Parms), Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics
	{
		struct TheClownUtilities_eventIsGassed_Parms
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
	void Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TheClownUtilities_eventIsGassed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheClownUtilities_eventIsGassed_Parms), &Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheClownUtilities_eventIsGassed_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheClownUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheClownUtilities, nullptr, "IsGassed", nullptr, nullptr, sizeof(TheClownUtilities_eventIsGassed_Parms), Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheClownUtilities_IsGassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheClownUtilities_IsGassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTheClownUtilities_NoRegister()
	{
		return UTheClownUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UTheClownUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheClownUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TheClown,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTheClownUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTheClownUtilities_CanBeGassed, "CanBeGassed" }, // 252625943
		{ &Z_Construct_UFunction_UTheClownUtilities_GetActiveGasCloudTrackerComponent, "GetActiveGasCloudTrackerComponent" }, // 1387642921
		{ &Z_Construct_UFunction_UTheClownUtilities_GetGassedStatusEffect, "GetGassedStatusEffect" }, // 2865901778
		{ &Z_Construct_UFunction_UTheClownUtilities_IsAffectedByAntidote, "IsAffectedByAntidote" }, // 4094810329
		{ &Z_Construct_UFunction_UTheClownUtilities_IsGassed, "IsGassed" }, // 1636475535
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheClownUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TheClownUtilities.h" },
		{ "ModuleRelativePath", "Public/TheClownUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheClownUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheClownUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheClownUtilities_Statics::ClassParams = {
		&UTheClownUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTheClownUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTheClownUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheClownUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheClownUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheClownUtilities, 799106078);
	template<> THECLOWN_API UClass* StaticClass<UTheClownUtilities>()
	{
		return UTheClownUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheClownUtilities(Z_Construct_UClass_UTheClownUtilities, &UTheClownUtilities::StaticClass, TEXT("/Script/TheClown"), TEXT("UTheClownUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheClownUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
