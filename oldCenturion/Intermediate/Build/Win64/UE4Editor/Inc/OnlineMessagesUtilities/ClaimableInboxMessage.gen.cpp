// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineMessagesUtilities/Public/ClaimableInboxMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClaimableInboxMessage() {}
// Cross Module References
	ONLINEMESSAGESUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FClaimableInboxMessage();
	UPackage* Z_Construct_UPackage__Script_OnlineMessagesUtilities();
	ONLINEMESSAGESUTILITIES_API UEnum* Z_Construct_UEnum_OnlineMessagesUtilities_EClaimableInboxMessageState();
	ONLINEMESSAGESUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FClaimableInboxMessageData();
// End Cross Module References
class UScriptStruct* FClaimableInboxMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINEMESSAGESUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FClaimableInboxMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClaimableInboxMessage, Z_Construct_UPackage__Script_OnlineMessagesUtilities(), TEXT("ClaimableInboxMessage"), sizeof(FClaimableInboxMessage), Get_Z_Construct_UScriptStruct_FClaimableInboxMessage_Hash());
	}
	return Singleton;
}
template<> ONLINEMESSAGESUTILITIES_API UScriptStruct* StaticStruct<FClaimableInboxMessage>()
{
	return FClaimableInboxMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClaimableInboxMessage(FClaimableInboxMessage::StaticStruct, TEXT("/Script/OnlineMessagesUtilities"), TEXT("ClaimableInboxMessage"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineMessagesUtilities_StaticRegisterNativesFClaimableInboxMessage
{
	FScriptStruct_OnlineMessagesUtilities_StaticRegisterNativesFClaimableInboxMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClaimableInboxMessage")),new UScriptStruct::TCppStructOps<FClaimableInboxMessage>);
	}
} ScriptStruct_OnlineMessagesUtilities_StaticRegisterNativesFClaimableInboxMessage;
	struct Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClaimableInboxMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClaimableInboxMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_State_MetaData[] = {
		{ "Category", "ClaimableInboxMessage" },
		{ "ModuleRelativePath", "Public/ClaimableInboxMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClaimableInboxMessage, State), Z_Construct_UEnum_OnlineMessagesUtilities_EClaimableInboxMessageState, METADATA_PARAMS(Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "ClaimableInboxMessage" },
		{ "ModuleRelativePath", "Public/ClaimableInboxMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClaimableInboxMessage, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClaimableInboxMessageData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::NewProp_Data_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineMessagesUtilities,
		nullptr,
		&NewStructOps,
		"ClaimableInboxMessage",
		sizeof(FClaimableInboxMessage),
		alignof(FClaimableInboxMessage),
		Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClaimableInboxMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClaimableInboxMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineMessagesUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClaimableInboxMessage"), sizeof(FClaimableInboxMessage), Get_Z_Construct_UScriptStruct_FClaimableInboxMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClaimableInboxMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClaimableInboxMessage_Hash() { return 3575051462U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
