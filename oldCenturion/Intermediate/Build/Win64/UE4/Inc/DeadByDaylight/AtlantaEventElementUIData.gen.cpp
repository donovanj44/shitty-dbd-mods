// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaEventElementUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaEventElementUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaEventElementUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPromoPackContentType();
// End Cross Module References
class UScriptStruct* FAtlantaEventElementUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaEventElementUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaEventElementUIData"), sizeof(FAtlantaEventElementUIData), Get_Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaEventElementUIData>()
{
	return FAtlantaEventElementUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaEventElementUIData(FAtlantaEventElementUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaEventElementUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaEventElementUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaEventElementUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaEventElementUIData")),new UScriptStruct::TCppStructOps<FAtlantaEventElementUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaEventElementUIData;
	struct Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ElementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaEventElementUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaEventElementUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaEventElementUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaEventElementUIData, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_NameID_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaEventElementUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_NameID = { "NameID", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaEventElementUIData, NameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_NameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_NameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaEventElementUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaEventElementUIData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_ElementType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaEventElementUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaEventElementUIData, ElementType), Z_Construct_UEnum_DeadByDaylight_EPromoPackContentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_ElementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_NameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_ElementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::NewProp_ElementType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaEventElementUIData",
		sizeof(FAtlantaEventElementUIData),
		alignof(FAtlantaEventElementUIData),
		Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaEventElementUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaEventElementUIData"), sizeof(FAtlantaEventElementUIData), Get_Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaEventElementUIData_Hash() { return 2128407304U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
