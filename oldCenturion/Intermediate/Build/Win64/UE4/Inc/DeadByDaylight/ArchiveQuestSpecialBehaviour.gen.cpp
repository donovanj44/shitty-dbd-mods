// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchiveQuestSpecialBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveQuestSpecialBehaviour() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOwnershipBehaviour();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EStackingBehaviours();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAdditiveBehaviour();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EContextualType();
// End Cross Module References
class UScriptStruct* FArchiveQuestSpecialBehaviour::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArchiveQuestSpecialBehaviour"), sizeof(FArchiveQuestSpecialBehaviour), Get_Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArchiveQuestSpecialBehaviour>()
{
	return FArchiveQuestSpecialBehaviour::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveQuestSpecialBehaviour(FArchiveQuestSpecialBehaviour::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArchiveQuestSpecialBehaviour"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveQuestSpecialBehaviour
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveQuestSpecialBehaviour()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArchiveQuestSpecialBehaviour")),new UScriptStruct::TCppStructOps<FArchiveQuestSpecialBehaviour>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveQuestSpecialBehaviour;
	struct Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnershipBehaviour_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OwnershipBehaviour;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OwnershipBehaviour_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackableBehaviour_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StackableBehaviour;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StackableBehaviour_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveBehaviour_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AdditiveBehaviour;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdditiveBehaviour_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnObjectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpawnObjectId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchiveQuestSpecialBehaviour.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveQuestSpecialBehaviour>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnQuantity_MetaData[] = {
		{ "Category", "ArchiveQuestSpecialBehaviour" },
		{ "ModuleRelativePath", "Public/ArchiveQuestSpecialBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnQuantity = { "SpawnQuantity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestSpecialBehaviour, SpawnQuantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_OwnershipBehaviour_MetaData[] = {
		{ "Category", "ArchiveQuestSpecialBehaviour" },
		{ "ModuleRelativePath", "Public/ArchiveQuestSpecialBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_OwnershipBehaviour = { "OwnershipBehaviour", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestSpecialBehaviour, OwnershipBehaviour), Z_Construct_UEnum_DeadByDaylight_EOwnershipBehaviour, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_OwnershipBehaviour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_OwnershipBehaviour_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_OwnershipBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_StackableBehaviour_MetaData[] = {
		{ "Category", "ArchiveQuestSpecialBehaviour" },
		{ "ModuleRelativePath", "Public/ArchiveQuestSpecialBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_StackableBehaviour = { "StackableBehaviour", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestSpecialBehaviour, StackableBehaviour), Z_Construct_UEnum_DeadByDaylight_EStackingBehaviours, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_StackableBehaviour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_StackableBehaviour_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_StackableBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_AdditiveBehaviour_MetaData[] = {
		{ "Category", "ArchiveQuestSpecialBehaviour" },
		{ "ModuleRelativePath", "Public/ArchiveQuestSpecialBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_AdditiveBehaviour = { "AdditiveBehaviour", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestSpecialBehaviour, AdditiveBehaviour), Z_Construct_UEnum_DeadByDaylight_EAdditiveBehaviour, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_AdditiveBehaviour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_AdditiveBehaviour_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_AdditiveBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnObjectId_MetaData[] = {
		{ "Category", "ArchiveQuestSpecialBehaviour" },
		{ "ModuleRelativePath", "Public/ArchiveQuestSpecialBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnObjectId = { "SpawnObjectId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestSpecialBehaviour, SpawnObjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnObjectId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ArchiveQuestSpecialBehaviour" },
		{ "ModuleRelativePath", "Public/ArchiveQuestSpecialBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestSpecialBehaviour, Type), Z_Construct_UEnum_DeadByDaylight_EContextualType, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ArchiveQuestSpecialBehaviour" },
		{ "ModuleRelativePath", "Public/ArchiveQuestSpecialBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestSpecialBehaviour, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_OwnershipBehaviour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_OwnershipBehaviour_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_StackableBehaviour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_StackableBehaviour_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_AdditiveBehaviour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_AdditiveBehaviour_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_SpawnObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBaseWithId,
		&NewStructOps,
		"ArchiveQuestSpecialBehaviour",
		sizeof(FArchiveQuestSpecialBehaviour),
		alignof(FArchiveQuestSpecialBehaviour),
		Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveQuestSpecialBehaviour"), sizeof(FArchiveQuestSpecialBehaviour), Get_Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveQuestSpecialBehaviour_Hash() { return 1948212852U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
