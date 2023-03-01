// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AttackEventTypeDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackEventTypeDetails() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAttackEventTypeDetails();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAttackEventType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FAttackEventTypeDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAttackEventTypeDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackEventTypeDetails, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AttackEventTypeDetails"), sizeof(FAttackEventTypeDetails), Get_Z_Construct_UScriptStruct_FAttackEventTypeDetails_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAttackEventTypeDetails>()
{
	return FAttackEventTypeDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttackEventTypeDetails(FAttackEventTypeDetails::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AttackEventTypeDetails"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackEventTypeDetails
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackEventTypeDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttackEventTypeDetails")),new UScriptStruct::TCppStructOps<FAttackEventTypeDetails>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAttackEventTypeDetails;
	struct Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssociatedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeProtective_MetaData[];
#endif
		static void NewProp_CanBeProtective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeProtective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackEventType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttackEventTypeDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackEventTypeDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AttackEventTypeDetails" },
		{ "ModuleRelativePath", "Public/AttackEventTypeDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackEventTypeDetails, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AssociatedCharacter_MetaData[] = {
		{ "Category", "AttackEventTypeDetails" },
		{ "ModuleRelativePath", "Public/AttackEventTypeDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AssociatedCharacter = { "AssociatedCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackEventTypeDetails, AssociatedCharacter), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AssociatedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AssociatedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_CanBeProtective_MetaData[] = {
		{ "Category", "AttackEventTypeDetails" },
		{ "ModuleRelativePath", "Public/AttackEventTypeDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_CanBeProtective_SetBit(void* Obj)
	{
		((FAttackEventTypeDetails*)Obj)->CanBeProtective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_CanBeProtective = { "CanBeProtective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAttackEventTypeDetails), &Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_CanBeProtective_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_CanBeProtective_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_CanBeProtective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AttackEventType_MetaData[] = {
		{ "Category", "AttackEventTypeDetails" },
		{ "ModuleRelativePath", "Public/AttackEventTypeDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AttackEventType = { "AttackEventType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackEventTypeDetails, AttackEventType), Z_Construct_UEnum_DeadByDaylight_EAttackEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AttackEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AttackEventType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AttackEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_GameplayTag_MetaData[] = {
		{ "Category", "AttackEventTypeDetails" },
		{ "ModuleRelativePath", "Public/AttackEventTypeDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackEventTypeDetails, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_GameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_GameplayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AssociatedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_CanBeProtective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AttackEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_AttackEventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::NewProp_GameplayTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AttackEventTypeDetails",
		sizeof(FAttackEventTypeDetails),
		alignof(FAttackEventTypeDetails),
		Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttackEventTypeDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttackEventTypeDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttackEventTypeDetails"), sizeof(FAttackEventTypeDetails), Get_Z_Construct_UScriptStruct_FAttackEventTypeDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttackEventTypeDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttackEventTypeDetails_Hash() { return 1982835197U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif