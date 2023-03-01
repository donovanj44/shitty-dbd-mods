// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DecisiveStrike.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecisiveStrike() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDecisiveStrike_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDecisiveStrike();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UDecisiveStrike::execOnOwnerPickedUp)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerPickedUp(Z_Param_picker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecisiveStrike::execOnPickUpEnded)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickUpEnded(Z_Param_picker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecisiveStrike::execOnRep_HasBeenAttempted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HasBeenAttempted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecisiveStrike::execOnSkillCheck)
	{
		P_GET_UBOOL(Z_Param_hadInput);
		P_GET_UBOOL(Z_Param_success);
		P_GET_UBOOL(Z_Param_bonus);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkillCheck(Z_Param_hadInput,Z_Param_success,Z_Param_bonus,ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecisiveStrike::execOnUnhookedTimerEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnhookedTimerEnded();
		P_NATIVE_END;
	}
	void UDecisiveStrike::StaticRegisterNativesUDecisiveStrike()
	{
		UClass* Class = UDecisiveStrike::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOwnerPickedUp", &UDecisiveStrike::execOnOwnerPickedUp },
			{ "OnPickUpEnded", &UDecisiveStrike::execOnPickUpEnded },
			{ "OnRep_HasBeenAttempted", &UDecisiveStrike::execOnRep_HasBeenAttempted },
			{ "OnSkillCheck", &UDecisiveStrike::execOnSkillCheck },
			{ "OnUnhookedTimerEnded", &UDecisiveStrike::execOnUnhookedTimerEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics
	{
		struct DecisiveStrike_eventOnOwnerPickedUp_Parms
		{
			ADBDPlayer* picker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::NewProp_picker = { "picker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecisiveStrike_eventOnOwnerPickedUp_Parms, picker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::NewProp_picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecisiveStrike, nullptr, "OnOwnerPickedUp", nullptr, nullptr, sizeof(DecisiveStrike_eventOnOwnerPickedUp_Parms), Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics
	{
		struct DecisiveStrike_eventOnPickUpEnded_Parms
		{
			ADBDPlayer* picker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::NewProp_picker = { "picker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecisiveStrike_eventOnPickUpEnded_Parms, picker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::NewProp_picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecisiveStrike, nullptr, "OnPickUpEnded", nullptr, nullptr, sizeof(DecisiveStrike_eventOnPickUpEnded_Parms), Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecisiveStrike_OnRep_HasBeenAttempted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecisiveStrike_OnRep_HasBeenAttempted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecisiveStrike_OnRep_HasBeenAttempted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecisiveStrike, nullptr, "OnRep_HasBeenAttempted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecisiveStrike_OnRep_HasBeenAttempted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecisiveStrike_OnRep_HasBeenAttempted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecisiveStrike_OnRep_HasBeenAttempted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecisiveStrike_OnRep_HasBeenAttempted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics
	{
		struct DecisiveStrike_eventOnSkillCheck_Parms
		{
			bool hadInput;
			bool success;
			bool bonus;
			ESkillCheckCustomType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static void NewProp_bonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bonus;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static void NewProp_hadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hadInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecisiveStrike_eventOnSkillCheck_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((DecisiveStrike_eventOnSkillCheck_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DecisiveStrike_eventOnSkillCheck_Parms), &Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_success_SetBit(void* Obj)
	{
		((DecisiveStrike_eventOnSkillCheck_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DecisiveStrike_eventOnSkillCheck_Parms), &Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_hadInput_SetBit(void* Obj)
	{
		((DecisiveStrike_eventOnSkillCheck_Parms*)Obj)->hadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_hadInput = { "hadInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DecisiveStrike_eventOnSkillCheck_Parms), &Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_hadInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::NewProp_hadInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecisiveStrike, nullptr, "OnSkillCheck", nullptr, nullptr, sizeof(DecisiveStrike_eventOnSkillCheck_Parms), Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecisiveStrike_OnUnhookedTimerEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecisiveStrike_OnUnhookedTimerEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecisiveStrike_OnUnhookedTimerEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecisiveStrike, nullptr, "OnUnhookedTimerEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecisiveStrike_OnUnhookedTimerEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecisiveStrike_OnUnhookedTimerEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecisiveStrike_OnUnhookedTimerEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecisiveStrike_OnUnhookedTimerEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDecisiveStrike_NoRegister()
	{
		return UDecisiveStrike::StaticClass();
	}
	struct Z_Construct_UClass_UDecisiveStrike_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBeenAttempted_MetaData[];
#endif
		static void NewProp__hasBeenAttempted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasBeenAttempted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deactivationEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__deactivationEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__deactivationEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerHearsSkillCheckCue_MetaData[];
#endif
		static void NewProp__killerHearsSkillCheckCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__killerHearsSkillCheckCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__skillCheckBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__skillCheckDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeAfterUnhook_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeAfterUnhook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecisiveStrike_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDecisiveStrike_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDecisiveStrike_OnOwnerPickedUp, "OnOwnerPickedUp" }, // 2697295537
		{ &Z_Construct_UFunction_UDecisiveStrike_OnPickUpEnded, "OnPickUpEnded" }, // 1307280976
		{ &Z_Construct_UFunction_UDecisiveStrike_OnRep_HasBeenAttempted, "OnRep_HasBeenAttempted" }, // 3627283204
		{ &Z_Construct_UFunction_UDecisiveStrike_OnSkillCheck, "OnSkillCheck" }, // 2345725908
		{ &Z_Construct_UFunction_UDecisiveStrike_OnUnhookedTimerEnded, "OnUnhookedTimerEnded" }, // 637918916
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecisiveStrike_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecisiveStrike.h" },
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__hasBeenAttempted_MetaData[] = {
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	void Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__hasBeenAttempted_SetBit(void* Obj)
	{
		((UDecisiveStrike*)Obj)->_hasBeenAttempted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__hasBeenAttempted = { "_hasBeenAttempted", "OnRep_HasBeenAttempted", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDecisiveStrike), &Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__hasBeenAttempted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__hasBeenAttempted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__hasBeenAttempted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__deactivationEvents_MetaData[] = {
		{ "Category", "DecisiveStrike" },
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__deactivationEvents = { "_deactivationEvents", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecisiveStrike, _deactivationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__deactivationEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__deactivationEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__deactivationEvents_Inner = { "_deactivationEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__killerHearsSkillCheckCue_MetaData[] = {
		{ "Category", "DecisiveStrike" },
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	void Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__killerHearsSkillCheckCue_SetBit(void* Obj)
	{
		((UDecisiveStrike*)Obj)->_killerHearsSkillCheckCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__killerHearsSkillCheckCue = { "_killerHearsSkillCheckCue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDecisiveStrike), &Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__killerHearsSkillCheckCue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__killerHearsSkillCheckCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__killerHearsSkillCheckCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckBuffer_MetaData[] = {
		{ "Category", "DecisiveStrike" },
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckBuffer = { "_skillCheckBuffer", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecisiveStrike, _skillCheckBuffer), METADATA_PARAMS(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckDelay_MetaData[] = {
		{ "Category", "DecisiveStrike" },
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckDelay = { "_skillCheckDelay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecisiveStrike, _skillCheckDelay), METADATA_PARAMS(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__timeAfterUnhook_MetaData[] = {
		{ "Category", "DecisiveStrike" },
		{ "ModuleRelativePath", "Public/DecisiveStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__timeAfterUnhook = { "_timeAfterUnhook", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_timeAfterUnhook, UDecisiveStrike), STRUCT_OFFSET(UDecisiveStrike, _timeAfterUnhook), METADATA_PARAMS(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__timeAfterUnhook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__timeAfterUnhook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDecisiveStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__hasBeenAttempted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__deactivationEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__deactivationEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__killerHearsSkillCheckCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__skillCheckDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecisiveStrike_Statics::NewProp__timeAfterUnhook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecisiveStrike_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecisiveStrike>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDecisiveStrike_Statics::ClassParams = {
		&UDecisiveStrike::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDecisiveStrike_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDecisiveStrike_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDecisiveStrike_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDecisiveStrike_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDecisiveStrike()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDecisiveStrike_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDecisiveStrike, 749660712);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDecisiveStrike>()
	{
		return UDecisiveStrike::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDecisiveStrike(Z_Construct_UClass_UDecisiveStrike, &UDecisiveStrike::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDecisiveStrike"), false, nullptr, nullptr, nullptr);

	void UDecisiveStrike::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__hasBeenAttempted(TEXT("_hasBeenAttempted"));

		const bool bIsValid = true
			&& Name__hasBeenAttempted == ClassReps[(int32)ENetFields_Private::_hasBeenAttempted].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDecisiveStrike"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecisiveStrike);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
