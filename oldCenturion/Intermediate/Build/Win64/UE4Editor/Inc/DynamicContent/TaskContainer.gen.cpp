// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/TaskContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskContainer() {}
// Cross Module References
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FTaskContainer();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDownloadMultiTextureTask_NoRegister();
// End Cross Module References
class UScriptStruct* FTaskContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DYNAMICCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FTaskContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskContainer, Z_Construct_UPackage__Script_DynamicContent(), TEXT("TaskContainer"), sizeof(FTaskContainer), Get_Z_Construct_UScriptStruct_FTaskContainer_Hash());
	}
	return Singleton;
}
template<> DYNAMICCONTENT_API UScriptStruct* StaticStruct<FTaskContainer>()
{
	return FTaskContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaskContainer(FTaskContainer::StaticStruct, TEXT("/Script/DynamicContent"), TEXT("TaskContainer"), false, nullptr, nullptr);
static struct FScriptStruct_DynamicContent_StaticRegisterNativesFTaskContainer
{
	FScriptStruct_DynamicContent_StaticRegisterNativesFTaskContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TaskContainer")),new UScriptStruct::TCppStructOps<FTaskContainer>);
	}
} ScriptStruct_DynamicContent_StaticRegisterNativesFTaskContainer;
	struct Z_Construct_UScriptStruct_FTaskContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownloadTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TaskContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskContainer_Statics::NewProp_DownloadTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaskContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskContainer_Statics::NewProp_DownloadTask = { "DownloadTask", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskContainer, DownloadTask), Z_Construct_UClass_UDownloadMultiTextureTask_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskContainer_Statics::NewProp_DownloadTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskContainer_Statics::NewProp_DownloadTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskContainer_Statics::NewProp_DownloadTask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
		nullptr,
		&NewStructOps,
		"TaskContainer",
		sizeof(FTaskContainer),
		alignof(FTaskContainer),
		Z_Construct_UScriptStruct_FTaskContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaskContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DynamicContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaskContainer"), sizeof(FTaskContainer), Get_Z_Construct_UScriptStruct_FTaskContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaskContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaskContainer_Hash() { return 3690515685U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
