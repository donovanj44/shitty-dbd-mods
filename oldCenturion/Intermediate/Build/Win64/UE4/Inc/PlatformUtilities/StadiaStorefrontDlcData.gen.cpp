// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformUtilities/Public/StadiaStorefrontDlcData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStadiaStorefrontDlcData() {}
// Cross Module References
	PLATFORMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStadiaStorefrontDlcData();
	UPackage* Z_Construct_UPackage__Script_PlatformUtilities();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FStadiaStorefrontDlcData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLATFORMUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData, Z_Construct_UPackage__Script_PlatformUtilities(), TEXT("StadiaStorefrontDlcData"), sizeof(FStadiaStorefrontDlcData), Get_Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Hash());
	}
	return Singleton;
}
template<> PLATFORMUTILITIES_API UScriptStruct* StaticStruct<FStadiaStorefrontDlcData>()
{
	return FStadiaStorefrontDlcData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStadiaStorefrontDlcData(FStadiaStorefrontDlcData::StaticStruct, TEXT("/Script/PlatformUtilities"), TEXT("StadiaStorefrontDlcData"), false, nullptr, nullptr);
static struct FScriptStruct_PlatformUtilities_StaticRegisterNativesFStadiaStorefrontDlcData
{
	FScriptStruct_PlatformUtilities_StaticRegisterNativesFStadiaStorefrontDlcData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StadiaStorefrontDlcData")),new UScriptStruct::TCppStructOps<FStadiaStorefrontDlcData>);
	}
} ScriptStruct_PlatformUtilities_StaticRegisterNativesFStadiaStorefrontDlcData;
	struct Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mex__latam_spanish__description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mex__latam_spanish__description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mex__latam_spanish__name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mex__latam_spanish__name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cfre_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cfre_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cfre_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cfre_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tr_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tr_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tr_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tr_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_swe_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_swe_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_swe_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_swe_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_por_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_por_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_por_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_por_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pol_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pol_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pol_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pol_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nor_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nor_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nor_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nor_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fin_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fin_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fin_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fin_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dut_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dut_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dut_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dut_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ara_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ara_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ara_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ara_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dan_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dan_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dan_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dan_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jpn_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jpn_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jpn_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jpn_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_kor_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_kor_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_kor_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_kor_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brapor_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_brapor_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brapor_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_brapor_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rus_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rus_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rus_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rus_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_th_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_th_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_th_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_th_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chs_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_chs_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chs_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_chs_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cht_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cht_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cht_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cht_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_es_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_es_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_es_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_es_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_it_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_it_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_it_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_it_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_de_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_de_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_de_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_de_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fr_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fr_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fr_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fr_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_en_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_en_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_en_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_en_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_copyright_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_copyright;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StadiaID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StadiaID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_General_Dlc_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_General_Dlc_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLC_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLC_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStadiaStorefrontDlcData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__description = { "mex__latam_spanish__description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, mex__latam_spanish__description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__name = { "mex__latam_spanish__name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, mex__latam_spanish__name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_description = { "cfre_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, cfre_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_name = { "cfre_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, cfre_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_description = { "tr_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, tr_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_name = { "tr_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, tr_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_description = { "swe_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, swe_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_name = { "swe_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, swe_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_description = { "por_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, por_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_name = { "por_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, por_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_description = { "pol_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, pol_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_name = { "pol_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, pol_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_description = { "nor_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, nor_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_name = { "nor_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, nor_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_description = { "fin_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, fin_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_name = { "fin_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, fin_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_description = { "dut_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, dut_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_name = { "dut_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, dut_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_description = { "ara_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, ara_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_name = { "ara_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, ara_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_description = { "dan_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, dan_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_name = { "dan_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, dan_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_description = { "jpn_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, jpn_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_name = { "jpn_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, jpn_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_description = { "kor_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, kor_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_name = { "kor_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, kor_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_description = { "brapor_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, brapor_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_name = { "brapor_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, brapor_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_description = { "rus_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, rus_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_name = { "rus_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, rus_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_description = { "th_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, th_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_name = { "th_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, th_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_description = { "chs_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, chs_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_name = { "chs_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, chs_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_description = { "cht_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, cht_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_name = { "cht_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, cht_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_description = { "es_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, es_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_name = { "es_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, es_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_description = { "it_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, it_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_name = { "it_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, it_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_description = { "de_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, de_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_name = { "de_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, de_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_description = { "fr_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, fr_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_name = { "fr_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, fr_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_description_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_description = { "en_description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, en_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_name = { "en_name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, en_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_copyright_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_copyright = { "copyright", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, copyright), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_copyright_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_copyright_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_StadiaID_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_StadiaID = { "StadiaID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, StadiaID), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_StadiaID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_StadiaID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_General_Dlc_ID_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_General_Dlc_ID = { "General_Dlc_ID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, General_Dlc_ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_General_Dlc_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_General_Dlc_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_DLC_Name_MetaData[] = {
		{ "Category", "StadiaStorefrontDlcData" },
		{ "ModuleRelativePath", "Public/StadiaStorefrontDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_DLC_Name = { "DLC_Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaStorefrontDlcData, DLC_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_DLC_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_DLC_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_mex__latam_spanish__name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cfre_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_tr_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_swe_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_por_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_pol_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_nor_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fin_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dut_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_ara_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_dan_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_jpn_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_kor_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_brapor_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_rus_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_th_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_chs_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_cht_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_es_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_it_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_de_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_fr_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_en_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_copyright,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_StadiaID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_General_Dlc_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::NewProp_DLC_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformUtilities,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"StadiaStorefrontDlcData",
		sizeof(FStadiaStorefrontDlcData),
		alignof(FStadiaStorefrontDlcData),
		Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStadiaStorefrontDlcData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlatformUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StadiaStorefrontDlcData"), sizeof(FStadiaStorefrontDlcData), Get_Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStadiaStorefrontDlcData_Hash() { return 1054646451U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
