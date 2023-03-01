// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomizationItemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationItemData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAnimData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomSoundFXData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FUnlockSaveStatCondition();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBPAttachementSocketData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECharmCategory();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalMaterialReplacer();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialReplacerData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory();
// End Cross Module References
class UScriptStruct* FCustomizationItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCustomizationItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizationItemData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CustomizationItemData"), sizeof(FCustomizationItemData), Get_Z_Construct_UScriptStruct_FCustomizationItemData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCustomizationItemData>()
{
	return FCustomizationItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizationItemData(FCustomizationItemData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CustomizationItemData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomizationItemData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomizationItemData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizationItemData")),new UScriptStruct::TCppStructOps<FCustomizationItemData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomizationItemData;
	struct Z_Construct_UScriptStruct_FCustomizationItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSFXs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomSFXs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomSFXs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformExclusiveFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PlatformExclusiveFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableInAtlantaBuild_MetaData[];
#endif
		static void NewProp_IsAvailableInAtlantaBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableInAtlantaBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInNonViolentBuild_MetaData[];
#endif
		static void NewProp_IsInNonViolentBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInNonViolentBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInStore_MetaData[];
#endif
		static void NewProp_IsInStore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockingConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnlockingConditions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockingConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketAttachements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SocketAttachements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketAttachements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharmCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharmCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeUnlockDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrestigeUnlockDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeUlockLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrestigeUlockLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CollectionDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CollectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalComponentTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletalComponentTags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkeletalComponentTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalMaterialReplacer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalMaterialReplacer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialsMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialsMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ItemBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AnimClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizationItemData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimationData_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, AnimationData), Z_Construct_UScriptStruct_FCustomAnimData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CustomSFXs_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CustomSFXs = { "CustomSFXs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, CustomSFXs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CustomSFXs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CustomSFXs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CustomSFXs_Inner = { "CustomSFXs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomSoundFXData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PlatformExclusiveFlag_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PlatformExclusiveFlag = { "PlatformExclusiveFlag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, PlatformExclusiveFlag), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PlatformExclusiveFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PlatformExclusiveFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsAvailableInAtlantaBuild_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsAvailableInAtlantaBuild_SetBit(void* Obj)
	{
		((FCustomizationItemData*)Obj)->IsAvailableInAtlantaBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsAvailableInAtlantaBuild = { "IsAvailableInAtlantaBuild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationItemData), &Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsAvailableInAtlantaBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsAvailableInAtlantaBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsAvailableInAtlantaBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInNonViolentBuild_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInNonViolentBuild_SetBit(void* Obj)
	{
		((FCustomizationItemData*)Obj)->IsInNonViolentBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInNonViolentBuild = { "IsInNonViolentBuild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationItemData), &Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInNonViolentBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInNonViolentBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInNonViolentBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInStore_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInStore_SetBit(void* Obj)
	{
		((FCustomizationItemData*)Obj)->IsInStore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInStore = { "IsInStore", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationItemData), &Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInStore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_UnlockingConditions_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_UnlockingConditions = { "UnlockingConditions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, UnlockingConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_UnlockingConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_UnlockingConditions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_UnlockingConditions_Inner = { "UnlockingConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockSaveStatCondition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SocketAttachements_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SocketAttachements = { "SocketAttachements", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, SocketAttachements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SocketAttachements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SocketAttachements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SocketAttachements_Inner = { "SocketAttachements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPAttachementSocketData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CharmCategory_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CharmCategory = { "CharmCategory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, CharmCategory), Z_Construct_UEnum_DeadByDaylight_ECharmCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CharmCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CharmCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CharmCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_EventId_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_EventId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUnlockDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUnlockDate = { "PrestigeUnlockDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, PrestigeUnlockDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUnlockDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUnlockDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUlockLevel_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUlockLevel = { "PrestigeUlockLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, PrestigeUlockLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUlockLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUlockLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionDescription_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionDescription = { "CollectionDescription", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, CollectionDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionName_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionName = { "CollectionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, CollectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SkeletalComponentTags_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SkeletalComponentTags = { "SkeletalComponentTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, SkeletalComponentTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SkeletalComponentTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SkeletalComponentTags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SkeletalComponentTags_Inner = { "SkeletalComponentTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ConditionalMaterialReplacer_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ConditionalMaterialReplacer = { "ConditionalMaterialReplacer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, ConditionalMaterialReplacer), Z_Construct_UScriptStruct_FConditionalMaterialReplacer, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ConditionalMaterialReplacer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ConditionalMaterialReplacer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_MaterialsMap_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_MaterialsMap = { "MaterialsMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, MaterialsMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_MaterialsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_MaterialsMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_MaterialsMap_Inner = { "MaterialsMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialReplacerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemBlueprint_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemBlueprint = { "ItemBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, ItemBlueprint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimClass_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimClass = { "AnimClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, AnimClass), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, ItemMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "CustomizationItemData" },
		{ "ModuleRelativePath", "Public/CustomizationItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemData, Category), Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizationItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CustomSFXs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CustomSFXs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PlatformExclusiveFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsAvailableInAtlantaBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInNonViolentBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_IsInStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_UnlockingConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_UnlockingConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SocketAttachements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SocketAttachements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CharmCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CharmCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_EventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUnlockDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_PrestigeUlockLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_CollectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SkeletalComponentTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_SkeletalComponentTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ConditionalMaterialReplacer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_MaterialsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_MaterialsMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_AnimClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_ItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemData_Statics::NewProp_Category_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizationItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FCustomizationData,
		&NewStructOps,
		"CustomizationItemData",
		sizeof(FCustomizationItemData),
		alignof(FCustomizationItemData),
		Z_Construct_UScriptStruct_FCustomizationItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizationItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizationItemData"), sizeof(FCustomizationItemData), Get_Z_Construct_UScriptStruct_FCustomizationItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizationItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizationItemData_Hash() { return 2644218013U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
