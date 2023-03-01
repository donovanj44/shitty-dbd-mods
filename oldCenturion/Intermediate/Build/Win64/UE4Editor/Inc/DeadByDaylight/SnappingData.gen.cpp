// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SnappingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnappingData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSnappingData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSnappingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSnappingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnappingData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SnappingData"), sizeof(FSnappingData), Get_Z_Construct_UScriptStruct_FSnappingData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSnappingData>()
{
	return FSnappingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSnappingData(FSnappingData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SnappingData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSnappingData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSnappingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SnappingData")),new UScriptStruct::TCppStructOps<FSnappingData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSnappingData;
	struct Z_Construct_UScriptStruct_FSnappingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepOnFinalSnap_MetaData[];
#endif
		static void NewProp_SweepOnFinalSnap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SweepOnFinalSnap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseZCoord_MetaData[];
#endif
		static void NewProp_UseZCoord_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseZCoord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoSnapRoll_MetaData[];
#endif
		static void NewProp_DoSnapRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoSnapRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoSnapRotation_MetaData[];
#endif
		static void NewProp_DoSnapRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoSnapRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoSnapPosition_MetaData[];
#endif
		static void NewProp_DoSnapPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoSnapPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnappingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SnappingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnappingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnappingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnappingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnappingData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnappingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnappingData, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnappingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetPosition = { "TargetPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnappingData, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_SweepOnFinalSnap_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnappingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_SweepOnFinalSnap_SetBit(void* Obj)
	{
		((FSnappingData*)Obj)->SweepOnFinalSnap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_SweepOnFinalSnap = { "SweepOnFinalSnap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSnappingData), &Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_SweepOnFinalSnap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_SweepOnFinalSnap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_SweepOnFinalSnap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_UseZCoord_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnappingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_UseZCoord_SetBit(void* Obj)
	{
		((FSnappingData*)Obj)->UseZCoord = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_UseZCoord = { "UseZCoord", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSnappingData), &Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_UseZCoord_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_UseZCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_UseZCoord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnappingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRoll_SetBit(void* Obj)
	{
		((FSnappingData*)Obj)->DoSnapRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRoll = { "DoSnapRoll", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSnappingData), &Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnappingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRotation_SetBit(void* Obj)
	{
		((FSnappingData*)Obj)->DoSnapRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRotation = { "DoSnapRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSnappingData), &Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnappingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapPosition_SetBit(void* Obj)
	{
		((FSnappingData*)Obj)->DoSnapPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapPosition = { "DoSnapPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSnappingData), &Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnappingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_TargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_SweepOnFinalSnap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_UseZCoord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnappingData_Statics::NewProp_DoSnapPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnappingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SnappingData",
		sizeof(FSnappingData),
		alignof(FSnappingData),
		Z_Construct_UScriptStruct_FSnappingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnappingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnappingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnappingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSnappingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SnappingData"), sizeof(FSnappingData), Get_Z_Construct_UScriptStruct_FSnappingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSnappingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSnappingData_Hash() { return 2172828677U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
