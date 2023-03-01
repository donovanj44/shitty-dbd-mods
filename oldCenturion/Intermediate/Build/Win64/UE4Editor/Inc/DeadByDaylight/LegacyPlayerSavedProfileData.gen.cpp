// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacyPlayerSavedProfileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyPlayerSavedProfileData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDataBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared();
// End Cross Module References
class UScriptStruct* FLegacyPlayerSavedProfileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacyPlayerSavedProfileData"), sizeof(FLegacyPlayerSavedProfileData), Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacyPlayerSavedProfileData>()
{
	return FLegacyPlayerSavedProfileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacyPlayerSavedProfileData(FLegacyPlayerSavedProfileData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacyPlayerSavedProfileData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyPlayerSavedProfileData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyPlayerSavedProfileData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacyPlayerSavedProfileData")),new UScriptStruct::TCppStructOps<FLegacyPlayerSavedProfileData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyPlayerSavedProfileData;
	struct Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacyPlayerSavedProfileData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_LocalData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_LocalData = { "LocalData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileData, LocalData), Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_LocalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_LocalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_SharedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_SharedData = { "SharedData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileData, SharedData), Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_SharedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_SharedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_PlayerUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_PlayerUID = { "PlayerUID", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileData, PlayerUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_PlayerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_PlayerUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_LocalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_SharedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::NewProp_PlayerUID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FSaveDataBase,
		&NewStructOps,
		"LegacyPlayerSavedProfileData",
		sizeof(FLegacyPlayerSavedProfileData),
		alignof(FLegacyPlayerSavedProfileData),
		Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacyPlayerSavedProfileData"), sizeof(FLegacyPlayerSavedProfileData), Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileData_Hash() { return 1083882856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
