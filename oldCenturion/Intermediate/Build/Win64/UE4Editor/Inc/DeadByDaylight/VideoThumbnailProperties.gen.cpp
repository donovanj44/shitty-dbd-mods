// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/VideoThumbnailProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoThumbnailProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FVideoThumbnailProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FVideoThumbnailProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FVideoThumbnailProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVideoThumbnailProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("VideoThumbnailProperties"), sizeof(FVideoThumbnailProperties), Get_Z_Construct_UScriptStruct_FVideoThumbnailProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FVideoThumbnailProperties>()
{
	return FVideoThumbnailProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVideoThumbnailProperties(FVideoThumbnailProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("VideoThumbnailProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFVideoThumbnailProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFVideoThumbnailProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VideoThumbnailProperties")),new UScriptStruct::TCppStructOps<FVideoThumbnailProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFVideoThumbnailProperties;
	struct Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__source_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasAudio_MetaData[];
#endif
		static void NewProp__hasAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VideoThumbnailProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVideoThumbnailProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__source_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VideoThumbnailProperties" },
		{ "ModuleRelativePath", "Public/VideoThumbnailProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__source = { "_source", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoThumbnailProperties, _source), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VideoThumbnailProperties" },
		{ "ModuleRelativePath", "Public/VideoThumbnailProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__size = { "_size", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoThumbnailProperties, _size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__hasAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VideoThumbnailProperties" },
		{ "ModuleRelativePath", "Public/VideoThumbnailProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__hasAudio_SetBit(void* Obj)
	{
		((FVideoThumbnailProperties*)Obj)->_hasAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__hasAudio = { "_hasAudio", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVideoThumbnailProperties), &Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__hasAudio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__hasAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__hasAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VideoThumbnailProperties" },
		{ "ModuleRelativePath", "Public/VideoThumbnailProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoThumbnailProperties, _id), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__hasAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::NewProp__id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"VideoThumbnailProperties",
		sizeof(FVideoThumbnailProperties),
		alignof(FVideoThumbnailProperties),
		Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVideoThumbnailProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVideoThumbnailProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VideoThumbnailProperties"), sizeof(FVideoThumbnailProperties), Get_Z_Construct_UScriptStruct_FVideoThumbnailProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVideoThumbnailProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVideoThumbnailProperties_Hash() { return 1774991301U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
