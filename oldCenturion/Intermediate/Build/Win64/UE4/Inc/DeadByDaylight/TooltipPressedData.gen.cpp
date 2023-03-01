// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TooltipPressedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTooltipPressedData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTooltipPressedData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FTooltipPressedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTooltipPressedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTooltipPressedData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TooltipPressedData"), sizeof(FTooltipPressedData), Get_Z_Construct_UScriptStruct_FTooltipPressedData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTooltipPressedData>()
{
	return FTooltipPressedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTooltipPressedData(FTooltipPressedData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TooltipPressedData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTooltipPressedData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTooltipPressedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TooltipPressedData")),new UScriptStruct::TCppStructOps<FTooltipPressedData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTooltipPressedData;
	struct Z_Construct_UScriptStruct_FTooltipPressedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_touchPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_touchPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTooltipPressedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TooltipPressedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTooltipPressedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTooltipPressedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTooltipPressedData_Statics::NewProp_touchPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/TooltipPressedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTooltipPressedData_Statics::NewProp_touchPosition = { "touchPosition", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTooltipPressedData, touchPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTooltipPressedData_Statics::NewProp_touchPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTooltipPressedData_Statics::NewProp_touchPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTooltipPressedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTooltipPressedData_Statics::NewProp_touchPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTooltipPressedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"TooltipPressedData",
		sizeof(FTooltipPressedData),
		alignof(FTooltipPressedData),
		Z_Construct_UScriptStruct_FTooltipPressedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTooltipPressedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTooltipPressedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTooltipPressedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTooltipPressedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTooltipPressedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TooltipPressedData"), sizeof(FTooltipPressedData), Get_Z_Construct_UScriptStruct_FTooltipPressedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTooltipPressedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTooltipPressedData_Hash() { return 2696802642U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
