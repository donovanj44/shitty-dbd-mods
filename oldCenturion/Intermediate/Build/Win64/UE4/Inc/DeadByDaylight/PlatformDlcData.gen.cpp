// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlatformDlcData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformDlcData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformDlcData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FPlatformDlcData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlatformDlcData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformDlcData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlatformDlcData"), sizeof(FPlatformDlcData), Get_Z_Construct_UScriptStruct_FPlatformDlcData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlatformDlcData>()
{
	return FPlatformDlcData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlatformDlcData(FPlatformDlcData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlatformDlcData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlatformDlcData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlatformDlcData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlatformDlcData")),new UScriptStruct::TCppStructOps<FPlatformDlcData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlatformDlcData;
	struct Z_Construct_UScriptStruct_FPlatformDlcData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdMobile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdMobile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdStadia_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdStadia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdPS5_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdPS5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdGRDK_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdGRDK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdXSX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdXSX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdXB1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdXB1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdPS4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdPS4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdDmm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdDmm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdEpic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdEpic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIdSteam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIdSteam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UISortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UISortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnlockDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformDlcData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdMobile_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdMobile = { "DlcIdMobile", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdMobile), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdMobile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdMobile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdStadia_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdStadia = { "DlcIdStadia", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdStadia), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdStadia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdStadia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS5_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS5 = { "DlcIdPS5", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdPS5), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdGRDK_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdGRDK = { "DlcIdGRDK", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdGRDK), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdGRDK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdGRDK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSwitch_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSwitch = { "DlcIdSwitch", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdSwitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXSX_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXSX = { "DlcIdXSX", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdXSX), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXSX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXSX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXB1_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXB1 = { "DlcIdXB1", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdXB1), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXB1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXB1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS4_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS4 = { "DlcIdPS4", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdPS4), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdDmm_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdDmm = { "DlcIdDmm", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdDmm), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdDmm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdDmm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdEpic_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdEpic = { "DlcIdEpic", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdEpic), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdEpic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdEpic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSteam_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSteam = { "DlcIdSteam", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, DlcIdSteam), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSteam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSteam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UISortOrder_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UISortOrder = { "UISortOrder", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, UISortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UISortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UISortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UnlockDescription_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UnlockDescription = { "UnlockDescription", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, UnlockDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UnlockDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UnlockDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "PlatformDlcData" },
		{ "ModuleRelativePath", "Public/PlatformDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformDlcData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformDlcData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdMobile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdStadia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdGRDK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXSX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdXB1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdPS4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdDmm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdEpic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_DlcIdSteam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UISortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_UnlockDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformDlcData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformDlcData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"PlatformDlcData",
		sizeof(FPlatformDlcData),
		alignof(FPlatformDlcData),
		Z_Construct_UScriptStruct_FPlatformDlcData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformDlcData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlatformDlcData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlatformDlcData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlatformDlcData"), sizeof(FPlatformDlcData), Get_Z_Construct_UScriptStruct_FPlatformDlcData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlatformDlcData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlatformDlcData_Hash() { return 2334319107U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
