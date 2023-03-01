// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AttackTypeDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackTypeDetails() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAttackTypeDetails();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
// End Cross Module References
class UScriptStruct* FAttackTypeDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAttackTypeDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackTypeDetails, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AttackTypeDetails"), sizeof(FAttackTypeDetails), Get_Z_Construct_UScriptStruct_FAttackTypeDetails_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAttackTypeDetails>()
{
	return FAttackTypeDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttackTypeDetails(FAttackTypeDetails::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AttackTypeDetails"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackTypeDetails
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackTypeDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttackTypeDetails")),new UScriptStruct::TCppStructOps<FAttackTypeDetails>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackTypeDetails;
	struct Z_Construct_UScriptStruct_FAttackTypeDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssociatedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBasicAttack_MetaData[];
#endif
		static void NewProp_IsBasicAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBasicAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttackTypeDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackTypeDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AttackTypeDetails" },
		{ "ModuleRelativePath", "Public/AttackTypeDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackTypeDetails, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AssociatedCharacter_MetaData[] = {
		{ "Category", "AttackTypeDetails" },
		{ "ModuleRelativePath", "Public/AttackTypeDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AssociatedCharacter = { "AssociatedCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackTypeDetails, AssociatedCharacter), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AssociatedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AssociatedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_IsBasicAttack_MetaData[] = {
		{ "Category", "AttackTypeDetails" },
		{ "ModuleRelativePath", "Public/AttackTypeDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_IsBasicAttack_SetBit(void* Obj)
	{
		((FAttackTypeDetails*)Obj)->IsBasicAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_IsBasicAttack = { "IsBasicAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAttackTypeDetails), &Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_IsBasicAttack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_IsBasicAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_IsBasicAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AttackType_MetaData[] = {
		{ "Category", "AttackTypeDetails" },
		{ "ModuleRelativePath", "Public/AttackTypeDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackTypeDetails, AttackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AttackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AssociatedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_IsBasicAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::NewProp_AttackType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AttackTypeDetails",
		sizeof(FAttackTypeDetails),
		alignof(FAttackTypeDetails),
		Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttackTypeDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttackTypeDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttackTypeDetails"), sizeof(FAttackTypeDetails), Get_Z_Construct_UScriptStruct_FAttackTypeDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttackTypeDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttackTypeDetails_Hash() { return 1926960957U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
