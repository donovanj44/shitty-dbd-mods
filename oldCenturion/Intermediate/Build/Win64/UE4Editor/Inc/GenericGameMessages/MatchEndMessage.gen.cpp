// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/MatchEndMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchEndMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FMatchEndMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FMatchEndMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FMatchEndMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchEndMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("MatchEndMessage"), sizeof(FMatchEndMessage), Get_Z_Construct_UScriptStruct_FMatchEndMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FMatchEndMessage>()
{
	return FMatchEndMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchEndMessage(FMatchEndMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("MatchEndMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFMatchEndMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFMatchEndMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchEndMessage")),new UScriptStruct::TCppStructOps<FMatchEndMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFMatchEndMessage;
	struct Z_Construct_UScriptStruct_FMatchEndMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchEndMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchEndMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchEndMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchEndMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchEndMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"MatchEndMessage",
		sizeof(FMatchEndMessage),
		alignof(FMatchEndMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchEndMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchEndMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchEndMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchEndMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchEndMessage"), sizeof(FMatchEndMessage), Get_Z_Construct_UScriptStruct_FMatchEndMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchEndMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchEndMessage_Hash() { return 3273478308U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif