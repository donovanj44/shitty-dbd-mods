// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MapMeshToAkAudioEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapMeshToAkAudioEvent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FMapMeshToAkAudioEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("MapMeshToAkAudioEvent"), sizeof(FMapMeshToAkAudioEvent), Get_Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FMapMeshToAkAudioEvent>()
{
	return FMapMeshToAkAudioEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapMeshToAkAudioEvent(FMapMeshToAkAudioEvent::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("MapMeshToAkAudioEvent"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFMapMeshToAkAudioEvent
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFMapMeshToAkAudioEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MapMeshToAkAudioEvent")),new UScriptStruct::TCppStructOps<FMapMeshToAkAudioEvent>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFMapMeshToAkAudioEvent;
	struct Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDelayBetweenObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDelayBetweenObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDelayBetweenEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDelayBetweenEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapMeshToAkAudioEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapMeshToAkAudioEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenObject_MetaData[] = {
		{ "Category", "MapMeshToAkAudioEvent" },
		{ "ModuleRelativePath", "Public/MapMeshToAkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenObject = { "MinDelayBetweenObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapMeshToAkAudioEvent, MinDelayBetweenObject), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenEvents_MetaData[] = {
		{ "Category", "MapMeshToAkAudioEvent" },
		{ "ModuleRelativePath", "Public/MapMeshToAkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenEvents = { "MinDelayBetweenEvents", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapMeshToAkAudioEvent, MinDelayBetweenEvents), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_SoundEvent_MetaData[] = {
		{ "Category", "MapMeshToAkAudioEvent" },
		{ "ModuleRelativePath", "Public/MapMeshToAkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_SoundEvent = { "SoundEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapMeshToAkAudioEvent, SoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_SoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_SoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "MapMeshToAkAudioEvent" },
		{ "ModuleRelativePath", "Public/MapMeshToAkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapMeshToAkAudioEvent, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_MinDelayBetweenEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_SoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::NewProp_Mesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"MapMeshToAkAudioEvent",
		sizeof(FMapMeshToAkAudioEvent),
		alignof(FMapMeshToAkAudioEvent),
		Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapMeshToAkAudioEvent"), sizeof(FMapMeshToAkAudioEvent), Get_Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent_Hash() { return 1662383658U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
