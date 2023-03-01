// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaDeepLinkData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaDeepLinkData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaDeepLinkData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDeepLinkUid();
// End Cross Module References
class UScriptStruct* FAtlantaDeepLinkData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaDeepLinkData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaDeepLinkData"), sizeof(FAtlantaDeepLinkData), Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaDeepLinkData>()
{
	return FAtlantaDeepLinkData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaDeepLinkData(FAtlantaDeepLinkData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaDeepLinkData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaDeepLinkData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaDeepLinkData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaDeepLinkData")),new UScriptStruct::TCppStructOps<FAtlantaDeepLinkData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaDeepLinkData;
	struct Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasCustomParameters_MetaData[];
#endif
		static void NewProp_HasCustomParameters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasCustomParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeepLink;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeepLink_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaDeepLinkData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaDeepLinkData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_HasCustomParameters_MetaData[] = {
		{ "Category", "AtlantaDeepLinkData" },
		{ "ModuleRelativePath", "Public/AtlantaDeepLinkData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_HasCustomParameters_SetBit(void* Obj)
	{
		((FAtlantaDeepLinkData*)Obj)->HasCustomParameters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_HasCustomParameters = { "HasCustomParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaDeepLinkData), &Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_HasCustomParameters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_HasCustomParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_HasCustomParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_DeepLink_MetaData[] = {
		{ "Category", "AtlantaDeepLinkData" },
		{ "ModuleRelativePath", "Public/AtlantaDeepLinkData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_DeepLink = { "DeepLink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDeepLinkData, DeepLink), Z_Construct_UEnum_DeadByDaylight_EDeepLinkUid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_DeepLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_DeepLink_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_DeepLink_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "AtlantaDeepLinkData" },
		{ "ModuleRelativePath", "Public/AtlantaDeepLinkData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaDeepLinkData, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_HasCustomParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_DeepLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_DeepLink_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::NewProp_Url,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AtlantaDeepLinkData",
		sizeof(FAtlantaDeepLinkData),
		alignof(FAtlantaDeepLinkData),
		Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaDeepLinkData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaDeepLinkData"), sizeof(FAtlantaDeepLinkData), Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaDeepLinkData_Hash() { return 3483816210U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
