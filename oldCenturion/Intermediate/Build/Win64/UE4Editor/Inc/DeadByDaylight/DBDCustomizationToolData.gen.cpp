// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDCustomizationToolData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDCustomizationToolData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDCustomizationToolData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemData();
// End Cross Module References
class UScriptStruct* FDBDCustomizationToolData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDCustomizationToolData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDCustomizationToolData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDCustomizationToolData"), sizeof(FDBDCustomizationToolData), Get_Z_Construct_UScriptStruct_FDBDCustomizationToolData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDCustomizationToolData>()
{
	return FDBDCustomizationToolData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDCustomizationToolData(FDBDCustomizationToolData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDCustomizationToolData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDCustomizationToolData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDCustomizationToolData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDCustomizationToolData")),new UScriptStruct::TCppStructOps<FDBDCustomizationToolData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDCustomizationToolData;
	struct Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrBodiesDLC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrBodiesDLC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrLegDLC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrLegDLC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrTorsoDLC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrTorsoDLC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrHeadDLC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrHeadDLC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bodies_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bodies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Leg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Torso_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Torso;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Head;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDCustomizationToolData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrBodiesDLC_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrBodiesDLC = { "StrBodiesDLC", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, StrBodiesDLC), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrBodiesDLC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrBodiesDLC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrLegDLC_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrLegDLC = { "StrLegDLC", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, StrLegDLC), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrLegDLC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrLegDLC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrTorsoDLC_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrTorsoDLC = { "StrTorsoDLC", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, StrTorsoDLC), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrTorsoDLC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrTorsoDLC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrHeadDLC_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrHeadDLC = { "StrHeadDLC", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, StrHeadDLC), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrHeadDLC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrHeadDLC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, AnimationToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_AnimationToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_AnimationToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_MaskTexture_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_MaskTexture = { "MaskTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, MaskTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_MaskTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_MaskTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_BaseSkeleton_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_BaseSkeleton = { "BaseSkeleton", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, BaseSkeleton), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_BaseSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_BaseSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_RoleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Bodies_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Bodies = { "Bodies", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, Bodies), Z_Construct_UScriptStruct_FCustomizationItemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Bodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Bodies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Leg_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Leg = { "Leg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, Leg), Z_Construct_UScriptStruct_FCustomizationItemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Leg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Leg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Torso_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Torso = { "Torso", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, Torso), Z_Construct_UScriptStruct_FCustomizationItemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Torso_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Torso_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "DBDCustomizationToolData" },
		{ "ModuleRelativePath", "Public/DBDCustomizationToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCustomizationToolData, Head), Z_Construct_UScriptStruct_FCustomizationItemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Head_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrBodiesDLC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrLegDLC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrTorsoDLC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_StrHeadDLC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_AnimationToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_MaskTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_BaseSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_RoleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Bodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Leg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Torso,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::NewProp_Head,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDCustomizationToolData",
		sizeof(FDBDCustomizationToolData),
		alignof(FDBDCustomizationToolData),
		Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDCustomizationToolData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDCustomizationToolData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDCustomizationToolData"), sizeof(FDBDCustomizationToolData), Get_Z_Construct_UScriptStruct_FDBDCustomizationToolData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDCustomizationToolData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDCustomizationToolData_Hash() { return 55821785U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
