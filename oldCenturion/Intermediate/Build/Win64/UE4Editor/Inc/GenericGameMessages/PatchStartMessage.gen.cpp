// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/PatchStartMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatchStartMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPatchStartMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FPatchStartMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPatchStartMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatchStartMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("PatchStartMessage"), sizeof(FPatchStartMessage), Get_Z_Construct_UScriptStruct_FPatchStartMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FPatchStartMessage>()
{
	return FPatchStartMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatchStartMessage(FPatchStartMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("PatchStartMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFPatchStartMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFPatchStartMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatchStartMessage")),new UScriptStruct::TCppStructOps<FPatchStartMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFPatchStartMessage;
	struct Z_Construct_UScriptStruct_FPatchStartMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatchStartMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PatchStartMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatchStartMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatchStartMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatchStartMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"PatchStartMessage",
		sizeof(FPatchStartMessage),
		alignof(FPatchStartMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatchStartMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchStartMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatchStartMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatchStartMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatchStartMessage"), sizeof(FPatchStartMessage), Get_Z_Construct_UScriptStruct_FPatchStartMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatchStartMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatchStartMessage_Hash() { return 1988159388U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
