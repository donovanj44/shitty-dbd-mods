// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StatusEffectInitializationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusEffectInitializationData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectInitializationData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FStatusEffectInitializationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStatusEffectInitializationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatusEffectInitializationData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StatusEffectInitializationData"), sizeof(FStatusEffectInitializationData), Get_Z_Construct_UScriptStruct_FStatusEffectInitializationData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStatusEffectInitializationData>()
{
	return FStatusEffectInitializationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatusEffectInitializationData(FStatusEffectInitializationData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StatusEffectInitializationData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStatusEffectInitializationData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStatusEffectInitializationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatusEffectInitializationData")),new UScriptStruct::TCppStructOps<FStatusEffectInitializationData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStatusEffectInitializationData;
	struct Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityDataSet_MetaData[];
#endif
		static void NewProp_AuthorityDataSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuthorityDataSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializationLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitializationLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusEffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusEffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasOriginatingEffect_MetaData[];
#endif
		static void NewProp_HasOriginatingEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasOriginatingEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginatingEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginatingEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasOriginatingPlayer_MetaData[];
#endif
		static void NewProp_HasOriginatingPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasOriginatingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginatingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginatingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatusEffectInitializationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatusEffectInitializationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_AuthorityDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatusEffectInitializationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_AuthorityDataSet_SetBit(void* Obj)
	{
		((FStatusEffectInitializationData*)Obj)->AuthorityDataSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_AuthorityDataSet = { "AuthorityDataSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatusEffectInitializationData), &Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_AuthorityDataSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_AuthorityDataSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_AuthorityDataSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_InitializationLifeTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatusEffectInitializationData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_InitializationLifeTime = { "InitializationLifeTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectInitializationData, InitializationLifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_InitializationLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_InitializationLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_CustomParam_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatusEffectInitializationData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_CustomParam = { "CustomParam", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectInitializationData, CustomParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_CustomParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_CustomParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_StatusEffectType_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatusEffectInitializationData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_StatusEffectType = { "StatusEffectType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectInitializationData, StatusEffectType), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_StatusEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_StatusEffectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_StatusEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatusEffectInitializationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingEffect_SetBit(void* Obj)
	{
		((FStatusEffectInitializationData*)Obj)->HasOriginatingEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingEffect = { "HasOriginatingEffect", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatusEffectInitializationData), &Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingEffect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatusEffectInitializationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingEffect = { "OriginatingEffect", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectInitializationData, OriginatingEffect), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatusEffectInitializationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingPlayer_SetBit(void* Obj)
	{
		((FStatusEffectInitializationData*)Obj)->HasOriginatingPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingPlayer = { "HasOriginatingPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatusEffectInitializationData), &Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatusEffectInitializationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingPlayer = { "OriginatingPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectInitializationData, OriginatingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_AuthorityDataSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_InitializationLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_CustomParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_StatusEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_StatusEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_HasOriginatingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::NewProp_OriginatingPlayer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"StatusEffectInitializationData",
		sizeof(FStatusEffectInitializationData),
		alignof(FStatusEffectInitializationData),
		Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectInitializationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatusEffectInitializationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatusEffectInitializationData"), sizeof(FStatusEffectInitializationData), Get_Z_Construct_UScriptStruct_FStatusEffectInitializationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatusEffectInitializationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatusEffectInitializationData_Hash() { return 2294899181U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
