// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/LoginJsonMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoginJsonMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FLoginJsonMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FLoginJsonMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FLoginJsonMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginJsonMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("LoginJsonMessage"), sizeof(FLoginJsonMessage), Get_Z_Construct_UScriptStruct_FLoginJsonMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FLoginJsonMessage>()
{
	return FLoginJsonMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoginJsonMessage(FLoginJsonMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("LoginJsonMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFLoginJsonMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFLoginJsonMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoginJsonMessage")),new UScriptStruct::TCppStructOps<FLoginJsonMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFLoginJsonMessage;
	struct Z_Construct_UScriptStruct_FLoginJsonMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNewAccount_MetaData[];
#endif
		static void NewProp_IsNewAccount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNewAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoginType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoginJson;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoginJsonMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginJsonMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_IsNewAccount_MetaData[] = {
		{ "Category", "LoginJsonMessage" },
		{ "ModuleRelativePath", "Public/LoginJsonMessage.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_IsNewAccount_SetBit(void* Obj)
	{
		((FLoginJsonMessage*)Obj)->IsNewAccount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_IsNewAccount = { "IsNewAccount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoginJsonMessage), &Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_IsNewAccount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_IsNewAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_IsNewAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_RoleID_MetaData[] = {
		{ "Category", "LoginJsonMessage" },
		{ "ModuleRelativePath", "Public/LoginJsonMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_RoleID = { "RoleID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginJsonMessage, RoleID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_RoleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_RoleID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginType_MetaData[] = {
		{ "Category", "LoginJsonMessage" },
		{ "ModuleRelativePath", "Public/LoginJsonMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginType = { "LoginType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginJsonMessage, LoginType), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginJson_MetaData[] = {
		{ "Category", "LoginJsonMessage" },
		{ "ModuleRelativePath", "Public/LoginJsonMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginJson = { "LoginJson", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginJsonMessage, LoginJson), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginJson_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_IsNewAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_RoleID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::NewProp_LoginJson,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"LoginJsonMessage",
		sizeof(FLoginJsonMessage),
		alignof(FLoginJsonMessage),
		Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoginJsonMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoginJsonMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoginJsonMessage"), sizeof(FLoginJsonMessage), Get_Z_Construct_UScriptStruct_FLoginJsonMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoginJsonMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoginJsonMessage_Hash() { return 3017337287U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
