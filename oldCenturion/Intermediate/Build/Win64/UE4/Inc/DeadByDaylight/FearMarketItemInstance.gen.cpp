// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FearMarketItemInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFearMarketItemInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFearMarketItemInstance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FFearMarketItemInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FFearMarketItemInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFearMarketItemInstance, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("FearMarketItemInstance"), sizeof(FFearMarketItemInstance), Get_Z_Construct_UScriptStruct_FFearMarketItemInstance_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FFearMarketItemInstance>()
{
	return FFearMarketItemInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFearMarketItemInstance(FFearMarketItemInstance::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("FearMarketItemInstance"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFFearMarketItemInstance
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFFearMarketItemInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FearMarketItemInstance")),new UScriptStruct::TCppStructOps<FFearMarketItemInstance>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFFearMarketItemInstance;
	struct Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FearMarketItemInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFearMarketItemInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Purchased_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketItemInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Purchased_SetBit(void* Obj)
	{
		((FFearMarketItemInstance*)Obj)->Purchased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Purchased = { "Purchased", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFearMarketItemInstance), &Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Purchased_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Purchased_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Purchased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_BloodpointConversion_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketItemInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_BloodpointConversion = { "BloodpointConversion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFearMarketItemInstance, BloodpointConversion), METADATA_PARAMS(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_BloodpointConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_BloodpointConversion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Cost_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketItemInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFearMarketItemInstance, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_ItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketItemInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFearMarketItemInstance, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Purchased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_BloodpointConversion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"FearMarketItemInstance",
		sizeof(FFearMarketItemInstance),
		alignof(FFearMarketItemInstance),
		Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFearMarketItemInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFearMarketItemInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FearMarketItemInstance"), sizeof(FFearMarketItemInstance), Get_Z_Construct_UScriptStruct_FFearMarketItemInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFearMarketItemInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFearMarketItemInstance_Hash() { return 422244171U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
