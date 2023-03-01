// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PCDeviceProfiles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCDeviceProfiles() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPCDeviceProfiles();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FResolutionQualityPair();
// End Cross Module References
class UScriptStruct* FPCDeviceProfiles::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPCDeviceProfiles_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCDeviceProfiles, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PCDeviceProfiles"), sizeof(FPCDeviceProfiles), Get_Z_Construct_UScriptStruct_FPCDeviceProfiles_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPCDeviceProfiles>()
{
	return FPCDeviceProfiles::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPCDeviceProfiles(FPCDeviceProfiles::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PCDeviceProfiles"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPCDeviceProfiles
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPCDeviceProfiles()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PCDeviceProfiles")),new UScriptStruct::TCppStructOps<FPCDeviceProfiles>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPCDeviceProfiles;
	struct Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pairs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pairs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPU_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GPU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPU_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CPU;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCDeviceProfiles.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCDeviceProfiles>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_Pairs_MetaData[] = {
		{ "Category", "PCDeviceProfiles" },
		{ "ModuleRelativePath", "Public/PCDeviceProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_Pairs = { "Pairs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPCDeviceProfiles, Pairs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_Pairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_Pairs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_Pairs_Inner = { "Pairs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResolutionQualityPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_GPU_MetaData[] = {
		{ "Category", "PCDeviceProfiles" },
		{ "ModuleRelativePath", "Public/PCDeviceProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_GPU = { "GPU", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPCDeviceProfiles, GPU), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_GPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_GPU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_CPU_MetaData[] = {
		{ "Category", "PCDeviceProfiles" },
		{ "ModuleRelativePath", "Public/PCDeviceProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_CPU = { "CPU", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPCDeviceProfiles, CPU), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_CPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_CPU_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_Pairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_Pairs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_GPU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::NewProp_CPU,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"PCDeviceProfiles",
		sizeof(FPCDeviceProfiles),
		alignof(FPCDeviceProfiles),
		Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCDeviceProfiles()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPCDeviceProfiles_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PCDeviceProfiles"), sizeof(FPCDeviceProfiles), Get_Z_Construct_UScriptStruct_FPCDeviceProfiles_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPCDeviceProfiles_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPCDeviceProfiles_Hash() { return 1932354788U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif