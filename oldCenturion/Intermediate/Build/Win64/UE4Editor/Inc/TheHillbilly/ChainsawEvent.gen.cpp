// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/ChainsawEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawEvent() {}
// Cross Module References
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawEvent();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
class UScriptStruct* FChainsawEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEHILLBILLY_API uint32 Get_Z_Construct_UScriptStruct_FChainsawEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChainsawEvent, Z_Construct_UPackage__Script_TheHillbilly(), TEXT("ChainsawEvent"), sizeof(FChainsawEvent), Get_Z_Construct_UScriptStruct_FChainsawEvent_Hash());
	}
	return Singleton;
}
template<> THEHILLBILLY_API UScriptStruct* StaticStruct<FChainsawEvent>()
{
	return FChainsawEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChainsawEvent(FChainsawEvent::StaticStruct, TEXT("/Script/TheHillbilly"), TEXT("ChainsawEvent"), false, nullptr, nullptr);
static struct FScriptStruct_TheHillbilly_StaticRegisterNativesFChainsawEvent
{
	FScriptStruct_TheHillbilly_StaticRegisterNativesFChainsawEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChainsawEvent")),new UScriptStruct::TCppStructOps<FChainsawEvent>);
	}
} ScriptStruct_TheHillbilly_StaticRegisterNativesFChainsawEvent;
	struct Z_Construct_UScriptStruct_FChainsawEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedMatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedMatchTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainsawEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChainsawEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChainsawEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChainsawEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainsawEvent_Statics::NewProp_ElapsedMatchTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainsawEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChainsawEvent_Statics::NewProp_ElapsedMatchTime = { "ElapsedMatchTime", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChainsawEvent, ElapsedMatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FChainsawEvent_Statics::NewProp_ElapsedMatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawEvent_Statics::NewProp_ElapsedMatchTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChainsawEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChainsawEvent_Statics::NewProp_ElapsedMatchTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChainsawEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
		nullptr,
		&NewStructOps,
		"ChainsawEvent",
		sizeof(FChainsawEvent),
		alignof(FChainsawEvent),
		Z_Construct_UScriptStruct_FChainsawEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChainsawEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChainsawEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChainsawEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheHillbilly();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChainsawEvent"), sizeof(FChainsawEvent), Get_Z_Construct_UScriptStruct_FChainsawEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChainsawEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChainsawEvent_Hash() { return 1841454930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
