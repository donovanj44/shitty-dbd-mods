// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TallyScorePipsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTallyScorePipsData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTallyScorePipsData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemSlotData();
// End Cross Module References
class UScriptStruct* FTallyScorePipsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTallyScorePipsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTallyScorePipsData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TallyScorePipsData"), sizeof(FTallyScorePipsData), Get_Z_Construct_UScriptStruct_FTallyScorePipsData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTallyScorePipsData>()
{
	return FTallyScorePipsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTallyScorePipsData(FTallyScorePipsData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TallyScorePipsData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTallyScorePipsData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTallyScorePipsData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TallyScorePipsData")),new UScriptStruct::TCppStructOps<FTallyScorePipsData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTallyScorePipsData;
	struct Z_Construct_UScriptStruct_FTallyScorePipsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCustomMatch_MetaData[];
#endif
		static void NewProp_IsCustomMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCustomMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsVersusBotMatch_MetaData[];
#endif
		static void NewProp_IsVersusBotMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVersusBotMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasher_MetaData[];
#endif
		static void NewProp_IsSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipsDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PipsDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scores;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipThresholds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PipThresholds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PipThresholds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TallyScorePipsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTallyScorePipsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsCustomMatch_MetaData[] = {
		{ "Category", "TallyScorePipsData" },
		{ "ModuleRelativePath", "Public/TallyScorePipsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsCustomMatch_SetBit(void* Obj)
	{
		((FTallyScorePipsData*)Obj)->IsCustomMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsCustomMatch = { "IsCustomMatch", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyScorePipsData), &Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsCustomMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsCustomMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsCustomMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsVersusBotMatch_MetaData[] = {
		{ "Category", "TallyScorePipsData" },
		{ "ModuleRelativePath", "Public/TallyScorePipsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsVersusBotMatch_SetBit(void* Obj)
	{
		((FTallyScorePipsData*)Obj)->IsVersusBotMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsVersusBotMatch = { "IsVersusBotMatch", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyScorePipsData), &Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsVersusBotMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsVersusBotMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsVersusBotMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsSlasher_MetaData[] = {
		{ "Category", "TallyScorePipsData" },
		{ "ModuleRelativePath", "Public/TallyScorePipsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsSlasher_SetBit(void* Obj)
	{
		((FTallyScorePipsData*)Obj)->IsSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsSlasher = { "IsSlasher", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyScorePipsData), &Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsSlasher_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipsDelta_MetaData[] = {
		{ "Category", "TallyScorePipsData" },
		{ "ModuleRelativePath", "Public/TallyScorePipsData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipsDelta = { "PipsDelta", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyScorePipsData, PipsDelta), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipsDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipsDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Scores_MetaData[] = {
		{ "Category", "TallyScorePipsData" },
		{ "ModuleRelativePath", "Public/TallyScorePipsData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Scores = { "Scores", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyScorePipsData, Scores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Scores_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Scores_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Scores_Inner = { "Scores", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEmblemSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipThresholds_MetaData[] = {
		{ "Category", "TallyScorePipsData" },
		{ "ModuleRelativePath", "Public/TallyScorePipsData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipThresholds = { "PipThresholds", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyScorePipsData, PipThresholds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipThresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipThresholds_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipThresholds_Inner = { "PipThresholds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "TallyScorePipsData" },
		{ "ModuleRelativePath", "Public/TallyScorePipsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyScorePipsData, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Threshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsCustomMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsVersusBotMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_IsSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipsDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Scores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Scores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipThresholds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_PipThresholds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::NewProp_Threshold,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"TallyScorePipsData",
		sizeof(FTallyScorePipsData),
		alignof(FTallyScorePipsData),
		Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTallyScorePipsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTallyScorePipsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TallyScorePipsData"), sizeof(FTallyScorePipsData), Get_Z_Construct_UScriptStruct_FTallyScorePipsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTallyScorePipsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTallyScorePipsData_Hash() { return 2795915352U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
