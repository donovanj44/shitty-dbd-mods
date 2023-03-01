// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICamperDodgeTunableRowData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICamperDodgeTunableRowData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDodgeType();
// End Cross Module References
class UScriptStruct* FAICamperDodgeTunableRowData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AICamperDodgeTunableRowData"), sizeof(FAICamperDodgeTunableRowData), Get_Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAICamperDodgeTunableRowData>()
{
	return FAICamperDodgeTunableRowData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAICamperDodgeTunableRowData(FAICamperDodgeTunableRowData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AICamperDodgeTunableRowData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAICamperDodgeTunableRowData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAICamperDodgeTunableRowData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AICamperDodgeTunableRowData")),new UScriptStruct::TCppStructOps<FAICamperDodgeTunableRowData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAICamperDodgeTunableRowData;
	struct Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackPlusSurvivorHalfWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackPlusSurvivorHalfWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequireAttackState_MetaData[];
#endif
		static void NewProp_RequireAttackState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequireAttackState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequireInSight_MetaData[];
#endif
		static void NewProp_RequireInSight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequireInSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BestDodgeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BestDodgeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BestDodgeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAICamperDodgeTunableRowData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Category", "AICamperDodgeTunableRowData" },
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICamperDodgeTunableRowData, FieldOfView), METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_AttackPlusSurvivorHalfWidth_MetaData[] = {
		{ "Category", "AICamperDodgeTunableRowData" },
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_AttackPlusSurvivorHalfWidth = { "AttackPlusSurvivorHalfWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICamperDodgeTunableRowData, AttackPlusSurvivorHalfWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_AttackPlusSurvivorHalfWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_AttackPlusSurvivorHalfWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "AICamperDodgeTunableRowData" },
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICamperDodgeTunableRowData, Range), METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "AICamperDodgeTunableRowData" },
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICamperDodgeTunableRowData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireAttackState_MetaData[] = {
		{ "Category", "AICamperDodgeTunableRowData" },
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireAttackState_SetBit(void* Obj)
	{
		((FAICamperDodgeTunableRowData*)Obj)->RequireAttackState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireAttackState = { "RequireAttackState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAICamperDodgeTunableRowData), &Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireAttackState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireAttackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireAttackState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireInSight_MetaData[] = {
		{ "Category", "AICamperDodgeTunableRowData" },
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireInSight_SetBit(void* Obj)
	{
		((FAICamperDodgeTunableRowData*)Obj)->RequireInSight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireInSight = { "RequireInSight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAICamperDodgeTunableRowData), &Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireInSight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireInSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireInSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_BestDodgeType_MetaData[] = {
		{ "Category", "AICamperDodgeTunableRowData" },
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_BestDodgeType = { "BestDodgeType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICamperDodgeTunableRowData, BestDodgeType), Z_Construct_UEnum_DeadByDaylight_EAIDodgeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_BestDodgeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_BestDodgeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_BestDodgeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AICamperDodgeTunableRowData" },
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICamperDodgeTunableRowData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_CharacterId_MetaData[] = {
		{ "Category", "AICamperDodgeTunableRowData" },
		{ "ModuleRelativePath", "Public/AICamperDodgeTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICamperDodgeTunableRowData, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_CharacterId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_FieldOfView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_AttackPlusSurvivorHalfWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireAttackState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_RequireInSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_BestDodgeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_BestDodgeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::NewProp_CharacterId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AICamperDodgeTunableRowData",
		sizeof(FAICamperDodgeTunableRowData),
		alignof(FAICamperDodgeTunableRowData),
		Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AICamperDodgeTunableRowData"), sizeof(FAICamperDodgeTunableRowData), Get_Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAICamperDodgeTunableRowData_Hash() { return 3328161075U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
