// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetentionRewardsUtilities/Public/RetentionCalendar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetentionCalendar() {}
// Cross Module References
	RETENTIONREWARDSUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FRetentionCalendar();
	UPackage* Z_Construct_UPackage__Script_RetentionRewardsUtilities();
	RETENTIONREWARDSUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FRetentionReward();
	RETENTIONREWARDSUTILITIES_API UEnum* Z_Construct_UEnum_RetentionRewardsUtilities_EClaimType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FRetentionCalendar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RETENTIONREWARDSUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FRetentionCalendar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRetentionCalendar, Z_Construct_UPackage__Script_RetentionRewardsUtilities(), TEXT("RetentionCalendar"), sizeof(FRetentionCalendar), Get_Z_Construct_UScriptStruct_FRetentionCalendar_Hash());
	}
	return Singleton;
}
template<> RETENTIONREWARDSUTILITIES_API UScriptStruct* StaticStruct<FRetentionCalendar>()
{
	return FRetentionCalendar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRetentionCalendar(FRetentionCalendar::StaticStruct, TEXT("/Script/RetentionRewardsUtilities"), TEXT("RetentionCalendar"), false, nullptr, nullptr);
static struct FScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFRetentionCalendar
{
	FScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFRetentionCalendar()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RetentionCalendar")),new UScriptStruct::TCppStructOps<FRetentionCalendar>);
	}
} ScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFRetentionCalendar;
	struct Z_Construct_UScriptStruct_FRetentionCalendar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClaimType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClaimType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionCalendar_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RetentionCalendar.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRetentionCalendar>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Rewards_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetentionCalendar.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetentionCalendar, Rewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Rewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Rewards_Inner = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRetentionReward, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_ClaimType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetentionCalendar.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_ClaimType = { "ClaimType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetentionCalendar, ClaimType), Z_Construct_UEnum_RetentionRewardsUtilities_EClaimType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_ClaimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_ClaimType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_ClaimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetentionCalendar.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetentionCalendar, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetentionCalendar.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetentionCalendar, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetentionCalendar.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetentionCalendar, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRetentionCalendar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Rewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Rewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_ClaimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_ClaimType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionCalendar_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRetentionCalendar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RetentionRewardsUtilities,
		nullptr,
		&NewStructOps,
		"RetentionCalendar",
		sizeof(FRetentionCalendar),
		alignof(FRetentionCalendar),
		Z_Construct_UScriptStruct_FRetentionCalendar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionCalendar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRetentionCalendar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRetentionCalendar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RetentionRewardsUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RetentionCalendar"), sizeof(FRetentionCalendar), Get_Z_Construct_UScriptStruct_FRetentionCalendar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRetentionCalendar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRetentionCalendar_Hash() { return 3829836687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
