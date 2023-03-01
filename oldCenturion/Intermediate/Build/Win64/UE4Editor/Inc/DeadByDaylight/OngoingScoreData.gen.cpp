// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OngoingScoreData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOngoingScoreData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOngoingScoreData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
// End Cross Module References
class UScriptStruct* FOngoingScoreData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOngoingScoreData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOngoingScoreData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OngoingScoreData"), sizeof(FOngoingScoreData), Get_Z_Construct_UScriptStruct_FOngoingScoreData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOngoingScoreData>()
{
	return FOngoingScoreData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOngoingScoreData(FOngoingScoreData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OngoingScoreData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOngoingScoreData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOngoingScoreData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OngoingScoreData")),new UScriptStruct::TCppStructOps<FOngoingScoreData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOngoingScoreData;
	struct Z_Construct_UScriptStruct_FOngoingScoreData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomObjectParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomObjectParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccumulatedPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyScoreTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ApplyScoreTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSinceScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSinceScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreTypeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoreTypeTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScoreType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScoreType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOngoingScoreData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OngoingScoreData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOngoingScoreData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_CustomObjectParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/OngoingScoreData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_CustomObjectParameter = { "CustomObjectParameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOngoingScoreData, CustomObjectParameter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_CustomObjectParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_CustomObjectParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/OngoingScoreData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOngoingScoreData, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_AccumulatedPercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/OngoingScoreData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_AccumulatedPercent = { "AccumulatedPercent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOngoingScoreData, AccumulatedPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_AccumulatedPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_AccumulatedPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ApplyScoreTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Public/OngoingScoreData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ApplyScoreTimeout = { "ApplyScoreTimeout", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOngoingScoreData, ApplyScoreTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ApplyScoreTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ApplyScoreTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_TimeSinceScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/OngoingScoreData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_TimeSinceScore = { "TimeSinceScore", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOngoingScoreData, TimeSinceScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_TimeSinceScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_TimeSinceScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreTypeTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/OngoingScoreData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreTypeTag = { "ScoreTypeTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOngoingScoreData, ScoreTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreTypeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreTypeTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreType_MetaData[] = {
		{ "ModuleRelativePath", "Public/OngoingScoreData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreType = { "ScoreType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOngoingScoreData, ScoreType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOngoingScoreData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_CustomObjectParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_AccumulatedPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ApplyScoreTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_TimeSinceScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreTypeTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOngoingScoreData_Statics::NewProp_ScoreType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOngoingScoreData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"OngoingScoreData",
		sizeof(FOngoingScoreData),
		alignof(FOngoingScoreData),
		Z_Construct_UScriptStruct_FOngoingScoreData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOngoingScoreData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOngoingScoreData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOngoingScoreData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OngoingScoreData"), sizeof(FOngoingScoreData), Get_Z_Construct_UScriptStruct_FOngoingScoreData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOngoingScoreData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOngoingScoreData_Hash() { return 3628657468U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
