// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/OrderDoneMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrderDoneMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FOrderDoneMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FOrderDoneMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FOrderDoneMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrderDoneMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("OrderDoneMessage"), sizeof(FOrderDoneMessage), Get_Z_Construct_UScriptStruct_FOrderDoneMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FOrderDoneMessage>()
{
	return FOrderDoneMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOrderDoneMessage(FOrderDoneMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("OrderDoneMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFOrderDoneMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFOrderDoneMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OrderDoneMessage")),new UScriptStruct::TCppStructOps<FOrderDoneMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFOrderDoneMessage;
	struct Z_Construct_UScriptStruct_FOrderDoneMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrderDoneMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrderDoneMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderChannel_MetaData[] = {
		{ "Category", "OrderDoneMessage" },
		{ "ModuleRelativePath", "Public/OrderDoneMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderChannel = { "OrderChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrderDoneMessage, OrderChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderId_MetaData[] = {
		{ "Category", "OrderDoneMessage" },
		{ "ModuleRelativePath", "Public/OrderDoneMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrderDoneMessage, OrderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "OrderDoneMessage" },
		{ "ModuleRelativePath", "Public/OrderDoneMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrderDoneMessage, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::NewProp_Code,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"OrderDoneMessage",
		sizeof(FOrderDoneMessage),
		alignof(FOrderDoneMessage),
		Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOrderDoneMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOrderDoneMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OrderDoneMessage"), sizeof(FOrderDoneMessage), Get_Z_Construct_UScriptStruct_FOrderDoneMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOrderDoneMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOrderDoneMessage_Hash() { return 3551861178U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
