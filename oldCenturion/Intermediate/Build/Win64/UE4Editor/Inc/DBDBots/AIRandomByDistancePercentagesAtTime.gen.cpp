// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AIRandomByDistancePercentagesAtTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIRandomByDistancePercentagesAtTime() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
// End Cross Module References
class UScriptStruct* FAIRandomByDistancePercentagesAtTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime, Z_Construct_UPackage__Script_DBDBots(), TEXT("AIRandomByDistancePercentagesAtTime"), sizeof(FAIRandomByDistancePercentagesAtTime), Get_Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FAIRandomByDistancePercentagesAtTime>()
{
	return FAIRandomByDistancePercentagesAtTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIRandomByDistancePercentagesAtTime(FAIRandomByDistancePercentagesAtTime::StaticStruct, TEXT("/Script/DBDBots"), TEXT("AIRandomByDistancePercentagesAtTime"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFAIRandomByDistancePercentagesAtTime
{
	FScriptStruct_DBDBots_StaticRegisterNativesFAIRandomByDistancePercentagesAtTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIRandomByDistancePercentagesAtTime")),new UScriptStruct::TCppStructOps<FAIRandomByDistancePercentagesAtTime>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFAIRandomByDistancePercentagesAtTime;
	struct Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtRelativeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtRelativeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentageAtEndDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PercentageAtEndDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentageAtStartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PercentageAtStartDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIRandomByDistancePercentagesAtTime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIRandomByDistancePercentagesAtTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_AtRelativeTime_MetaData[] = {
		{ "Category", "AIRandomByDistancePercentagesAtTime" },
		{ "ModuleRelativePath", "Public/AIRandomByDistancePercentagesAtTime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_AtRelativeTime = { "AtRelativeTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIRandomByDistancePercentagesAtTime, AtRelativeTime), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_AtRelativeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_AtRelativeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtEndDistance_MetaData[] = {
		{ "Category", "AIRandomByDistancePercentagesAtTime" },
		{ "ModuleRelativePath", "Public/AIRandomByDistancePercentagesAtTime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtEndDistance = { "PercentageAtEndDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIRandomByDistancePercentagesAtTime, PercentageAtEndDistance), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtEndDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtEndDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtStartDistance_MetaData[] = {
		{ "Category", "AIRandomByDistancePercentagesAtTime" },
		{ "ModuleRelativePath", "Public/AIRandomByDistancePercentagesAtTime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtStartDistance = { "PercentageAtStartDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIRandomByDistancePercentagesAtTime, PercentageAtStartDistance), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtStartDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_AtRelativeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtEndDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::NewProp_PercentageAtStartDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"AIRandomByDistancePercentagesAtTime",
		sizeof(FAIRandomByDistancePercentagesAtTime),
		alignof(FAIRandomByDistancePercentagesAtTime),
		Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIRandomByDistancePercentagesAtTime"), sizeof(FAIRandomByDistancePercentagesAtTime), Get_Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIRandomByDistancePercentagesAtTime_Hash() { return 892084167U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
