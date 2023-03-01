// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/PatchFailMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatchFailMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPatchFailMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FPatchFailMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPatchFailMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatchFailMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("PatchFailMessage"), sizeof(FPatchFailMessage), Get_Z_Construct_UScriptStruct_FPatchFailMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FPatchFailMessage>()
{
	return FPatchFailMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatchFailMessage(FPatchFailMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("PatchFailMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFPatchFailMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFPatchFailMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatchFailMessage")),new UScriptStruct::TCppStructOps<FPatchFailMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFPatchFailMessage;
	struct Z_Construct_UScriptStruct_FPatchFailMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatchFailMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PatchFailMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatchFailMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatchFailMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatchFailMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"PatchFailMessage",
		sizeof(FPatchFailMessage),
		alignof(FPatchFailMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatchFailMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchFailMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatchFailMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatchFailMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatchFailMessage"), sizeof(FPatchFailMessage), Get_Z_Construct_UScriptStruct_FPatchFailMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatchFailMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatchFailMessage_Hash() { return 1792639217U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
