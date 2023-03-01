// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/PlayerLevelMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerLevelMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FPlayerLevelMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerLevelMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("PlayerLevelMessage"), sizeof(FPlayerLevelMessage), Get_Z_Construct_UScriptStruct_FPlayerLevelMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FPlayerLevelMessage>()
{
	return FPlayerLevelMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerLevelMessage(FPlayerLevelMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("PlayerLevelMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFPlayerLevelMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFPlayerLevelMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerLevelMessage")),new UScriptStruct::TCppStructOps<FPlayerLevelMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFPlayerLevelMessage;
	struct Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalXp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalXp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerLevelMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerLevelMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_TotalXp_MetaData[] = {
		{ "Category", "PlayerLevelMessage" },
		{ "ModuleRelativePath", "Public/PlayerLevelMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_TotalXp = { "TotalXp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelMessage, TotalXp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_TotalXp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_TotalXp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "PlayerLevelMessage" },
		{ "ModuleRelativePath", "Public/PlayerLevelMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelMessage, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_TotalXp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::NewProp_Level,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"PlayerLevelMessage",
		sizeof(FPlayerLevelMessage),
		alignof(FPlayerLevelMessage),
		Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerLevelMessage"), sizeof(FPlayerLevelMessage), Get_Z_Construct_UScriptStruct_FPlayerLevelMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerLevelMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelMessage_Hash() { return 2604643592U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
