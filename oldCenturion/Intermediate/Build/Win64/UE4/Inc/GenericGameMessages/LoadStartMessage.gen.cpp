// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/LoadStartMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadStartMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadStartMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FLoadStartMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FLoadStartMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadStartMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("LoadStartMessage"), sizeof(FLoadStartMessage), Get_Z_Construct_UScriptStruct_FLoadStartMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FLoadStartMessage>()
{
	return FLoadStartMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadStartMessage(FLoadStartMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("LoadStartMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFLoadStartMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFLoadStartMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadStartMessage")),new UScriptStruct::TCppStructOps<FLoadStartMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFLoadStartMessage;
	struct Z_Construct_UScriptStruct_FLoadStartMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadStartMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadStartMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadStartMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadStartMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadStartMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"LoadStartMessage",
		sizeof(FLoadStartMessage),
		alignof(FLoadStartMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadStartMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadStartMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadStartMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadStartMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadStartMessage"), sizeof(FLoadStartMessage), Get_Z_Construct_UScriptStruct_FLoadStartMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadStartMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadStartMessage_Hash() { return 1430352224U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
