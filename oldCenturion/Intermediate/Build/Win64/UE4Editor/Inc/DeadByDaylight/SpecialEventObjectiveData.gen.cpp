// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialEventObjectiveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventObjectiveData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventObjectiveData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FSpecialEventObjectiveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialEventObjectiveData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpecialEventObjectiveData"), sizeof(FSpecialEventObjectiveData), Get_Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpecialEventObjectiveData>()
{
	return FSpecialEventObjectiveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialEventObjectiveData(FSpecialEventObjectiveData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpecialEventObjectiveData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventObjectiveData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventObjectiveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialEventObjectiveData")),new UScriptStruct::TCppStructOps<FSpecialEventObjectiveData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventObjectiveData;
	struct Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockedRewardGenericIconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnlockedRewardGenericIconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedRewardGenericIconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LockedRewardGenericIconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RewardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CompletedDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CompletedTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveFrameLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveFrameLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectiveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialEventObjectiveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Sections_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, Sections), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_StatName_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, StatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_StatName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_PlayerRole_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_PlayerRole = { "PlayerRole", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, PlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_PlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_PlayerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_PlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_UnlockedRewardGenericIconPath_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_UnlockedRewardGenericIconPath = { "UnlockedRewardGenericIconPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, UnlockedRewardGenericIconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_UnlockedRewardGenericIconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_UnlockedRewardGenericIconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_LockedRewardGenericIconPath_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_LockedRewardGenericIconPath = { "LockedRewardGenericIconPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, LockedRewardGenericIconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_LockedRewardGenericIconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_LockedRewardGenericIconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_RewardId_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_RewardId = { "RewardId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, RewardId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_RewardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_RewardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedDescription_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedDescription = { "CompletedDescription", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, CompletedDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedTitle_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedTitle = { "CompletedTitle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, CompletedTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveFrameLabel_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveFrameLabel = { "ObjectiveFrameLabel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, ObjectiveFrameLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveFrameLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveFrameLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_IconPath_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, IconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_IconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveId_MetaData[] = {
		{ "Category", "SpecialEventObjectiveData" },
		{ "ModuleRelativePath", "Public/SpecialEventObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveId = { "ObjectiveId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventObjectiveData, ObjectiveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_PlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_PlayerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_UnlockedRewardGenericIconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_LockedRewardGenericIconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_RewardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_CompletedTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveFrameLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_IconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::NewProp_ObjectiveId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SpecialEventObjectiveData",
		sizeof(FSpecialEventObjectiveData),
		alignof(FSpecialEventObjectiveData),
		Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventObjectiveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialEventObjectiveData"), sizeof(FSpecialEventObjectiveData), Get_Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialEventObjectiveData_Hash() { return 4003505118U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
