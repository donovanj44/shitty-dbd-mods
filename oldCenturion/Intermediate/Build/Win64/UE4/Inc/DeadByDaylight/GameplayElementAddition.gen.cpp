// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameplayElementAddition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayElementAddition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayElementAddition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayElementType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FGameplayElementAddition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGameplayElementAddition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayElementAddition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GameplayElementAddition"), sizeof(FGameplayElementAddition), Get_Z_Construct_UScriptStruct_FGameplayElementAddition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGameplayElementAddition>()
{
	return FGameplayElementAddition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayElementAddition(FGameplayElementAddition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GameplayElementAddition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameplayElementAddition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameplayElementAddition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayElementAddition")),new UScriptStruct::TCppStructOps<FGameplayElementAddition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGameplayElementAddition;
	struct Z_Construct_UScriptStruct_FGameplayElementAddition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberToAddAffectedByOffering_MetaData[];
#endif
		static void NewProp__numberToAddAffectedByOffering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__numberToAddAffectedByOffering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberToAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__spawnerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__spawnerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__elementToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__elementToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayElementAddition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayElementAddition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAddAffectedByOffering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayElementAddition" },
		{ "ModuleRelativePath", "Public/GameplayElementAddition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAddAffectedByOffering_SetBit(void* Obj)
	{
		((FGameplayElementAddition*)Obj)->_numberToAddAffectedByOffering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAddAffectedByOffering = { "_numberToAddAffectedByOffering", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameplayElementAddition), &Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAddAffectedByOffering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAddAffectedByOffering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAddAffectedByOffering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayElementAddition" },
		{ "ModuleRelativePath", "Public/GameplayElementAddition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAdd = { "_numberToAdd", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayElementAddition, _numberToAdd), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__spawnerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayElementAddition" },
		{ "ModuleRelativePath", "Public/GameplayElementAddition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__spawnerType = { "_spawnerType", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayElementAddition, _spawnerType), Z_Construct_UEnum_DeadByDaylight_EGameplayElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__spawnerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__spawnerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__spawnerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__elementToAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayElementAddition" },
		{ "ModuleRelativePath", "Public/GameplayElementAddition.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__elementToAdd = { "_elementToAdd", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayElementAddition, _elementToAdd), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__elementToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__elementToAdd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAddAffectedByOffering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__numberToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__spawnerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__spawnerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::NewProp__elementToAdd,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"GameplayElementAddition",
		sizeof(FGameplayElementAddition),
		alignof(FGameplayElementAddition),
		Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayElementAddition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayElementAddition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayElementAddition"), sizeof(FGameplayElementAddition), Get_Z_Construct_UScriptStruct_FGameplayElementAddition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayElementAddition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayElementAddition_Hash() { return 4224880071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
