// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ClippedActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClippedActor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FClippedActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FClippedActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FClippedActor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClippedActor, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ClippedActor"), sizeof(FClippedActor), Get_Z_Construct_UScriptStruct_FClippedActor_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FClippedActor>()
{
	return FClippedActor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClippedActor(FClippedActor::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ClippedActor"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFClippedActor
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFClippedActor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClippedActor")),new UScriptStruct::TCppStructOps<FClippedActor>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFClippedActor;
	struct Z_Construct_UScriptStruct_FClippedActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollidingPrimitives_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CollidingPrimitives;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollidingPrimitives_Key_KeyProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CollidingPrimitives_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayComponents;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_DisplayComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClippedActor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClippedActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClippedActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClippedActor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_CollidingPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClippedActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_CollidingPrimitives = { "CollidingPrimitives", nullptr, (EPropertyFlags)0x0014008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClippedActor, CollidingPrimitives), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_CollidingPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_CollidingPrimitives_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_CollidingPrimitives_Key_KeyProp = { "CollidingPrimitives_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_CollidingPrimitives_ValueProp = { "CollidingPrimitives", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_DisplayComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClippedActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_DisplayComponents = { "DisplayComponents", nullptr, (EPropertyFlags)0x0014008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClippedActor, DisplayComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_DisplayComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_DisplayComponents_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_DisplayComponents_Inner = { "DisplayComponents", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClippedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_CollidingPrimitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_CollidingPrimitives_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_CollidingPrimitives_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_DisplayComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClippedActor_Statics::NewProp_DisplayComponents_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClippedActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ClippedActor",
		sizeof(FClippedActor),
		alignof(FClippedActor),
		Z_Construct_UScriptStruct_FClippedActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClippedActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClippedActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClippedActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClippedActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClippedActor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClippedActor"), sizeof(FClippedActor), Get_Z_Construct_UScriptStruct_FClippedActor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClippedActor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClippedActor_Hash() { return 1797731677U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
