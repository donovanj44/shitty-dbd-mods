// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScoreCategoryUIExtraData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreCategoryUIExtraData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScoreCategoryUIExtraData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FScoreCategoryUIExtraData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ScoreCategoryUIExtraData"), sizeof(FScoreCategoryUIExtraData), Get_Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FScoreCategoryUIExtraData>()
{
	return FScoreCategoryUIExtraData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScoreCategoryUIExtraData(FScoreCategoryUIExtraData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ScoreCategoryUIExtraData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFScoreCategoryUIExtraData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFScoreCategoryUIExtraData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScoreCategoryUIExtraData")),new UScriptStruct::TCppStructOps<FScoreCategoryUIExtraData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFScoreCategoryUIExtraData;
	struct Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreCategoryAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreCategoryAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ScoreCategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScoreCategoryUIExtraData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreCategoryUIExtraData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreValue_MetaData[] = {
		{ "Category", "ScoreCategoryUIExtraData" },
		{ "ModuleRelativePath", "Public/ScoreCategoryUIExtraData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreValue = { "ScoreValue", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreCategoryUIExtraData, ScoreValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryAsset_MetaData[] = {
		{ "Category", "ScoreCategoryUIExtraData" },
		{ "ModuleRelativePath", "Public/ScoreCategoryUIExtraData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryAsset = { "ScoreCategoryAsset", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreCategoryUIExtraData, ScoreCategoryAsset), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryName_MetaData[] = {
		{ "Category", "ScoreCategoryUIExtraData" },
		{ "ModuleRelativePath", "Public/ScoreCategoryUIExtraData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryName = { "ScoreCategoryName", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreCategoryUIExtraData, ScoreCategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::NewProp_ScoreCategoryName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ScoreCategoryUIExtraData",
		sizeof(FScoreCategoryUIExtraData),
		alignof(FScoreCategoryUIExtraData),
		Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScoreCategoryUIExtraData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScoreCategoryUIExtraData"), sizeof(FScoreCategoryUIExtraData), Get_Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScoreCategoryUIExtraData_Hash() { return 3513806722U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
