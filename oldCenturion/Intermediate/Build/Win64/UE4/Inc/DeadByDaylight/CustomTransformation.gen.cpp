// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomTransformation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomTransformation() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomTransformation();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FCustomTransformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCustomTransformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomTransformation, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CustomTransformation"), sizeof(FCustomTransformation), Get_Z_Construct_UScriptStruct_FCustomTransformation_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCustomTransformation>()
{
	return FCustomTransformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomTransformation(FCustomTransformation::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CustomTransformation"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomTransformation
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomTransformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomTransformation")),new UScriptStruct::TCppStructOps<FCustomTransformation>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomTransformation;
	struct Z_Construct_UScriptStruct_FCustomTransformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomTransformation_MetaData[];
#endif
		static void NewProp_UseCustomTransformation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomTransformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTransformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomTransformation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomTransformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomTranslation_MetaData[] = {
		{ "Category", "CustomTransformation" },
		{ "ModuleRelativePath", "Public/CustomTransformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomTranslation = { "CustomTranslation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomTransformation, CustomTranslation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomScale_MetaData[] = {
		{ "Category", "CustomTransformation" },
		{ "ModuleRelativePath", "Public/CustomTransformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomScale = { "CustomScale", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomTransformation, CustomScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_UseCustomTransformation_MetaData[] = {
		{ "Category", "CustomTransformation" },
		{ "ModuleRelativePath", "Public/CustomTransformation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_UseCustomTransformation_SetBit(void* Obj)
	{
		((FCustomTransformation*)Obj)->UseCustomTransformation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_UseCustomTransformation = { "UseCustomTransformation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomTransformation), &Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_UseCustomTransformation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_UseCustomTransformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_UseCustomTransformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomTransformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_CustomScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomTransformation_Statics::NewProp_UseCustomTransformation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomTransformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CustomTransformation",
		sizeof(FCustomTransformation),
		alignof(FCustomTransformation),
		Z_Construct_UScriptStruct_FCustomTransformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTransformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTransformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTransformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomTransformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomTransformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomTransformation"), sizeof(FCustomTransformation), Get_Z_Construct_UScriptStruct_FCustomTransformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomTransformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomTransformation_Hash() { return 3661509651U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
