// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGameMessages/Public/OpenCurrentCalendarMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCurrentCalendarMessage() {}
// Cross Module References
	GENERICGAMEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage();
	UPackage* Z_Construct_UPackage__Script_GenericGameMessages();
// End Cross Module References
class UScriptStruct* FOpenCurrentCalendarMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGAMEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage, Z_Construct_UPackage__Script_GenericGameMessages(), TEXT("OpenCurrentCalendarMessage"), sizeof(FOpenCurrentCalendarMessage), Get_Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Hash());
	}
	return Singleton;
}
template<> GENERICGAMEMESSAGES_API UScriptStruct* StaticStruct<FOpenCurrentCalendarMessage>()
{
	return FOpenCurrentCalendarMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenCurrentCalendarMessage(FOpenCurrentCalendarMessage::StaticStruct, TEXT("/Script/GenericGameMessages"), TEXT("OpenCurrentCalendarMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGameMessages_StaticRegisterNativesFOpenCurrentCalendarMessage
{
	FScriptStruct_GenericGameMessages_StaticRegisterNativesFOpenCurrentCalendarMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OpenCurrentCalendarMessage")),new UScriptStruct::TCppStructOps<FOpenCurrentCalendarMessage>);
	}
} ScriptStruct_GenericGameMessages_StaticRegisterNativesFOpenCurrentCalendarMessage;
	struct Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingDailyRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainingDailyRewards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenCurrentCalendarMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenCurrentCalendarMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::NewProp_RemainingDailyRewards_MetaData[] = {
		{ "Category", "OpenCurrentCalendarMessage" },
		{ "ModuleRelativePath", "Public/OpenCurrentCalendarMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::NewProp_RemainingDailyRewards = { "RemainingDailyRewards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenCurrentCalendarMessage, RemainingDailyRewards), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::NewProp_RemainingDailyRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::NewProp_RemainingDailyRewards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::NewProp_RemainingDailyRewards,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGameMessages,
		nullptr,
		&NewStructOps,
		"OpenCurrentCalendarMessage",
		sizeof(FOpenCurrentCalendarMessage),
		alignof(FOpenCurrentCalendarMessage),
		Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGameMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenCurrentCalendarMessage"), sizeof(FOpenCurrentCalendarMessage), Get_Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenCurrentCalendarMessage_Hash() { return 766568225U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
