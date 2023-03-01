// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacySavedFearMarketItemInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacySavedFearMarketItemInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FLegacySavedFearMarketItemInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacySavedFearMarketItemInstance"), sizeof(FLegacySavedFearMarketItemInstance), Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacySavedFearMarketItemInstance>()
{
	return FLegacySavedFearMarketItemInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacySavedFearMarketItemInstance(FLegacySavedFearMarketItemInstance::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacySavedFearMarketItemInstance"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedFearMarketItemInstance
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedFearMarketItemInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacySavedFearMarketItemInstance")),new UScriptStruct::TCppStructOps<FLegacySavedFearMarketItemInstance>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedFearMarketItemInstance;
	struct Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Purchased_MetaData[];
#endif
		static void NewProp_Purchased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Purchased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodpointConversion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodpointConversion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacySavedFearMarketItemInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacySavedFearMarketItemInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Purchased_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedFearMarketItemInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Purchased_SetBit(void* Obj)
	{
		((FLegacySavedFearMarketItemInstance*)Obj)->Purchased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Purchased = { "Purchased", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLegacySavedFearMarketItemInstance), &Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Purchased_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Purchased_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Purchased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_BloodpointConversion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedFearMarketItemInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_BloodpointConversion = { "BloodpointConversion", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedFearMarketItemInstance, BloodpointConversion), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_BloodpointConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_BloodpointConversion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Cost_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedFearMarketItemInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedFearMarketItemInstance, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_ItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedFearMarketItemInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedFearMarketItemInstance, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Purchased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_BloodpointConversion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacySavedFearMarketItemInstance",
		sizeof(FLegacySavedFearMarketItemInstance),
		alignof(FLegacySavedFearMarketItemInstance),
		Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacySavedFearMarketItemInstance"), sizeof(FLegacySavedFearMarketItemInstance), Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance_Hash() { return 3453174762U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
