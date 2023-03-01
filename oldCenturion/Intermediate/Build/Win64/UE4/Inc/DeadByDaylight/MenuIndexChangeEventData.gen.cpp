// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MenuIndexChangeEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuIndexChangeEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMenuIndexChangeEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FMenuIndexChangeEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMenuIndexChangeEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("MenuIndexChangeEventData"), sizeof(FMenuIndexChangeEventData), Get_Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FMenuIndexChangeEventData>()
{
	return FMenuIndexChangeEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMenuIndexChangeEventData(FMenuIndexChangeEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("MenuIndexChangeEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFMenuIndexChangeEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFMenuIndexChangeEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MenuIndexChangeEventData")),new UScriptStruct::TCppStructOps<FMenuIndexChangeEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFMenuIndexChangeEventData;
	struct Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuIndexChangeEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMenuIndexChangeEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/MenuIndexChangeEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuIndexChangeEventData, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"MenuIndexChangeEventData",
		sizeof(FMenuIndexChangeEventData),
		alignof(FMenuIndexChangeEventData),
		Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMenuIndexChangeEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MenuIndexChangeEventData"), sizeof(FMenuIndexChangeEventData), Get_Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMenuIndexChangeEventData_Hash() { return 2009814941U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
