// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/TutorialEndMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialEndMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialEndMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FTutorialEndMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FTutorialEndMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialEndMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("TutorialEndMessage"), sizeof(FTutorialEndMessage), Get_Z_Construct_UScriptStruct_FTutorialEndMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FTutorialEndMessage>()
{
	return FTutorialEndMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialEndMessage(FTutorialEndMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("TutorialEndMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFTutorialEndMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFTutorialEndMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialEndMessage")),new UScriptStruct::TCppStructOps<FTutorialEndMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFTutorialEndMessage;
	struct Z_Construct_UScriptStruct_FTutorialEndMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialEndMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialEndMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialEndMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialEndMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialEndMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"TutorialEndMessage",
		sizeof(FTutorialEndMessage),
		alignof(FTutorialEndMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialEndMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialEndMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialEndMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialEndMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialEndMessage"), sizeof(FTutorialEndMessage), Get_Z_Construct_UScriptStruct_FTutorialEndMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialEndMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialEndMessage_Hash() { return 1537486885U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
