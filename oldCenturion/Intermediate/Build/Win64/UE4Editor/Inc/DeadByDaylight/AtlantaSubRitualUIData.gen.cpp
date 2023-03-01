// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaSubRitualUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaSubRitualUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaSubRitualUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FAtlantaSubRitualUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaSubRitualUIData"), sizeof(FAtlantaSubRitualUIData), Get_Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaSubRitualUIData>()
{
	return FAtlantaSubRitualUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaSubRitualUIData(FAtlantaSubRitualUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaSubRitualUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaSubRitualUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaSubRitualUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaSubRitualUIData")),new UScriptStruct::TCppStructOps<FAtlantaSubRitualUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaSubRitualUIData;
	struct Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSubRitualUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaSubRitualUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_CurrentNumber_MetaData[] = {
		{ "Category", "AtlantaSubRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaSubRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_CurrentNumber = { "CurrentNumber", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaSubRitualUIData, CurrentNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_CurrentNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_CurrentNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_TargetNumber_MetaData[] = {
		{ "Category", "AtlantaSubRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaSubRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_TargetNumber = { "TargetNumber", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaSubRitualUIData, TargetNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_TargetNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_TargetNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AtlantaSubRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaSubRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaSubRitualUIData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_CurrentNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_TargetNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaSubRitualUIData",
		sizeof(FAtlantaSubRitualUIData),
		alignof(FAtlantaSubRitualUIData),
		Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaSubRitualUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaSubRitualUIData"), sizeof(FAtlantaSubRitualUIData), Get_Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaSubRitualUIData_Hash() { return 2629468508U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
