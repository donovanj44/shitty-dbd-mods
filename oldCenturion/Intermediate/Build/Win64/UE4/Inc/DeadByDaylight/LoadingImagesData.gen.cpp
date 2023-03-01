// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoadingImagesData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingImagesData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingImagesData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingInfoData();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
class UScriptStruct* FLoadingImagesData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLoadingImagesData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingImagesData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LoadingImagesData"), sizeof(FLoadingImagesData), Get_Z_Construct_UScriptStruct_FLoadingImagesData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLoadingImagesData>()
{
	return FLoadingImagesData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadingImagesData(FLoadingImagesData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LoadingImagesData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLoadingImagesData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLoadingImagesData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadingImagesData")),new UScriptStruct::TCppStructOps<FLoadingImagesData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLoadingImagesData;
	struct Z_Construct_UScriptStruct_FLoadingImagesData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfoData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfoData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Images;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingImagesData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingImagesData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsGenericImages_MetaData[] = {
		{ "Category", "LoadingImagesData" },
		{ "ModuleRelativePath", "Public/LoadingImagesData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsGenericImages_SetBit(void* Obj)
	{
		((FLoadingImagesData*)Obj)->IsGenericImages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsGenericImages = { "IsGenericImages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingImagesData), &Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsGenericImages_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsGenericImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsGenericImages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForKiller_MetaData[] = {
		{ "Category", "LoadingImagesData" },
		{ "ModuleRelativePath", "Public/LoadingImagesData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForKiller_SetBit(void* Obj)
	{
		((FLoadingImagesData*)Obj)->IsAvailableForKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForKiller = { "IsAvailableForKiller", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingImagesData), &Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForSurvivor_MetaData[] = {
		{ "Category", "LoadingImagesData" },
		{ "ModuleRelativePath", "Public/LoadingImagesData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForSurvivor_SetBit(void* Obj)
	{
		((FLoadingImagesData*)Obj)->IsAvailableForSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForSurvivor = { "IsAvailableForSurvivor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingImagesData), &Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_InfoData_MetaData[] = {
		{ "Category", "LoadingImagesData" },
		{ "ModuleRelativePath", "Public/LoadingImagesData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_InfoData = { "InfoData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingImagesData, InfoData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_InfoData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_InfoData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_InfoData_Inner = { "InfoData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLoadingInfoData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_Images_MetaData[] = {
		{ "Category", "LoadingImagesData" },
		{ "ModuleRelativePath", "Public/LoadingImagesData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingImagesData, Images), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_Images_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "LoadingImagesData" },
		{ "ModuleRelativePath", "Public/LoadingImagesData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingImagesData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingImagesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsGenericImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_IsAvailableForSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_InfoData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_InfoData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_Images,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_Images_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingImagesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"LoadingImagesData",
		sizeof(FLoadingImagesData),
		alignof(FLoadingImagesData),
		Z_Construct_UScriptStruct_FLoadingImagesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingImagesData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadingImagesData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadingImagesData"), sizeof(FLoadingImagesData), Get_Z_Construct_UScriptStruct_FLoadingImagesData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadingImagesData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadingImagesData_Hash() { return 3549996248U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
