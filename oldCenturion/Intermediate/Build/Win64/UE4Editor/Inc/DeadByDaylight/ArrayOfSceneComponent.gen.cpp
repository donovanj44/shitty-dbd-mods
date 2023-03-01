// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArrayOfSceneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrayOfSceneComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArrayOfSceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FArrayOfSceneComponent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArrayOfSceneComponent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayOfSceneComponent, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArrayOfSceneComponent"), sizeof(FArrayOfSceneComponent), Get_Z_Construct_UScriptStruct_FArrayOfSceneComponent_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArrayOfSceneComponent>()
{
	return FArrayOfSceneComponent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArrayOfSceneComponent(FArrayOfSceneComponent::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArrayOfSceneComponent"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArrayOfSceneComponent
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArrayOfSceneComponent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArrayOfSceneComponent")),new UScriptStruct::TCppStructOps<FArrayOfSceneComponent>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArrayOfSceneComponent;
	struct Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sceneComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sceneComp_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArrayOfSceneComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayOfSceneComponent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::NewProp_sceneComp_MetaData[] = {
		{ "Category", "ArrayOfSceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArrayOfSceneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::NewProp_sceneComp = { "sceneComp", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArrayOfSceneComponent, sceneComp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::NewProp_sceneComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::NewProp_sceneComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::NewProp_sceneComp_Inner = { "sceneComp", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::NewProp_sceneComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::NewProp_sceneComp_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ArrayOfSceneComponent",
		sizeof(FArrayOfSceneComponent),
		alignof(FArrayOfSceneComponent),
		Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayOfSceneComponent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArrayOfSceneComponent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArrayOfSceneComponent"), sizeof(FArrayOfSceneComponent), Get_Z_Construct_UScriptStruct_FArrayOfSceneComponent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArrayOfSceneComponent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArrayOfSceneComponent_Hash() { return 2016777358U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
