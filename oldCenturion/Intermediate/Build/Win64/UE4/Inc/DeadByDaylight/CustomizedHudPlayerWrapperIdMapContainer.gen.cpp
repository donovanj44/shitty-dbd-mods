// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomizedHudPlayerWrapperIdMapContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizedHudPlayerWrapperIdMapContainer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FCustomizedHudPlayerWrapperIdMapContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CustomizedHudPlayerWrapperIdMapContainer"), sizeof(FCustomizedHudPlayerWrapperIdMapContainer), Get_Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCustomizedHudPlayerWrapperIdMapContainer>()
{
	return FCustomizedHudPlayerWrapperIdMapContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer(FCustomizedHudPlayerWrapperIdMapContainer::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CustomizedHudPlayerWrapperIdMapContainer"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomizedHudPlayerWrapperIdMapContainer
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomizedHudPlayerWrapperIdMapContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizedHudPlayerWrapperIdMapContainer")),new UScriptStruct::TCppStructOps<FCustomizedHudPlayerWrapperIdMapContainer>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomizedHudPlayerWrapperIdMapContainer;
	struct Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ids_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomizedHudPlayerWrapperIdMapContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedHudPlayerWrapperIdMapContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::NewProp_Ids_MetaData[] = {
		{ "Category", "CustomizedHudPlayerWrapperIdMapContainer" },
		{ "ModuleRelativePath", "Public/CustomizedHudPlayerWrapperIdMapContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::NewProp_Ids = { "Ids", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizedHudPlayerWrapperIdMapContainer, Ids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::NewProp_Ids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::NewProp_Ids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::NewProp_Ids_Inner = { "Ids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::NewProp_Ids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::NewProp_Ids_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CustomizedHudPlayerWrapperIdMapContainer",
		sizeof(FCustomizedHudPlayerWrapperIdMapContainer),
		alignof(FCustomizedHudPlayerWrapperIdMapContainer),
		Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizedHudPlayerWrapperIdMapContainer"), sizeof(FCustomizedHudPlayerWrapperIdMapContainer), Get_Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer_Hash() { return 2814733257U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
