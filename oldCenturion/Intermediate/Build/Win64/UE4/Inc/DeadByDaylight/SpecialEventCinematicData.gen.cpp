// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialEventCinematicData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventCinematicData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventCinematicData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSpecialEventCinematicData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpecialEventCinematicData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialEventCinematicData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpecialEventCinematicData"), sizeof(FSpecialEventCinematicData), Get_Z_Construct_UScriptStruct_FSpecialEventCinematicData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpecialEventCinematicData>()
{
	return FSpecialEventCinematicData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialEventCinematicData(FSpecialEventCinematicData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpecialEventCinematicData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventCinematicData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventCinematicData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialEventCinematicData")),new UScriptStruct::TCppStructOps<FSpecialEventCinematicData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventCinematicData;
	struct Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoIconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoIconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoThumbnailId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VideoThumbnailId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialEventCinematicData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialEventCinematicData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoIconPath_MetaData[] = {
		{ "Category", "SpecialEventCinematicData" },
		{ "ModuleRelativePath", "Public/SpecialEventCinematicData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoIconPath = { "VideoIconPath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventCinematicData, VideoIconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoIconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoIconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoThumbnailId_MetaData[] = {
		{ "Category", "SpecialEventCinematicData" },
		{ "ModuleRelativePath", "Public/SpecialEventCinematicData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoThumbnailId = { "VideoThumbnailId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventCinematicData, VideoThumbnailId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoThumbnailId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoThumbnailId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "SpecialEventCinematicData" },
		{ "ModuleRelativePath", "Public/SpecialEventCinematicData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventCinematicData, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_StartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoIconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_VideoThumbnailId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::NewProp_StartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SpecialEventCinematicData",
		sizeof(FSpecialEventCinematicData),
		alignof(FSpecialEventCinematicData),
		Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventCinematicData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialEventCinematicData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialEventCinematicData"), sizeof(FSpecialEventCinematicData), Get_Z_Construct_UScriptStruct_FSpecialEventCinematicData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialEventCinematicData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialEventCinematicData_Hash() { return 636318351U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
