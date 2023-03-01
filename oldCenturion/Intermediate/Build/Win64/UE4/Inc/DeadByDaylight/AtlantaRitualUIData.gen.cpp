// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaRitualUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaRitualUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaSubRitualUIData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualRewardUIData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAltantaRitualUIType();
// End Cross Module References
class UScriptStruct* FAtlantaRitualUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaRitualUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaRitualUIData"), sizeof(FAtlantaRitualUIData), Get_Z_Construct_UScriptStruct_FAtlantaRitualUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaRitualUIData>()
{
	return FAtlantaRitualUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaRitualUIData(FAtlantaRitualUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaRitualUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaRitualUIData")),new UScriptStruct::TCppStructOps<FAtlantaRitualUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualUIData;
	struct Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubRituals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubRituals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubRituals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefreshPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsClaimed_MetaData[];
#endif
		static void NewProp_IsClaimed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsClaimed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNew_MetaData[];
#endif
		static void NewProp_IsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaRitualUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_SubRituals_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_SubRituals = { "SubRituals", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualUIData, SubRituals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_SubRituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_SubRituals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_SubRituals_Inner = { "SubRituals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaSubRitualUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Rewards_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualUIData, Rewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Rewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Rewards_Inner = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaRitualRewardUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_RefreshPrice_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_RefreshPrice = { "RefreshPrice", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualUIData, RefreshPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_RefreshPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_RefreshPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ProgressPercentage_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ProgressPercentage = { "ProgressPercentage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualUIData, ProgressPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ProgressPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ProgressPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsClaimed_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsClaimed_SetBit(void* Obj)
	{
		((FAtlantaRitualUIData*)Obj)->IsClaimed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsClaimed = { "IsClaimed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaRitualUIData), &Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsClaimed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsClaimed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsClaimed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsNew_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsNew_SetBit(void* Obj)
	{
		((FAtlantaRitualUIData*)Obj)->IsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsNew = { "IsNew", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaRitualUIData), &Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IconFilePath_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IconFilePath = { "IconFilePath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualUIData, IconFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IconFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IconFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualUIData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualUIData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualUIData, Type), Z_Construct_UEnum_DeadByDaylight_EAltantaRitualUIType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "AtlantaRitualUIData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualUIData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_SubRituals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_SubRituals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Rewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Rewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_RefreshPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ProgressPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsClaimed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IsNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_IconFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaRitualUIData",
		sizeof(FAtlantaRitualUIData),
		alignof(FAtlantaRitualUIData),
		Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaRitualUIData"), sizeof(FAtlantaRitualUIData), Get_Z_Construct_UScriptStruct_FAtlantaRitualUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaRitualUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualUIData_Hash() { return 1251055743U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
