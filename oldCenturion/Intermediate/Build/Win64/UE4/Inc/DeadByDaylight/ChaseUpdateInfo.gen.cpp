// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ChaseUpdateInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaseUpdateInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FChaseUpdateInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTargetFocusTimer();
// End Cross Module References
class UScriptStruct* FChaseUpdateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FChaseUpdateInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaseUpdateInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ChaseUpdateInfo"), sizeof(FChaseUpdateInfo), Get_Z_Construct_UScriptStruct_FChaseUpdateInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FChaseUpdateInfo>()
{
	return FChaseUpdateInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaseUpdateInfo(FChaseUpdateInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ChaseUpdateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFChaseUpdateInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFChaseUpdateInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaseUpdateInfo")),new UScriptStruct::TCppStructOps<FChaseUpdateInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFChaseUpdateInfo;
	struct Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseStartHealthStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChaseStartHealthStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChaseStartHealthStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerTravelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillerTravelDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorTravelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurvivorTravelDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChaseTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChaseUpdateInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaseUpdateInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseStartHealthStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaseUpdateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseStartHealthStatus = { "ChaseStartHealthStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaseUpdateInfo, ChaseStartHealthStatus), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseStartHealthStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseStartHealthStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseStartHealthStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_KillerTravelDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaseUpdateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_KillerTravelDistance = { "KillerTravelDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaseUpdateInfo, KillerTravelDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_KillerTravelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_KillerTravelDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_SurvivorTravelDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaseUpdateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_SurvivorTravelDistance = { "SurvivorTravelDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaseUpdateInfo, SurvivorTravelDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_SurvivorTravelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_SurvivorTravelDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaseUpdateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseTimer = { "ChaseTimer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaseUpdateInfo, ChaseTimer), Z_Construct_UScriptStruct_FTargetFocusTimer, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseStartHealthStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseStartHealthStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_KillerTravelDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_SurvivorTravelDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::NewProp_ChaseTimer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ChaseUpdateInfo",
		sizeof(FChaseUpdateInfo),
		alignof(FChaseUpdateInfo),
		Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaseUpdateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaseUpdateInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaseUpdateInfo"), sizeof(FChaseUpdateInfo), Get_Z_Construct_UScriptStruct_FChaseUpdateInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaseUpdateInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaseUpdateInfo_Hash() { return 1637213992U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
