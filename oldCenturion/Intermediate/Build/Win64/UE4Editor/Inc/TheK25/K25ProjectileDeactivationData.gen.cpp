// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ProjectileDeactivationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ProjectileDeactivationData() {}
// Cross Module References
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25ProjectileDeactivationData();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ProjectileDeactivateReason();
// End Cross Module References
class UScriptStruct* FK25ProjectileDeactivationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK25_API uint32 Get_Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData, Z_Construct_UPackage__Script_TheK25(), TEXT("K25ProjectileDeactivationData"), sizeof(FK25ProjectileDeactivationData), Get_Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Hash());
	}
	return Singleton;
}
template<> THEK25_API UScriptStruct* StaticStruct<FK25ProjectileDeactivationData>()
{
	return FK25ProjectileDeactivationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK25ProjectileDeactivationData(FK25ProjectileDeactivationData::StaticStruct, TEXT("/Script/TheK25"), TEXT("K25ProjectileDeactivationData"), false, nullptr, nullptr);
static struct FScriptStruct_TheK25_StaticRegisterNativesFK25ProjectileDeactivationData
{
	FScriptStruct_TheK25_StaticRegisterNativesFK25ProjectileDeactivationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K25ProjectileDeactivationData")),new UScriptStruct::TCppStructOps<FK25ProjectileDeactivationData>);
	}
} ScriptStruct_TheK25_StaticRegisterNativesFK25ProjectileDeactivationData;
	struct Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAppliedDamage_MetaData[];
#endif
		static void NewProp_HasAppliedDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAppliedDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldReelBackProjectile_MetaData[];
#endif
		static void NewProp_ShouldReelBackProjectile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldReelBackProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurfaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PhysicalSurfaceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivationReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeactivationReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeactivationReason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/K25ProjectileDeactivationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK25ProjectileDeactivationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp__survivorHit_MetaData[] = {
		{ "Category", "K25ProjectileDeactivationData" },
		{ "ModuleRelativePath", "Public/K25ProjectileDeactivationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp__survivorHit = { "_survivorHit", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25ProjectileDeactivationData, _survivorHit), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp__survivorHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp__survivorHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_HasAppliedDamage_MetaData[] = {
		{ "Category", "K25ProjectileDeactivationData" },
		{ "ModuleRelativePath", "Public/K25ProjectileDeactivationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_HasAppliedDamage_SetBit(void* Obj)
	{
		((FK25ProjectileDeactivationData*)Obj)->HasAppliedDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_HasAppliedDamage = { "HasAppliedDamage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK25ProjectileDeactivationData), &Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_HasAppliedDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_HasAppliedDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_HasAppliedDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_ShouldReelBackProjectile_MetaData[] = {
		{ "Category", "K25ProjectileDeactivationData" },
		{ "ModuleRelativePath", "Public/K25ProjectileDeactivationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_ShouldReelBackProjectile_SetBit(void* Obj)
	{
		((FK25ProjectileDeactivationData*)Obj)->ShouldReelBackProjectile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_ShouldReelBackProjectile = { "ShouldReelBackProjectile", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK25ProjectileDeactivationData), &Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_ShouldReelBackProjectile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_ShouldReelBackProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_ShouldReelBackProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_PhysicalSurfaceName_MetaData[] = {
		{ "Category", "K25ProjectileDeactivationData" },
		{ "ModuleRelativePath", "Public/K25ProjectileDeactivationData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_PhysicalSurfaceName = { "PhysicalSurfaceName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25ProjectileDeactivationData, PhysicalSurfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_PhysicalSurfaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_PhysicalSurfaceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_DeactivationReason_MetaData[] = {
		{ "Category", "K25ProjectileDeactivationData" },
		{ "ModuleRelativePath", "Public/K25ProjectileDeactivationData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_DeactivationReason = { "DeactivationReason", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25ProjectileDeactivationData, DeactivationReason), Z_Construct_UEnum_TheK25_EK25ProjectileDeactivateReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_DeactivationReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_DeactivationReason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_DeactivationReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp__survivorHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_HasAppliedDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_ShouldReelBackProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_PhysicalSurfaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_DeactivationReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::NewProp_DeactivationReason_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
		nullptr,
		&NewStructOps,
		"K25ProjectileDeactivationData",
		sizeof(FK25ProjectileDeactivationData),
		alignof(FK25ProjectileDeactivationData),
		Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK25ProjectileDeactivationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K25ProjectileDeactivationData"), sizeof(FK25ProjectileDeactivationData), Get_Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK25ProjectileDeactivationData_Hash() { return 1356901966U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
