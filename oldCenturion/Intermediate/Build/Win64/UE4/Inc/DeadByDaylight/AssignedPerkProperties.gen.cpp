// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AssignedPerkProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignedPerkProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAssignedPerkProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FAssignedPerkProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAssignedPerkProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssignedPerkProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AssignedPerkProperties"), sizeof(FAssignedPerkProperties), Get_Z_Construct_UScriptStruct_FAssignedPerkProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAssignedPerkProperties>()
{
	return FAssignedPerkProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssignedPerkProperties(FAssignedPerkProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AssignedPerkProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAssignedPerkProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAssignedPerkProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssignedPerkProperties")),new UScriptStruct::TCppStructOps<FAssignedPerkProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAssignedPerkProperties;
	struct Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTeachable_MetaData[];
#endif
		static void NewProp_IsTeachable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTeachable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerkLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PerkId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssignedPerkProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssignedPerkProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_IsTeachable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssignedPerkProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_IsTeachable_SetBit(void* Obj)
	{
		((FAssignedPerkProperties*)Obj)->IsTeachable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_IsTeachable = { "IsTeachable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssignedPerkProperties), &Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_IsTeachable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_IsTeachable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_IsTeachable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssignedPerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkLevel = { "PerkLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssignedPerkProperties, PerkLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssignedPerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkId = { "PerkId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssignedPerkProperties, PerkId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_IsTeachable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::NewProp_PerkId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AssignedPerkProperties",
		sizeof(FAssignedPerkProperties),
		alignof(FAssignedPerkProperties),
		Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssignedPerkProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssignedPerkProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssignedPerkProperties"), sizeof(FAssignedPerkProperties), Get_Z_Construct_UScriptStruct_FAssignedPerkProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssignedPerkProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssignedPerkProperties_Hash() { return 1631996888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
