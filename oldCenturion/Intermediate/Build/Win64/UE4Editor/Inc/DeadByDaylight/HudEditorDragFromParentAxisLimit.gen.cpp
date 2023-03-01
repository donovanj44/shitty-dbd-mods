// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HudEditorDragFromParentAxisLimit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudEditorDragFromParentAxisLimit() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EHudEditorDragAxisOption();
// End Cross Module References
class UScriptStruct* FHudEditorDragFromParentAxisLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("HudEditorDragFromParentAxisLimit"), sizeof(FHudEditorDragFromParentAxisLimit), Get_Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FHudEditorDragFromParentAxisLimit>()
{
	return FHudEditorDragFromParentAxisLimit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHudEditorDragFromParentAxisLimit(FHudEditorDragFromParentAxisLimit::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("HudEditorDragFromParentAxisLimit"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFHudEditorDragFromParentAxisLimit
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFHudEditorDragFromParentAxisLimit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HudEditorDragFromParentAxisLimit")),new UScriptStruct::TCppStructOps<FHudEditorDragFromParentAxisLimit>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFHudEditorDragFromParentAxisLimit;
	struct Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxDragDistanceWithParent_MetaData[];
#endif
		static void NewProp_ScaleMaxDragDistanceWithParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScaleMaxDragDistanceWithParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDragDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDragDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMinDragDistanceWithParent_MetaData[];
#endif
		static void NewProp_ScaleMinDragDistanceWithParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScaleMinDragDistanceWithParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDragDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDragDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HudEditorDragFromParentAxisLimit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHudEditorDragFromParentAxisLimit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMaxDragDistanceWithParent_MetaData[] = {
		{ "Category", "HudEditorDragFromParentAxisLimit" },
		{ "ModuleRelativePath", "Public/HudEditorDragFromParentAxisLimit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMaxDragDistanceWithParent_SetBit(void* Obj)
	{
		((FHudEditorDragFromParentAxisLimit*)Obj)->ScaleMaxDragDistanceWithParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMaxDragDistanceWithParent = { "ScaleMaxDragDistanceWithParent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHudEditorDragFromParentAxisLimit), &Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMaxDragDistanceWithParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMaxDragDistanceWithParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMaxDragDistanceWithParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MaxDragDistance_MetaData[] = {
		{ "Category", "HudEditorDragFromParentAxisLimit" },
		{ "ModuleRelativePath", "Public/HudEditorDragFromParentAxisLimit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MaxDragDistance = { "MaxDragDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEditorDragFromParentAxisLimit, MaxDragDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MaxDragDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MaxDragDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMinDragDistanceWithParent_MetaData[] = {
		{ "Category", "HudEditorDragFromParentAxisLimit" },
		{ "ModuleRelativePath", "Public/HudEditorDragFromParentAxisLimit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMinDragDistanceWithParent_SetBit(void* Obj)
	{
		((FHudEditorDragFromParentAxisLimit*)Obj)->ScaleMinDragDistanceWithParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMinDragDistanceWithParent = { "ScaleMinDragDistanceWithParent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHudEditorDragFromParentAxisLimit), &Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMinDragDistanceWithParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMinDragDistanceWithParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMinDragDistanceWithParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MinDragDistance_MetaData[] = {
		{ "Category", "HudEditorDragFromParentAxisLimit" },
		{ "ModuleRelativePath", "Public/HudEditorDragFromParentAxisLimit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MinDragDistance = { "MinDragDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEditorDragFromParentAxisLimit, MinDragDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MinDragDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MinDragDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_AxisOption_MetaData[] = {
		{ "Category", "HudEditorDragFromParentAxisLimit" },
		{ "ModuleRelativePath", "Public/HudEditorDragFromParentAxisLimit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_AxisOption = { "AxisOption", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEditorDragFromParentAxisLimit, AxisOption), Z_Construct_UEnum_DeadByDaylight_EHudEditorDragAxisOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_AxisOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_AxisOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_AxisOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "HudEditorDragFromParentAxisLimit" },
		{ "ModuleRelativePath", "Public/HudEditorDragFromParentAxisLimit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FHudEditorDragFromParentAxisLimit*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHudEditorDragFromParentAxisLimit), &Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMaxDragDistanceWithParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MaxDragDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_ScaleMinDragDistanceWithParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_MinDragDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_AxisOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_AxisOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"HudEditorDragFromParentAxisLimit",
		sizeof(FHudEditorDragFromParentAxisLimit),
		alignof(FHudEditorDragFromParentAxisLimit),
		Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HudEditorDragFromParentAxisLimit"), sizeof(FHudEditorDragFromParentAxisLimit), Get_Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit_Hash() { return 2988440983U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
