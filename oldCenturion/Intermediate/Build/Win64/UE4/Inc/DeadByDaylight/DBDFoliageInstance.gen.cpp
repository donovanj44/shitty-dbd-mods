// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDFoliageInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDFoliageInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDFoliageInstance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FDBDFoliageInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDFoliageInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDFoliageInstance, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDFoliageInstance"), sizeof(FDBDFoliageInstance), Get_Z_Construct_UScriptStruct_FDBDFoliageInstance_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDFoliageInstance>()
{
	return FDBDFoliageInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDFoliageInstance(FDBDFoliageInstance::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDFoliageInstance"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDFoliageInstance
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDFoliageInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDFoliageInstance")),new UScriptStruct::TCppStructOps<FDBDFoliageInstance>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDFoliageInstance;
	struct Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawScale3D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawScale3D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreAlignRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreAlignRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDFoliageInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDFoliageInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "DBDFoliageInstance" },
		{ "ModuleRelativePath", "Public/DBDFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInstance, Flags), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "DBDFoliageInstance" },
		{ "ModuleRelativePath", "Public/DBDFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInstance, ZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_DrawScale3D_MetaData[] = {
		{ "Category", "DBDFoliageInstance" },
		{ "ModuleRelativePath", "Public/DBDFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_DrawScale3D = { "DrawScale3D", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInstance, DrawScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_DrawScale3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_DrawScale3D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_PreAlignRotation_MetaData[] = {
		{ "Category", "DBDFoliageInstance" },
		{ "ModuleRelativePath", "Public/DBDFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_PreAlignRotation = { "PreAlignRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInstance, PreAlignRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_PreAlignRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_PreAlignRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "DBDFoliageInstance" },
		{ "ModuleRelativePath", "Public/DBDFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInstance, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "DBDFoliageInstance" },
		{ "ModuleRelativePath", "Public/DBDFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInstance, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ProceduralGuid_MetaData[] = {
		{ "Category", "DBDFoliageInstance" },
		{ "ModuleRelativePath", "Public/DBDFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ProceduralGuid = { "ProceduralGuid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInstance, ProceduralGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ProceduralGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ProceduralGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_BaseId_MetaData[] = {
		{ "Category", "DBDFoliageInstance" },
		{ "ModuleRelativePath", "Public/DBDFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_BaseId = { "BaseId", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInstance, BaseId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_BaseId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_BaseId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_DrawScale3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_PreAlignRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_ProceduralGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::NewProp_BaseId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDFoliageInstance",
		sizeof(FDBDFoliageInstance),
		alignof(FDBDFoliageInstance),
		Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDFoliageInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDFoliageInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDFoliageInstance"), sizeof(FDBDFoliageInstance), Get_Z_Construct_UScriptStruct_FDBDFoliageInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDFoliageInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDFoliageInstance_Hash() { return 3931658519U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
