// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInput/Public/AnalogCursorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalogCursorData() {}
// Cross Module References
	DBDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogCursorData();
	UPackage* Z_Construct_UPackage__Script_DBDInput();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EAnalogCursorDataType();
// End Cross Module References
class UScriptStruct* FAnalogCursorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDINPUT_API uint32 Get_Z_Construct_UScriptStruct_FAnalogCursorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnalogCursorData, Z_Construct_UPackage__Script_DBDInput(), TEXT("AnalogCursorData"), sizeof(FAnalogCursorData), Get_Z_Construct_UScriptStruct_FAnalogCursorData_Hash());
	}
	return Singleton;
}
template<> DBDINPUT_API UScriptStruct* StaticStruct<FAnalogCursorData>()
{
	return FAnalogCursorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnalogCursorData(FAnalogCursorData::StaticStruct, TEXT("/Script/DBDInput"), TEXT("AnalogCursorData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDInput_StaticRegisterNativesFAnalogCursorData
{
	FScriptStruct_DBDInput_StaticRegisterNativesFAnalogCursorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnalogCursorData")),new UScriptStruct::TCppStructOps<FAnalogCursorData>);
	}
} ScriptStruct_DBDInput_StaticRegisterNativesFAnalogCursorData;
	struct Z_Construct_UScriptStruct_FAnalogCursorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalesWithDPI_MetaData[];
#endif
		static void NewProp_ScalesWithDPI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScalesWithDPI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnalogCursorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnalogCursorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnalogCursorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_ScalesWithDPI_MetaData[] = {
		{ "Category", "AnalogCursorData" },
		{ "ModuleRelativePath", "Public/AnalogCursorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_ScalesWithDPI_SetBit(void* Obj)
	{
		((FAnalogCursorData*)Obj)->ScalesWithDPI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_ScalesWithDPI = { "ScalesWithDPI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnalogCursorData), &Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_ScalesWithDPI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_ScalesWithDPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_ScalesWithDPI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "AnalogCursorData" },
		{ "ModuleRelativePath", "Public/AnalogCursorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnalogCursorData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "AnalogCursorData" },
		{ "ModuleRelativePath", "Public/AnalogCursorData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnalogCursorData, Type), Z_Construct_UEnum_DBDInput_EAnalogCursorDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnalogCursorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_ScalesWithDPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnalogCursorData_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnalogCursorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInput,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AnalogCursorData",
		sizeof(FAnalogCursorData),
		alignof(FAnalogCursorData),
		Z_Construct_UScriptStruct_FAnalogCursorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalogCursorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnalogCursorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalogCursorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnalogCursorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnalogCursorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnalogCursorData"), sizeof(FAnalogCursorData), Get_Z_Construct_UScriptStruct_FAnalogCursorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnalogCursorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnalogCursorData_Hash() { return 1680815845U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
