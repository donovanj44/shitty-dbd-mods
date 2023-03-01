// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DownloadProgression.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownloadProgression() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDownloadProgression();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FDownloadProgression::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDownloadProgression_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDownloadProgression, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DownloadProgression"), sizeof(FDownloadProgression), Get_Z_Construct_UScriptStruct_FDownloadProgression_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDownloadProgression>()
{
	return FDownloadProgression::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDownloadProgression(FDownloadProgression::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DownloadProgression"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDownloadProgression
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDownloadProgression()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DownloadProgression")),new UScriptStruct::TCppStructOps<FDownloadProgression>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDownloadProgression;
	struct Z_Construct_UScriptStruct_FDownloadProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DownloadStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDownloading_MetaData[];
#endif
		static void NewProp_IsDownloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDownloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstallProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstallProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownloadSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDownloadedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalDownloadedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownloadSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDownloadProgression_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DownloadProgression.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDownloadProgression>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadProgression.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadStatus = { "DownloadStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDownloadProgression, DownloadStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_IsDownloading_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadProgression.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_IsDownloading_SetBit(void* Obj)
	{
		((FDownloadProgression*)Obj)->IsDownloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_IsDownloading = { "IsDownloading", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDownloadProgression), &Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_IsDownloading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_IsDownloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_IsDownloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_InstallProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadProgression.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_InstallProgress = { "InstallProgress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDownloadProgression, InstallProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_InstallProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_InstallProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadProgression.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSpeed = { "DownloadSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDownloadProgression, DownloadSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_TotalDownloadedSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadProgression.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_TotalDownloadedSize = { "TotalDownloadedSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDownloadProgression, TotalDownloadedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_TotalDownloadedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_TotalDownloadedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadProgression.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSize = { "DownloadSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDownloadProgression, DownloadSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDownloadProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_IsDownloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_InstallProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_TotalDownloadedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadProgression_Statics::NewProp_DownloadSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDownloadProgression_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DownloadProgression",
		sizeof(FDownloadProgression),
		alignof(FDownloadProgression),
		Z_Construct_UScriptStruct_FDownloadProgression_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadProgression_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDownloadProgression_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadProgression_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDownloadProgression()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDownloadProgression_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DownloadProgression"), sizeof(FDownloadProgression), Get_Z_Construct_UScriptStruct_FDownloadProgression_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDownloadProgression_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDownloadProgression_Hash() { return 3856528770U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
