// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/ASPerspectiveTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASPerspectiveTransform() {}
// Cross Module References
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FASPerspectiveTransform();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References
class UScriptStruct* FASPerspectiveTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCALEFORMUI_API uint32 Get_Z_Construct_UScriptStruct_FASPerspectiveTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASPerspectiveTransform, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("ASPerspectiveTransform"), sizeof(FASPerspectiveTransform), Get_Z_Construct_UScriptStruct_FASPerspectiveTransform_Hash());
	}
	return Singleton;
}
template<> SCALEFORMUI_API UScriptStruct* StaticStruct<FASPerspectiveTransform>()
{
	return FASPerspectiveTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASPerspectiveTransform(FASPerspectiveTransform::StaticStruct, TEXT("/Script/ScaleformUI"), TEXT("ASPerspectiveTransform"), false, nullptr, nullptr);
static struct FScriptStruct_ScaleformUI_StaticRegisterNativesFASPerspectiveTransform
{
	FScriptStruct_ScaleformUI_StaticRegisterNativesFASPerspectiveTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASPerspectiveTransform")),new UScriptStruct::TCppStructOps<FASPerspectiveTransform>);
	}
} ScriptStruct_ScaleformUI_StaticRegisterNativesFASPerspectiveTransform;
	struct Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASPerspectiveTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASPerspectiveTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row3_MetaData[] = {
		{ "Category", "ASPerspectiveTransform" },
		{ "ModuleRelativePath", "Public/ASPerspectiveTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row3 = { "Row3", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASPerspectiveTransform, Row3), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row2_MetaData[] = {
		{ "Category", "ASPerspectiveTransform" },
		{ "ModuleRelativePath", "Public/ASPerspectiveTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row2 = { "Row2", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASPerspectiveTransform, Row2), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row1_MetaData[] = {
		{ "Category", "ASPerspectiveTransform" },
		{ "ModuleRelativePath", "Public/ASPerspectiveTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row1 = { "Row1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASPerspectiveTransform, Row1), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row0_MetaData[] = {
		{ "Category", "ASPerspectiveTransform" },
		{ "ModuleRelativePath", "Public/ASPerspectiveTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row0 = { "Row0", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASPerspectiveTransform, Row0), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::NewProp_Row0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
		nullptr,
		&NewStructOps,
		"ASPerspectiveTransform",
		sizeof(FASPerspectiveTransform),
		alignof(FASPerspectiveTransform),
		Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASPerspectiveTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASPerspectiveTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASPerspectiveTransform"), sizeof(FASPerspectiveTransform), Get_Z_Construct_UScriptStruct_FASPerspectiveTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASPerspectiveTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASPerspectiveTransform_Hash() { return 1032351402U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
