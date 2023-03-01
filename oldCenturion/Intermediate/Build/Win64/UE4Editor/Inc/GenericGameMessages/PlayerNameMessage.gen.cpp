// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/PlayerNameMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerNameMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerNameMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FPlayerNameMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPlayerNameMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerNameMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("PlayerNameMessage"), sizeof(FPlayerNameMessage), Get_Z_Construct_UScriptStruct_FPlayerNameMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FPlayerNameMessage>()
{
	return FPlayerNameMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerNameMessage(FPlayerNameMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("PlayerNameMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFPlayerNameMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFPlayerNameMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerNameMessage")),new UScriptStruct::TCppStructOps<FPlayerNameMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFPlayerNameMessage;
	struct Z_Construct_UScriptStruct_FPlayerNameMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerNameMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerNameMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlayerNameMessage" },
		{ "ModuleRelativePath", "Public/PlayerNameMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerNameMessage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"PlayerNameMessage",
		sizeof(FPlayerNameMessage),
		alignof(FPlayerNameMessage),
		Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerNameMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerNameMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerNameMessage"), sizeof(FPlayerNameMessage), Get_Z_Construct_UScriptStruct_FPlayerNameMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerNameMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerNameMessage_Hash() { return 1289582983U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
