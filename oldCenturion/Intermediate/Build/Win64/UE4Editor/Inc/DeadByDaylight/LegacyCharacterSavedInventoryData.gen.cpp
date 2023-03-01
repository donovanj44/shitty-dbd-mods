// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacyCharacterSavedInventoryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyCharacterSavedInventoryData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FLegacyCharacterSavedInventoryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacyCharacterSavedInventoryData"), sizeof(FLegacyCharacterSavedInventoryData), Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacyCharacterSavedInventoryData>()
{
	return FLegacyCharacterSavedInventoryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacyCharacterSavedInventoryData(FLegacyCharacterSavedInventoryData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacyCharacterSavedInventoryData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyCharacterSavedInventoryData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyCharacterSavedInventoryData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacyCharacterSavedInventoryData")),new UScriptStruct::TCppStructOps<FLegacyCharacterSavedInventoryData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyCharacterSavedInventoryData;
	struct Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeObtainedSinceEpoch_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TimeObtainedSinceEpoch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedInventoryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacyCharacterSavedInventoryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_TimeObtainedSinceEpoch_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedInventoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_TimeObtainedSinceEpoch = { "TimeObtainedSinceEpoch", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedInventoryData, TimeObtainedSinceEpoch), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_TimeObtainedSinceEpoch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_TimeObtainedSinceEpoch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedInventoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedInventoryData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedInventoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedInventoryData, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_TimeObtainedSinceEpoch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacyCharacterSavedInventoryData",
		sizeof(FLegacyCharacterSavedInventoryData),
		alignof(FLegacyCharacterSavedInventoryData),
		Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacyCharacterSavedInventoryData"), sizeof(FLegacyCharacterSavedInventoryData), Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData_Hash() { return 3065058780U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
