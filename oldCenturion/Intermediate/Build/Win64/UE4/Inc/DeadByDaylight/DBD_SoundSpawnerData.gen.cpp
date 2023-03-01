// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBD_SoundSpawnerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBD_SoundSpawnerData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBD_SoundSpawnerData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FDBD_SoundSpawnerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBD_SoundSpawnerData"), sizeof(FDBD_SoundSpawnerData), Get_Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBD_SoundSpawnerData>()
{
	return FDBD_SoundSpawnerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBD_SoundSpawnerData(FDBD_SoundSpawnerData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBD_SoundSpawnerData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBD_SoundSpawnerData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBD_SoundSpawnerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBD_SoundSpawnerData")),new UScriptStruct::TCppStructOps<FDBD_SoundSpawnerData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBD_SoundSpawnerData;
	struct Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawnVisual_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorToSpawnVisual;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ActorToSpawnVisual_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerVisualForSlasher_MetaData[];
#endif
		static void NewProp_TriggerVisualForSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TriggerVisualForSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerVisualForCamper_MetaData[];
#endif
		static void NewProp_TriggerVisualForCamper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TriggerVisualForCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriggerObject;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TriggerObject_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBD_SoundSpawnerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBD_SoundSpawnerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_ActorToSpawnVisual_MetaData[] = {
		{ "Category", "DBD_SoundSpawnerData" },
		{ "ModuleRelativePath", "Public/DBD_SoundSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_ActorToSpawnVisual = { "ActorToSpawnVisual", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBD_SoundSpawnerData, ActorToSpawnVisual), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_ActorToSpawnVisual_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_ActorToSpawnVisual_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_ActorToSpawnVisual_Inner = { "ActorToSpawnVisual", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForSlasher_MetaData[] = {
		{ "Category", "DBD_SoundSpawnerData" },
		{ "ModuleRelativePath", "Public/DBD_SoundSpawnerData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForSlasher_SetBit(void* Obj)
	{
		((FDBD_SoundSpawnerData*)Obj)->TriggerVisualForSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForSlasher = { "TriggerVisualForSlasher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDBD_SoundSpawnerData), &Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForSlasher_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForCamper_MetaData[] = {
		{ "Category", "DBD_SoundSpawnerData" },
		{ "ModuleRelativePath", "Public/DBD_SoundSpawnerData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForCamper_SetBit(void* Obj)
	{
		((FDBD_SoundSpawnerData*)Obj)->TriggerVisualForCamper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForCamper = { "TriggerVisualForCamper", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDBD_SoundSpawnerData), &Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForCamper_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerObject_MetaData[] = {
		{ "Category", "DBD_SoundSpawnerData" },
		{ "ModuleRelativePath", "Public/DBD_SoundSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerObject = { "TriggerObject", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBD_SoundSpawnerData, TriggerObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerObject_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerObject_Inner = { "TriggerObject", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_ActorToSpawnVisual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_ActorToSpawnVisual_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerVisualForCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::NewProp_TriggerObject_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBD_SoundSpawnerData",
		sizeof(FDBD_SoundSpawnerData),
		alignof(FDBD_SoundSpawnerData),
		Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBD_SoundSpawnerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBD_SoundSpawnerData"), sizeof(FDBD_SoundSpawnerData), Get_Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBD_SoundSpawnerData_Hash() { return 2160371725U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
