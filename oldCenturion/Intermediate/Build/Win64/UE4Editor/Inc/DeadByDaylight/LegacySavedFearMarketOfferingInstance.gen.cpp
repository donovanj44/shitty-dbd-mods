// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacySavedFearMarketOfferingInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacySavedFearMarketOfferingInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance();
// End Cross Module References
class UScriptStruct* FLegacySavedFearMarketOfferingInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacySavedFearMarketOfferingInstance"), sizeof(FLegacySavedFearMarketOfferingInstance), Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacySavedFearMarketOfferingInstance>()
{
	return FLegacySavedFearMarketOfferingInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacySavedFearMarketOfferingInstance(FLegacySavedFearMarketOfferingInstance::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacySavedFearMarketOfferingInstance"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedFearMarketOfferingInstance
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedFearMarketOfferingInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacySavedFearMarketOfferingInstance")),new UScriptStruct::TCppStructOps<FLegacySavedFearMarketOfferingInstance>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedFearMarketOfferingInstance;
	struct Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsForSale_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsForSale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectsForSale_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacySavedFearMarketOfferingInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacySavedFearMarketOfferingInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedFearMarketOfferingInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedFearMarketOfferingInstance, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedFearMarketOfferingInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedFearMarketOfferingInstance, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedFearMarketOfferingInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale = { "ObjectsForSale", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedFearMarketOfferingInstance, ObjectsForSale), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_Inner = { "ObjectsForSale", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLegacySavedFearMarketItemInstance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacySavedFearMarketOfferingInstance",
		sizeof(FLegacySavedFearMarketOfferingInstance),
		alignof(FLegacySavedFearMarketOfferingInstance),
		Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacySavedFearMarketOfferingInstance"), sizeof(FLegacySavedFearMarketOfferingInstance), Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance_Hash() { return 3855440307U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
