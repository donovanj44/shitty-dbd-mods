// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NativeBlockIndicatorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeBlockIndicatorData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FNativeBlockIndicatorData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
class UScriptStruct* FNativeBlockIndicatorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNativeBlockIndicatorData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("NativeBlockIndicatorData"), sizeof(FNativeBlockIndicatorData), Get_Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FNativeBlockIndicatorData>()
{
	return FNativeBlockIndicatorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNativeBlockIndicatorData(FNativeBlockIndicatorData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("NativeBlockIndicatorData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFNativeBlockIndicatorData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFNativeBlockIndicatorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NativeBlockIndicatorData")),new UScriptStruct::TCppStructOps<FNativeBlockIndicatorData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFNativeBlockIndicatorData;
	struct Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FadeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentBlockFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBlockUpdating_MetaData[];
#endif
		static void NewProp_IsBlockUpdating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBlockUpdating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBlockActive_MetaData[];
#endif
		static void NewProp_IsBlockActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBlockActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NativeBlockIndicatorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNativeBlockIndicatorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_BlockIndicator_MetaData[] = {
		{ "Category", "NativeBlockIndicatorData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NativeBlockIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_BlockIndicator = { "BlockIndicator", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNativeBlockIndicatorData, BlockIndicator), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_BlockIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_BlockIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "Category", "NativeBlockIndicatorData" },
		{ "ModuleRelativePath", "Public/NativeBlockIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNativeBlockIndicatorData, FadeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_FadeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_CurrentBlockFade_MetaData[] = {
		{ "Category", "NativeBlockIndicatorData" },
		{ "ModuleRelativePath", "Public/NativeBlockIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_CurrentBlockFade = { "CurrentBlockFade", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNativeBlockIndicatorData, CurrentBlockFade), METADATA_PARAMS(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_CurrentBlockFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_CurrentBlockFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockUpdating_MetaData[] = {
		{ "Category", "NativeBlockIndicatorData" },
		{ "ModuleRelativePath", "Public/NativeBlockIndicatorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockUpdating_SetBit(void* Obj)
	{
		((FNativeBlockIndicatorData*)Obj)->IsBlockUpdating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockUpdating = { "IsBlockUpdating", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNativeBlockIndicatorData), &Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockUpdating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockUpdating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockUpdating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockActive_MetaData[] = {
		{ "Category", "NativeBlockIndicatorData" },
		{ "ModuleRelativePath", "Public/NativeBlockIndicatorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockActive_SetBit(void* Obj)
	{
		((FNativeBlockIndicatorData*)Obj)->IsBlockActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockActive = { "IsBlockActive", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNativeBlockIndicatorData), &Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_BlockIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_FadeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_CurrentBlockFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockUpdating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::NewProp_IsBlockActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"NativeBlockIndicatorData",
		sizeof(FNativeBlockIndicatorData),
		alignof(FNativeBlockIndicatorData),
		Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNativeBlockIndicatorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NativeBlockIndicatorData"), sizeof(FNativeBlockIndicatorData), Get_Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNativeBlockIndicatorData_Hash() { return 79533234U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
