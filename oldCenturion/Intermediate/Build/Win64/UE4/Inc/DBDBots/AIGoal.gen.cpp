// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AIGoal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGoal() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAIGoal();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FAIGoal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FAIGoal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIGoal, Z_Construct_UPackage__Script_DBDBots(), TEXT("AIGoal"), sizeof(FAIGoal), Get_Z_Construct_UScriptStruct_FAIGoal_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FAIGoal>()
{
	return FAIGoal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIGoal(FAIGoal::StaticStruct, TEXT("/Script/DBDBots"), TEXT("AIGoal"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFAIGoal
{
	FScriptStruct_DBDBots_StaticRegisterNativesFAIGoal()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIGoal")),new UScriptStruct::TCppStructOps<FAIGoal>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFAIGoal;
	struct Z_Construct_UScriptStruct_FAIGoal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIGoal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIGoal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIGoal>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Goal_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIGoal, Goal), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Goal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_MetaGoal_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_MetaGoal = { "MetaGoal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIGoal, MetaGoal), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_MetaGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_MetaGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIGoal, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_MetaGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIGoal_Statics::NewProp_Source,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIGoal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"AIGoal",
		sizeof(FAIGoal),
		alignof(FAIGoal),
		Z_Construct_UScriptStruct_FAIGoal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIGoal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIGoal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIGoal"), sizeof(FAIGoal), Get_Z_Construct_UScriptStruct_FAIGoal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIGoal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIGoal_Hash() { return 3994804451U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
