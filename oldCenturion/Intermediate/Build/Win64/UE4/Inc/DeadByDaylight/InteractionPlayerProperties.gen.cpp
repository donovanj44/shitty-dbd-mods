// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractionPlayerProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionPlayerProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionPlayerProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FInteractionPlayerProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FInteractionPlayerProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionPlayerProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("InteractionPlayerProperties"), sizeof(FInteractionPlayerProperties), Get_Z_Construct_UScriptStruct_FInteractionPlayerProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FInteractionPlayerProperties>()
{
	return FInteractionPlayerProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionPlayerProperties(FInteractionPlayerProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("InteractionPlayerProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionPlayerProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionPlayerProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionPlayerProperties")),new UScriptStruct::TCppStructOps<FInteractionPlayerProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionPlayerProperties;
	struct Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldSnapPosition_MetaData[];
#endif
		static void NewProp_ShouldSnapPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldSnapPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapTimeAtStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapTimeAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapDistanceAtStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapDistanceAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapRotationAtStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapRotationAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapPositionAtStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapPositionAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Requester;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRotationAtStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRotationAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPositionAtStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerPositionAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageVelocityAtStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AverageVelocityAtStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionPlayerProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_ShouldSnapPosition_MetaData[] = {
		{ "Category", "InteractionPlayerProperties" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_ShouldSnapPosition_SetBit(void* Obj)
	{
		((FInteractionPlayerProperties*)Obj)->ShouldSnapPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_ShouldSnapPosition = { "ShouldSnapPosition", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInteractionPlayerProperties), &Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_ShouldSnapPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_ShouldSnapPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_ShouldSnapPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapTimeAtStart_MetaData[] = {
		{ "Category", "InteractionPlayerProperties" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapTimeAtStart = { "SnapTimeAtStart", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPlayerProperties, SnapTimeAtStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapTimeAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapTimeAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapDistanceAtStart_MetaData[] = {
		{ "Category", "InteractionPlayerProperties" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapDistanceAtStart = { "SnapDistanceAtStart", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPlayerProperties, SnapDistanceAtStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapDistanceAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapDistanceAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapRotationAtStart_MetaData[] = {
		{ "Category", "InteractionPlayerProperties" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapRotationAtStart = { "SnapRotationAtStart", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPlayerProperties, SnapRotationAtStart), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapRotationAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapRotationAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapPositionAtStart_MetaData[] = {
		{ "Category", "InteractionPlayerProperties" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapPositionAtStart = { "SnapPositionAtStart", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPlayerProperties, SnapPositionAtStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapPositionAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapPositionAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_Requester_MetaData[] = {
		{ "Category", "InteractionPlayerProperties" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0014000000020015, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPlayerProperties, Requester), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_Requester_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_Requester_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerRotationAtStart_MetaData[] = {
		{ "Category", "InteractionPlayerProperties" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerRotationAtStart = { "PlayerRotationAtStart", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPlayerProperties, PlayerRotationAtStart), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerRotationAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerRotationAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerPositionAtStart_MetaData[] = {
		{ "Category", "InteractionPlayerProperties" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerPositionAtStart = { "PlayerPositionAtStart", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPlayerProperties, PlayerPositionAtStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerPositionAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerPositionAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_AverageVelocityAtStart_MetaData[] = {
		{ "Category", "InteractionPlayerProperties" },
		{ "ModuleRelativePath", "Public/InteractionPlayerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_AverageVelocityAtStart = { "AverageVelocityAtStart", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPlayerProperties, AverageVelocityAtStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_AverageVelocityAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_AverageVelocityAtStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_ShouldSnapPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapTimeAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapDistanceAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapRotationAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_SnapPositionAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_Requester,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerRotationAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_PlayerPositionAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::NewProp_AverageVelocityAtStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"InteractionPlayerProperties",
		sizeof(FInteractionPlayerProperties),
		alignof(FInteractionPlayerProperties),
		Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionPlayerProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionPlayerProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionPlayerProperties"), sizeof(FInteractionPlayerProperties), Get_Z_Construct_UScriptStruct_FInteractionPlayerProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionPlayerProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionPlayerProperties_Hash() { return 4017173811U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
