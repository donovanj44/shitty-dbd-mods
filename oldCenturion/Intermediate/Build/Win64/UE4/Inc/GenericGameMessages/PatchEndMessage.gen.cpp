// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/PatchEndMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatchEndMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPatchEndMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FPatchEndMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPatchEndMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatchEndMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("PatchEndMessage"), sizeof(FPatchEndMessage), Get_Z_Construct_UScriptStruct_FPatchEndMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FPatchEndMessage>()
{
	return FPatchEndMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatchEndMessage(FPatchEndMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("PatchEndMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFPatchEndMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFPatchEndMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatchEndMessage")),new UScriptStruct::TCppStructOps<FPatchEndMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFPatchEndMessage;
	struct Z_Construct_UScriptStruct_FPatchEndMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatchEndMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PatchEndMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatchEndMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatchEndMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatchEndMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"PatchEndMessage",
		sizeof(FPatchEndMessage),
		alignof(FPatchEndMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatchEndMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchEndMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatchEndMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatchEndMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatchEndMessage"), sizeof(FPatchEndMessage), Get_Z_Construct_UScriptStruct_FPatchEndMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatchEndMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatchEndMessage_Hash() { return 604034212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
