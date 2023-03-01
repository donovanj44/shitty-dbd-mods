// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/GCReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGCReference() {}
// Cross Module References
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FGCReference();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FGCReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCALEFORMUI_API uint32 Get_Z_Construct_UScriptStruct_FGCReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGCReference, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("GCReference"), sizeof(FGCReference), Get_Z_Construct_UScriptStruct_FGCReference_Hash());
	}
	return Singleton;
}
template<> SCALEFORMUI_API UScriptStruct* StaticStruct<FGCReference>()
{
	return FGCReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGCReference(FGCReference::StaticStruct, TEXT("/Script/ScaleformUI"), TEXT("GCReference"), false, nullptr, nullptr);
static struct FScriptStruct_ScaleformUI_StaticRegisterNativesFGCReference
{
	FScriptStruct_ScaleformUI_StaticRegisterNativesFGCReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GCReference")),new UScriptStruct::TCppStructOps<FGCReference>);
	}
} ScriptStruct_ScaleformUI_StaticRegisterNativesFGCReference;
	struct Z_Construct_UScriptStruct_FGCReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGCReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GCReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGCReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGCReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_RefCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/GCReference.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_RefCount = { "RefCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCReference, RefCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_RefCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_RefCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Public/GCReference.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCReference, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGCReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_RefCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGCReference_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGCReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
		nullptr,
		&NewStructOps,
		"GCReference",
		sizeof(FGCReference),
		alignof(FGCReference),
		Z_Construct_UScriptStruct_FGCReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGCReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGCReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGCReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGCReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGCReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GCReference"), sizeof(FGCReference), Get_Z_Construct_UScriptStruct_FGCReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGCReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGCReference_Hash() { return 3159593290U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
