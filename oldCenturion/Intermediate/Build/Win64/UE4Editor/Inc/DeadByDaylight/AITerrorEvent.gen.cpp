// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AITerrorEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITerrorEvent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITerrorEvent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusEmitterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAITerrorEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAITerrorEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITerrorEvent, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AITerrorEvent"), sizeof(FAITerrorEvent), Get_Z_Construct_UScriptStruct_FAITerrorEvent_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAITerrorEvent>()
{
	return FAITerrorEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAITerrorEvent(FAITerrorEvent::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AITerrorEvent"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAITerrorEvent
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAITerrorEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AITerrorEvent")),new UScriptStruct::TCppStructOps<FAITerrorEvent>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAITerrorEvent;
	struct Z_Construct_UScriptStruct_FAITerrorEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrorEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TerrorEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITerrorEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AITerrorEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITerrorEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TeamIdentifier_MetaData[] = {
		{ "Category", "AITerrorEvent" },
		{ "ModuleRelativePath", "Public/AITerrorEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TeamIdentifier = { "TeamIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITerrorEvent, TeamIdentifier), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TeamIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TeamIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TerrorEmitter_MetaData[] = {
		{ "Category", "AITerrorEvent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AITerrorEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TerrorEmitter = { "TerrorEmitter", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITerrorEvent, TerrorEmitter), Z_Construct_UClass_UTerrorRadiusEmitterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TerrorEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TerrorEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "AITerrorEvent" },
		{ "ModuleRelativePath", "Public/AITerrorEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITerrorEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "AITerrorEvent" },
		{ "ModuleRelativePath", "Public/AITerrorEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITerrorEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITerrorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TeamIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_TerrorEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITerrorEvent_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITerrorEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AITerrorEvent",
		sizeof(FAITerrorEvent),
		alignof(FAITerrorEvent),
		Z_Construct_UScriptStruct_FAITerrorEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITerrorEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAITerrorEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAITerrorEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AITerrorEvent"), sizeof(FAITerrorEvent), Get_Z_Construct_UScriptStruct_FAITerrorEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAITerrorEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAITerrorEvent_Hash() { return 2933923845U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
