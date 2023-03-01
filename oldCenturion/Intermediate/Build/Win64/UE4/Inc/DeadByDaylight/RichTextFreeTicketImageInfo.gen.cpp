// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RichTextFreeTicketImageInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextFreeTicketImageInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
class UScriptStruct* FRichTextFreeTicketImageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RichTextFreeTicketImageInfo"), sizeof(FRichTextFreeTicketImageInfo), Get_Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRichTextFreeTicketImageInfo>()
{
	return FRichTextFreeTicketImageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichTextFreeTicketImageInfo(FRichTextFreeTicketImageInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RichTextFreeTicketImageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRichTextFreeTicketImageInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRichTextFreeTicketImageInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RichTextFreeTicketImageInfo")),new UScriptStruct::TCppStructOps<FRichTextFreeTicketImageInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRichTextFreeTicketImageInfo;
	struct Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RichTextFreeTicketImageInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichTextFreeTicketImageInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "RichTextFreeTicketImageInfo" },
		{ "ModuleRelativePath", "Public/RichTextFreeTicketImageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichTextFreeTicketImageInfo, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::NewProp_Padding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::NewProp_Padding,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"RichTextFreeTicketImageInfo",
		sizeof(FRichTextFreeTicketImageInfo),
		alignof(FRichTextFreeTicketImageInfo),
		Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichTextFreeTicketImageInfo"), sizeof(FRichTextFreeTicketImageInfo), Get_Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichTextFreeTicketImageInfo_Hash() { return 3711469333U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
