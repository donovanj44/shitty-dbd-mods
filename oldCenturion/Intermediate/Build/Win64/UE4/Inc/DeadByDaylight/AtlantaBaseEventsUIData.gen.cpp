// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaBaseEventsUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaBaseEventsUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
// End Cross Module References
class UScriptStruct* FAtlantaBaseEventsUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaBaseEventsUIData"), sizeof(FAtlantaBaseEventsUIData), Get_Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaBaseEventsUIData>()
{
	return FAtlantaBaseEventsUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaBaseEventsUIData(FAtlantaBaseEventsUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaBaseEventsUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaBaseEventsUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaBaseEventsUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaBaseEventsUIData")),new UScriptStruct::TCppStructOps<FAtlantaBaseEventsUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaBaseEventsUIData;
	struct Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mustHideParticipateButton_MetaData[];
#endif
		static void NewProp_mustHideParticipateButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mustHideParticipateButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelatedItemsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RelatedItemsId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RelatedItemsId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewEndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewEndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewStartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotEndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HotEndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotStartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HotStartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannerEndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BannerEndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannerStartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BannerStartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayEndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayEndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayStartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayStartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeepLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannerPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BannerPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CampaignName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CampaignName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaBaseEventsUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_mustHideParticipateButton_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_mustHideParticipateButton_SetBit(void* Obj)
	{
		((FAtlantaBaseEventsUIData*)Obj)->mustHideParticipateButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_mustHideParticipateButton = { "mustHideParticipateButton", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaBaseEventsUIData), &Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_mustHideParticipateButton_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_mustHideParticipateButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_mustHideParticipateButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_RelatedItemsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_RelatedItemsId = { "RelatedItemsId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, RelatedItemsId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_RelatedItemsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_RelatedItemsId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_RelatedItemsId_Inner = { "RelatedItemsId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewEndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewEndDate = { "NewEndDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, NewEndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewEndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewStartDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewStartDate = { "NewStartDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, NewStartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewStartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewStartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotEndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotEndDate = { "HotEndDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, HotEndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotEndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotStartDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotStartDate = { "HotStartDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, HotStartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotStartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotStartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerEndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerEndDate = { "BannerEndDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, BannerEndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerEndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerStartDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerStartDate = { "BannerStartDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, BannerStartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerStartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerStartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayEndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayEndDate = { "DisplayEndDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, DisplayEndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayEndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayStartDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayStartDate = { "DisplayStartDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, DisplayStartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayStartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayStartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_StartDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DeepLink_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DeepLink = { "DeepLink", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, DeepLink), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DeepLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DeepLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerPriority = { "BannerPriority", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, BannerPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventPriority = { "EventPriority", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, EventPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Image_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, Image), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_CampaignName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_CampaignName = { "CampaignName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, CampaignName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_CampaignName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_CampaignName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaBaseEventsUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaBaseEventsUIData, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_mustHideParticipateButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_RelatedItemsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_RelatedItemsId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewEndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_NewStartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotEndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_HotStartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerEndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerStartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayEndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DisplayStartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_DeepLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_BannerPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_CampaignName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::NewProp_EventId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaBaseEventsUIData",
		sizeof(FAtlantaBaseEventsUIData),
		alignof(FAtlantaBaseEventsUIData),
		Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaBaseEventsUIData"), sizeof(FAtlantaBaseEventsUIData), Get_Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData_Hash() { return 2093268233U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
