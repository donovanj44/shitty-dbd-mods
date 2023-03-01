// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EmblemSlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmblemSlotData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemSlotData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemQuality();
// End Cross Module References
class UScriptStruct* FEmblemSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEmblemSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmblemSlotData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EmblemSlotData"), sizeof(FEmblemSlotData), Get_Z_Construct_UScriptStruct_FEmblemSlotData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEmblemSlotData>()
{
	return FEmblemSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmblemSlotData(FEmblemSlotData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EmblemSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemSlotData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemSlotData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmblemSlotData")),new UScriptStruct::TCppStructOps<FEmblemSlotData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemSlotData;
	struct Z_Construct_UScriptStruct_FEmblemSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgressionData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThresholdPoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThresholdPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IconPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Quality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Quality_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmblemSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CharacterExperience_MetaData[] = {
		{ "Category", "EmblemSlotData" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CharacterExperience = { "CharacterExperience", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemSlotData, CharacterExperience), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CharacterExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CharacterExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ProgressionData_MetaData[] = {
		{ "Category", "EmblemSlotData" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ProgressionData = { "ProgressionData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemSlotData, ProgressionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ProgressionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ProgressionData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ProgressionData_Inner = { "ProgressionData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEmblemProgressionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CurrentPoints_MetaData[] = {
		{ "Category", "EmblemSlotData" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CurrentPoints = { "CurrentPoints", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemSlotData, CurrentPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CurrentPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CurrentPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ThresholdPoints_MetaData[] = {
		{ "Category", "EmblemSlotData" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ThresholdPoints = { "ThresholdPoints", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemSlotData, ThresholdPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ThresholdPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ThresholdPoints_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ThresholdPoints_Inner = { "ThresholdPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_IconPaths_MetaData[] = {
		{ "Category", "EmblemSlotData" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_IconPaths = { "IconPaths", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemSlotData, IconPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_IconPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_IconPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_IconPaths_Inner = { "IconPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "EmblemSlotData" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemSlotData, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "EmblemSlotData" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemSlotData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "EmblemSlotData" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemSlotData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "EmblemSlotData" },
		{ "ModuleRelativePath", "Public/EmblemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemSlotData, Quality), Z_Construct_UEnum_DeadByDaylight_EEmblemQuality, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Quality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmblemSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CharacterExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ProgressionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ProgressionData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_CurrentPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ThresholdPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_ThresholdPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_IconPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_IconPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemSlotData_Statics::NewProp_Quality_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmblemSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EmblemSlotData",
		sizeof(FEmblemSlotData),
		alignof(FEmblemSlotData),
		Z_Construct_UScriptStruct_FEmblemSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmblemSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmblemSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmblemSlotData"), sizeof(FEmblemSlotData), Get_Z_Construct_UScriptStruct_FEmblemSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmblemSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmblemSlotData_Hash() { return 2801268700U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
