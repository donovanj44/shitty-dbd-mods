// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/MoveLinkPlayerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveLinkPlayerInfo() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FMoveLinkPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
class UScriptStruct* FMoveLinkPlayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoveLinkPlayerInfo, Z_Construct_UPackage__Script_DBDBots(), TEXT("MoveLinkPlayerInfo"), sizeof(FMoveLinkPlayerInfo), Get_Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FMoveLinkPlayerInfo>()
{
	return FMoveLinkPlayerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoveLinkPlayerInfo(FMoveLinkPlayerInfo::StaticStruct, TEXT("/Script/DBDBots"), TEXT("MoveLinkPlayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFMoveLinkPlayerInfo
{
	FScriptStruct_DBDBots_StaticRegisterNativesFMoveLinkPlayerInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MoveLinkPlayerInfo")),new UScriptStruct::TCppStructOps<FMoveLinkPlayerInfo>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFMoveLinkPlayerInfo;
	struct Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoveLinkPlayerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoveLinkPlayerInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"MoveLinkPlayerInfo",
		sizeof(FMoveLinkPlayerInfo),
		alignof(FMoveLinkPlayerInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoveLinkPlayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoveLinkPlayerInfo"), sizeof(FMoveLinkPlayerInfo), Get_Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoveLinkPlayerInfo_Hash() { return 2772095697U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
