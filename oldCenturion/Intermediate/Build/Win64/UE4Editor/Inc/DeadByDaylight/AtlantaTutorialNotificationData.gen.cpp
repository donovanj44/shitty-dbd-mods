// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTutorialNotificationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTutorialNotificationData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialNotificationData();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
class UScriptStruct* FAtlantaTutorialNotificationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaTutorialNotificationData"), sizeof(FAtlantaTutorialNotificationData), Get_Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaTutorialNotificationData>()
{
	return FAtlantaTutorialNotificationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaTutorialNotificationData(FAtlantaTutorialNotificationData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaTutorialNotificationData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialNotificationData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialNotificationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaTutorialNotificationData")),new UScriptStruct::TCppStructOps<FAtlantaTutorialNotificationData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialNotificationData;
	struct Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Textures_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialNotificationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaTutorialNotificationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "AtlantaTutorialNotificationData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialNotificationData, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::NewProp_Textures_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FTutorialNotificationData,
		&NewStructOps,
		"AtlantaTutorialNotificationData",
		sizeof(FAtlantaTutorialNotificationData),
		alignof(FAtlantaTutorialNotificationData),
		Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaTutorialNotificationData"), sizeof(FAtlantaTutorialNotificationData), Get_Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialNotificationData_Hash() { return 4255402521U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
