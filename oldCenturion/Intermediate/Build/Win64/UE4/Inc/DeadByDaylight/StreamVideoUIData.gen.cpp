// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StreamVideoUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamVideoUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStreamVideoUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStreamVideoWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FStreamVideoUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStreamVideoUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamVideoUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StreamVideoUIData"), sizeof(FStreamVideoUIData), Get_Z_Construct_UScriptStruct_FStreamVideoUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStreamVideoUIData>()
{
	return FStreamVideoUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamVideoUIData(FStreamVideoUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StreamVideoUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStreamVideoUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStreamVideoUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamVideoUIData")),new UScriptStruct::TCppStructOps<FStreamVideoUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStreamVideoUIData;
	struct Z_Construct_UScriptStruct_FStreamVideoUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MediaPlayerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamVideoWidgetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_StreamVideoWidgetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOrderWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrderWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAudio_MetaData[];
#endif
		static void NewProp_HasAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamVideoUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamVideoUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_MediaPlayerAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreamVideoUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_MediaPlayerAsset = { "MediaPlayerAsset", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamVideoUIData, MediaPlayerAsset), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_MediaPlayerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_MediaPlayerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_StreamVideoWidgetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreamVideoUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_StreamVideoWidgetAsset = { "StreamVideoWidgetAsset", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamVideoUIData, StreamVideoWidgetAsset), Z_Construct_UClass_UUMGStreamVideoWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_StreamVideoWidgetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_StreamVideoWidgetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_ZOrderWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreamVideoUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_ZOrderWidget = { "ZOrderWidget", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamVideoUIData, ZOrderWidget), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_ZOrderWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_ZOrderWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_HasAudio_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreamVideoUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_HasAudio_SetBit(void* Obj)
	{
		((FStreamVideoUIData*)Obj)->HasAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_HasAudio = { "HasAudio", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStreamVideoUIData), &Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_HasAudio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_HasAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_HasAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_Language_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreamVideoUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamVideoUIData, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_VideoURL_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreamVideoUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_VideoURL = { "VideoURL", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamVideoUIData, VideoURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_VideoURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_VideoURL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_MediaPlayerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_StreamVideoWidgetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_ZOrderWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_HasAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::NewProp_VideoURL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"StreamVideoUIData",
		sizeof(FStreamVideoUIData),
		alignof(FStreamVideoUIData),
		Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamVideoUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamVideoUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamVideoUIData"), sizeof(FStreamVideoUIData), Get_Z_Construct_UScriptStruct_FStreamVideoUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamVideoUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamVideoUIData_Hash() { return 386719460U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
