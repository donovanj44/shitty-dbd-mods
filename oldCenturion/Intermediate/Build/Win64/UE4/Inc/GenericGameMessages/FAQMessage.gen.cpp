// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/FAQMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAQMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FFAQMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FFAQMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FFAQMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFAQMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("FAQMessage"), sizeof(FFAQMessage), Get_Z_Construct_UScriptStruct_FFAQMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FFAQMessage>()
{
	return FFAQMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFAQMessage(FFAQMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("FAQMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFFAQMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFFAQMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FAQMessage")),new UScriptStruct::TCppStructOps<FFAQMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFFAQMessage;
	struct Z_Construct_UScriptStruct_FFAQMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFAQMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FAQMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFAQMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFAQMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFAQMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"FAQMessage",
		sizeof(FFAQMessage),
		alignof(FFAQMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFAQMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFAQMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFAQMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFAQMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FAQMessage"), sizeof(FFAQMessage), Get_Z_Construct_UScriptStruct_FFAQMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFAQMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFAQMessage_Hash() { return 359409872U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
