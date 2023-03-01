// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/InteractionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FInteractionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FInteractionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("InteractionAnalytics"), sizeof(FInteractionAnalytics), Get_Z_Construct_UScriptStruct_FInteractionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FInteractionAnalytics>()
{
	return FInteractionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionAnalytics(FInteractionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("InteractionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFInteractionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFInteractionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionAnalytics")),new UScriptStruct::TCppStructOps<FInteractionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFInteractionAnalytics;
	struct Z_Construct_UScriptStruct_FInteractionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDeniedByErrorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractionDeniedByErrorCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDeniedByTimeoutCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractionDeniedByTimeoutCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDeniedByRaceConditionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractionDeniedByRaceConditionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionAuthorizedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractionAuthorizedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionPredictedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractionPredictedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptionFailureCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterruptionFailureCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptionSuccessCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterruptionSuccessCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByErrorCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByErrorCount = { "InteractionDeniedByErrorCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionAnalytics, InteractionDeniedByErrorCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByErrorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByErrorCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByTimeoutCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByTimeoutCount = { "InteractionDeniedByTimeoutCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionAnalytics, InteractionDeniedByTimeoutCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByTimeoutCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByTimeoutCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByRaceConditionCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByRaceConditionCount = { "InteractionDeniedByRaceConditionCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionAnalytics, InteractionDeniedByRaceConditionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByRaceConditionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByRaceConditionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionAuthorizedCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionAuthorizedCount = { "InteractionAuthorizedCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionAnalytics, InteractionAuthorizedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionAuthorizedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionAuthorizedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionPredictedCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionPredictedCount = { "InteractionPredictedCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionAnalytics, InteractionPredictedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionPredictedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionPredictedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionFailureCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionFailureCount = { "InterruptionFailureCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionAnalytics, InterruptionFailureCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionFailureCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionFailureCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionSuccessCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionSuccessCount = { "InterruptionSuccessCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionAnalytics, InterruptionSuccessCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionSuccessCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionSuccessCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionAnalytics, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByErrorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByTimeoutCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionDeniedByRaceConditionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionAuthorizedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InteractionPredictedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionFailureCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_InterruptionSuccessCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::NewProp_Role_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"InteractionAnalytics",
		sizeof(FInteractionAnalytics),
		alignof(FInteractionAnalytics),
		Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionAnalytics"), sizeof(FInteractionAnalytics), Get_Z_Construct_UScriptStruct_FInteractionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionAnalytics_Hash() { return 3330437499U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
