// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaFreeTicketAffectedUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaFreeTicketAffectedUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAtlantaFreeTicketAffectedUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaFreeTicketAffectedUIData"), sizeof(FAtlantaFreeTicketAffectedUIData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaFreeTicketAffectedUIData>()
{
	return FAtlantaFreeTicketAffectedUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaFreeTicketAffectedUIData(FAtlantaFreeTicketAffectedUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaFreeTicketAffectedUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaFreeTicketAffectedUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaFreeTicketAffectedUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaFreeTicketAffectedUIData")),new UScriptStruct::TCppStructOps<FAtlantaFreeTicketAffectedUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaFreeTicketAffectedUIData;
	struct Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasFreeTicketToUse_MetaData[];
#endif
		static void NewProp_HasFreeTicketToUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasFreeTicketToUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEffectBGFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InEffectBGFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketAffectedUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaFreeTicketAffectedUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_HasFreeTicketToUse_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketAffectedUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_HasFreeTicketToUse_SetBit(void* Obj)
	{
		((FAtlantaFreeTicketAffectedUIData*)Obj)->HasFreeTicketToUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_HasFreeTicketToUse = { "HasFreeTicketToUse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaFreeTicketAffectedUIData), &Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_HasFreeTicketToUse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_HasFreeTicketToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_HasFreeTicketToUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_EndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketAffectedUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketAffectedUIData, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AtlantaFreeTicketAffectedUIData" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketAffectedUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketAffectedUIData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_InEffectBGFilePath_MetaData[] = {
		{ "Category", "AtlantaFreeTicketAffectedUIData" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketAffectedUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_InEffectBGFilePath = { "InEffectBGFilePath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketAffectedUIData, InEffectBGFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_InEffectBGFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_InEffectBGFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_HasFreeTicketToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::NewProp_InEffectBGFilePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaFreeTicketAffectedUIData",
		sizeof(FAtlantaFreeTicketAffectedUIData),
		alignof(FAtlantaFreeTicketAffectedUIData),
		Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaFreeTicketAffectedUIData"), sizeof(FAtlantaFreeTicketAffectedUIData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData_Hash() { return 4071671911U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
