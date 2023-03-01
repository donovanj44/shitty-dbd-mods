// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/WeightedWishedObjectMapContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightedWishedObjectMapContainer() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FWeightedWishedObjectMapContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer, Z_Construct_UPackage__Script_DBDBots(), TEXT("WeightedWishedObjectMapContainer"), sizeof(FWeightedWishedObjectMapContainer), Get_Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FWeightedWishedObjectMapContainer>()
{
	return FWeightedWishedObjectMapContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeightedWishedObjectMapContainer(FWeightedWishedObjectMapContainer::StaticStruct, TEXT("/Script/DBDBots"), TEXT("WeightedWishedObjectMapContainer"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFWeightedWishedObjectMapContainer
{
	FScriptStruct_DBDBots_StaticRegisterNativesFWeightedWishedObjectMapContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeightedWishedObjectMapContainer")),new UScriptStruct::TCppStructOps<FWeightedWishedObjectMapContainer>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFWeightedWishedObjectMapContainer;
	struct Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightedWishedObjectMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeightedWishedObjectMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeightedWishedObjectMap_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightedWishedObjectMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeightedWishedObjectMapContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedWishedObjectMapContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewProp_WeightedWishedObjectMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeightedWishedObjectMapContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewProp_WeightedWishedObjectMap = { "WeightedWishedObjectMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeightedWishedObjectMapContainer, WeightedWishedObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewProp_WeightedWishedObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewProp_WeightedWishedObjectMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewProp_WeightedWishedObjectMap_Key_KeyProp = { "WeightedWishedObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewProp_WeightedWishedObjectMap_ValueProp = { "WeightedWishedObjectMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewProp_WeightedWishedObjectMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewProp_WeightedWishedObjectMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::NewProp_WeightedWishedObjectMap_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"WeightedWishedObjectMapContainer",
		sizeof(FWeightedWishedObjectMapContainer),
		alignof(FWeightedWishedObjectMapContainer),
		Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeightedWishedObjectMapContainer"), sizeof(FWeightedWishedObjectMapContainer), Get_Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer_Hash() { return 1682117839U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
