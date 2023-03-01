// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/ASColorTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASColorTransform() {}
// Cross Module References
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FASColorTransform();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FASColorTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCALEFORMUI_API uint32 Get_Z_Construct_UScriptStruct_FASColorTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASColorTransform, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("ASColorTransform"), sizeof(FASColorTransform), Get_Z_Construct_UScriptStruct_FASColorTransform_Hash());
	}
	return Singleton;
}
template<> SCALEFORMUI_API UScriptStruct* StaticStruct<FASColorTransform>()
{
	return FASColorTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASColorTransform(FASColorTransform::StaticStruct, TEXT("/Script/ScaleformUI"), TEXT("ASColorTransform"), false, nullptr, nullptr);
static struct FScriptStruct_ScaleformUI_StaticRegisterNativesFASColorTransform
{
	FScriptStruct_ScaleformUI_StaticRegisterNativesFASColorTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASColorTransform")),new UScriptStruct::TCppStructOps<FASColorTransform>);
	}
} ScriptStruct_ScaleformUI_StaticRegisterNativesFASColorTransform;
	struct Z_Construct_UScriptStruct_FASColorTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Add_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Add;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Multiply;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASColorTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASColorTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASColorTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASColorTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Add_MetaData[] = {
		{ "Category", "ASColorTransform" },
		{ "ModuleRelativePath", "Public/ASColorTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASColorTransform, Add), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Add_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Add_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Multiply_MetaData[] = {
		{ "Category", "ASColorTransform" },
		{ "ModuleRelativePath", "Public/ASColorTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASColorTransform, Multiply), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Multiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Multiply_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASColorTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Add,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASColorTransform_Statics::NewProp_Multiply,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASColorTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
		nullptr,
		&NewStructOps,
		"ASColorTransform",
		sizeof(FASColorTransform),
		alignof(FASColorTransform),
		Z_Construct_UScriptStruct_FASColorTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASColorTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASColorTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASColorTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASColorTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASColorTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASColorTransform"), sizeof(FASColorTransform), Get_Z_Construct_UScriptStruct_FASColorTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASColorTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASColorTransform_Hash() { return 105269463U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
