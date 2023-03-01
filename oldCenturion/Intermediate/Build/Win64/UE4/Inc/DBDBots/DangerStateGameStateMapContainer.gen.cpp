// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DangerStateGameStateMapContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDangerStateGameStateMapContainer() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIDangerState();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIGameState();
// End Cross Module References
class UScriptStruct* FDangerStateGameStateMapContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer, Z_Construct_UPackage__Script_DBDBots(), TEXT("DangerStateGameStateMapContainer"), sizeof(FDangerStateGameStateMapContainer), Get_Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FDangerStateGameStateMapContainer>()
{
	return FDangerStateGameStateMapContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDangerStateGameStateMapContainer(FDangerStateGameStateMapContainer::StaticStruct, TEXT("/Script/DBDBots"), TEXT("DangerStateGameStateMapContainer"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFDangerStateGameStateMapContainer
{
	FScriptStruct_DBDBots_StaticRegisterNativesFDangerStateGameStateMapContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DangerStateGameStateMapContainer")),new UScriptStruct::TCppStructOps<FDangerStateGameStateMapContainer>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFDangerStateGameStateMapContainer;
	struct Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DangerStateGameStateMapContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDangerStateGameStateMapContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "DangerStateGameStateMapContainer" },
		{ "ModuleRelativePath", "Public/DangerStateGameStateMapContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDangerStateGameStateMapContainer, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDBots_EAIDangerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_DBDBots_EAIGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::NewProp_Map_ValueProp_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"DangerStateGameStateMapContainer",
		sizeof(FDangerStateGameStateMapContainer),
		alignof(FDangerStateGameStateMapContainer),
		Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DangerStateGameStateMapContainer"), sizeof(FDangerStateGameStateMapContainer), Get_Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDangerStateGameStateMapContainer_Hash() { return 4226127655U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
