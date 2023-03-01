// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UnlockSaveStatCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockSaveStatCondition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FUnlockSaveStatCondition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FUnlockSaveStatCondition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnlockSaveStatCondition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("UnlockSaveStatCondition"), sizeof(FUnlockSaveStatCondition), Get_Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FUnlockSaveStatCondition>()
{
	return FUnlockSaveStatCondition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUnlockSaveStatCondition(FUnlockSaveStatCondition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("UnlockSaveStatCondition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFUnlockSaveStatCondition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFUnlockSaveStatCondition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UnlockSaveStatCondition")),new UScriptStruct::TCppStructOps<FUnlockSaveStatCondition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFUnlockSaveStatCondition;
	struct Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCharacterSpecific_MetaData[];
#endif
		static void NewProp_isCharacterSpecific_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCharacterSpecific;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValueRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnlockSaveStatCondition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnlockSaveStatCondition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_isCharacterSpecific_MetaData[] = {
		{ "Category", "UnlockSaveStatCondition" },
		{ "ModuleRelativePath", "Public/UnlockSaveStatCondition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_isCharacterSpecific_SetBit(void* Obj)
	{
		((FUnlockSaveStatCondition*)Obj)->isCharacterSpecific = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_isCharacterSpecific = { "isCharacterSpecific", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockSaveStatCondition), &Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_isCharacterSpecific_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_isCharacterSpecific_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_isCharacterSpecific_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_ValueRequired_MetaData[] = {
		{ "Category", "UnlockSaveStatCondition" },
		{ "ModuleRelativePath", "Public/UnlockSaveStatCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_ValueRequired = { "ValueRequired", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockSaveStatCondition, ValueRequired), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_ValueRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_ValueRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_StatName_MetaData[] = {
		{ "Category", "UnlockSaveStatCondition" },
		{ "ModuleRelativePath", "Public/UnlockSaveStatCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockSaveStatCondition, StatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_isCharacterSpecific,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_ValueRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::NewProp_StatName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"UnlockSaveStatCondition",
		sizeof(FUnlockSaveStatCondition),
		alignof(FUnlockSaveStatCondition),
		Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnlockSaveStatCondition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UnlockSaveStatCondition"), sizeof(FUnlockSaveStatCondition), Get_Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUnlockSaveStatCondition_Hash() { return 2066339522U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
