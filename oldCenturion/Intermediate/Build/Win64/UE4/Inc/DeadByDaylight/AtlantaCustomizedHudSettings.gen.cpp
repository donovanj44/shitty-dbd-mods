// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaCustomizedHudSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaCustomizedHudSettings() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FAtlantaCustomizedHudSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaCustomizedHudSettings"), sizeof(FAtlantaCustomizedHudSettings), Get_Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaCustomizedHudSettings>()
{
	return FAtlantaCustomizedHudSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaCustomizedHudSettings(FAtlantaCustomizedHudSettings::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaCustomizedHudSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaCustomizedHudSettings
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaCustomizedHudSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaCustomizedHudSettings")),new UScriptStruct::TCppStructOps<FAtlantaCustomizedHudSettings>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaCustomizedHudSettings;
	struct Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapWrapperIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlapWrapperIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RenderOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalizedOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaCustomizedHudSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaCustomizedHudSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_OverlapWrapperIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCustomizedHudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_OverlapWrapperIds = { "OverlapWrapperIds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCustomizedHudSettings, OverlapWrapperIds), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_OverlapWrapperIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_OverlapWrapperIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCustomizedHudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCustomizedHudSettings, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_RenderOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCustomizedHudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_RenderOpacity = { "RenderOpacity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCustomizedHudSettings, RenderOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_RenderOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_RenderOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCustomizedHudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCustomizedHudSettings, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_NormalizedOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCustomizedHudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_NormalizedOffset = { "NormalizedOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCustomizedHudSettings, NormalizedOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_NormalizedOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_NormalizedOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCustomizedHudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCustomizedHudSettings, Id), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_OverlapWrapperIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_RenderOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_NormalizedOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaCustomizedHudSettings",
		sizeof(FAtlantaCustomizedHudSettings),
		alignof(FAtlantaCustomizedHudSettings),
		Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaCustomizedHudSettings"), sizeof(FAtlantaCustomizedHudSettings), Get_Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings_Hash() { return 2477942667U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
