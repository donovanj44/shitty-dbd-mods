// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoadoutSlotUnlockLevelValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadoutSlotUnlockLevelValue() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELoadoutSlot();
// End Cross Module References
class UScriptStruct* FLoadoutSlotUnlockLevelValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LoadoutSlotUnlockLevelValue"), sizeof(FLoadoutSlotUnlockLevelValue), Get_Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLoadoutSlotUnlockLevelValue>()
{
	return FLoadoutSlotUnlockLevelValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadoutSlotUnlockLevelValue(FLoadoutSlotUnlockLevelValue::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LoadoutSlotUnlockLevelValue"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLoadoutSlotUnlockLevelValue
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLoadoutSlotUnlockLevelValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadoutSlotUnlockLevelValue")),new UScriptStruct::TCppStructOps<FLoadoutSlotUnlockLevelValue>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLoadoutSlotUnlockLevelValue;
	struct Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodwebLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodwebLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadoutSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadoutSlot_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadoutSlotUnlockLevelValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadoutSlotUnlockLevelValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_BloodwebLevel_MetaData[] = {
		{ "Category", "LoadoutSlotUnlockLevelValue" },
		{ "ModuleRelativePath", "Public/LoadoutSlotUnlockLevelValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_BloodwebLevel = { "BloodwebLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutSlotUnlockLevelValue, BloodwebLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_BloodwebLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_BloodwebLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_LoadoutSlot_MetaData[] = {
		{ "Category", "LoadoutSlotUnlockLevelValue" },
		{ "ModuleRelativePath", "Public/LoadoutSlotUnlockLevelValue.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_LoadoutSlot = { "LoadoutSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutSlotUnlockLevelValue, LoadoutSlot), Z_Construct_UEnum_DeadByDaylight_ELoadoutSlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_LoadoutSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_LoadoutSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_LoadoutSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_BloodwebLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_LoadoutSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::NewProp_LoadoutSlot_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"LoadoutSlotUnlockLevelValue",
		sizeof(FLoadoutSlotUnlockLevelValue),
		alignof(FLoadoutSlotUnlockLevelValue),
		Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadoutSlotUnlockLevelValue"), sizeof(FLoadoutSlotUnlockLevelValue), Get_Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadoutSlotUnlockLevelValue_Hash() { return 2078810264U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
