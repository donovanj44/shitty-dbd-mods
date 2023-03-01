// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAttackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAttackerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAttackDelegatePair();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttack_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventDBDAttackerComponentOnAttackFinishDelegate_Parms
		{
			EAttackType attackType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::NewProp_attackType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventDBDAttackerComponentOnAttackFinishDelegate_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::NewProp_attackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::NewProp_attackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::NewProp_attackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventDBDAttackerComponentOnAttackFinishDelegate_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventDBDAttackerComponentOnAttackStartDelegate_Parms
		{
			EAttackType attackType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::NewProp_attackType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventDBDAttackerComponentOnAttackStartDelegate_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::NewProp_attackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::NewProp_attackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::NewProp_attackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDAttackerComponentOnAttackStartDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventDBDAttackerComponentOnAttackStartDelegate_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDBDAttackerComponent::execIsAnyAttackTransitionRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnyAttackTransitionRequested();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttackerComponent::execIsAttacking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttacking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttackerComponent::execIsAttackTransitionRequested)
	{
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttackTransitionRequested(EAttackType(Z_Param_attackType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttackerComponent::execLocal_RequestAttack)
	{
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_RequestAttack(EAttackType(Z_Param_attackType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttackerComponent::execMulticast_StoreAttack)
	{
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StoreAttack_Implementation(EAttackType(Z_Param_attackType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttackerComponent::execServer_StoreAttack)
	{
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StoreAttack_Validate(EAttackType(Z_Param_attackType)))
		{
			RPC_ValidateFailed(TEXT("Server_StoreAttack_Validate"));
			return;
		}
		P_THIS->Server_StoreAttack_Implementation(EAttackType(Z_Param_attackType));
		P_NATIVE_END;
	}
	static FName NAME_UDBDAttackerComponent_Multicast_StoreAttack = FName(TEXT("Multicast_StoreAttack"));
	void UDBDAttackerComponent::Multicast_StoreAttack(const EAttackType attackType)
	{
		DBDAttackerComponent_eventMulticast_StoreAttack_Parms Parms;
		Parms.attackType=attackType;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttackerComponent_Multicast_StoreAttack),&Parms);
	}
	static FName NAME_UDBDAttackerComponent_Server_StoreAttack = FName(TEXT("Server_StoreAttack"));
	void UDBDAttackerComponent::Server_StoreAttack(const EAttackType attackType)
	{
		DBDAttackerComponent_eventServer_StoreAttack_Parms Parms;
		Parms.attackType=attackType;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttackerComponent_Server_StoreAttack),&Parms);
	}
	void UDBDAttackerComponent::StaticRegisterNativesUDBDAttackerComponent()
	{
		UClass* Class = UDBDAttackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAnyAttackTransitionRequested", &UDBDAttackerComponent::execIsAnyAttackTransitionRequested },
			{ "IsAttacking", &UDBDAttackerComponent::execIsAttacking },
			{ "IsAttackTransitionRequested", &UDBDAttackerComponent::execIsAttackTransitionRequested },
			{ "Local_RequestAttack", &UDBDAttackerComponent::execLocal_RequestAttack },
			{ "Multicast_StoreAttack", &UDBDAttackerComponent::execMulticast_StoreAttack },
			{ "Server_StoreAttack", &UDBDAttackerComponent::execServer_StoreAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics
	{
		struct DBDAttackerComponent_eventIsAnyAttackTransitionRequested_Parms
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
	void Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDAttackerComponent_eventIsAnyAttackTransitionRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDAttackerComponent_eventIsAnyAttackTransitionRequested_Parms), &Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttackerComponent, nullptr, "IsAnyAttackTransitionRequested", nullptr, nullptr, sizeof(DBDAttackerComponent_eventIsAnyAttackTransitionRequested_Parms), Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics
	{
		struct DBDAttackerComponent_eventIsAttacking_Parms
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
	void Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDAttackerComponent_eventIsAttacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDAttackerComponent_eventIsAttacking_Parms), &Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttackerComponent, nullptr, "IsAttacking", nullptr, nullptr, sizeof(DBDAttackerComponent_eventIsAttacking_Parms), Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics
	{
		struct DBDAttackerComponent_eventIsAttackTransitionRequested_Parms
		{
			EAttackType attackType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDAttackerComponent_eventIsAttackTransitionRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDAttackerComponent_eventIsAttackTransitionRequested_Parms), &Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_attackType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttackerComponent_eventIsAttackTransitionRequested_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_attackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_attackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::NewProp_attackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttackerComponent, nullptr, "IsAttackTransitionRequested", nullptr, nullptr, sizeof(DBDAttackerComponent_eventIsAttackTransitionRequested_Parms), Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics
	{
		struct DBDAttackerComponent_eventLocal_RequestAttack_Parms
		{
			EAttackType attackType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::NewProp_attackType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttackerComponent_eventLocal_RequestAttack_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::NewProp_attackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::NewProp_attackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::NewProp_attackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttackerComponent, nullptr, "Local_RequestAttack", nullptr, nullptr, sizeof(DBDAttackerComponent_eventLocal_RequestAttack_Parms), Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::NewProp_attackType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttackerComponent_eventMulticast_StoreAttack_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::NewProp_attackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::NewProp_attackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::NewProp_attackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttackerComponent, nullptr, "Multicast_StoreAttack", nullptr, nullptr, sizeof(DBDAttackerComponent_eventMulticast_StoreAttack_Parms), Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::NewProp_attackType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttackerComponent_eventServer_StoreAttack_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::NewProp_attackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::NewProp_attackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::NewProp_attackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttackerComponent, nullptr, "Server_StoreAttack", nullptr, nullptr, sizeof(DBDAttackerComponent_eventServer_StoreAttack_Parms), Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDAttackerComponent_NoRegister()
	{
		return UDBDAttackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAttackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackHitDelegates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__attackHitDelegates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attackHitDelegates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__requestedAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__requestedAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__attacks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAttackFinishDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackFinishDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAttackStartDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackStartDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAttackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDAttackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDAttackerComponent_IsAnyAttackTransitionRequested, "IsAnyAttackTransitionRequested" }, // 2313470706
		{ &Z_Construct_UFunction_UDBDAttackerComponent_IsAttacking, "IsAttacking" }, // 1074541946
		{ &Z_Construct_UFunction_UDBDAttackerComponent_IsAttackTransitionRequested, "IsAttackTransitionRequested" }, // 2637141434
		{ &Z_Construct_UFunction_UDBDAttackerComponent_Local_RequestAttack, "Local_RequestAttack" }, // 3913808958
		{ &Z_Construct_UFunction_UDBDAttackerComponent_Multicast_StoreAttack, "Multicast_StoreAttack" }, // 716853338
		{ &Z_Construct_UFunction_UDBDAttackerComponent_Server_StoreAttack, "Server_StoreAttack" }, // 4005476420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDAttackerComponent.h" },
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attackHitDelegates_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attackHitDelegates = { "_attackHitDelegates", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttackerComponent, _attackHitDelegates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attackHitDelegates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attackHitDelegates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attackHitDelegates_Inner = { "_attackHitDelegates", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttackDelegatePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__currentAttack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__currentAttack = { "_currentAttack", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttackerComponent, _currentAttack), Z_Construct_UClass_UDBDAttack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__currentAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__currentAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__requestedAttack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__requestedAttack = { "_requestedAttack", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttackerComponent, _requestedAttack), Z_Construct_UClass_UDBDAttack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__requestedAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__requestedAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attacks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attacks = { "_attacks", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttackerComponent, _attacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attacks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attacks_Inner = { "_attacks", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDAttack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackFinishDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackFinishDelegate = { "OnAttackFinishDelegate", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttackerComponent, OnAttackFinishDelegate), Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackFinishDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackFinishDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackFinishDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackStartDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackStartDelegate = { "OnAttackStartDelegate", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttackerComponent, OnAttackStartDelegate), Z_Construct_UDelegateFunction_DeadByDaylight_DBDAttackerComponentOnAttackStartDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackStartDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackStartDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAttackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attackHitDelegates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attackHitDelegates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__currentAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__requestedAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp__attacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackFinishDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttackerComponent_Statics::NewProp_OnAttackStartDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAttackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAttackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAttackerComponent_Statics::ClassParams = {
		&UDBDAttackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDAttackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAttackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAttackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAttackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAttackerComponent, 2309581695);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAttackerComponent>()
	{
		return UDBDAttackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAttackerComponent(Z_Construct_UClass_UDBDAttackerComponent, &UDBDAttackerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAttackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAttackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
