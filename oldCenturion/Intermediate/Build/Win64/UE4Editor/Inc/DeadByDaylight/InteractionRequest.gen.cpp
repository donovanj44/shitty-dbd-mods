// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionRequest() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionRequest();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
class UScriptStruct* FInteractionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FInteractionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionRequest, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("InteractionRequest"), sizeof(FInteractionRequest), Get_Z_Construct_UScriptStruct_FInteractionRequest_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FInteractionRequest>()
{
	return FInteractionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionRequest(FInteractionRequest::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("InteractionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionRequest
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionRequest")),new UScriptStruct::TCppStructOps<FInteractionRequest>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionRequest;
	struct Z_Construct_UScriptStruct_FInteractionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__requester_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__requester;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__requester_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__requester = { "_requester", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionRequest, _requester), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__requester_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__requester_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__interaction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__interaction = { "_interaction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionRequest, _interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__requester,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionRequest_Statics::NewProp__interaction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"InteractionRequest",
		sizeof(FInteractionRequest),
		alignof(FInteractionRequest),
		Z_Construct_UScriptStruct_FInteractionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionRequest"), sizeof(FInteractionRequest), Get_Z_Construct_UScriptStruct_FInteractionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionRequest_Hash() { return 558896497U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
