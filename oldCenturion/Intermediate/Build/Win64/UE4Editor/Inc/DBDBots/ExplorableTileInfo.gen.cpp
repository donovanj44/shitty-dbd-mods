// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/ExplorableTileInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplorableTileInfo() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FExplorableTileInfo();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FExplorableTileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FExplorableTileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExplorableTileInfo, Z_Construct_UPackage__Script_DBDBots(), TEXT("ExplorableTileInfo"), sizeof(FExplorableTileInfo), Get_Z_Construct_UScriptStruct_FExplorableTileInfo_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FExplorableTileInfo>()
{
	return FExplorableTileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExplorableTileInfo(FExplorableTileInfo::StaticStruct, TEXT("/Script/DBDBots"), TEXT("ExplorableTileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFExplorableTileInfo
{
	FScriptStruct_DBDBots_StaticRegisterNativesFExplorableTileInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExplorableTileInfo")),new UScriptStruct::TCppStructOps<FExplorableTileInfo>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFExplorableTileInfo;
	struct Z_Construct_UScriptStruct_FExplorableTileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExplorableTileInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExplorableTileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExplorableTileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExplorableTileInfo, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExplorableTileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExplorableTileInfo, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"ExplorableTileInfo",
		sizeof(FExplorableTileInfo),
		alignof(FExplorableTileInfo),
		Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExplorableTileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExplorableTileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExplorableTileInfo"), sizeof(FExplorableTileInfo), Get_Z_Construct_UScriptStruct_FExplorableTileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExplorableTileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExplorableTileInfo_Hash() { return 827676432U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
