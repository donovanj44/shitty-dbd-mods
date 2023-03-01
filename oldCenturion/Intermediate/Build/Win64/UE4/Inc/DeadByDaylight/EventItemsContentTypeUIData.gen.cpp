// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EventItemsContentTypeUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventItemsContentTypeUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEventItemsContentTypeUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEventItemContentType();
// End Cross Module References
class UScriptStruct* FEventItemsContentTypeUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EventItemsContentTypeUIData"), sizeof(FEventItemsContentTypeUIData), Get_Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEventItemsContentTypeUIData>()
{
	return FEventItemsContentTypeUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventItemsContentTypeUIData(FEventItemsContentTypeUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EventItemsContentTypeUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEventItemsContentTypeUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEventItemsContentTypeUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventItemsContentTypeUIData")),new UScriptStruct::TCppStructOps<FEventItemsContentTypeUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEventItemsContentTypeUIData;
	struct Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityBackgroundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RarityBackgroundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRarityBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultRarityBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDefaultRarityBackgroundColor_MetaData[];
#endif
		static void NewProp_UseDefaultRarityBackgroundColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDefaultRarityBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedRemoveRarityBackground_MetaData[];
#endif
		static void NewProp_NeedRemoveRarityBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedRemoveRarityBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventItemsContentTypeUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventItemsContentTypeUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_RarityBackgroundTexture_MetaData[] = {
		{ "Category", "EventItemsContentTypeUIData" },
		{ "ModuleRelativePath", "Public/EventItemsContentTypeUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_RarityBackgroundTexture = { "RarityBackgroundTexture", nullptr, (EPropertyFlags)0x0014000002010001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventItemsContentTypeUIData, RarityBackgroundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_RarityBackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_RarityBackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_BackgroundTexture_MetaData[] = {
		{ "Category", "EventItemsContentTypeUIData" },
		{ "ModuleRelativePath", "Public/EventItemsContentTypeUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0014000002010001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventItemsContentTypeUIData, BackgroundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_BackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_BackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_DefaultRarityBackgroundColor_MetaData[] = {
		{ "Category", "EventItemsContentTypeUIData" },
		{ "ModuleRelativePath", "Public/EventItemsContentTypeUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_DefaultRarityBackgroundColor = { "DefaultRarityBackgroundColor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventItemsContentTypeUIData, DefaultRarityBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_DefaultRarityBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_DefaultRarityBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_UseDefaultRarityBackgroundColor_MetaData[] = {
		{ "Category", "EventItemsContentTypeUIData" },
		{ "ModuleRelativePath", "Public/EventItemsContentTypeUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_UseDefaultRarityBackgroundColor_SetBit(void* Obj)
	{
		((FEventItemsContentTypeUIData*)Obj)->UseDefaultRarityBackgroundColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_UseDefaultRarityBackgroundColor = { "UseDefaultRarityBackgroundColor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEventItemsContentTypeUIData), &Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_UseDefaultRarityBackgroundColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_UseDefaultRarityBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_UseDefaultRarityBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_NeedRemoveRarityBackground_MetaData[] = {
		{ "Category", "EventItemsContentTypeUIData" },
		{ "ModuleRelativePath", "Public/EventItemsContentTypeUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_NeedRemoveRarityBackground_SetBit(void* Obj)
	{
		((FEventItemsContentTypeUIData*)Obj)->NeedRemoveRarityBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_NeedRemoveRarityBackground = { "NeedRemoveRarityBackground", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEventItemsContentTypeUIData), &Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_NeedRemoveRarityBackground_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_NeedRemoveRarityBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_NeedRemoveRarityBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_ContentType_MetaData[] = {
		{ "Category", "EventItemsContentTypeUIData" },
		{ "ModuleRelativePath", "Public/EventItemsContentTypeUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventItemsContentTypeUIData, ContentType), Z_Construct_UEnum_DeadByDaylight_EEventItemContentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_ContentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_RarityBackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_BackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_DefaultRarityBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_UseDefaultRarityBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_NeedRemoveRarityBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_ContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::NewProp_ContentType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EventItemsContentTypeUIData",
		sizeof(FEventItemsContentTypeUIData),
		alignof(FEventItemsContentTypeUIData),
		Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventItemsContentTypeUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventItemsContentTypeUIData"), sizeof(FEventItemsContentTypeUIData), Get_Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventItemsContentTypeUIData_Hash() { return 2009906656U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
