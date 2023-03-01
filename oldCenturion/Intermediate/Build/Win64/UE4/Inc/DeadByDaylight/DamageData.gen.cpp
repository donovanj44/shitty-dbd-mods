// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DamageData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FDamageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDamageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DamageData"), sizeof(FDamageData), Get_Z_Construct_UScriptStruct_FDamageData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDamageData>()
{
	return FDamageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDamageData(FDamageData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DamageData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDamageData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDamageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DamageData")),new UScriptStruct::TCppStructOps<FDamageData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDamageData;
	struct Z_Construct_UScriptStruct_FDamageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lastDamageChangeSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__lastDamageChangeSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIntense_MetaData[];
#endif
		static void NewProp__isIntense_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIntense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRegressing_MetaData[];
#endif
		static void NewProp__isRegressing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRegressing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DamageData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__lastDamageChangeSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/DamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__lastDamageChangeSource = { "_lastDamageChangeSource", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDamageData, _lastDamageChangeSource), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__lastDamageChangeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__lastDamageChangeSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isIntense_MetaData[] = {
		{ "ModuleRelativePath", "Public/DamageData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isIntense_SetBit(void* Obj)
	{
		((FDamageData*)Obj)->_isIntense = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isIntense = { "_isIntense", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDamageData), &Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isIntense_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isIntense_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isIntense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isRegressing_MetaData[] = {
		{ "ModuleRelativePath", "Public/DamageData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isRegressing_SetBit(void* Obj)
	{
		((FDamageData*)Obj)->_isRegressing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isRegressing = { "_isRegressing", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDamageData), &Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isRegressing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isRegressing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isRegressing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__lastDamageChangeSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isIntense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageData_Statics::NewProp__isRegressing,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DamageData",
		sizeof(FDamageData),
		alignof(FDamageData),
		Z_Construct_UScriptStruct_FDamageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDamageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDamageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DamageData"), sizeof(FDamageData), Get_Z_Construct_UScriptStruct_FDamageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDamageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDamageData_Hash() { return 2080314764U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
