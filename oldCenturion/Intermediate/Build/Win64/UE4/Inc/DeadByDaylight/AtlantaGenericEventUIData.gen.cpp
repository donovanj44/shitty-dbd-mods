// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaGenericEventUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaGenericEventUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaGenericEventUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaEventElementUIData();
// End Cross Module References
class UScriptStruct* FAtlantaGenericEventUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaGenericEventUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaGenericEventUIData"), sizeof(FAtlantaGenericEventUIData), Get_Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaGenericEventUIData>()
{
	return FAtlantaGenericEventUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaGenericEventUIData(FAtlantaGenericEventUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaGenericEventUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaGenericEventUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaGenericEventUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaGenericEventUIData")),new UScriptStruct::TCppStructOps<FAtlantaGenericEventUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaGenericEventUIData;
	struct Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_elementsUIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_elementsUIData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_elementsUIData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaGenericEventUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaGenericEventUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::NewProp_elementsUIData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaGenericEventUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::NewProp_elementsUIData = { "elementsUIData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaGenericEventUIData, elementsUIData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::NewProp_elementsUIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::NewProp_elementsUIData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::NewProp_elementsUIData_Inner = { "elementsUIData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaEventElementUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::NewProp_elementsUIData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::NewProp_elementsUIData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData,
		&NewStructOps,
		"AtlantaGenericEventUIData",
		sizeof(FAtlantaGenericEventUIData),
		alignof(FAtlantaGenericEventUIData),
		Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaGenericEventUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaGenericEventUIData"), sizeof(FAtlantaGenericEventUIData), Get_Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaGenericEventUIData_Hash() { return 921324627U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
