// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AttackDelegatePair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackDelegatePair() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAttackDelegatePair();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttack_NoRegister();
// End Cross Module References
class UScriptStruct* FAttackDelegatePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAttackDelegatePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackDelegatePair, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AttackDelegatePair"), sizeof(FAttackDelegatePair), Get_Z_Construct_UScriptStruct_FAttackDelegatePair_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAttackDelegatePair>()
{
	return FAttackDelegatePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttackDelegatePair(FAttackDelegatePair::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AttackDelegatePair"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackDelegatePair
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackDelegatePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttackDelegatePair")),new UScriptStruct::TCppStructOps<FAttackDelegatePair>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackDelegatePair;
	struct Z_Construct_UScriptStruct_FAttackDelegatePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttackDelegatePair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackDelegatePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::NewProp__attack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AttackDelegatePair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::NewProp__attack = { "_attack", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackDelegatePair, _attack), Z_Construct_UClass_UDBDAttack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::NewProp__attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::NewProp__attack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::NewProp__attack,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AttackDelegatePair",
		sizeof(FAttackDelegatePair),
		alignof(FAttackDelegatePair),
		Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttackDelegatePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttackDelegatePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttackDelegatePair"), sizeof(FAttackDelegatePair), Get_Z_Construct_UScriptStruct_FAttackDelegatePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttackDelegatePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttackDelegatePair_Hash() { return 1918623216U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
