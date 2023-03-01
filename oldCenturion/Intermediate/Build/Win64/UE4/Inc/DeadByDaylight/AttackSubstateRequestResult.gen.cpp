// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AttackSubstateRequestResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackSubstateRequestResult() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAttackSubstateRequestResult();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate();
// End Cross Module References
class UScriptStruct* FAttackSubstateRequestResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackSubstateRequestResult, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AttackSubstateRequestResult"), sizeof(FAttackSubstateRequestResult), Get_Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAttackSubstateRequestResult>()
{
	return FAttackSubstateRequestResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttackSubstateRequestResult(FAttackSubstateRequestResult::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AttackSubstateRequestResult"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackSubstateRequestResult
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackSubstateRequestResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttackSubstateRequestResult")),new UScriptStruct::TCppStructOps<FAttackSubstateRequestResult>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackSubstateRequestResult;
	struct Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerNextSubstate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServerNextSubstate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerNextSubstate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedNextSubstate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequestedNextSubstate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestedNextSubstate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttackSubstateRequestResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackSubstateRequestResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_ServerNextSubstate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttackSubstateRequestResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_ServerNextSubstate = { "ServerNextSubstate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackSubstateRequestResult, ServerNextSubstate), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_ServerNextSubstate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_ServerNextSubstate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_ServerNextSubstate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_RequestedNextSubstate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttackSubstateRequestResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_RequestedNextSubstate = { "RequestedNextSubstate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackSubstateRequestResult, RequestedNextSubstate), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_RequestedNextSubstate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_RequestedNextSubstate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_RequestedNextSubstate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_IsValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttackSubstateRequestResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((FAttackSubstateRequestResult*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAttackSubstateRequestResult), &Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_IsValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_ServerNextSubstate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_ServerNextSubstate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_RequestedNextSubstate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_RequestedNextSubstate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::NewProp_IsValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AttackSubstateRequestResult",
		sizeof(FAttackSubstateRequestResult),
		alignof(FAttackSubstateRequestResult),
		Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttackSubstateRequestResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttackSubstateRequestResult"), sizeof(FAttackSubstateRequestResult), Get_Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttackSubstateRequestResult_Hash() { return 1554278399U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
