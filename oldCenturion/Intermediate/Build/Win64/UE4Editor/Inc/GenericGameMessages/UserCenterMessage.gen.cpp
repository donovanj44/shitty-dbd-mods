// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/UserCenterMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserCenterMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FUserCenterMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FUserCenterMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FUserCenterMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserCenterMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("UserCenterMessage"), sizeof(FUserCenterMessage), Get_Z_Construct_UScriptStruct_FUserCenterMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FUserCenterMessage>()
{
	return FUserCenterMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserCenterMessage(FUserCenterMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("UserCenterMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFUserCenterMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFUserCenterMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserCenterMessage")),new UScriptStruct::TCppStructOps<FUserCenterMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFUserCenterMessage;
	struct Z_Construct_UScriptStruct_FUserCenterMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserCenterMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserCenterMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserCenterMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserCenterMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserCenterMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"UserCenterMessage",
		sizeof(FUserCenterMessage),
		alignof(FUserCenterMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserCenterMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCenterMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserCenterMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserCenterMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserCenterMessage"), sizeof(FUserCenterMessage), Get_Z_Construct_UScriptStruct_FUserCenterMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserCenterMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserCenterMessage_Hash() { return 1910822980U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
