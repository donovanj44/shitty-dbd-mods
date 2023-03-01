// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/WiggleMotionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWiggleMotionComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UWiggleMotionComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UWiggleMotionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDCharacterMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWiggleMotionComponent::execOnHideWiggleSkillCheck)
	{
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideWiggleSkillCheck(ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleMotionComponent::execOnSurvivorPickedUp)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorPickedUp(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleMotionComponent::execOnSurvivorRemoved)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorRemoved(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleMotionComponent::execOnWiggleSkillCheckEnd)
	{
		P_GET_UBOOL(Z_Param_hadInput);
		P_GET_UBOOL(Z_Param_success);
		P_GET_UBOOL(Z_Param_bonus);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWiggleSkillCheckEnd(Z_Param_hadInput,Z_Param_success,Z_Param_bonus,ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleMotionComponent::execServer_SetIsBeingWiggled)
	{
		P_GET_UBOOL(Z_Param_isBeingWiggled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetIsBeingWiggled_Implementation(Z_Param_isBeingWiggled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWiggleMotionComponent::execSetIsBeingWiggled)
	{
		P_GET_UBOOL(Z_Param_isBeingWiggled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsBeingWiggled(Z_Param_isBeingWiggled);
		P_NATIVE_END;
	}
	static FName NAME_UWiggleMotionComponent_Server_SetIsBeingWiggled = FName(TEXT("Server_SetIsBeingWiggled"));
	void UWiggleMotionComponent::Server_SetIsBeingWiggled(bool isBeingWiggled)
	{
		WiggleMotionComponent_eventServer_SetIsBeingWiggled_Parms Parms;
		Parms.isBeingWiggled=isBeingWiggled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UWiggleMotionComponent_Server_SetIsBeingWiggled),&Parms);
	}
	void UWiggleMotionComponent::StaticRegisterNativesUWiggleMotionComponent()
	{
		UClass* Class = UWiggleMotionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHideWiggleSkillCheck", &UWiggleMotionComponent::execOnHideWiggleSkillCheck },
			{ "OnSurvivorPickedUp", &UWiggleMotionComponent::execOnSurvivorPickedUp },
			{ "OnSurvivorRemoved", &UWiggleMotionComponent::execOnSurvivorRemoved },
			{ "OnWiggleSkillCheckEnd", &UWiggleMotionComponent::execOnWiggleSkillCheckEnd },
			{ "Server_SetIsBeingWiggled", &UWiggleMotionComponent::execServer_SetIsBeingWiggled },
			{ "SetIsBeingWiggled", &UWiggleMotionComponent::execSetIsBeingWiggled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics
	{
		struct WiggleMotionComponent_eventOnHideWiggleSkillCheck_Parms
		{
			ESkillCheckCustomType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleMotionComponent_eventOnHideWiggleSkillCheck_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleMotionComponent, nullptr, "OnHideWiggleSkillCheck", nullptr, nullptr, sizeof(WiggleMotionComponent_eventOnHideWiggleSkillCheck_Parms), Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics
	{
		struct WiggleMotionComponent_eventOnSurvivorPickedUp_Parms
		{
			ADBDPlayer* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleMotionComponent_eventOnSurvivorPickedUp_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleMotionComponent, nullptr, "OnSurvivorPickedUp", nullptr, nullptr, sizeof(WiggleMotionComponent_eventOnSurvivorPickedUp_Parms), Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics
	{
		struct WiggleMotionComponent_eventOnSurvivorRemoved_Parms
		{
			ADBDPlayer* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleMotionComponent_eventOnSurvivorRemoved_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleMotionComponent, nullptr, "OnSurvivorRemoved", nullptr, nullptr, sizeof(WiggleMotionComponent_eventOnSurvivorRemoved_Parms), Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics
	{
		struct WiggleMotionComponent_eventOnWiggleSkillCheckEnd_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WiggleMotionComponent_eventOnWiggleSkillCheckEnd_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((WiggleMotionComponent_eventOnWiggleSkillCheckEnd_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleMotionComponent_eventOnWiggleSkillCheckEnd_Parms), &Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_success_SetBit(void* Obj)
	{
		((WiggleMotionComponent_eventOnWiggleSkillCheckEnd_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleMotionComponent_eventOnWiggleSkillCheckEnd_Parms), &Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_hadInput_SetBit(void* Obj)
	{
		((WiggleMotionComponent_eventOnWiggleSkillCheckEnd_Parms*)Obj)->hadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_hadInput = { "hadInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleMotionComponent_eventOnWiggleSkillCheckEnd_Parms), &Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_hadInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::NewProp_hadInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleMotionComponent, nullptr, "OnWiggleSkillCheckEnd", nullptr, nullptr, sizeof(WiggleMotionComponent_eventOnWiggleSkillCheckEnd_Parms), Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBeingWiggled_MetaData[];
#endif
		static void NewProp_isBeingWiggled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBeingWiggled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_SetBit(void* Obj)
	{
		((WiggleMotionComponent_eventServer_SetIsBeingWiggled_Parms*)Obj)->isBeingWiggled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled = { "isBeingWiggled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleMotionComponent_eventServer_SetIsBeingWiggled_Parms), &Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleMotionComponent, nullptr, "Server_SetIsBeingWiggled", nullptr, nullptr, sizeof(WiggleMotionComponent_eventServer_SetIsBeingWiggled_Parms), Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics
	{
		struct WiggleMotionComponent_eventSetIsBeingWiggled_Parms
		{
			bool isBeingWiggled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBeingWiggled_MetaData[];
#endif
		static void NewProp_isBeingWiggled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBeingWiggled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_SetBit(void* Obj)
	{
		((WiggleMotionComponent_eventSetIsBeingWiggled_Parms*)Obj)->isBeingWiggled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled = { "isBeingWiggled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WiggleMotionComponent_eventSetIsBeingWiggled_Parms), &Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::NewProp_isBeingWiggled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleMotionComponent, nullptr, "SetIsBeingWiggled", nullptr, nullptr, sizeof(WiggleMotionComponent_eventSetIsBeingWiggled_Parms), Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWiggleMotionComponent_NoRegister()
	{
		return UWiggleMotionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWiggleMotionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ownerMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ownerMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__carriedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__carriedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWiggleMotionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWiggleMotionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWiggleMotionComponent_OnHideWiggleSkillCheck, "OnHideWiggleSkillCheck" }, // 2742224352
		{ &Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorPickedUp, "OnSurvivorPickedUp" }, // 668785073
		{ &Z_Construct_UFunction_UWiggleMotionComponent_OnSurvivorRemoved, "OnSurvivorRemoved" }, // 1215543026
		{ &Z_Construct_UFunction_UWiggleMotionComponent_OnWiggleSkillCheckEnd, "OnWiggleSkillCheckEnd" }, // 1478044429
		{ &Z_Construct_UFunction_UWiggleMotionComponent_Server_SetIsBeingWiggled, "Server_SetIsBeingWiggled" }, // 423153791
		{ &Z_Construct_UFunction_UWiggleMotionComponent_SetIsBeingWiggled, "SetIsBeingWiggled" }, // 2958455046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleMotionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WiggleMotionComponent.h" },
		{ "ModuleRelativePath", "Public/WiggleMotionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__ownerMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WiggleMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__ownerMovementComponent = { "_ownerMovementComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWiggleMotionComponent, _ownerMovementComponent), Z_Construct_UClass_UDBDCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__ownerMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__ownerMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__carriedPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WiggleMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__carriedPlayer = { "_carriedPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWiggleMotionComponent, _carriedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__carriedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__carriedPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWiggleMotionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__ownerMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWiggleMotionComponent_Statics::NewProp__carriedPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWiggleMotionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWiggleMotionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWiggleMotionComponent_Statics::ClassParams = {
		&UWiggleMotionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWiggleMotionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleMotionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWiggleMotionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleMotionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWiggleMotionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWiggleMotionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWiggleMotionComponent, 2799743123);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UWiggleMotionComponent>()
	{
		return UWiggleMotionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWiggleMotionComponent(Z_Construct_UClass_UWiggleMotionComponent, &UWiggleMotionComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UWiggleMotionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWiggleMotionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
