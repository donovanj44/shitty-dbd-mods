// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26PathData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26PathData() {}
// Cross Module References
	THEK26_API UScriptStruct* Z_Construct_UScriptStruct_FK26PathData();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FK26PathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK26_API uint32 Get_Z_Construct_UScriptStruct_FK26PathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK26PathData, Z_Construct_UPackage__Script_TheK26(), TEXT("K26PathData"), sizeof(FK26PathData), Get_Z_Construct_UScriptStruct_FK26PathData_Hash());
	}
	return Singleton;
}
template<> THEK26_API UScriptStruct* StaticStruct<FK26PathData>()
{
	return FK26PathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK26PathData(FK26PathData::StaticStruct, TEXT("/Script/TheK26"), TEXT("K26PathData"), false, nullptr, nullptr);
static struct FScriptStruct_TheK26_StaticRegisterNativesFK26PathData
{
	FScriptStruct_TheK26_StaticRegisterNativesFK26PathData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K26PathData")),new UScriptStruct::TCppStructOps<FK26PathData>);
	}
} ScriptStruct_TheK26_StaticRegisterNativesFK26PathData;
	struct Z_Construct_UScriptStruct_FK26PathData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathEndRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathEndRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathEndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathEndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathPartRotations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPartRotations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPartRotations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathPartLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPartLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPartLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVisibleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxVisibleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsVisibleForSurvivors_MetaData[];
#endif
		static void NewProp_IsVisibleForSurvivors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVisibleForSurvivors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsVisibleToKiller_MetaData[];
#endif
		static void NewProp_IsVisibleToKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVisibleToKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInUse_MetaData[];
#endif
		static void NewProp_IsInUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26PathData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/K26PathData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK26PathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK26PathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndRotation = { "PathEndRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26PathData, PathEndRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndLocation = { "PathEndLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26PathData, PathEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartRotations_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartRotations = { "PathPartRotations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26PathData, PathPartRotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartRotations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartRotations_Inner = { "PathPartRotations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartLocations = { "PathPartLocations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26PathData, PathPartLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartLocations_Inner = { "PathPartLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_MaxVisibleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_MaxVisibleIndex = { "MaxVisibleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26PathData, MaxVisibleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_MaxVisibleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_MaxVisibleIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleForSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleForSurvivors_SetBit(void* Obj)
	{
		((FK26PathData*)Obj)->IsVisibleForSurvivors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleForSurvivors = { "IsVisibleForSurvivors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK26PathData), &Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleForSurvivors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleForSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleForSurvivors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleToKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleToKiller_SetBit(void* Obj)
	{
		((FK26PathData*)Obj)->IsVisibleToKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleToKiller = { "IsVisibleToKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK26PathData), &Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleToKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleToKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleToKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsInUse_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsInUse_SetBit(void* Obj)
	{
		((FK26PathData*)Obj)->IsInUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsInUse = { "IsInUse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK26PathData), &Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsInUse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsInUse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FK26PathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathEndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartRotations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_PathPartLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_MaxVisibleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleForSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsVisibleToKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26PathData_Statics::NewProp_IsInUse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK26PathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
		nullptr,
		&NewStructOps,
		"K26PathData",
		sizeof(FK26PathData),
		alignof(FK26PathData),
		Z_Construct_UScriptStruct_FK26PathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK26PathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26PathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK26PathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK26PathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK26();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K26PathData"), sizeof(FK26PathData), Get_Z_Construct_UScriptStruct_FK26PathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK26PathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK26PathData_Hash() { return 1051658349U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
