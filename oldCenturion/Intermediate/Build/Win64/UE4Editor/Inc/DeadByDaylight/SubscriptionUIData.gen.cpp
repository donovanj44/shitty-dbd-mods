// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SubscriptionUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriptionUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FSubscriptionUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSubscriptionUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubscriptionUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SubscriptionUIData"), sizeof(FSubscriptionUIData), Get_Z_Construct_UScriptStruct_FSubscriptionUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSubscriptionUIData>()
{
	return FSubscriptionUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubscriptionUIData(FSubscriptionUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SubscriptionUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSubscriptionUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSubscriptionUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubscriptionUIData")),new UScriptStruct::TCppStructOps<FSubscriptionUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSubscriptionUIData;
	struct Z_Construct_UScriptStruct_FSubscriptionUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortraitBorderTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PortraitBorderTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TitleTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformDetails;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlatformDetails_Key_KeyProp;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlatformDetails_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubscriptionUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubscriptionUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PortraitBorderTexture_MetaData[] = {
		{ "Category", "SubscriptionUIData" },
		{ "ModuleRelativePath", "Public/SubscriptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PortraitBorderTexture = { "PortraitBorderTexture", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionUIData, PortraitBorderTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PortraitBorderTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PortraitBorderTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_TitleTexture_MetaData[] = {
		{ "Category", "SubscriptionUIData" },
		{ "ModuleRelativePath", "Public/SubscriptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_TitleTexture = { "TitleTexture", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionUIData, TitleTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_TitleTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_TitleTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PlatformDetails_MetaData[] = {
		{ "Category", "SubscriptionUIData" },
		{ "ModuleRelativePath", "Public/SubscriptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PlatformDetails = { "PlatformDetails", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionUIData, PlatformDetails), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PlatformDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PlatformDetails_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PlatformDetails_Key_KeyProp = { "PlatformDetails_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PlatformDetails_ValueProp = { "PlatformDetails", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SubscriptionUIData" },
		{ "ModuleRelativePath", "Public/SubscriptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionUIData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "SubscriptionUIData" },
		{ "ModuleRelativePath", "Public/SubscriptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionUIData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PortraitBorderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_TitleTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PlatformDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PlatformDetails_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_PlatformDetails_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"SubscriptionUIData",
		sizeof(FSubscriptionUIData),
		alignof(FSubscriptionUIData),
		Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubscriptionUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubscriptionUIData"), sizeof(FSubscriptionUIData), Get_Z_Construct_UScriptStruct_FSubscriptionUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubscriptionUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubscriptionUIData_Hash() { return 758495879U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
