// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaKillerSoundDistanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaKillerSoundDistanceData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FAtlantaKillerSoundDistanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaKillerSoundDistanceData"), sizeof(FAtlantaKillerSoundDistanceData), Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaKillerSoundDistanceData>()
{
	return FAtlantaKillerSoundDistanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaKillerSoundDistanceData(FAtlantaKillerSoundDistanceData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaKillerSoundDistanceData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaKillerSoundDistanceData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaKillerSoundDistanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaKillerSoundDistanceData")),new UScriptStruct::TCppStructOps<FAtlantaKillerSoundDistanceData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaKillerSoundDistanceData;
	struct Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRangeSoundHeard_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRangeSoundHeard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRadiusSoundDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadiusSoundDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRadiusSoundDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRadiusSoundDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundDistanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaKillerSoundDistanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRangeSoundHeard_MetaData[] = {
		{ "Category", "AtlantaKillerSoundDistanceData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundDistanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRangeSoundHeard = { "MinRangeSoundHeard", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundDistanceData, MinRangeSoundHeard), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRangeSoundHeard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRangeSoundHeard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MaxRadiusSoundDistance_MetaData[] = {
		{ "Category", "AtlantaKillerSoundDistanceData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundDistanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MaxRadiusSoundDistance = { "MaxRadiusSoundDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundDistanceData, MaxRadiusSoundDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MaxRadiusSoundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MaxRadiusSoundDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRadiusSoundDistance_MetaData[] = {
		{ "Category", "AtlantaKillerSoundDistanceData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundDistanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRadiusSoundDistance = { "MinRadiusSoundDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundDistanceData, MinRadiusSoundDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRadiusSoundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRadiusSoundDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRangeSoundHeard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MaxRadiusSoundDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::NewProp_MinRadiusSoundDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AtlantaKillerSoundDistanceData",
		sizeof(FAtlantaKillerSoundDistanceData),
		alignof(FAtlantaKillerSoundDistanceData),
		Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaKillerSoundDistanceData"), sizeof(FAtlantaKillerSoundDistanceData), Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundDistanceData_Hash() { return 3814057682U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
