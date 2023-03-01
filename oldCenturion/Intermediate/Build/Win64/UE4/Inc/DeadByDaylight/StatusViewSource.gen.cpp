// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StatusViewSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusViewSource() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusViewSource();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryItemType();
// End Cross Module References
class UScriptStruct* FStatusViewSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStatusViewSource_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatusViewSource, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StatusViewSource"), sizeof(FStatusViewSource), Get_Z_Construct_UScriptStruct_FStatusViewSource_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStatusViewSource>()
{
	return FStatusViewSource::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatusViewSource(FStatusViewSource::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StatusViewSource"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStatusViewSource
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStatusViewSource()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatusViewSource")),new UScriptStruct::TCppStructOps<FStatusViewSource>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStatusViewSource;
	struct Z_Construct_UScriptStruct_FStatusViewSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceIconIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIconIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentageFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentageFill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__remainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__remainingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewSource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatusViewSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatusViewSource>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceLevel_MetaData[] = {
		{ "Category", "StatusViewSource" },
		{ "ModuleRelativePath", "Public/StatusViewSource.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceLevel = { "SourceLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewSource, SourceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceIconIndex_MetaData[] = {
		{ "Category", "StatusViewSource" },
		{ "ModuleRelativePath", "Public/StatusViewSource.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceIconIndex = { "SourceIconIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewSource, SourceIconIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceIconIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceIconIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "StatusViewSource" },
		{ "ModuleRelativePath", "Public/StatusViewSource.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewSource, SourceType), Z_Construct_UEnum_DeadByDaylight_EInventoryItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "StatusViewSource" },
		{ "ModuleRelativePath", "Public/StatusViewSource.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewSource, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_PercentageFill_MetaData[] = {
		{ "Category", "StatusViewSource" },
		{ "ModuleRelativePath", "Public/StatusViewSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_PercentageFill = { "PercentageFill", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewSource, PercentageFill), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_PercentageFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_PercentageFill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp__remainingTime_MetaData[] = {
		{ "Category", "StatusViewSource" },
		{ "ModuleRelativePath", "Public/StatusViewSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp__remainingTime = { "_remainingTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewSource, _remainingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp__remainingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp__remainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_IsActive_MetaData[] = {
		{ "Category", "StatusViewSource" },
		{ "ModuleRelativePath", "Public/StatusViewSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((FStatusViewSource*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatusViewSource), &Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_IsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceID_MetaData[] = {
		{ "Category", "StatusViewSource" },
		{ "ModuleRelativePath", "Public/StatusViewSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewSource, SourceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatusViewSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceIconIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_PercentageFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp__remainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_IsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewSource_Statics::NewProp_SourceID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatusViewSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"StatusViewSource",
		sizeof(FStatusViewSource),
		alignof(FStatusViewSource),
		Z_Construct_UScriptStruct_FStatusViewSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatusViewSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatusViewSource_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatusViewSource"), sizeof(FStatusViewSource), Get_Z_Construct_UScriptStruct_FStatusViewSource_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatusViewSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatusViewSource_Hash() { return 1630544124U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
