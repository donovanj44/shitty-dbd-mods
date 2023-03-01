// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaKillerSoundIndicatorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaKillerSoundIndicatorData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData();
// End Cross Module References
class UScriptStruct* FAtlantaKillerSoundIndicatorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaKillerSoundIndicatorData"), sizeof(FAtlantaKillerSoundIndicatorData), Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaKillerSoundIndicatorData>()
{
	return FAtlantaKillerSoundIndicatorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaKillerSoundIndicatorData(FAtlantaKillerSoundIndicatorData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaKillerSoundIndicatorData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaKillerSoundIndicatorData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaKillerSoundIndicatorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaKillerSoundIndicatorData")),new UScriptStruct::TCppStructOps<FAtlantaKillerSoundIndicatorData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaKillerSoundIndicatorData;
	struct Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiminishWithDistanceConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DiminishWithDistanceConditions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiminishWithDistanceConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalSoundConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalSoundConditions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalSoundConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanDiminishWithDistance_MetaData[];
#endif
		static void NewProp_CanDiminishWithDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanDiminishWithDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeGlobalSound_MetaData[];
#endif
		static void NewProp_CanBeGlobalSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeGlobalSound;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundIndicatorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaKillerSoundIndicatorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_DiminishWithDistanceConditions_MetaData[] = {
		{ "Category", "AtlantaKillerSoundIndicatorData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_DiminishWithDistanceConditions = { "DiminishWithDistanceConditions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundIndicatorData, DiminishWithDistanceConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_DiminishWithDistanceConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_DiminishWithDistanceConditions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_DiminishWithDistanceConditions_Inner = { "DiminishWithDistanceConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_GlobalSoundConditions_MetaData[] = {
		{ "Category", "AtlantaKillerSoundIndicatorData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_GlobalSoundConditions = { "GlobalSoundConditions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundIndicatorData, GlobalSoundConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_GlobalSoundConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_GlobalSoundConditions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_GlobalSoundConditions_Inner = { "GlobalSoundConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanDiminishWithDistance_MetaData[] = {
		{ "Category", "AtlantaKillerSoundIndicatorData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundIndicatorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanDiminishWithDistance_SetBit(void* Obj)
	{
		((FAtlantaKillerSoundIndicatorData*)Obj)->CanDiminishWithDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanDiminishWithDistance = { "CanDiminishWithDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaKillerSoundIndicatorData), &Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanDiminishWithDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanDiminishWithDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanDiminishWithDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanBeGlobalSound_MetaData[] = {
		{ "Category", "AtlantaKillerSoundIndicatorData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundIndicatorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanBeGlobalSound_SetBit(void* Obj)
	{
		((FAtlantaKillerSoundIndicatorData*)Obj)->CanBeGlobalSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanBeGlobalSound = { "CanBeGlobalSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaKillerSoundIndicatorData), &Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanBeGlobalSound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanBeGlobalSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanBeGlobalSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRangeSoundHeard_MetaData[] = {
		{ "Category", "AtlantaKillerSoundIndicatorData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRangeSoundHeard = { "MinRangeSoundHeard", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundIndicatorData, MinRangeSoundHeard), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRangeSoundHeard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRangeSoundHeard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MaxRadiusSoundDistance_MetaData[] = {
		{ "Category", "AtlantaKillerSoundIndicatorData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MaxRadiusSoundDistance = { "MaxRadiusSoundDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundIndicatorData, MaxRadiusSoundDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MaxRadiusSoundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MaxRadiusSoundDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRadiusSoundDistance_MetaData[] = {
		{ "Category", "AtlantaKillerSoundIndicatorData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRadiusSoundDistance = { "MinRadiusSoundDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundIndicatorData, MinRadiusSoundDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRadiusSoundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRadiusSoundDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_DiminishWithDistanceConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_DiminishWithDistanceConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_GlobalSoundConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_GlobalSoundConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanDiminishWithDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_CanBeGlobalSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRangeSoundHeard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MaxRadiusSoundDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::NewProp_MinRadiusSoundDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AtlantaKillerSoundIndicatorData",
		sizeof(FAtlantaKillerSoundIndicatorData),
		alignof(FAtlantaKillerSoundIndicatorData),
		Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaKillerSoundIndicatorData"), sizeof(FAtlantaKillerSoundIndicatorData), Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundIndicatorData_Hash() { return 832866097U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
