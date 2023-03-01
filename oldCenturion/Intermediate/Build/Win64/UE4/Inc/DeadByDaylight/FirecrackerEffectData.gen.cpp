// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FirecrackerEffectData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirecrackerEffectData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFirecrackerEffectData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFirecracker_NoRegister();
// End Cross Module References
class UScriptStruct* FFirecrackerEffectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FFirecrackerEffectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirecrackerEffectData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("FirecrackerEffectData"), sizeof(FFirecrackerEffectData), Get_Z_Construct_UScriptStruct_FFirecrackerEffectData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FFirecrackerEffectData>()
{
	return FFirecrackerEffectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirecrackerEffectData(FFirecrackerEffectData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("FirecrackerEffectData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFFirecrackerEffectData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFFirecrackerEffectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirecrackerEffectData")),new UScriptStruct::TCppStructOps<FFirecrackerEffectData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFFirecrackerEffectData;
	struct Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFirstTime_MetaData[];
#endif
		static void NewProp_IsFirstTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFirstTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInRange_MetaData[];
#endif
		static void NewProp_IsInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Firecracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Firecracker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirecrackerEffectData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirecrackerEffectData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsFirstTime_MetaData[] = {
		{ "Category", "FirecrackerEffectData" },
		{ "ModuleRelativePath", "Public/FirecrackerEffectData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsFirstTime_SetBit(void* Obj)
	{
		((FFirecrackerEffectData*)Obj)->IsFirstTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsFirstTime = { "IsFirstTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirecrackerEffectData), &Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsFirstTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsFirstTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsFirstTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsInRange_MetaData[] = {
		{ "Category", "FirecrackerEffectData" },
		{ "ModuleRelativePath", "Public/FirecrackerEffectData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsInRange_SetBit(void* Obj)
	{
		((FFirecrackerEffectData*)Obj)->IsInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsInRange = { "IsInRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirecrackerEffectData), &Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsInRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsInRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_Firecracker_MetaData[] = {
		{ "Category", "FirecrackerEffectData" },
		{ "ModuleRelativePath", "Public/FirecrackerEffectData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_Firecracker = { "Firecracker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirecrackerEffectData, Firecracker), Z_Construct_UClass_AFirecracker_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_Firecracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_Firecracker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsFirstTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_IsInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::NewProp_Firecracker,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"FirecrackerEffectData",
		sizeof(FFirecrackerEffectData),
		alignof(FFirecrackerEffectData),
		Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirecrackerEffectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirecrackerEffectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirecrackerEffectData"), sizeof(FFirecrackerEffectData), Get_Z_Construct_UScriptStruct_FFirecrackerEffectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirecrackerEffectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirecrackerEffectData_Hash() { return 4236274704U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
