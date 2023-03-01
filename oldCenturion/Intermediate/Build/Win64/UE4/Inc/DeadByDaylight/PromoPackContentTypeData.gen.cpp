// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoPackContentTypeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoPackContentTypeData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackContentTypeData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPromoPackItemWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FPromoPackContentTypeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPromoPackContentTypeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromoPackContentTypeData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PromoPackContentTypeData"), sizeof(FPromoPackContentTypeData), Get_Z_Construct_UScriptStruct_FPromoPackContentTypeData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPromoPackContentTypeData>()
{
	return FPromoPackContentTypeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPromoPackContentTypeData(FPromoPackContentTypeData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PromoPackContentTypeData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackContentTypeData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackContentTypeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PromoPackContentTypeData")),new UScriptStruct::TCppStructOps<FPromoPackContentTypeData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackContentTypeData;
	struct Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentTypeIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ContentTypeIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorrespondingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CorrespondingWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PromoPackContentTypeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromoPackContentTypeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_ContentTypeIcon_MetaData[] = {
		{ "Category", "PromoPackContentTypeData" },
		{ "ModuleRelativePath", "Public/PromoPackContentTypeData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_ContentTypeIcon = { "ContentTypeIcon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackContentTypeData, ContentTypeIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_ContentTypeIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_ContentTypeIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_CorrespondingWidget_MetaData[] = {
		{ "Category", "PromoPackContentTypeData" },
		{ "ModuleRelativePath", "Public/PromoPackContentTypeData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_CorrespondingWidget = { "CorrespondingWidget", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackContentTypeData, CorrespondingWidget), Z_Construct_UClass_UUMGPromoPackItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_CorrespondingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_CorrespondingWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_ContentTypeIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::NewProp_CorrespondingWidget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PromoPackContentTypeData",
		sizeof(FPromoPackContentTypeData),
		alignof(FPromoPackContentTypeData),
		Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPromoPackContentTypeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPromoPackContentTypeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PromoPackContentTypeData"), sizeof(FPromoPackContentTypeData), Get_Z_Construct_UScriptStruct_FPromoPackContentTypeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPromoPackContentTypeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPromoPackContentTypeData_Hash() { return 1646444371U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
