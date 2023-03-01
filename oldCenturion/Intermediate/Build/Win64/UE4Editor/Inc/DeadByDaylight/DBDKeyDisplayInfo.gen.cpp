// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDKeyDisplayInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDKeyDisplayInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDKeyDisplayInfo_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDKeyDisplayInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyDisplayInfo();
// End Cross Module References
	DEFINE_FUNCTION(UDBDKeyDisplayInfo::execGetActionForInteractionType)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_playerRole);
		P_GET_ENUM(EInputInteractionType,Z_Param_inputInteractionType);
		P_GET_UBOOL(Z_Param_useGamePad);
		P_GET_UBOOL(Z_Param_ignoreInteractMash);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetActionForInteractionType(EPlayerRole(Z_Param_playerRole),EInputInteractionType(Z_Param_inputInteractionType),Z_Param_useGamePad,Z_Param_ignoreInteractMash);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDKeyDisplayInfo::execGetFirstKeyForAction)
	{
		P_GET_OBJECT(UPlayerInput,Z_Param_playerInput);
		P_GET_PROPERTY(FNameProperty,Z_Param_actionName);
		P_GET_UBOOL(Z_Param_useGamePad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetFirstKeyForAction(Z_Param_playerInput,Z_Param_actionName,Z_Param_useGamePad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDKeyDisplayInfo::execGetKeyDisplayInfo)
	{
		P_GET_STRUCT(FKey,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKeyDisplayInfo*)Z_Param__Result=P_THIS->GetKeyDisplayInfo(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDKeyDisplayInfo::execGetKeyDisplayInfoForInteractionType)
	{
		P_GET_OBJECT(UPlayerInput,Z_Param_playerInput);
		P_GET_ENUM(EPlayerRole,Z_Param_playerRole);
		P_GET_ENUM(EInputInteractionType,Z_Param_interactionType);
		P_GET_UBOOL(Z_Param_useGamePad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKeyDisplayInfo*)Z_Param__Result=P_THIS->GetKeyDisplayInfoForInteractionType(Z_Param_playerInput,EPlayerRole(Z_Param_playerRole),EInputInteractionType(Z_Param_interactionType),Z_Param_useGamePad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDKeyDisplayInfo::execIsExcludedKey)
	{
		P_GET_STRUCT(FKey,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExcludedKey(Z_Param_key);
		P_NATIVE_END;
	}
	void UDBDKeyDisplayInfo::StaticRegisterNativesUDBDKeyDisplayInfo()
	{
		UClass* Class = UDBDKeyDisplayInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionForInteractionType", &UDBDKeyDisplayInfo::execGetActionForInteractionType },
			{ "GetFirstKeyForAction", &UDBDKeyDisplayInfo::execGetFirstKeyForAction },
			{ "GetKeyDisplayInfo", &UDBDKeyDisplayInfo::execGetKeyDisplayInfo },
			{ "GetKeyDisplayInfoForInteractionType", &UDBDKeyDisplayInfo::execGetKeyDisplayInfoForInteractionType },
			{ "IsExcludedKey", &UDBDKeyDisplayInfo::execIsExcludedKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics
	{
		struct DBDKeyDisplayInfo_eventGetActionForInteractionType_Parms
		{
			EPlayerRole playerRole;
			EInputInteractionType inputInteractionType;
			bool useGamePad;
			bool ignoreInteractMash;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static void NewProp_ignoreInteractMash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ignoreInteractMash;
		static void NewProp_useGamePad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useGamePad;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inputInteractionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inputInteractionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetActionForInteractionType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_ignoreInteractMash_SetBit(void* Obj)
	{
		((DBDKeyDisplayInfo_eventGetActionForInteractionType_Parms*)Obj)->ignoreInteractMash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_ignoreInteractMash = { "ignoreInteractMash", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDKeyDisplayInfo_eventGetActionForInteractionType_Parms), &Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_ignoreInteractMash_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_useGamePad_SetBit(void* Obj)
	{
		((DBDKeyDisplayInfo_eventGetActionForInteractionType_Parms*)Obj)->useGamePad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_useGamePad = { "useGamePad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDKeyDisplayInfo_eventGetActionForInteractionType_Parms), &Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_useGamePad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_inputInteractionType = { "inputInteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetActionForInteractionType_Parms, inputInteractionType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_inputInteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_playerRole = { "playerRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetActionForInteractionType_Parms, playerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_playerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_ignoreInteractMash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_useGamePad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_inputInteractionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_inputInteractionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_playerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::NewProp_playerRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDKeyDisplayInfo, nullptr, "GetActionForInteractionType", nullptr, nullptr, sizeof(DBDKeyDisplayInfo_eventGetActionForInteractionType_Parms), Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics
	{
		struct DBDKeyDisplayInfo_eventGetFirstKeyForAction_Parms
		{
			UPlayerInput* playerInput;
			FName actionName;
			bool useGamePad;
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_useGamePad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useGamePad;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_actionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetFirstKeyForAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_useGamePad_SetBit(void* Obj)
	{
		((DBDKeyDisplayInfo_eventGetFirstKeyForAction_Parms*)Obj)->useGamePad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_useGamePad = { "useGamePad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDKeyDisplayInfo_eventGetFirstKeyForAction_Parms), &Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_useGamePad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetFirstKeyForAction_Parms, actionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_playerInput = { "playerInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetFirstKeyForAction_Parms, playerInput), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_useGamePad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_actionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::NewProp_playerInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDKeyDisplayInfo, nullptr, "GetFirstKeyForAction", nullptr, nullptr, sizeof(DBDKeyDisplayInfo_eventGetFirstKeyForAction_Parms), Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics
	{
		struct DBDKeyDisplayInfo_eventGetKeyDisplayInfo_Parms
		{
			FKey key;
			FKeyDisplayInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetKeyDisplayInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FKeyDisplayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetKeyDisplayInfo_Parms, key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDKeyDisplayInfo, nullptr, "GetKeyDisplayInfo", nullptr, nullptr, sizeof(DBDKeyDisplayInfo_eventGetKeyDisplayInfo_Parms), Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics
	{
		struct DBDKeyDisplayInfo_eventGetKeyDisplayInfoForInteractionType_Parms
		{
			UPlayerInput* playerInput;
			EPlayerRole playerRole;
			EInputInteractionType interactionType;
			bool useGamePad;
			FKeyDisplayInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_useGamePad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useGamePad;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_interactionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerRole_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetKeyDisplayInfoForInteractionType_Parms, ReturnValue), Z_Construct_UScriptStruct_FKeyDisplayInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_useGamePad_SetBit(void* Obj)
	{
		((DBDKeyDisplayInfo_eventGetKeyDisplayInfoForInteractionType_Parms*)Obj)->useGamePad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_useGamePad = { "useGamePad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDKeyDisplayInfo_eventGetKeyDisplayInfoForInteractionType_Parms), &Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_useGamePad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetKeyDisplayInfoForInteractionType_Parms, interactionType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_interactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_playerRole = { "playerRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetKeyDisplayInfoForInteractionType_Parms, playerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_playerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_playerInput = { "playerInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventGetKeyDisplayInfoForInteractionType_Parms, playerInput), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_useGamePad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_interactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_interactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_playerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_playerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::NewProp_playerInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDKeyDisplayInfo, nullptr, "GetKeyDisplayInfoForInteractionType", nullptr, nullptr, sizeof(DBDKeyDisplayInfo_eventGetKeyDisplayInfoForInteractionType_Parms), Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics
	{
		struct DBDKeyDisplayInfo_eventIsExcludedKey_Parms
		{
			FKey key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDKeyDisplayInfo_eventIsExcludedKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDKeyDisplayInfo_eventIsExcludedKey_Parms), &Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDKeyDisplayInfo_eventIsExcludedKey_Parms, key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDKeyDisplayInfo, nullptr, "IsExcludedKey", nullptr, nullptr, sizeof(DBDKeyDisplayInfo_eventIsExcludedKey_Parms), Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDKeyDisplayInfo_NoRegister()
	{
		return UDBDKeyDisplayInfo::StaticClass();
	}
	struct Z_Construct_UClass_UDBDKeyDisplayInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionTypeToActionMap_Slasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__interactionTypeToActionMap_Slasher;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__interactionTypeToActionMap_Slasher_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__interactionTypeToActionMap_Slasher_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__interactionTypeToActionMap_Slasher_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionTypeToActionMap_Camper_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__interactionTypeToActionMap_Camper;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__interactionTypeToActionMap_Camper_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__interactionTypeToActionMap_Camper_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__interactionTypeToActionMap_Camper_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__keyDisplayInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__keyDisplayInfoMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__keyDisplayInfoMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__keyDisplayInfoMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingResetMustBeGamepadKey_MetaData[];
#endif
		static void NewProp_PendingResetMustBeGamepadKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PendingResetMustBeGamepadKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingResetKeyBindingsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PendingResetKeyBindingsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDKeyDisplayInfo_GetActionForInteractionType, "GetActionForInteractionType" }, // 4112543382
		{ &Z_Construct_UFunction_UDBDKeyDisplayInfo_GetFirstKeyForAction, "GetFirstKeyForAction" }, // 512779713
		{ &Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfo, "GetKeyDisplayInfo" }, // 1176015968
		{ &Z_Construct_UFunction_UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType, "GetKeyDisplayInfoForInteractionType" }, // 598085465
		{ &Z_Construct_UFunction_UDBDKeyDisplayInfo_IsExcludedKey, "IsExcludedKey" }, // 421559918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDKeyDisplayInfo.h" },
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher = { "_interactionTypeToActionMap_Slasher", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDKeyDisplayInfo, _interactionTypeToActionMap_Slasher), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher_Key_KeyProp = { "_interactionTypeToActionMap_Slasher_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher_ValueProp = { "_interactionTypeToActionMap_Slasher", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper = { "_interactionTypeToActionMap_Camper", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDKeyDisplayInfo, _interactionTypeToActionMap_Camper), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper_Key_KeyProp = { "_interactionTypeToActionMap_Camper_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper_ValueProp = { "_interactionTypeToActionMap_Camper", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__keyDisplayInfoMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__keyDisplayInfoMap = { "_keyDisplayInfoMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDKeyDisplayInfo, _keyDisplayInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__keyDisplayInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__keyDisplayInfoMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__keyDisplayInfoMap_Key_KeyProp = { "_keyDisplayInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__keyDisplayInfoMap_ValueProp = { "_keyDisplayInfoMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FKeyDisplayInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetMustBeGamepadKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	void Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetMustBeGamepadKey_SetBit(void* Obj)
	{
		((UDBDKeyDisplayInfo*)Obj)->PendingResetMustBeGamepadKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetMustBeGamepadKey = { "PendingResetMustBeGamepadKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDKeyDisplayInfo), &Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetMustBeGamepadKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetMustBeGamepadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetMustBeGamepadKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetKeyBindingsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDKeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetKeyBindingsData = { "PendingResetKeyBindingsData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDKeyDisplayInfo, PendingResetKeyBindingsData), METADATA_PARAMS(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetKeyBindingsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetKeyBindingsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Slasher_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__interactionTypeToActionMap_Camper_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__keyDisplayInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__keyDisplayInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp__keyDisplayInfoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetMustBeGamepadKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::NewProp_PendingResetKeyBindingsData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDKeyDisplayInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::ClassParams = {
		&UDBDKeyDisplayInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDKeyDisplayInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDKeyDisplayInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDKeyDisplayInfo, 1938128261);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDKeyDisplayInfo>()
	{
		return UDBDKeyDisplayInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDKeyDisplayInfo(Z_Construct_UClass_UDBDKeyDisplayInfo, &UDBDKeyDisplayInfo::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDKeyDisplayInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDKeyDisplayInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
