// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AttackHitResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackHitResult() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAttackHitResult();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttack_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FAttackHitResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAttackHitResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackHitResult, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AttackHitResult"), sizeof(FAttackHitResult), Get_Z_Construct_UScriptStruct_FAttackHitResult_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAttackHitResult>()
{
	return FAttackHitResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttackHitResult(FAttackHitResult::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AttackHitResult"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackHitResult
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackHitResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttackHitResult")),new UScriptStruct::TCppStructOps<FAttackHitResult>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackHitResult;
	struct Z_Construct_UScriptStruct_FAttackHitResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticOnly_MetaData[];
#endif
		static void NewProp_CosmeticOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CosmeticOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBasicAttack_MetaData[];
#endif
		static void NewProp_IsBasicAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBasicAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attacker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackHitResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttackHitResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackHitResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_CosmeticOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttackHitResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_CosmeticOnly_SetBit(void* Obj)
	{
		((FAttackHitResult*)Obj)->CosmeticOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_CosmeticOnly = { "CosmeticOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAttackHitResult), &Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_CosmeticOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_CosmeticOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_CosmeticOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_IsBasicAttack_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttackHitResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_IsBasicAttack_SetBit(void* Obj)
	{
		((FAttackHitResult*)Obj)->IsBasicAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_IsBasicAttack = { "IsBasicAttack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAttackHitResult), &Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_IsBasicAttack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_IsBasicAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_IsBasicAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AttackHitResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackHitResult, Attack), Z_Construct_UClass_UDBDAttack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttackHitResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackHitResult, Target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attacker_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttackHitResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackHitResult, Attacker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attacker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_CosmeticOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_IsBasicAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackHitResult_Statics::NewProp_Attacker,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackHitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AttackHitResult",
		sizeof(FAttackHitResult),
		alignof(FAttackHitResult),
		Z_Construct_UScriptStruct_FAttackHitResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackHitResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackHitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackHitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttackHitResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttackHitResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttackHitResult"), sizeof(FAttackHitResult), Get_Z_Construct_UScriptStruct_FAttackHitResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttackHitResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttackHitResult_Hash() { return 1568802099U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
