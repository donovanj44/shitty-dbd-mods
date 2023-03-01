// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SkillCheck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillCheck() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USkillCheck_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USkillCheck();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSkillCheckDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSkillCheckResponse();
// End Cross Module References
	DEFINE_FUNCTION(USkillCheck::execCanSkillCheckTypeGrantScore)
	{
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkillCheck::CanSkillCheckTypeGrantScore(ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execGetStartDelayInSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStartDelayInSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execIsDisplayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisplayed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execIsHexSkillCheck)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_dbdPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHexSkillCheck(Z_Param_dbdPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execIsOffCenterSkillCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOffCenterSkillCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execLocal_ActivateCustomSkillCheck)
	{
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_warningSoundDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_ActivateCustomSkillCheck(ESkillCheckCustomType(Z_Param_type),Z_Param_warningSoundDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execLocal_ActivateSkillCheck)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_interaction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_warningSoundDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_ActivateSkillCheck(Z_Param_interaction,Z_Param_warningSoundDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execLocal_OnSkillCheckFailureTrigger)
	{
		P_GET_UBOOL(Z_Param_hadInput);
		P_GET_UBOOL(Z_Param_insane);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnSkillCheckFailureTrigger(Z_Param_hadInput,Z_Param_insane,ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execLocal_OnSkillCheckSuccessTrigger)
	{
		P_GET_UBOOL(Z_Param_bonus);
		P_GET_UBOOL(Z_Param_insane);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_GET_UBOOL(Z_Param_failedCountedAsGood);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnSkillCheckSuccessTrigger(Z_Param_bonus,Z_Param_insane,ESkillCheckCustomType(Z_Param_type),Z_Param_failedCountedAsGood);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execMulticast_ActivateSkillCheck)
	{
		P_GET_OBJECT(UChargeableInteractionDefinition,Z_Param_interaction);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_GET_STRUCT(FSkillCheckDefinition,Z_Param_definition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ActivateSkillCheck_Implementation(Z_Param_interaction,ESkillCheckCustomType(Z_Param_type),Z_Param_definition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execMulticast_DeactivateSkillCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DeactivateSkillCheck_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execMulticast_SkillCheckResponse)
	{
		P_GET_STRUCT(FSkillCheckResponse,Z_Param_skillCheckResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SkillCheckResponse_Implementation(Z_Param_skillCheckResponse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execOnSkillCheckInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkillCheckInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execServer_ActivateSkillCheck)
	{
		P_GET_OBJECT(UChargeableInteractionDefinition,Z_Param_interaction);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_GET_STRUCT(FSkillCheckDefinition,Z_Param_definition);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ActivateSkillCheck_Validate(Z_Param_interaction,ESkillCheckCustomType(Z_Param_type),Z_Param_definition))
		{
			RPC_ValidateFailed(TEXT("Server_ActivateSkillCheck_Validate"));
			return;
		}
		P_THIS->Server_ActivateSkillCheck_Implementation(Z_Param_interaction,ESkillCheckCustomType(Z_Param_type),Z_Param_definition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execServer_DeactivateSkillCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_DeactivateSkillCheck_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_DeactivateSkillCheck_Validate"));
			return;
		}
		P_THIS->Server_DeactivateSkillCheck_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execServer_OnSkillCheckFailure)
	{
		P_GET_STRUCT(FSkillCheckResponse,Z_Param_skillCheckResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnSkillCheckFailure_Validate(Z_Param_skillCheckResponse))
		{
			RPC_ValidateFailed(TEXT("Server_OnSkillCheckFailure_Validate"));
			return;
		}
		P_THIS->Server_OnSkillCheckFailure_Implementation(Z_Param_skillCheckResponse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execServer_OnSkillCheckSuccess)
	{
		P_GET_STRUCT(FSkillCheckResponse,Z_Param_skillCheckResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnSkillCheckSuccess_Validate(Z_Param_skillCheckResponse))
		{
			RPC_ValidateFailed(TEXT("Server_OnSkillCheckSuccess_Validate"));
			return;
		}
		P_THIS->Server_OnSkillCheckSuccess_Implementation(Z_Param_skillCheckResponse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheck::execShouldShowWarning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldShowWarning();
		P_NATIVE_END;
	}
	static FName NAME_USkillCheck_Multicast_ActivateSkillCheck = FName(TEXT("Multicast_ActivateSkillCheck"));
	void USkillCheck::Multicast_ActivateSkillCheck(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition)
	{
		SkillCheck_eventMulticast_ActivateSkillCheck_Parms Parms;
		Parms.interaction=interaction;
		Parms.type=type;
		Parms.definition=definition;
		ProcessEvent(FindFunctionChecked(NAME_USkillCheck_Multicast_ActivateSkillCheck),&Parms);
	}
	static FName NAME_USkillCheck_Multicast_DeactivateSkillCheck = FName(TEXT("Multicast_DeactivateSkillCheck"));
	void USkillCheck::Multicast_DeactivateSkillCheck()
	{
		ProcessEvent(FindFunctionChecked(NAME_USkillCheck_Multicast_DeactivateSkillCheck),NULL);
	}
	static FName NAME_USkillCheck_Multicast_SkillCheckResponse = FName(TEXT("Multicast_SkillCheckResponse"));
	void USkillCheck::Multicast_SkillCheckResponse(FSkillCheckResponse skillCheckResponse)
	{
		SkillCheck_eventMulticast_SkillCheckResponse_Parms Parms;
		Parms.skillCheckResponse=skillCheckResponse;
		ProcessEvent(FindFunctionChecked(NAME_USkillCheck_Multicast_SkillCheckResponse),&Parms);
	}
	static FName NAME_USkillCheck_Server_ActivateSkillCheck = FName(TEXT("Server_ActivateSkillCheck"));
	void USkillCheck::Server_ActivateSkillCheck(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition)
	{
		SkillCheck_eventServer_ActivateSkillCheck_Parms Parms;
		Parms.interaction=interaction;
		Parms.type=type;
		Parms.definition=definition;
		ProcessEvent(FindFunctionChecked(NAME_USkillCheck_Server_ActivateSkillCheck),&Parms);
	}
	static FName NAME_USkillCheck_Server_DeactivateSkillCheck = FName(TEXT("Server_DeactivateSkillCheck"));
	void USkillCheck::Server_DeactivateSkillCheck()
	{
		ProcessEvent(FindFunctionChecked(NAME_USkillCheck_Server_DeactivateSkillCheck),NULL);
	}
	static FName NAME_USkillCheck_Server_OnSkillCheckFailure = FName(TEXT("Server_OnSkillCheckFailure"));
	void USkillCheck::Server_OnSkillCheckFailure(FSkillCheckResponse skillCheckResponse)
	{
		SkillCheck_eventServer_OnSkillCheckFailure_Parms Parms;
		Parms.skillCheckResponse=skillCheckResponse;
		ProcessEvent(FindFunctionChecked(NAME_USkillCheck_Server_OnSkillCheckFailure),&Parms);
	}
	static FName NAME_USkillCheck_Server_OnSkillCheckSuccess = FName(TEXT("Server_OnSkillCheckSuccess"));
	void USkillCheck::Server_OnSkillCheckSuccess(FSkillCheckResponse skillCheckResponse)
	{
		SkillCheck_eventServer_OnSkillCheckSuccess_Parms Parms;
		Parms.skillCheckResponse=skillCheckResponse;
		ProcessEvent(FindFunctionChecked(NAME_USkillCheck_Server_OnSkillCheckSuccess),&Parms);
	}
	void USkillCheck::StaticRegisterNativesUSkillCheck()
	{
		UClass* Class = USkillCheck::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSkillCheckTypeGrantScore", &USkillCheck::execCanSkillCheckTypeGrantScore },
			{ "GetStartDelayInSeconds", &USkillCheck::execGetStartDelayInSeconds },
			{ "IsDisplayed", &USkillCheck::execIsDisplayed },
			{ "IsHexSkillCheck", &USkillCheck::execIsHexSkillCheck },
			{ "IsOffCenterSkillCheck", &USkillCheck::execIsOffCenterSkillCheck },
			{ "Local_ActivateCustomSkillCheck", &USkillCheck::execLocal_ActivateCustomSkillCheck },
			{ "Local_ActivateSkillCheck", &USkillCheck::execLocal_ActivateSkillCheck },
			{ "Local_OnSkillCheckFailureTrigger", &USkillCheck::execLocal_OnSkillCheckFailureTrigger },
			{ "Local_OnSkillCheckSuccessTrigger", &USkillCheck::execLocal_OnSkillCheckSuccessTrigger },
			{ "Multicast_ActivateSkillCheck", &USkillCheck::execMulticast_ActivateSkillCheck },
			{ "Multicast_DeactivateSkillCheck", &USkillCheck::execMulticast_DeactivateSkillCheck },
			{ "Multicast_SkillCheckResponse", &USkillCheck::execMulticast_SkillCheckResponse },
			{ "OnSkillCheckInput", &USkillCheck::execOnSkillCheckInput },
			{ "Server_ActivateSkillCheck", &USkillCheck::execServer_ActivateSkillCheck },
			{ "Server_DeactivateSkillCheck", &USkillCheck::execServer_DeactivateSkillCheck },
			{ "Server_OnSkillCheckFailure", &USkillCheck::execServer_OnSkillCheckFailure },
			{ "Server_OnSkillCheckSuccess", &USkillCheck::execServer_OnSkillCheckSuccess },
			{ "ShouldShowWarning", &USkillCheck::execShouldShowWarning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics
	{
		struct SkillCheck_eventCanSkillCheckTypeGrantScore_Parms
		{
			ESkillCheckCustomType type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkillCheck_eventCanSkillCheckTypeGrantScore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventCanSkillCheckTypeGrantScore_Parms), &Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventCanSkillCheckTypeGrantScore_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "CanSkillCheckTypeGrantScore", nullptr, nullptr, sizeof(SkillCheck_eventCanSkillCheckTypeGrantScore_Parms), Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics
	{
		struct SkillCheck_eventGetStartDelayInSeconds_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventGetStartDelayInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "GetStartDelayInSeconds", nullptr, nullptr, sizeof(SkillCheck_eventGetStartDelayInSeconds_Parms), Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics
	{
		struct SkillCheck_eventIsDisplayed_Parms
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
	void Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkillCheck_eventIsDisplayed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventIsDisplayed_Parms), &Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "IsDisplayed", nullptr, nullptr, sizeof(SkillCheck_eventIsDisplayed_Parms), Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_IsDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_IsDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics
	{
		struct SkillCheck_eventIsHexSkillCheck_Parms
		{
			ADBDPlayer* dbdPlayer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dbdPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkillCheck_eventIsHexSkillCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventIsHexSkillCheck_Parms), &Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::NewProp_dbdPlayer = { "dbdPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventIsHexSkillCheck_Parms, dbdPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::NewProp_dbdPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "IsHexSkillCheck", nullptr, nullptr, sizeof(SkillCheck_eventIsHexSkillCheck_Parms), Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_IsHexSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_IsHexSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics
	{
		struct SkillCheck_eventIsOffCenterSkillCheck_Parms
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
	void Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkillCheck_eventIsOffCenterSkillCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventIsOffCenterSkillCheck_Parms), &Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "IsOffCenterSkillCheck", nullptr, nullptr, sizeof(SkillCheck_eventIsOffCenterSkillCheck_Parms), Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics
	{
		struct SkillCheck_eventLocal_ActivateCustomSkillCheck_Parms
		{
			ESkillCheckCustomType type;
			float warningSoundDelay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_warningSoundDelay;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::NewProp_warningSoundDelay = { "warningSoundDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventLocal_ActivateCustomSkillCheck_Parms, warningSoundDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventLocal_ActivateCustomSkillCheck_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::NewProp_warningSoundDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Local_ActivateCustomSkillCheck", nullptr, nullptr, sizeof(SkillCheck_eventLocal_ActivateCustomSkillCheck_Parms), Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics
	{
		struct SkillCheck_eventLocal_ActivateSkillCheck_Parms
		{
			UInteractionDefinition* interaction;
			float warningSoundDelay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_warningSoundDelay;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::NewProp_warningSoundDelay = { "warningSoundDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventLocal_ActivateSkillCheck_Parms, warningSoundDelay), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventLocal_ActivateSkillCheck_Parms, interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::NewProp_warningSoundDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Local_ActivateSkillCheck", nullptr, nullptr, sizeof(SkillCheck_eventLocal_ActivateSkillCheck_Parms), Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics
	{
		struct SkillCheck_eventLocal_OnSkillCheckFailureTrigger_Parms
		{
			bool hadInput;
			bool insane;
			ESkillCheckCustomType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_insane_MetaData[];
#endif
		static void NewProp_insane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_insane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hadInput_MetaData[];
#endif
		static void NewProp_hadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hadInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventLocal_OnSkillCheckFailureTrigger_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_insane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_insane_SetBit(void* Obj)
	{
		((SkillCheck_eventLocal_OnSkillCheckFailureTrigger_Parms*)Obj)->insane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_insane = { "insane", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventLocal_OnSkillCheckFailureTrigger_Parms), &Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_insane_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_insane_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_insane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_hadInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_hadInput_SetBit(void* Obj)
	{
		((SkillCheck_eventLocal_OnSkillCheckFailureTrigger_Parms*)Obj)->hadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_hadInput = { "hadInput", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventLocal_OnSkillCheckFailureTrigger_Parms), &Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_hadInput_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_hadInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_hadInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_insane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::NewProp_hadInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Local_OnSkillCheckFailureTrigger", nullptr, nullptr, sizeof(SkillCheck_eventLocal_OnSkillCheckFailureTrigger_Parms), Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics
	{
		struct SkillCheck_eventLocal_OnSkillCheckSuccessTrigger_Parms
		{
			bool bonus;
			bool insane;
			ESkillCheckCustomType type;
			bool failedCountedAsGood;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_failedCountedAsGood_MetaData[];
#endif
		static void NewProp_failedCountedAsGood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_failedCountedAsGood;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_insane_MetaData[];
#endif
		static void NewProp_insane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_insane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bonus_MetaData[];
#endif
		static void NewProp_bonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bonus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_failedCountedAsGood_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_failedCountedAsGood_SetBit(void* Obj)
	{
		((SkillCheck_eventLocal_OnSkillCheckSuccessTrigger_Parms*)Obj)->failedCountedAsGood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_failedCountedAsGood = { "failedCountedAsGood", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventLocal_OnSkillCheckSuccessTrigger_Parms), &Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_failedCountedAsGood_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_failedCountedAsGood_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_failedCountedAsGood_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventLocal_OnSkillCheckSuccessTrigger_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_insane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_insane_SetBit(void* Obj)
	{
		((SkillCheck_eventLocal_OnSkillCheckSuccessTrigger_Parms*)Obj)->insane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_insane = { "insane", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventLocal_OnSkillCheckSuccessTrigger_Parms), &Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_insane_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_insane_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_insane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_bonus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((SkillCheck_eventLocal_OnSkillCheckSuccessTrigger_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventLocal_OnSkillCheckSuccessTrigger_Parms), &Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_bonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_bonus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_failedCountedAsGood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_insane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::NewProp_bonus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Local_OnSkillCheckSuccessTrigger", nullptr, nullptr, sizeof(SkillCheck_eventLocal_OnSkillCheckSuccessTrigger_Parms), Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_definition;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_definition = { "definition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventMulticast_ActivateSkillCheck_Parms, definition), Z_Construct_UScriptStruct_FSkillCheckDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventMulticast_ActivateSkillCheck_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventMulticast_ActivateSkillCheck_Parms, interaction), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Multicast_ActivateSkillCheck", nullptr, nullptr, sizeof(SkillCheck_eventMulticast_ActivateSkillCheck_Parms), Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Multicast_DeactivateSkillCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Multicast_DeactivateSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Multicast_DeactivateSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Multicast_DeactivateSkillCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Multicast_DeactivateSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Multicast_DeactivateSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Multicast_DeactivateSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Multicast_DeactivateSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skillCheckResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::NewProp_skillCheckResponse = { "skillCheckResponse", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventMulticast_SkillCheckResponse_Parms, skillCheckResponse), Z_Construct_UScriptStruct_FSkillCheckResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::NewProp_skillCheckResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Multicast_SkillCheckResponse", nullptr, nullptr, sizeof(SkillCheck_eventMulticast_SkillCheckResponse_Parms), Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_OnSkillCheckInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_OnSkillCheckInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_OnSkillCheckInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "OnSkillCheckInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_OnSkillCheckInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_OnSkillCheckInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_OnSkillCheckInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_OnSkillCheckInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_definition;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_definition = { "definition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventServer_ActivateSkillCheck_Parms, definition), Z_Construct_UScriptStruct_FSkillCheckDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventServer_ActivateSkillCheck_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventServer_ActivateSkillCheck_Parms, interaction), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Server_ActivateSkillCheck", nullptr, nullptr, sizeof(SkillCheck_eventServer_ActivateSkillCheck_Parms), Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Server_DeactivateSkillCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Server_DeactivateSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Server_DeactivateSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Server_DeactivateSkillCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Server_DeactivateSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Server_DeactivateSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Server_DeactivateSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Server_DeactivateSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skillCheckResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::NewProp_skillCheckResponse = { "skillCheckResponse", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventServer_OnSkillCheckFailure_Parms, skillCheckResponse), Z_Construct_UScriptStruct_FSkillCheckResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::NewProp_skillCheckResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Server_OnSkillCheckFailure", nullptr, nullptr, sizeof(SkillCheck_eventServer_OnSkillCheckFailure_Parms), Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skillCheckResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::NewProp_skillCheckResponse = { "skillCheckResponse", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheck_eventServer_OnSkillCheckSuccess_Parms, skillCheckResponse), Z_Construct_UScriptStruct_FSkillCheckResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::NewProp_skillCheckResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "Server_OnSkillCheckSuccess", nullptr, nullptr, sizeof(SkillCheck_eventServer_OnSkillCheckSuccess_Parms), Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics
	{
		struct SkillCheck_eventShouldShowWarning_Parms
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
	void Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkillCheck_eventShouldShowWarning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheck_eventShouldShowWarning_Parms), &Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheck, nullptr, "ShouldShowWarning", nullptr, nullptr, sizeof(SkillCheck_eventShouldShowWarning_Parms), Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheck_ShouldShowWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheck_ShouldShowWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkillCheck_NoRegister()
	{
		return USkillCheck::StaticClass();
	}
	struct Z_Construct_UClass_USkillCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkillCheck_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillCheck_CanSkillCheckTypeGrantScore, "CanSkillCheckTypeGrantScore" }, // 1822842279
		{ &Z_Construct_UFunction_USkillCheck_GetStartDelayInSeconds, "GetStartDelayInSeconds" }, // 3819933543
		{ &Z_Construct_UFunction_USkillCheck_IsDisplayed, "IsDisplayed" }, // 902191519
		{ &Z_Construct_UFunction_USkillCheck_IsHexSkillCheck, "IsHexSkillCheck" }, // 2233077846
		{ &Z_Construct_UFunction_USkillCheck_IsOffCenterSkillCheck, "IsOffCenterSkillCheck" }, // 1255981089
		{ &Z_Construct_UFunction_USkillCheck_Local_ActivateCustomSkillCheck, "Local_ActivateCustomSkillCheck" }, // 3274741343
		{ &Z_Construct_UFunction_USkillCheck_Local_ActivateSkillCheck, "Local_ActivateSkillCheck" }, // 1342803341
		{ &Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckFailureTrigger, "Local_OnSkillCheckFailureTrigger" }, // 617261017
		{ &Z_Construct_UFunction_USkillCheck_Local_OnSkillCheckSuccessTrigger, "Local_OnSkillCheckSuccessTrigger" }, // 3483809781
		{ &Z_Construct_UFunction_USkillCheck_Multicast_ActivateSkillCheck, "Multicast_ActivateSkillCheck" }, // 2940980647
		{ &Z_Construct_UFunction_USkillCheck_Multicast_DeactivateSkillCheck, "Multicast_DeactivateSkillCheck" }, // 2290693172
		{ &Z_Construct_UFunction_USkillCheck_Multicast_SkillCheckResponse, "Multicast_SkillCheckResponse" }, // 42015312
		{ &Z_Construct_UFunction_USkillCheck_OnSkillCheckInput, "OnSkillCheckInput" }, // 4130926582
		{ &Z_Construct_UFunction_USkillCheck_Server_ActivateSkillCheck, "Server_ActivateSkillCheck" }, // 2826769876
		{ &Z_Construct_UFunction_USkillCheck_Server_DeactivateSkillCheck, "Server_DeactivateSkillCheck" }, // 566050380
		{ &Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckFailure, "Server_OnSkillCheckFailure" }, // 2208521598
		{ &Z_Construct_UFunction_USkillCheck_Server_OnSkillCheckSuccess, "Server_OnSkillCheckSuccess" }, // 3254060415
		{ &Z_Construct_UFunction_USkillCheck_ShouldShowWarning, "ShouldShowWarning" }, // 2638540138
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillCheck_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkillCheck.h" },
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillCheck_Statics::NewProp__currentInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillCheck_Statics::NewProp__currentInteraction = { "_currentInteraction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillCheck, _currentInteraction), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillCheck_Statics::NewProp__currentInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheck_Statics::NewProp__currentInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillCheck_Statics::NewProp__owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillCheck_Statics::NewProp__owner = { "_owner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillCheck, _owner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillCheck_Statics::NewProp__owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheck_Statics::NewProp__owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillCheck_Statics::NewProp__currentInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillCheck_Statics::NewProp__owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillCheck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkillCheck_Statics::ClassParams = {
		&USkillCheck::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkillCheck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheck_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkillCheck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillCheck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkillCheck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkillCheck, 1248145338);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USkillCheck>()
	{
		return USkillCheck::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkillCheck(Z_Construct_UClass_USkillCheck, &USkillCheck::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USkillCheck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillCheck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
