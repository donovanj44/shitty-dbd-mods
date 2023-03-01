// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaOnBoardingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaOnBoardingData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaOnBoardingData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FAtlantaOnBoardingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaOnBoardingData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaOnBoardingData"), sizeof(FAtlantaOnBoardingData), Get_Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaOnBoardingData>()
{
	return FAtlantaOnBoardingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaOnBoardingData(FAtlantaOnBoardingData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaOnBoardingData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaOnBoardingData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaOnBoardingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaOnBoardingData")),new UScriptStruct::TCppStructOps<FAtlantaOnBoardingData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaOnBoardingData;
	struct Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBoardingId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OnBoardingId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaOnBoardingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaOnBoardingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AtlantaOnBoardingData" },
		{ "ModuleRelativePath", "Public/AtlantaOnBoardingData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaOnBoardingData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "AtlantaOnBoardingData" },
		{ "ModuleRelativePath", "Public/AtlantaOnBoardingData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaOnBoardingData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_OnBoardingId_MetaData[] = {
		{ "Category", "AtlantaOnBoardingData" },
		{ "ModuleRelativePath", "Public/AtlantaOnBoardingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_OnBoardingId = { "OnBoardingId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaOnBoardingData, OnBoardingId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_OnBoardingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_OnBoardingId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::NewProp_OnBoardingId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AtlantaOnBoardingData",
		sizeof(FAtlantaOnBoardingData),
		alignof(FAtlantaOnBoardingData),
		Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaOnBoardingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaOnBoardingData"), sizeof(FAtlantaOnBoardingData), Get_Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaOnBoardingData_Hash() { return 1877033030U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
