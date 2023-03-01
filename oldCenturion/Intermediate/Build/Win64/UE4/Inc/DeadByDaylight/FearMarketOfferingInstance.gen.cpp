// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FearMarketOfferingInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFearMarketOfferingInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFearMarketOfferingInstance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFearMarketItemInstance();
// End Cross Module References
class UScriptStruct* FFearMarketOfferingInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFearMarketOfferingInstance, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("FearMarketOfferingInstance"), sizeof(FFearMarketOfferingInstance), Get_Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FFearMarketOfferingInstance>()
{
	return FFearMarketOfferingInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFearMarketOfferingInstance(FFearMarketOfferingInstance::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("FearMarketOfferingInstance"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFFearMarketOfferingInstance
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFFearMarketOfferingInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FearMarketOfferingInstance")),new UScriptStruct::TCppStructOps<FFearMarketOfferingInstance>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFFearMarketOfferingInstance;
	struct Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FearMarketOfferingInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFearMarketOfferingInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketOfferingInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFearMarketOfferingInstance, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketOfferingInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFearMarketOfferingInstance, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketOfferingInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale = { "ObjectsForSale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFearMarketOfferingInstance, ObjectsForSale), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_Inner = { "ObjectsForSale", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFearMarketItemInstance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::NewProp_ObjectsForSale_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"FearMarketOfferingInstance",
		sizeof(FFearMarketOfferingInstance),
		alignof(FFearMarketOfferingInstance),
		Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFearMarketOfferingInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FearMarketOfferingInstance"), sizeof(FFearMarketOfferingInstance), Get_Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFearMarketOfferingInstance_Hash() { return 3672817246U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
