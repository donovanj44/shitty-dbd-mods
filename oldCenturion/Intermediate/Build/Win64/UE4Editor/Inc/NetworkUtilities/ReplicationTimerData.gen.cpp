// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/ReplicationTimerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationTimerData() {}
// Cross Module References
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FReplicationTimerData();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
	NETWORKUTILITIES_API UEnum* Z_Construct_UEnum_NetworkUtilities_ETimerState();
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFloat_NetQuantize8();
// End Cross Module References
class UScriptStruct* FReplicationTimerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NETWORKUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FReplicationTimerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicationTimerData, Z_Construct_UPackage__Script_NetworkUtilities(), TEXT("ReplicationTimerData"), sizeof(FReplicationTimerData), Get_Z_Construct_UScriptStruct_FReplicationTimerData_Hash());
	}
	return Singleton;
}
template<> NETWORKUTILITIES_API UScriptStruct* StaticStruct<FReplicationTimerData>()
{
	return FReplicationTimerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicationTimerData(FReplicationTimerData::StaticStruct, TEXT("/Script/NetworkUtilities"), TEXT("ReplicationTimerData"), false, nullptr, nullptr);
static struct FScriptStruct_NetworkUtilities_StaticRegisterNativesFReplicationTimerData
{
	FScriptStruct_NetworkUtilities_StaticRegisterNativesFReplicationTimerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicationTimerData")),new UScriptStruct::TCppStructOps<FReplicationTimerData>);
	}
} ScriptStruct_NetworkUtilities_StaticRegisterNativesFReplicationTimerData;
	struct Z_Construct_UScriptStruct_FReplicationTimerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingTimePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemainingTimePercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationTimerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplicationTimerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicationTimerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationTimerData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicationTimerData, State), Z_Construct_UEnum_NetworkUtilities_ETimerState, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_RemainingTimePercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationTimerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_RemainingTimePercent = { "RemainingTimePercent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicationTimerData, RemainingTimePercent), Z_Construct_UScriptStruct_FFloat_NetQuantize8, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_RemainingTimePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_RemainingTimePercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationTimerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicationTimerData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Timestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationTimerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicationTimerData, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Timestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicationTimerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_RemainingTimePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicationTimerData_Statics::NewProp_Timestamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicationTimerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
		nullptr,
		&NewStructOps,
		"ReplicationTimerData",
		sizeof(FReplicationTimerData),
		alignof(FReplicationTimerData),
		Z_Construct_UScriptStruct_FReplicationTimerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationTimerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicationTimerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicationTimerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicationTimerData"), sizeof(FReplicationTimerData), Get_Z_Construct_UScriptStruct_FReplicationTimerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicationTimerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicationTimerData_Hash() { return 1839335149U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
