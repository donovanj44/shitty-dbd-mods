// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineMessagesUtilities/Public/InboxMessageData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInboxMessageData() {}
// Cross Module References
	ONLINEMESSAGESUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageData();
	UPackage* Z_Construct_UPackage__Script_OnlineMessagesUtilities();
	ONLINEMESSAGESUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FClaimableInboxMessageData();
// End Cross Module References
class UScriptStruct* FInboxMessageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINEMESSAGESUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FInboxMessageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInboxMessageData, Z_Construct_UPackage__Script_OnlineMessagesUtilities(), TEXT("InboxMessageData"), sizeof(FInboxMessageData), Get_Z_Construct_UScriptStruct_FInboxMessageData_Hash());
	}
	return Singleton;
}
template<> ONLINEMESSAGESUTILITIES_API UScriptStruct* StaticStruct<FInboxMessageData>()
{
	return FInboxMessageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInboxMessageData(FInboxMessageData::StaticStruct, TEXT("/Script/OnlineMessagesUtilities"), TEXT("InboxMessageData"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineMessagesUtilities_StaticRegisterNativesFInboxMessageData
{
	FScriptStruct_OnlineMessagesUtilities_StaticRegisterNativesFInboxMessageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InboxMessageData")),new UScriptStruct::TCppStructOps<FInboxMessageData>);
	}
} ScriptStruct_OnlineMessagesUtilities_StaticRegisterNativesFInboxMessageData;
	struct Z_Construct_UScriptStruct_FInboxMessageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpireTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ExpireTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRead_MetaData[];
#endif
		static void NewProp_IsRead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreRewardsClaimed_MetaData[];
#endif
		static void NewProp_AreRewardsClaimed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AreRewardsClaimed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Claimable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Claimable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Claimable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivedTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReceivedTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecipientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RecipientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInboxMessageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ExpireTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ExpireTimestamp = { "ExpireTimestamp", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageData, ExpireTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ExpireTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ExpireTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_IsRead_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_IsRead_SetBit(void* Obj)
	{
		((FInboxMessageData*)Obj)->IsRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_IsRead = { "IsRead", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInboxMessageData), &Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_IsRead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_IsRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_IsRead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_AreRewardsClaimed_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_AreRewardsClaimed_SetBit(void* Obj)
	{
		((FInboxMessageData*)Obj)->AreRewardsClaimed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_AreRewardsClaimed = { "AreRewardsClaimed", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInboxMessageData), &Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_AreRewardsClaimed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_AreRewardsClaimed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_AreRewardsClaimed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Claimable_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Claimable = { "Claimable", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageData, Claimable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Claimable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Claimable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Claimable_Inner = { "Claimable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClaimableInboxMessageData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Body_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageData, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Subject_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageData, Subject), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Subject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ReceivedTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ReceivedTimestamp = { "ReceivedTimestamp", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageData, ReceivedTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ReceivedTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ReceivedTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_RecipientId_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_RecipientId = { "RecipientId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageData, RecipientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_RecipientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_RecipientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageData, Origin), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxMessageData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInboxMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ExpireTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_IsRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_AreRewardsClaimed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Claimable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Claimable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_ReceivedTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_RecipientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageData_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInboxMessageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineMessagesUtilities,
		nullptr,
		&NewStructOps,
		"InboxMessageData",
		sizeof(FInboxMessageData),
		alignof(FInboxMessageData),
		Z_Construct_UScriptStruct_FInboxMessageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInboxMessageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineMessagesUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InboxMessageData"), sizeof(FInboxMessageData), Get_Z_Construct_UScriptStruct_FInboxMessageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInboxMessageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInboxMessageData_Hash() { return 3308762105U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
