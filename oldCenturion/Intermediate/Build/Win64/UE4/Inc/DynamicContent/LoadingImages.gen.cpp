// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/LoadingImages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingImages() {}
// Cross Module References
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingImages();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingImagesHintInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
class UScriptStruct* FLoadingImages::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DYNAMICCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FLoadingImages_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingImages, Z_Construct_UPackage__Script_DynamicContent(), TEXT("LoadingImages"), sizeof(FLoadingImages), Get_Z_Construct_UScriptStruct_FLoadingImages_Hash());
	}
	return Singleton;
}
template<> DYNAMICCONTENT_API UScriptStruct* StaticStruct<FLoadingImages>()
{
	return FLoadingImages::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadingImages(FLoadingImages::StaticStruct, TEXT("/Script/DynamicContent"), TEXT("LoadingImages"), false, nullptr, nullptr);
static struct FScriptStruct_DynamicContent_StaticRegisterNativesFLoadingImages
{
	FScriptStruct_DynamicContent_StaticRegisterNativesFLoadingImages()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadingImages")),new UScriptStruct::TCppStructOps<FLoadingImages>);
	}
} ScriptStruct_DynamicContent_StaticRegisterNativesFLoadingImages;
	struct Z_Construct_UScriptStruct_FLoadingImages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGenericImages_MetaData[];
#endif
		static void NewProp_IsGenericImages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGenericImages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableForKiller_MetaData[];
#endif
		static void NewProp_IsAvailableForKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableForKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableForSurvivor_MetaData[];
#endif
		static void NewProp_IsAvailableForSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableForSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagesHintInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImagesHintInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImagesHintInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Images;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImages_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingImages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingImages_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingImages>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsGenericImages_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsGenericImages_SetBit(void* Obj)
	{
		((FLoadingImages*)Obj)->IsGenericImages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsGenericImages = { "IsGenericImages", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingImages), &Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsGenericImages_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsGenericImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsGenericImages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForKiller_SetBit(void* Obj)
	{
		((FLoadingImages*)Obj)->IsAvailableForKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForKiller = { "IsAvailableForKiller", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingImages), &Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForSurvivor_SetBit(void* Obj)
	{
		((FLoadingImages*)Obj)->IsAvailableForSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForSurvivor = { "IsAvailableForSurvivor", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingImages), &Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ImagesHintInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ImagesHintInfo = { "ImagesHintInfo", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingImages, ImagesHintInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ImagesHintInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ImagesHintInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ImagesHintInfo_Inner = { "ImagesHintInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLoadingImagesHintInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_Images_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingImages, Images), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_Images_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImages.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingImages, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingImages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsGenericImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_IsAvailableForSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ImagesHintInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ImagesHintInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_Images,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_Images_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImages_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingImages_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
		nullptr,
		&NewStructOps,
		"LoadingImages",
		sizeof(FLoadingImages),
		alignof(FLoadingImages),
		Z_Construct_UScriptStruct_FLoadingImages_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImages_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImages_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImages_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingImages()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadingImages_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DynamicContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadingImages"), sizeof(FLoadingImages), Get_Z_Construct_UScriptStruct_FLoadingImages_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadingImages_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadingImages_Hash() { return 3574214314U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
