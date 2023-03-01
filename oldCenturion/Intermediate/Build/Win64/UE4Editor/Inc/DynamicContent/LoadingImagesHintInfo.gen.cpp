// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/LoadingImagesHintInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingImagesHintInfo() {}
// Cross Module References
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingImagesHintInfo();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
class UScriptStruct* FLoadingImagesHintInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DYNAMICCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingImagesHintInfo, Z_Construct_UPackage__Script_DynamicContent(), TEXT("LoadingImagesHintInfo"), sizeof(FLoadingImagesHintInfo), Get_Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Hash());
	}
	return Singleton;
}
template<> DYNAMICCONTENT_API UScriptStruct* StaticStruct<FLoadingImagesHintInfo>()
{
	return FLoadingImagesHintInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadingImagesHintInfo(FLoadingImagesHintInfo::StaticStruct, TEXT("/Script/DynamicContent"), TEXT("LoadingImagesHintInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DynamicContent_StaticRegisterNativesFLoadingImagesHintInfo
{
	FScriptStruct_DynamicContent_StaticRegisterNativesFLoadingImagesHintInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadingImagesHintInfo")),new UScriptStruct::TCppStructOps<FLoadingImagesHintInfo>);
	}
} ScriptStruct_DynamicContent_StaticRegisterNativesFLoadingImagesHintInfo;
	struct Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableForSurvivor_MetaData[];
#endif
		static void NewProp_IsAvailableForSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableForSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableForKiller_MetaData[];
#endif
		static void NewProp_IsAvailableForKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableForKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Icon;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingImagesHintInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingImagesHintInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImagesHintInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForSurvivor_SetBit(void* Obj)
	{
		((FLoadingImagesHintInfo*)Obj)->IsAvailableForSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForSurvivor = { "IsAvailableForSurvivor", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingImagesHintInfo), &Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImagesHintInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForKiller_SetBit(void* Obj)
	{
		((FLoadingImagesHintInfo*)Obj)->IsAvailableForKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForKiller = { "IsAvailableForKiller", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingImagesHintInfo), &Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Icon_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImagesHintInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingImagesHintInfo, Icon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImagesHintInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingImagesHintInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImagesHintInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingImagesHintInfo, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_IsAvailableForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
		nullptr,
		&NewStructOps,
		"LoadingImagesHintInfo",
		sizeof(FLoadingImagesHintInfo),
		alignof(FLoadingImagesHintInfo),
		Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingImagesHintInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DynamicContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadingImagesHintInfo"), sizeof(FLoadingImagesHintInfo), Get_Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadingImagesHintInfo_Hash() { return 1211699403U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
