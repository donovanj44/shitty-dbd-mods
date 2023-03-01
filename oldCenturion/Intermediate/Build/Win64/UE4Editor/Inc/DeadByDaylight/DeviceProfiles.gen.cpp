// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DeviceProfiles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfiles() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceProfiles();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FDeviceProfiles::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDeviceProfiles_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceProfiles, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DeviceProfiles"), sizeof(FDeviceProfiles), Get_Z_Construct_UScriptStruct_FDeviceProfiles_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDeviceProfiles>()
{
	return FDeviceProfiles::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDeviceProfiles(FDeviceProfiles::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DeviceProfiles"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDeviceProfiles
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDeviceProfiles()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DeviceProfiles")),new UScriptStruct::TCppStructOps<FDeviceProfiles>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDeviceProfiles;
	struct Z_Construct_UScriptStruct_FDeviceProfiles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPU_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GPU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPU_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CPU;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceProfiles_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DeviceProfiles.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceProfiles>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "DeviceProfiles" },
		{ "ModuleRelativePath", "Public/DeviceProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceProfiles, Quality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_Quality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_GPU_MetaData[] = {
		{ "Category", "DeviceProfiles" },
		{ "ModuleRelativePath", "Public/DeviceProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_GPU = { "GPU", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceProfiles, GPU), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_GPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_GPU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_CPU_MetaData[] = {
		{ "Category", "DeviceProfiles" },
		{ "ModuleRelativePath", "Public/DeviceProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_CPU = { "CPU", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceProfiles, CPU), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_CPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_CPU_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_GPU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceProfiles_Statics::NewProp_CPU,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceProfiles_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"DeviceProfiles",
		sizeof(FDeviceProfiles),
		alignof(FDeviceProfiles),
		Z_Construct_UScriptStruct_FDeviceProfiles_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceProfiles_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceProfiles_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceProfiles_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeviceProfiles()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDeviceProfiles_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DeviceProfiles"), sizeof(FDeviceProfiles), Get_Z_Construct_UScriptStruct_FDeviceProfiles_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDeviceProfiles_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDeviceProfiles_Hash() { return 303922524U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
