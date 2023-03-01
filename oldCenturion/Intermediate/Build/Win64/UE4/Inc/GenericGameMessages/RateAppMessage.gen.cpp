// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/RateAppMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRateAppMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FRateAppMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FRateAppMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FRateAppMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRateAppMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("RateAppMessage"), sizeof(FRateAppMessage), Get_Z_Construct_UScriptStruct_FRateAppMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FRateAppMessage>()
{
	return FRateAppMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRateAppMessage(FRateAppMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("RateAppMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFRateAppMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFRateAppMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RateAppMessage")),new UScriptStruct::TCppStructOps<FRateAppMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFRateAppMessage;
	struct Z_Construct_UScriptStruct_FRateAppMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRateAppMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RateAppMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRateAppMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRateAppMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRateAppMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"RateAppMessage",
		sizeof(FRateAppMessage),
		alignof(FRateAppMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRateAppMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRateAppMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRateAppMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRateAppMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RateAppMessage"), sizeof(FRateAppMessage), Get_Z_Construct_UScriptStruct_FRateAppMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRateAppMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRateAppMessage_Hash() { return 3946477448U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
