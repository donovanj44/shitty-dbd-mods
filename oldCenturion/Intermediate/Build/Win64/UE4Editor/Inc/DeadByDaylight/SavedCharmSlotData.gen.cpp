// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SavedCharmSlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavedCharmSlotData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedCharmSlotData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSavedCharmSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSavedCharmSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedCharmSlotData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SavedCharmSlotData"), sizeof(FSavedCharmSlotData), Get_Z_Construct_UScriptStruct_FSavedCharmSlotData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSavedCharmSlotData>()
{
	return FSavedCharmSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSavedCharmSlotData(FSavedCharmSlotData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SavedCharmSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSavedCharmSlotData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSavedCharmSlotData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SavedCharmSlotData")),new UScriptStruct::TCppStructOps<FSavedCharmSlotData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSavedCharmSlotData;
	struct Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharmId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SavedCharmSlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedCharmSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_CharmId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SavedCharmSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_CharmId = { "CharmId", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSavedCharmSlotData, CharmId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_CharmId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_CharmId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SavedCharmSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSavedCharmSlotData, SlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_SlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_CharmId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::NewProp_SlotIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SavedCharmSlotData",
		sizeof(FSavedCharmSlotData),
		alignof(FSavedCharmSlotData),
		Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSavedCharmSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSavedCharmSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SavedCharmSlotData"), sizeof(FSavedCharmSlotData), Get_Z_Construct_UScriptStruct_FSavedCharmSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSavedCharmSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSavedCharmSlotData_Hash() { return 4032594708U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
