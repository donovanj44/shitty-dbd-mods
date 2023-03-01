// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerSavedProfileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSavedProfileData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FConsoleUserSettings();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared();
// End Cross Module References
class UScriptStruct* FPlayerSavedProfileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerSavedProfileData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerSavedProfileData"), sizeof(FPlayerSavedProfileData), Get_Z_Construct_UScriptStruct_FPlayerSavedProfileData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerSavedProfileData>()
{
	return FPlayerSavedProfileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerSavedProfileData(FPlayerSavedProfileData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerSavedProfileData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerSavedProfileData")),new UScriptStruct::TCppStructOps<FPlayerSavedProfileData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileData;
	struct Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleUserSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsoleUserSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerSavedProfileData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerSavedProfileData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_ConsoleUserSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_ConsoleUserSettings = { "ConsoleUserSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileData, ConsoleUserSettings), Z_Construct_UScriptStruct_FConsoleUserSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_ConsoleUserSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_ConsoleUserSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_LocalData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_LocalData = { "LocalData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileData, LocalData), Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_LocalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_LocalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_SharedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_SharedData = { "SharedData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileData, SharedData), Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_SharedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_SharedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_PlayerUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_PlayerUID = { "PlayerUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileData, PlayerUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_PlayerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_PlayerUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_ConsoleUserSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_LocalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_SharedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::NewProp_PlayerUID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerSavedProfileData",
		sizeof(FPlayerSavedProfileData),
		alignof(FPlayerSavedProfileData),
		Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerSavedProfileData"), sizeof(FPlayerSavedProfileData), Get_Z_Construct_UScriptStruct_FPlayerSavedProfileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerSavedProfileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileData_Hash() { return 296517669U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
