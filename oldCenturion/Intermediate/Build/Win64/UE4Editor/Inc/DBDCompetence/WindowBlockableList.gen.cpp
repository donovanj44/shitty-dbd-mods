// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/WindowBlockableList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowBlockableList() {}
// Cross Module References
	DBDCOMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FWindowBlockableList();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlockableComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FWindowBlockableList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDCOMPETENCE_API uint32 Get_Z_Construct_UScriptStruct_FWindowBlockableList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWindowBlockableList, Z_Construct_UPackage__Script_DBDCompetence(), TEXT("WindowBlockableList"), sizeof(FWindowBlockableList), Get_Z_Construct_UScriptStruct_FWindowBlockableList_Hash());
	}
	return Singleton;
}
template<> DBDCOMPETENCE_API UScriptStruct* StaticStruct<FWindowBlockableList>()
{
	return FWindowBlockableList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWindowBlockableList(FWindowBlockableList::StaticStruct, TEXT("/Script/DBDCompetence"), TEXT("WindowBlockableList"), false, nullptr, nullptr);
static struct FScriptStruct_DBDCompetence_StaticRegisterNativesFWindowBlockableList
{
	FScriptStruct_DBDCompetence_StaticRegisterNativesFWindowBlockableList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WindowBlockableList")),new UScriptStruct::TCppStructOps<FWindowBlockableList>);
	}
} ScriptStruct_DBDCompetence_StaticRegisterNativesFWindowBlockableList;
	struct Z_Construct_UScriptStruct_FWindowBlockableList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blockables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blockables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blockables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowBlockableList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WindowBlockableList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWindowBlockableList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWindowBlockableList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowBlockableList_Statics::NewProp_Blockables_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindowBlockableList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWindowBlockableList_Statics::NewProp_Blockables = { "Blockables", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindowBlockableList, Blockables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowBlockableList_Statics::NewProp_Blockables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowBlockableList_Statics::NewProp_Blockables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWindowBlockableList_Statics::NewProp_Blockables_Inner = { "Blockables", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlockableComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWindowBlockableList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowBlockableList_Statics::NewProp_Blockables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowBlockableList_Statics::NewProp_Blockables_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWindowBlockableList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
		nullptr,
		&NewStructOps,
		"WindowBlockableList",
		sizeof(FWindowBlockableList),
		alignof(FWindowBlockableList),
		Z_Construct_UScriptStruct_FWindowBlockableList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowBlockableList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowBlockableList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowBlockableList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWindowBlockableList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWindowBlockableList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDCompetence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WindowBlockableList"), sizeof(FWindowBlockableList), Get_Z_Construct_UScriptStruct_FWindowBlockableList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWindowBlockableList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWindowBlockableList_Hash() { return 2240556526U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
