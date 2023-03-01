// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/GameStateEvadeLoopStrategyMapContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStateEvadeLoopStrategyMapContainer() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIGameState();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIFleeLoopStrategy();
// End Cross Module References
class UScriptStruct* FGameStateEvadeLoopStrategyMapContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer, Z_Construct_UPackage__Script_DBDBots(), TEXT("GameStateEvadeLoopStrategyMapContainer"), sizeof(FGameStateEvadeLoopStrategyMapContainer), Get_Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FGameStateEvadeLoopStrategyMapContainer>()
{
	return FGameStateEvadeLoopStrategyMapContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer(FGameStateEvadeLoopStrategyMapContainer::StaticStruct, TEXT("/Script/DBDBots"), TEXT("GameStateEvadeLoopStrategyMapContainer"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFGameStateEvadeLoopStrategyMapContainer
{
	FScriptStruct_DBDBots_StaticRegisterNativesFGameStateEvadeLoopStrategyMapContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameStateEvadeLoopStrategyMapContainer")),new UScriptStruct::TCppStructOps<FGameStateEvadeLoopStrategyMapContainer>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFGameStateEvadeLoopStrategyMapContainer;
	struct Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Map_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Map_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Map_ValueProp_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameStateEvadeLoopStrategyMapContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameStateEvadeLoopStrategyMapContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "GameStateEvadeLoopStrategyMapContainer" },
		{ "ModuleRelativePath", "Public/GameStateEvadeLoopStrategyMapContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameStateEvadeLoopStrategyMapContainer, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDBots_EAIGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_DBDBots_EAIFleeLoopStrategy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::NewProp_Map_ValueProp_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"GameStateEvadeLoopStrategyMapContainer",
		sizeof(FGameStateEvadeLoopStrategyMapContainer),
		alignof(FGameStateEvadeLoopStrategyMapContainer),
		Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameStateEvadeLoopStrategyMapContainer"), sizeof(FGameStateEvadeLoopStrategyMapContainer), Get_Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer_Hash() { return 3935190314U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
