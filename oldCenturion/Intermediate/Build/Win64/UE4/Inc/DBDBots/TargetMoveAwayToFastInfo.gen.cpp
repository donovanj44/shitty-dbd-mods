// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/TargetMoveAwayToFastInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetMoveAwayToFastInfo() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAIDetectedStimulus();
// End Cross Module References
class UScriptStruct* FTargetMoveAwayToFastInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo, Z_Construct_UPackage__Script_DBDBots(), TEXT("TargetMoveAwayToFastInfo"), sizeof(FTargetMoveAwayToFastInfo), Get_Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FTargetMoveAwayToFastInfo>()
{
	return FTargetMoveAwayToFastInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetMoveAwayToFastInfo(FTargetMoveAwayToFastInfo::StaticStruct, TEXT("/Script/DBDBots"), TEXT("TargetMoveAwayToFastInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFTargetMoveAwayToFastInfo
{
	FScriptStruct_DBDBots_StaticRegisterNativesFTargetMoveAwayToFastInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetMoveAwayToFastInfo")),new UScriptStruct::TCppStructOps<FTargetMoveAwayToFastInfo>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFTargetMoveAwayToFastInfo;
	struct Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownUntilTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownUntilTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccumulatedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TargetMoveAwayToFastInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetMoveAwayToFastInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_Stimulus_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetMoveAwayToFastInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetMoveAwayToFastInfo, Stimulus), Z_Construct_UScriptStruct_FAIDetectedStimulus, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_Stimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_Stimulus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_CooldownUntilTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetMoveAwayToFastInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_CooldownUntilTime = { "CooldownUntilTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetMoveAwayToFastInfo, CooldownUntilTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_CooldownUntilTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_CooldownUntilTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_AccumulatedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetMoveAwayToFastInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_AccumulatedTime = { "AccumulatedTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetMoveAwayToFastInfo, AccumulatedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_AccumulatedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_AccumulatedTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_CooldownUntilTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::NewProp_AccumulatedTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"TargetMoveAwayToFastInfo",
		sizeof(FTargetMoveAwayToFastInfo),
		alignof(FTargetMoveAwayToFastInfo),
		Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetMoveAwayToFastInfo"), sizeof(FTargetMoveAwayToFastInfo), Get_Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetMoveAwayToFastInfo_Hash() { return 3411168212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
