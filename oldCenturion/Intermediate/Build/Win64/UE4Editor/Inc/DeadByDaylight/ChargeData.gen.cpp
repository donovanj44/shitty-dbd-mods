// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ChargeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChargeData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FChargeData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FChargeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FChargeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChargeData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ChargeData"), sizeof(FChargeData), Get_Z_Construct_UScriptStruct_FChargeData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FChargeData>()
{
	return FChargeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChargeData(FChargeData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ChargeData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFChargeData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFChargeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChargeData")),new UScriptStruct::TCppStructOps<FChargeData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFChargeData;
	struct Z_Construct_UScriptStruct_FChargeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BypassSkillCheckFail_MetaData[];
#endif
		static void NewProp_BypassSkillCheckFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BypassSkillCheckFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChargeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChargeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChargeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChargeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_BypassSkillCheckFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChargeData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_BypassSkillCheckFail_SetBit(void* Obj)
	{
		((FChargeData*)Obj)->BypassSkillCheckFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_BypassSkillCheckFail = { "BypassSkillCheckFail", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChargeData), &Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_BypassSkillCheckFail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_BypassSkillCheckFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_BypassSkillCheckFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_ChargeAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChargeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_ChargeAmount = { "ChargeAmount", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChargeData, ChargeAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_ChargeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_ChargeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChargeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChargeData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_Instigator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChargeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_BypassSkillCheckFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_ChargeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChargeData_Statics::NewProp_Instigator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChargeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ChargeData",
		sizeof(FChargeData),
		alignof(FChargeData),
		Z_Construct_UScriptStruct_FChargeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChargeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChargeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChargeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChargeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChargeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChargeData"), sizeof(FChargeData), Get_Z_Construct_UScriptStruct_FChargeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChargeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChargeData_Hash() { return 2336907448U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
