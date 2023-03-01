// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterToolData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterToolData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterToolData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FCharacterToolData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterToolData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterToolData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterToolData"), sizeof(FCharacterToolData), Get_Z_Construct_UScriptStruct_FCharacterToolData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterToolData>()
{
	return FCharacterToolData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterToolData(FCharacterToolData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterToolData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterToolData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterToolData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterToolData")),new UScriptStruct::TCppStructOps<FCharacterToolData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterToolData;
	struct Z_Construct_UScriptStruct_FCharacterToolData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KillerWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KillerBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KillerHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorLegs_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurvivorLegs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorTorso_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurvivorTorso;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurvivorHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharmId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutfitId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterToolData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, AnimationToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_AnimationToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_AnimationToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerWeapon_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerWeapon = { "KillerWeapon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, KillerWeapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerBody_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerBody = { "KillerBody", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, KillerBody), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerHead_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerHead = { "KillerHead", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, KillerHead), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorLegs_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorLegs = { "SurvivorLegs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, SurvivorLegs), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorLegs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorLegs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorTorso_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorTorso = { "SurvivorTorso", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, SurvivorTorso), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorTorso_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorTorso_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorHead_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorHead = { "SurvivorHead", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, SurvivorHead), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharmId_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharmId = { "CharmId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, CharmId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharmId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharmId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_OutfitId_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_OutfitId = { "OutfitId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, OutfitId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_OutfitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_OutfitId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharacterId_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "CharacterToolData" },
		{ "ModuleRelativePath", "Public/CharacterToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterToolData, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterToolData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_AnimationToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_KillerHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorLegs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorTorso,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_SurvivorHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharmId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_OutfitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterToolData_Statics::NewProp_Role_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterToolData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterToolData",
		sizeof(FCharacterToolData),
		alignof(FCharacterToolData),
		Z_Construct_UScriptStruct_FCharacterToolData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterToolData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterToolData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterToolData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterToolData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterToolData"), sizeof(FCharacterToolData), Get_Z_Construct_UScriptStruct_FCharacterToolData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterToolData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterToolData_Hash() { return 4234876882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
