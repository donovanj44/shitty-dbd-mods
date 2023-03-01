// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/CurrencyProgressionUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyProgressionUIData() {}
// Cross Module References
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionUIData();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FCurrencyProgressionUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDSHAREDTYPES_API uint32 Get_Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrencyProgressionUIData, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("CurrencyProgressionUIData"), sizeof(FCurrencyProgressionUIData), Get_Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Hash());
	}
	return Singleton;
}
template<> DBDSHAREDTYPES_API UScriptStruct* StaticStruct<FCurrencyProgressionUIData>()
{
	return FCurrencyProgressionUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrencyProgressionUIData(FCurrencyProgressionUIData::StaticStruct, TEXT("/Script/DBDSharedTypes"), TEXT("CurrencyProgressionUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDSharedTypes_StaticRegisterNativesFCurrencyProgressionUIData
{
	FScriptStruct_DBDSharedTypes_StaticRegisterNativesFCurrencyProgressionUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurrencyProgressionUIData")),new UScriptStruct::TCppStructOps<FCurrencyProgressionUIData>);
	}
} ScriptStruct_DBDSharedTypes_StaticRegisterNativesFCurrencyProgressionUIData;
	struct Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RewardIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardBackgroundMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RewardBackgroundMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipHeaderMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TooltipHeaderMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TooltipDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TooltipTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrencyProgressionUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardIcon_MetaData[] = {
		{ "Category", "CurrencyProgressionUIData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardIcon = { "RewardIcon", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionUIData, RewardIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardBackgroundMaterial_MetaData[] = {
		{ "Category", "CurrencyProgressionUIData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardBackgroundMaterial = { "RewardBackgroundMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionUIData, RewardBackgroundMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardBackgroundMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardBackgroundMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipHeaderMaterial_MetaData[] = {
		{ "Category", "CurrencyProgressionUIData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipHeaderMaterial = { "TooltipHeaderMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionUIData, TooltipHeaderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipHeaderMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipHeaderMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipDescription_MetaData[] = {
		{ "Category", "CurrencyProgressionUIData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipDescription = { "TooltipDescription", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionUIData, TooltipDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipTitle_MetaData[] = {
		{ "Category", "CurrencyProgressionUIData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipTitle = { "TooltipTitle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionUIData, TooltipTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_RewardBackgroundMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipHeaderMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::NewProp_TooltipTitle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDSharedTypes,
		nullptr,
		&NewStructOps,
		"CurrencyProgressionUIData",
		sizeof(FCurrencyProgressionUIData),
		alignof(FCurrencyProgressionUIData),
		Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrencyProgressionUIData"), sizeof(FCurrencyProgressionUIData), Get_Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrencyProgressionUIData_Hash() { return 2775926715U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
