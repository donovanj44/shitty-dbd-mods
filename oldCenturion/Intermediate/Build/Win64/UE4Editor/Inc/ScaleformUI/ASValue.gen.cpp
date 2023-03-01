// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/ASValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASValue() {}
// Cross Module References
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FASValue();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxObject_NoRegister();
	SCALEFORMUI_API UEnum* Z_Construct_UEnum_ScaleformUI_EASType();
// End Cross Module References
class UScriptStruct* FASValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCALEFORMUI_API uint32 Get_Z_Construct_UScriptStruct_FASValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASValue, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("ASValue"), sizeof(FASValue), Get_Z_Construct_UScriptStruct_FASValue_Hash());
	}
	return Singleton;
}
template<> SCALEFORMUI_API UScriptStruct* StaticStruct<FASValue>()
{
	return FASValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASValue(FASValue::StaticStruct, TEXT("/Script/ScaleformUI"), TEXT("ASValue"), false, nullptr, nullptr);
static struct FScriptStruct_ScaleformUI_StaticRegisterNativesFASValue
{
	FScriptStruct_ScaleformUI_StaticRegisterNativesFASValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASValue")),new UScriptStruct::TCppStructOps<FASValue>);
	}
} ScriptStruct_ScaleformUI_StaticRegisterNativesFASValue;
	struct Z_Construct_UScriptStruct_FASValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ASObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ASObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ASString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ASString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ASNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ASNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ASInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ASInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ASBoolean_MetaData[];
#endif
		static void NewProp_ASBoolean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ASBoolean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ASType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ASType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ASValue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASObject = { "ASObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASValue, ASObject), Z_Construct_UClass_UGFxObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASString_MetaData[] = {
		{ "Category", "ASValue" },
		{ "ModuleRelativePath", "Public/ASValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASString = { "ASString", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASValue, ASString), METADATA_PARAMS(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASNumber_MetaData[] = {
		{ "Category", "ASValue" },
		{ "ModuleRelativePath", "Public/ASValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASNumber = { "ASNumber", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASValue, ASNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASInt_MetaData[] = {
		{ "Category", "ASValue" },
		{ "ModuleRelativePath", "Public/ASValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASInt = { "ASInt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASValue, ASInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASBoolean_MetaData[] = {
		{ "Category", "ASValue" },
		{ "ModuleRelativePath", "Public/ASValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASBoolean_SetBit(void* Obj)
	{
		((FASValue*)Obj)->ASBoolean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASBoolean = { "ASBoolean", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FASValue), &Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASBoolean_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASBoolean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASBoolean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASType_MetaData[] = {
		{ "Category", "ASValue" },
		{ "ModuleRelativePath", "Public/ASValue.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASType = { "ASType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASValue, ASType), Z_Construct_UEnum_ScaleformUI_EASType, METADATA_PARAMS(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASBoolean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASValue_Statics::NewProp_ASType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
		nullptr,
		&NewStructOps,
		"ASValue",
		sizeof(FASValue),
		alignof(FASValue),
		Z_Construct_UScriptStruct_FASValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASValue"), sizeof(FASValue), Get_Z_Construct_UScriptStruct_FASValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASValue_Hash() { return 2123322411U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
