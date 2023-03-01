// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QueryService/Public/DistanceTrackerCase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistanceTrackerCase() {}
// Cross Module References
	QUERYSERVICE_API UScriptStruct* Z_Construct_UScriptStruct_FDistanceTrackerCase();
	UPackage* Z_Construct_UPackage__Script_QueryService();
// End Cross Module References
class UScriptStruct* FDistanceTrackerCase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUERYSERVICE_API uint32 Get_Z_Construct_UScriptStruct_FDistanceTrackerCase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistanceTrackerCase, Z_Construct_UPackage__Script_QueryService(), TEXT("DistanceTrackerCase"), sizeof(FDistanceTrackerCase), Get_Z_Construct_UScriptStruct_FDistanceTrackerCase_Hash());
	}
	return Singleton;
}
template<> QUERYSERVICE_API UScriptStruct* StaticStruct<FDistanceTrackerCase>()
{
	return FDistanceTrackerCase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDistanceTrackerCase(FDistanceTrackerCase::StaticStruct, TEXT("/Script/QueryService"), TEXT("DistanceTrackerCase"), false, nullptr, nullptr);
static struct FScriptStruct_QueryService_StaticRegisterNativesFDistanceTrackerCase
{
	FScriptStruct_QueryService_StaticRegisterNativesFDistanceTrackerCase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DistanceTrackerCase")),new UScriptStruct::TCppStructOps<FDistanceTrackerCase>);
	}
} ScriptStruct_QueryService_StaticRegisterNativesFDistanceTrackerCase;
	struct Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inRange_MetaData[];
#endif
		static void NewProp__inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceToTrackSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__distanceToTrackSquared;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DistanceTrackerCase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistanceTrackerCase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__inRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/DistanceTrackerCase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__inRange_SetBit(void* Obj)
	{
		((FDistanceTrackerCase*)Obj)->_inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__inRange = { "_inRange", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDistanceTrackerCase), &Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__inRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__inRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__distanceToTrackSquared_MetaData[] = {
		{ "ModuleRelativePath", "Public/DistanceTrackerCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__distanceToTrackSquared = { "_distanceToTrackSquared", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistanceTrackerCase, _distanceToTrackSquared), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__distanceToTrackSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__distanceToTrackSquared_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__inRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::NewProp__distanceToTrackSquared,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QueryService,
		nullptr,
		&NewStructOps,
		"DistanceTrackerCase",
		sizeof(FDistanceTrackerCase),
		alignof(FDistanceTrackerCase),
		Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistanceTrackerCase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDistanceTrackerCase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QueryService();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DistanceTrackerCase"), sizeof(FDistanceTrackerCase), Get_Z_Construct_UScriptStruct_FDistanceTrackerCase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDistanceTrackerCase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDistanceTrackerCase_Hash() { return 1213139347U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
