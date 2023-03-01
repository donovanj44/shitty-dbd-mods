// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterDescription() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDescription();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSlideShowDescription();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EKillerHeight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableProxy();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EKillerAbilities();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGender();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedMeshPart();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FCharacterDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterDescription, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterDescription"), sizeof(FCharacterDescription), Get_Z_Construct_UScriptStruct_FCharacterDescription_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterDescription>()
{
	return FCharacterDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterDescription(FCharacterDescription::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterDescription"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterDescription
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterDescription")),new UScriptStruct::TCppStructOps<FCharacterDescription>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterDescription;
	struct Z_Construct_UScriptStruct_FCharacterDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomizationCategories;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomizationCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideStoreCustomizations_MetaData[];
#endif
		static void NewProp_HideStoreCustomizations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideStoreCustomizations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideShowDescriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlideShowDescriptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KillerHeight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KillerHeight_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TunableDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TunableDB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KillerAbilities;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KillerAbilities_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KillerAbilities_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_MenuPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_GamePawn;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableInNonViolentBuild_MetaData[];
#endif
		static void NewProp_IsAvailableInNonViolentBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableInNonViolentBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInChunk0_MetaData[];
#endif
		static void NewProp_IsInChunk0_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInChunk0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IdName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableIfDlcInstalled_MetaData[];
#endif
		static void NewProp_AvailableIfDlcInstalled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AvailableIfDlcInstalled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalDlcIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalDlcIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalDlcIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChapterDlcId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChapterDlcId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomizationDescription;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizationDescription_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BackgroundImagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HudIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IconFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Biography_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Biography;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackStory_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BackStory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationCategories_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationCategories = { "CustomizationCategories", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, CustomizationCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationCategories_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationCategories_Inner = { "CustomizationCategories", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HideStoreCustomizations_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HideStoreCustomizations_SetBit(void* Obj)
	{
		((FCharacterDescription*)Obj)->HideStoreCustomizations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HideStoreCustomizations = { "HideStoreCustomizations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterDescription), &Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HideStoreCustomizations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HideStoreCustomizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HideStoreCustomizations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_SlideShowDescriptions_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_SlideShowDescriptions = { "SlideShowDescriptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, SlideShowDescriptions), Z_Construct_UScriptStruct_FSlideShowDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_SlideShowDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_SlideShowDescriptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerHeight_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerHeight = { "KillerHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, KillerHeight), Z_Construct_UEnum_DeadByDaylight_EKillerHeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerHeight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerHeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_TunableDB_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_TunableDB = { "TunableDB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, TunableDB), Z_Construct_UScriptStruct_FDataTableProxy, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_TunableDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_TunableDB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerAbilities_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerAbilities = { "KillerAbilities", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, KillerAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerAbilities_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerAbilities_Inner = { "KillerAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EKillerAbilities, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerAbilities_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, Gender), Z_Construct_UEnum_DBDSharedTypes_EGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DefaultItem_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DefaultItem = { "DefaultItem", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, DefaultItem), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DefaultItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DefaultItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_MenuPawn_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_MenuPawn = { "MenuPawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, MenuPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_MenuPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_MenuPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_GamePawn_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_GamePawn = { "GamePawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, GamePawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_GamePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_GamePawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_PlatformExclusiveFlag_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_PlatformExclusiveFlag = { "PlatformExclusiveFlag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, PlatformExclusiveFlag), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_PlatformExclusiveFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_PlatformExclusiveFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInAtlantaBuild_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInAtlantaBuild_SetBit(void* Obj)
	{
		((FCharacterDescription*)Obj)->IsAvailableInAtlantaBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInAtlantaBuild = { "IsAvailableInAtlantaBuild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterDescription), &Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInAtlantaBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInAtlantaBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInAtlantaBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInNonViolentBuild_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInNonViolentBuild_SetBit(void* Obj)
	{
		((FCharacterDescription*)Obj)->IsAvailableInNonViolentBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInNonViolentBuild = { "IsAvailableInNonViolentBuild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterDescription), &Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInNonViolentBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInNonViolentBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInNonViolentBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsInChunk0_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsInChunk0_SetBit(void* Obj)
	{
		((FCharacterDescription*)Obj)->IsInChunk0 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsInChunk0 = { "IsInChunk0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterDescription), &Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsInChunk0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsInChunk0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsInChunk0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DebugName_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DebugName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IdName_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IdName = { "IdName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, IdName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IdName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IdName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AvailableIfDlcInstalled_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AvailableIfDlcInstalled_SetBit(void* Obj)
	{
		((FCharacterDescription*)Obj)->AvailableIfDlcInstalled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AvailableIfDlcInstalled = { "AvailableIfDlcInstalled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterDescription), &Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AvailableIfDlcInstalled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AvailableIfDlcInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AvailableIfDlcInstalled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AdditionalDlcIds_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AdditionalDlcIds = { "AdditionalDlcIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, AdditionalDlcIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AdditionalDlcIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AdditionalDlcIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AdditionalDlcIds_Inner = { "AdditionalDlcIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_ChapterDlcId_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_ChapterDlcId = { "ChapterDlcId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, ChapterDlcId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_ChapterDlcId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_ChapterDlcId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationDescription_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationDescription = { "CustomizationDescription", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, CustomizationDescription), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationDescription_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationDescription_Inner = { "CustomizationDescription", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomizedMeshPart, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackgroundImagePath_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackgroundImagePath = { "BackgroundImagePath", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, BackgroundImagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackgroundImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackgroundImagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HudIcon_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HudIcon = { "HudIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, HudIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HudIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HudIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IconFilePath_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IconFilePath = { "IconFilePath", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, IconFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IconFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IconFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Biography_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Biography = { "Biography", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, Biography), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Biography_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Biography_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackStory_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackStory = { "BackStory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, BackStory), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackStory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackStory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, Difficulty), Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Difficulty_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CharacterIndex_MetaData[] = {
		{ "Category", "CharacterDescription" },
		{ "ModuleRelativePath", "Public/CharacterDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CharacterIndex = { "CharacterIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescription, CharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CharacterIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HideStoreCustomizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_SlideShowDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerHeight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_TunableDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_KillerAbilities_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DefaultItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_MenuPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_GamePawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_PlatformExclusiveFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInAtlantaBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsAvailableInNonViolentBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IsInChunk0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DebugName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IdName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AvailableIfDlcInstalled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AdditionalDlcIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_AdditionalDlcIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_ChapterDlcId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CustomizationDescription_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackgroundImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_HudIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_IconFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Biography,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_BackStory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescription_Statics::NewProp_CharacterIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"CharacterDescription",
		sizeof(FCharacterDescription),
		alignof(FCharacterDescription),
		Z_Construct_UScriptStruct_FCharacterDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterDescription"), sizeof(FCharacterDescription), Get_Z_Construct_UScriptStruct_FCharacterDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterDescription_Hash() { return 4101946812U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
