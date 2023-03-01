// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ContextEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FContextEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FContextEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FContextEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ContextEventData"), sizeof(FContextEventData), Get_Z_Construct_UScriptStruct_FContextEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FContextEventData>()
{
	return FContextEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FContextEventData(FContextEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ContextEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFContextEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFContextEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ContextEventData")),new UScriptStruct::TCppStructOps<FContextEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFContextEventData;
	struct Z_Construct_UScriptStruct_FContextEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextContextUid_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NextContextUid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextContextName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NextContextName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentContextUid_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CurrentContextUid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentContextName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentContextName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousContextName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviousContextName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextGroupUid_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ContextGroupUid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextGroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContextGroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_Timestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContextEventData, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextUid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextUid = { "NextContextUid", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContextEventData, NextContextUid), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextUid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextName = { "NextContextName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContextEventData, NextContextName), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextUid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextUid = { "CurrentContextUid", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContextEventData, CurrentContextUid), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextUid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextName = { "CurrentContextName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContextEventData, CurrentContextName), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_PreviousContextName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_PreviousContextName = { "PreviousContextName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContextEventData, PreviousContextName), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_PreviousContextName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_PreviousContextName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupUid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupUid = { "ContextGroupUid", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContextEventData, ContextGroupUid), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupUid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupName = { "ContextGroupName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContextEventData, ContextGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextUid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_NextContextName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextUid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_CurrentContextName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_PreviousContextName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupUid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextEventData_Statics::NewProp_ContextGroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ContextEventData",
		sizeof(FContextEventData),
		alignof(FContextEventData),
		Z_Construct_UScriptStruct_FContextEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContextEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContextEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FContextEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ContextEventData"), sizeof(FContextEventData), Get_Z_Construct_UScriptStruct_FContextEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FContextEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FContextEventData_Hash() { return 1935033490U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
