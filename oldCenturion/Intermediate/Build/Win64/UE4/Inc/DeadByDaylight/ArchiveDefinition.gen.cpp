// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchiveDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId();
// End Cross Module References
class UScriptStruct* FArchiveDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArchiveDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveDefinition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArchiveDefinition"), sizeof(FArchiveDefinition), Get_Z_Construct_UScriptStruct_FArchiveDefinition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArchiveDefinition>()
{
	return FArchiveDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveDefinition(FArchiveDefinition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArchiveDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveDefinition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArchiveDefinition")),new UScriptStruct::TCppStructOps<FArchiveDefinition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveDefinition;
	struct Z_Construct_UScriptStruct_FArchiveDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventStoryLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventStoryLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StyleFrameLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StyleFrameLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchasePassPopupMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PurchasePassPopupMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseTierPicturePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PurchaseTierPicturePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchasePassPicturePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PurchasePassPicturePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchiveDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_EventStoryLabel_MetaData[] = {
		{ "Category", "ArchiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_EventStoryLabel = { "EventStoryLabel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveDefinition, EventStoryLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_EventStoryLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_EventStoryLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_StyleFrameLabel_MetaData[] = {
		{ "Category", "ArchiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_StyleFrameLabel = { "StyleFrameLabel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveDefinition, StyleFrameLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_StyleFrameLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_StyleFrameLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPopupMessage_MetaData[] = {
		{ "Category", "ArchiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPopupMessage = { "PurchasePassPopupMessage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveDefinition, PurchasePassPopupMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPopupMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPopupMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchaseTierPicturePath_MetaData[] = {
		{ "Category", "ArchiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchaseTierPicturePath = { "PurchaseTierPicturePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveDefinition, PurchaseTierPicturePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchaseTierPicturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchaseTierPicturePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPicturePath_MetaData[] = {
		{ "Category", "ArchiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPicturePath = { "PurchasePassPicturePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveDefinition, PurchasePassPicturePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPicturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPicturePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ArchiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveDefinition, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "ArchiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveDefinition, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_EventStoryLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_StyleFrameLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPopupMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchaseTierPicturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_PurchasePassPicturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveDefinition_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBaseWithId,
		&NewStructOps,
		"ArchiveDefinition",
		sizeof(FArchiveDefinition),
		alignof(FArchiveDefinition),
		Z_Construct_UScriptStruct_FArchiveDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveDefinition"), sizeof(FArchiveDefinition), Get_Z_Construct_UScriptStruct_FArchiveDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveDefinition_Hash() { return 975729510U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
