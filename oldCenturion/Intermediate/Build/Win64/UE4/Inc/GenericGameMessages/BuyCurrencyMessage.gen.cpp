// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/BuyCurrencyMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuyCurrencyMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FBuyCurrencyMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FBuyCurrencyMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FBuyCurrencyMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuyCurrencyMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("BuyCurrencyMessage"), sizeof(FBuyCurrencyMessage), Get_Z_Construct_UScriptStruct_FBuyCurrencyMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FBuyCurrencyMessage>()
{
	return FBuyCurrencyMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuyCurrencyMessage(FBuyCurrencyMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("BuyCurrencyMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFBuyCurrencyMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFBuyCurrencyMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuyCurrencyMessage")),new UScriptStruct::TCppStructOps<FBuyCurrencyMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFBuyCurrencyMessage;
	struct Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuyCurrencyMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuyCurrencyMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "BuyCurrencyMessage" },
		{ "ModuleRelativePath", "Public/BuyCurrencyMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuyCurrencyMessage, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"BuyCurrencyMessage",
		sizeof(FBuyCurrencyMessage),
		alignof(FBuyCurrencyMessage),
		Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuyCurrencyMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuyCurrencyMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuyCurrencyMessage"), sizeof(FBuyCurrencyMessage), Get_Z_Construct_UScriptStruct_FBuyCurrencyMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuyCurrencyMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuyCurrencyMessage_Hash() { return 2632771900U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
