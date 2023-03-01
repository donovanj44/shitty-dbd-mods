// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/SDKEndMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDKEndMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSDKEndMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FSDKEndMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSDKEndMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSDKEndMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("SDKEndMessage"), sizeof(FSDKEndMessage), Get_Z_Construct_UScriptStruct_FSDKEndMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FSDKEndMessage>()
{
	return FSDKEndMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSDKEndMessage(FSDKEndMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("SDKEndMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFSDKEndMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFSDKEndMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SDKEndMessage")),new UScriptStruct::TCppStructOps<FSDKEndMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFSDKEndMessage;
	struct Z_Construct_UScriptStruct_FSDKEndMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSDKEndMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SDKEndMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSDKEndMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSDKEndMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSDKEndMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"SDKEndMessage",
		sizeof(FSDKEndMessage),
		alignof(FSDKEndMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSDKEndMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDKEndMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSDKEndMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSDKEndMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SDKEndMessage"), sizeof(FSDKEndMessage), Get_Z_Construct_UScriptStruct_FSDKEndMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSDKEndMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSDKEndMessage_Hash() { return 1185029778U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
