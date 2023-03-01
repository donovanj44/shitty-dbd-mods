// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialEventLoadingTextData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventLoadingTextData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventLoadingTextData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FSpecialEventLoadingTextData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpecialEventLoadingTextData"), sizeof(FSpecialEventLoadingTextData), Get_Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpecialEventLoadingTextData>()
{
	return FSpecialEventLoadingTextData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialEventLoadingTextData(FSpecialEventLoadingTextData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpecialEventLoadingTextData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventLoadingTextData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventLoadingTextData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialEventLoadingTextData")),new UScriptStruct::TCppStructOps<FSpecialEventLoadingTextData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventLoadingTextData;
	struct Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialEventLoadingTextData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialEventLoadingTextData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_IconPath_MetaData[] = {
		{ "Category", "SpecialEventLoadingTextData" },
		{ "ModuleRelativePath", "Public/SpecialEventLoadingTextData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventLoadingTextData, IconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_IconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SpecialEventLoadingTextData" },
		{ "ModuleRelativePath", "Public/SpecialEventLoadingTextData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventLoadingTextData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "SpecialEventLoadingTextData" },
		{ "ModuleRelativePath", "Public/SpecialEventLoadingTextData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventLoadingTextData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_EventId_MetaData[] = {
		{ "Category", "SpecialEventLoadingTextData" },
		{ "ModuleRelativePath", "Public/SpecialEventLoadingTextData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventLoadingTextData, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_IconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::NewProp_EventId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"SpecialEventLoadingTextData",
		sizeof(FSpecialEventLoadingTextData),
		alignof(FSpecialEventLoadingTextData),
		Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventLoadingTextData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialEventLoadingTextData"), sizeof(FSpecialEventLoadingTextData), Get_Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialEventLoadingTextData_Hash() { return 1650420829U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
