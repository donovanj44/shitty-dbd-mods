// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/AgonyDisplayFxEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgonyDisplayFxEvent() {}
// Cross Module References
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FAgonyDisplayFxEvent();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	THEEXECUTIONER_API UEnum* Z_Construct_UEnum_TheExecutioner_EProtagonist();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FAgonyDisplayFxEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEEXECUTIONER_API uint32 Get_Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgonyDisplayFxEvent, Z_Construct_UPackage__Script_TheExecutioner(), TEXT("AgonyDisplayFxEvent"), sizeof(FAgonyDisplayFxEvent), Get_Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Hash());
	}
	return Singleton;
}
template<> THEEXECUTIONER_API UScriptStruct* StaticStruct<FAgonyDisplayFxEvent>()
{
	return FAgonyDisplayFxEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgonyDisplayFxEvent(FAgonyDisplayFxEvent::StaticStruct, TEXT("/Script/TheExecutioner"), TEXT("AgonyDisplayFxEvent"), false, nullptr, nullptr);
static struct FScriptStruct_TheExecutioner_StaticRegisterNativesFAgonyDisplayFxEvent
{
	FScriptStruct_TheExecutioner_StaticRegisterNativesFAgonyDisplayFxEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AgonyDisplayFxEvent")),new UScriptStruct::TCppStructOps<FAgonyDisplayFxEvent>);
	}
} ScriptStruct_TheExecutioner_StaticRegisterNativesFAgonyDisplayFxEvent;
	struct Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protagonist_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Protagonist;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Protagonist_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgonyDisplayFxEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgonyDisplayFxEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_Protagonist_MetaData[] = {
		{ "Category", "AgonyDisplayFxEvent" },
		{ "ModuleRelativePath", "Public/AgonyDisplayFxEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_Protagonist = { "Protagonist", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgonyDisplayFxEvent, Protagonist), Z_Construct_UEnum_TheExecutioner_EProtagonist, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_Protagonist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_Protagonist_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_Protagonist_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_GameEvent_MetaData[] = {
		{ "Category", "AgonyDisplayFxEvent" },
		{ "ModuleRelativePath", "Public/AgonyDisplayFxEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_GameEvent = { "GameEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgonyDisplayFxEvent, GameEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_GameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_GameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_Protagonist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_Protagonist_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::NewProp_GameEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
		nullptr,
		&NewStructOps,
		"AgonyDisplayFxEvent",
		sizeof(FAgonyDisplayFxEvent),
		alignof(FAgonyDisplayFxEvent),
		Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgonyDisplayFxEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheExecutioner();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgonyDisplayFxEvent"), sizeof(FAgonyDisplayFxEvent), Get_Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgonyDisplayFxEvent_Hash() { return 2680809945U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
