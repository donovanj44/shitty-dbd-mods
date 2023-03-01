// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InboxMessageUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInboxMessageUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ONLINEMESSAGESUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FClaimableInboxMessage();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInboxMessageUIState();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInboxMessageUIType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FInboxMessageUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FInboxMessageUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInboxMessageUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("InboxMessageUIData"), sizeof(FInboxMessageUIData), Get_Z_Construct_UScriptStruct_FInboxMessageUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FInboxMessageUIData>()
{
	return FInboxMessageUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInboxMessageUIData(FInboxMessageUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("InboxMessageUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFInboxMessageUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFInboxMessageUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InboxMessageUIData")),new UScriptStruct::TCppStructOps<FInboxMessageUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFInboxMessageUIData;
	struct Z_Construct_UScriptStruct_FInboxMessageUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedClaimable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachedClaimable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MessageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MessageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReceivedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InboxMessageUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInboxMessageUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_AttachedClaimable_MetaData[] = {
		{ "Category", "InboxMessageUIData" },
		{ "ModuleRelativePath", "Public/InboxMessageUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_AttachedClaimable = { "AttachedClaimable", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageUIData, AttachedClaimable), Z_Construct_UScriptStruct_FClaimableInboxMessage, METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_AttachedClaimable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_AttachedClaimable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageState_MetaData[] = {
		{ "Category", "InboxMessageUIData" },
		{ "ModuleRelativePath", "Public/InboxMessageUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageState = { "MessageState", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageUIData, MessageState), Z_Construct_UEnum_DeadByDaylight_EInboxMessageUIState, METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageBody_MetaData[] = {
		{ "Category", "InboxMessageUIData" },
		{ "ModuleRelativePath", "Public/InboxMessageUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageBody = { "MessageBody", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageUIData, MessageBody), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageTitle_MetaData[] = {
		{ "Category", "InboxMessageUIData" },
		{ "ModuleRelativePath", "Public/InboxMessageUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageTitle = { "MessageTitle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageUIData, MessageTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageType_MetaData[] = {
		{ "Category", "InboxMessageUIData" },
		{ "ModuleRelativePath", "Public/InboxMessageUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageUIData, MessageType), Z_Construct_UEnum_DeadByDaylight_EInboxMessageUIType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_ReceivedTime_MetaData[] = {
		{ "Category", "InboxMessageUIData" },
		{ "ModuleRelativePath", "Public/InboxMessageUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_ReceivedTime = { "ReceivedTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageUIData, ReceivedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_ReceivedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_ReceivedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageId_MetaData[] = {
		{ "Category", "InboxMessageUIData" },
		{ "ModuleRelativePath", "Public/InboxMessageUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageId = { "MessageId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageUIData, MessageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_AttachedClaimable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_ReceivedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::NewProp_MessageId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"InboxMessageUIData",
		sizeof(FInboxMessageUIData),
		alignof(FInboxMessageUIData),
		Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInboxMessageUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InboxMessageUIData"), sizeof(FInboxMessageUIData), Get_Z_Construct_UScriptStruct_FInboxMessageUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInboxMessageUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInboxMessageUIData_Hash() { return 604884330U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
