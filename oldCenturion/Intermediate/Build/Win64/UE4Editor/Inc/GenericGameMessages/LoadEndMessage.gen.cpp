// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/LoadEndMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadEndMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadEndMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FLoadEndMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FLoadEndMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadEndMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("LoadEndMessage"), sizeof(FLoadEndMessage), Get_Z_Construct_UScriptStruct_FLoadEndMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FLoadEndMessage>()
{
	return FLoadEndMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadEndMessage(FLoadEndMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("LoadEndMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFLoadEndMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFLoadEndMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadEndMessage")),new UScriptStruct::TCppStructOps<FLoadEndMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFLoadEndMessage;
	struct Z_Construct_UScriptStruct_FLoadEndMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadEndMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadEndMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadEndMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadEndMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadEndMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"LoadEndMessage",
		sizeof(FLoadEndMessage),
		alignof(FLoadEndMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadEndMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadEndMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadEndMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadEndMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadEndMessage"), sizeof(FLoadEndMessage), Get_Z_Construct_UScriptStruct_FLoadEndMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadEndMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadEndMessage_Hash() { return 3888295837U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
