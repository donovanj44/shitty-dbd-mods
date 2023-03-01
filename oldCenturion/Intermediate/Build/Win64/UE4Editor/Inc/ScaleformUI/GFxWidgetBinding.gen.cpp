// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/GFxWidgetBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFxWidgetBinding() {}
// Cross Module References
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FGFxWidgetBinding();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FGFxWidgetBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCALEFORMUI_API uint32 Get_Z_Construct_UScriptStruct_FGFxWidgetBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGFxWidgetBinding, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("GFxWidgetBinding"), sizeof(FGFxWidgetBinding), Get_Z_Construct_UScriptStruct_FGFxWidgetBinding_Hash());
	}
	return Singleton;
}
template<> SCALEFORMUI_API UScriptStruct* StaticStruct<FGFxWidgetBinding>()
{
	return FGFxWidgetBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGFxWidgetBinding(FGFxWidgetBinding::StaticStruct, TEXT("/Script/ScaleformUI"), TEXT("GFxWidgetBinding"), false, nullptr, nullptr);
static struct FScriptStruct_ScaleformUI_StaticRegisterNativesFGFxWidgetBinding
{
	FScriptStruct_ScaleformUI_StaticRegisterNativesFGFxWidgetBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GFxWidgetBinding")),new UScriptStruct::TCppStructOps<FGFxWidgetBinding>);
	}
} ScriptStruct_ScaleformUI_StaticRegisterNativesFGFxWidgetBinding;
	struct Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidgetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GFxWidgetBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGFxWidgetBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/GFxWidgetBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFxWidgetBinding, WidgetClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GFxWidgetBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFxWidgetBinding, WidgetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::NewProp_WidgetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
		nullptr,
		&NewStructOps,
		"GFxWidgetBinding",
		sizeof(FGFxWidgetBinding),
		alignof(FGFxWidgetBinding),
		Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGFxWidgetBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGFxWidgetBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GFxWidgetBinding"), sizeof(FGFxWidgetBinding), Get_Z_Construct_UScriptStruct_FGFxWidgetBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGFxWidgetBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGFxWidgetBinding_Hash() { return 2444083287U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
