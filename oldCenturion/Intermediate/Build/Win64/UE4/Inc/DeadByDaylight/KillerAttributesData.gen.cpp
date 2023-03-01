// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerAttributesData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerAttributesData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FKillerAttributesData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EKillerHeight();
// End Cross Module References
class UScriptStruct* FKillerAttributesData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FKillerAttributesData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKillerAttributesData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("KillerAttributesData"), sizeof(FKillerAttributesData), Get_Z_Construct_UScriptStruct_FKillerAttributesData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FKillerAttributesData>()
{
	return FKillerAttributesData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKillerAttributesData(FKillerAttributesData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("KillerAttributesData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFKillerAttributesData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFKillerAttributesData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KillerAttributesData")),new UScriptStruct::TCppStructOps<FKillerAttributesData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFKillerAttributesData;
	struct Z_Construct_UScriptStruct_FKillerAttributesData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Height_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrorRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TerrorRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerAttributesData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KillerAttributesData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKillerAttributesData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "KillerAttributesData" },
		{ "ModuleRelativePath", "Public/KillerAttributesData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerAttributesData, Height), Z_Construct_UEnum_DeadByDaylight_EKillerHeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Height_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Height_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_TerrorRadius_MetaData[] = {
		{ "Category", "KillerAttributesData" },
		{ "ModuleRelativePath", "Public/KillerAttributesData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_TerrorRadius = { "TerrorRadius", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerAttributesData, TerrorRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_TerrorRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_TerrorRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "KillerAttributesData" },
		{ "ModuleRelativePath", "Public/KillerAttributesData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerAttributesData, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKillerAttributesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Height_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_TerrorRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerAttributesData_Statics::NewProp_Speed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKillerAttributesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"KillerAttributesData",
		sizeof(FKillerAttributesData),
		alignof(FKillerAttributesData),
		Z_Construct_UScriptStruct_FKillerAttributesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerAttributesData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerAttributesData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerAttributesData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKillerAttributesData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKillerAttributesData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KillerAttributesData"), sizeof(FKillerAttributesData), Get_Z_Construct_UScriptStruct_FKillerAttributesData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKillerAttributesData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKillerAttributesData_Hash() { return 2422202360U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
