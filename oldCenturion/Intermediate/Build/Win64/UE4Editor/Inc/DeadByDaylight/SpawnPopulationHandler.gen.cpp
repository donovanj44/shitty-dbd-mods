// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpawnPopulationHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPopulationHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnPopulationHandler();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSpawnPopulationHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpawnPopulationHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnPopulationHandler, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpawnPopulationHandler"), sizeof(FSpawnPopulationHandler), Get_Z_Construct_UScriptStruct_FSpawnPopulationHandler_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpawnPopulationHandler>()
{
	return FSpawnPopulationHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnPopulationHandler(FSpawnPopulationHandler::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpawnPopulationHandler"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpawnPopulationHandler
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpawnPopulationHandler()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnPopulationHandler")),new UScriptStruct::TCppStructOps<FSpawnPopulationHandler>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpawnPopulationHandler;
	struct Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allAvailableSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__allAvailableSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__allAvailableSpawners_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpawnPopulationHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnPopulationHandler>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::NewProp__allAvailableSpawners_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpawnPopulationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::NewProp__allAvailableSpawners = { "_allAvailableSpawners", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnPopulationHandler, _allAvailableSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::NewProp__allAvailableSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::NewProp__allAvailableSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::NewProp__allAvailableSpawners_Inner = { "_allAvailableSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::NewProp__allAvailableSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::NewProp__allAvailableSpawners_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SpawnPopulationHandler",
		sizeof(FSpawnPopulationHandler),
		alignof(FSpawnPopulationHandler),
		Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnPopulationHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnPopulationHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnPopulationHandler"), sizeof(FSpawnPopulationHandler), Get_Z_Construct_UScriptStruct_FSpawnPopulationHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnPopulationHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnPopulationHandler_Hash() { return 4191163700U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
