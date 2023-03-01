// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/ForceLogoutMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceLogoutMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FForceLogoutMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FForceLogoutMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FForceLogoutMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceLogoutMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("ForceLogoutMessage"), sizeof(FForceLogoutMessage), Get_Z_Construct_UScriptStruct_FForceLogoutMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FForceLogoutMessage>()
{
	return FForceLogoutMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceLogoutMessage(FForceLogoutMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("ForceLogoutMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFForceLogoutMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFForceLogoutMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceLogoutMessage")),new UScriptStruct::TCppStructOps<FForceLogoutMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFForceLogoutMessage;
	struct Z_Construct_UScriptStruct_FForceLogoutMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceLogoutMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ForceLogoutMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceLogoutMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceLogoutMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceLogoutMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"ForceLogoutMessage",
		sizeof(FForceLogoutMessage),
		alignof(FForceLogoutMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceLogoutMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceLogoutMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceLogoutMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceLogoutMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceLogoutMessage"), sizeof(FForceLogoutMessage), Get_Z_Construct_UScriptStruct_FForceLogoutMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForceLogoutMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceLogoutMessage_Hash() { return 3727621830U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
