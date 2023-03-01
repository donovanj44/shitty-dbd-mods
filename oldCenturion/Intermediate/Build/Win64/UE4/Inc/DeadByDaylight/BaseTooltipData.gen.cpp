// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BaseTooltipData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTooltipData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseTooltipData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FBaseTooltipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBaseTooltipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseTooltipData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BaseTooltipData"), sizeof(FBaseTooltipData), Get_Z_Construct_UScriptStruct_FBaseTooltipData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBaseTooltipData>()
{
	return FBaseTooltipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseTooltipData(FBaseTooltipData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BaseTooltipData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBaseTooltipData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBaseTooltipData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseTooltipData")),new UScriptStruct::TCppStructOps<FBaseTooltipData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBaseTooltipData;
	struct Z_Construct_UScriptStruct_FBaseTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightTooltipWidgetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_RightTooltipWidgetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTooltipWidgetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_LeftTooltipWidgetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TouchPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTooltipData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTooltipData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseTooltipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_RightTooltipWidgetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_RightTooltipWidgetAsset = { "RightTooltipWidgetAsset", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseTooltipData, RightTooltipWidgetAsset), Z_Construct_UClass_UBaseTooltipWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_RightTooltipWidgetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_RightTooltipWidgetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_LeftTooltipWidgetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_LeftTooltipWidgetAsset = { "LeftTooltipWidgetAsset", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseTooltipData, LeftTooltipWidgetAsset), Z_Construct_UClass_UBaseTooltipWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_LeftTooltipWidgetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_LeftTooltipWidgetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_TouchPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_TouchPosition = { "TouchPosition", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseTooltipData, TouchPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_TouchPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_TouchPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseTooltipData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseTooltipData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_RightTooltipWidgetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_LeftTooltipWidgetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_TouchPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseTooltipData_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseTooltipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"BaseTooltipData",
		sizeof(FBaseTooltipData),
		alignof(FBaseTooltipData),
		Z_Construct_UScriptStruct_FBaseTooltipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTooltipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseTooltipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseTooltipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseTooltipData"), sizeof(FBaseTooltipData), Get_Z_Construct_UScriptStruct_FBaseTooltipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseTooltipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseTooltipData_Hash() { return 3390892484U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
