// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DailyRitualInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualInstance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
// End Cross Module References
class UScriptStruct* FDailyRitualInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDailyRitualInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDailyRitualInstance, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DailyRitualInstance"), sizeof(FDailyRitualInstance), Get_Z_Construct_UScriptStruct_FDailyRitualInstance_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDailyRitualInstance>()
{
	return FDailyRitualInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDailyRitualInstance(FDailyRitualInstance::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DailyRitualInstance"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualInstance
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DailyRitualInstance")),new UScriptStruct::TCppStructOps<FDailyRitualInstance>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualInstance;
	struct Z_Construct_UScriptStruct_FDailyRitualInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbGameElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbGameElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateAssigned_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateAssigned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNew_MetaData[];
#endif
		static void NewProp_IsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roles;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Roles_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Roles_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedGameEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedGameEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedGameEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedEvents;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackedEvents_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackedEvents_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DifficultyTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RitualKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RitualKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDailyRitualInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_NbGameElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_NbGameElapsed = { "NbGameElapsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, NbGameElapsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_NbGameElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_NbGameElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DateAssigned_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DateAssigned = { "DateAssigned", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, DateAssigned), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DateAssigned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DateAssigned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_IsNew_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_IsNew_SetBit(void* Obj)
	{
		((FDailyRitualInstance*)Obj)->IsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_IsNew = { "IsNew", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDailyRitualInstance), &Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_IsNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_IsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_IsNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Active_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FDailyRitualInstance*)Obj)->Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDailyRitualInstance), &Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_ExpReward_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_ExpReward = { "ExpReward", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, ExpReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_ExpReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_ExpReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DisplayThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DisplayThreshold = { "DisplayThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, DisplayThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DisplayThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DisplayThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Tolerance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, Tolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Threshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Progress_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Roles_MetaData[] = {
		{ "Category", "DailyRitualInstance" },
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, Roles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Roles_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Roles_Inner = { "Roles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Roles_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_CharacterIDs_MetaData[] = {
		{ "Category", "DailyRitualInstance" },
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_CharacterIDs = { "CharacterIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, CharacterIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_CharacterIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_CharacterIDs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_CharacterIDs_Inner = { "CharacterIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedGameEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedGameEvents = { "TrackedGameEvents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, TrackedGameEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedGameEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedGameEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedGameEvents_Inner = { "TrackedGameEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedEvents = { "TrackedEvents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, TrackedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedEvents_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedEvents_Inner = { "TrackedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedEvents_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DifficultyTier_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DifficultyTier = { "DifficultyTier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, DifficultyTier), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DifficultyTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DifficultyTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_RitualKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_RitualKey = { "RitualKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualInstance, RitualKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_RitualKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_RitualKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_NbGameElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DateAssigned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_IsNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_ExpReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DisplayThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Roles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Roles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_Roles_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_CharacterIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_CharacterIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedGameEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedGameEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_TrackedEvents_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_DifficultyTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::NewProp_RitualKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DailyRitualInstance",
		sizeof(FDailyRitualInstance),
		alignof(FDailyRitualInstance),
		Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDailyRitualInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DailyRitualInstance"), sizeof(FDailyRitualInstance), Get_Z_Construct_UScriptStruct_FDailyRitualInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDailyRitualInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDailyRitualInstance_Hash() { return 2699130371U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
