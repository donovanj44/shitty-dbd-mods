// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/SkuDetailsMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkuDetailsMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSkuDetailsMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FSkuDetailsMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSkuDetailsMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkuDetailsMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("SkuDetailsMessage"), sizeof(FSkuDetailsMessage), Get_Z_Construct_UScriptStruct_FSkuDetailsMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FSkuDetailsMessage>()
{
	return FSkuDetailsMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkuDetailsMessage(FSkuDetailsMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("SkuDetailsMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFSkuDetailsMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFSkuDetailsMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkuDetailsMessage")),new UScriptStruct::TCppStructOps<FSkuDetailsMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFSkuDetailsMessage;
	struct Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundlePrices_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BundlePrices;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BundlePrices_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BundlePrices_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkuDetailsMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkuDetailsMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewProp_BundlePrices_MetaData[] = {
		{ "Category", "SkuDetailsMessage" },
		{ "ModuleRelativePath", "Public/SkuDetailsMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewProp_BundlePrices = { "BundlePrices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkuDetailsMessage, BundlePrices), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewProp_BundlePrices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewProp_BundlePrices_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewProp_BundlePrices_Key_KeyProp = { "BundlePrices_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewProp_BundlePrices_ValueProp = { "BundlePrices", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewProp_BundlePrices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewProp_BundlePrices_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::NewProp_BundlePrices_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"SkuDetailsMessage",
		sizeof(FSkuDetailsMessage),
		alignof(FSkuDetailsMessage),
		Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkuDetailsMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkuDetailsMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkuDetailsMessage"), sizeof(FSkuDetailsMessage), Get_Z_Construct_UScriptStruct_FSkuDetailsMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkuDetailsMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkuDetailsMessage_Hash() { return 2765843292U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
