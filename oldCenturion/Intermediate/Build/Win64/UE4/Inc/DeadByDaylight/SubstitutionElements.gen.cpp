// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SubstitutionElements.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstitutionElements() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSubstitutionElements();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSubstitutionElements::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSubstitutionElements_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstitutionElements, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SubstitutionElements"), sizeof(FSubstitutionElements), Get_Z_Construct_UScriptStruct_FSubstitutionElements_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSubstitutionElements>()
{
	return FSubstitutionElements::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstitutionElements(FSubstitutionElements::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SubstitutionElements"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSubstitutionElements
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSubstitutionElements()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstitutionElements")),new UScriptStruct::TCppStructOps<FSubstitutionElements>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSubstitutionElements;
	struct Z_Construct_UScriptStruct_FSubstitutionElements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__elementToReplaceWith_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__elementToReplaceWith;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__elementToReplace_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__elementToReplace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstitutionElements_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubstitutionElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstitutionElements>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplaceWith_MetaData[] = {
		{ "Category", "SubstitutionElements" },
		{ "ModuleRelativePath", "Public/SubstitutionElements.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplaceWith = { "_elementToReplaceWith", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstitutionElements, _elementToReplaceWith), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplaceWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplaceWith_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplace_MetaData[] = {
		{ "Category", "SubstitutionElements" },
		{ "ModuleRelativePath", "Public/SubstitutionElements.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplace = { "_elementToReplace", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstitutionElements, _elementToReplace), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstitutionElements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplaceWith,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstitutionElements_Statics::NewProp__elementToReplace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstitutionElements_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SubstitutionElements",
		sizeof(FSubstitutionElements),
		alignof(FSubstitutionElements),
		Z_Construct_UScriptStruct_FSubstitutionElements_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstitutionElements_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstitutionElements_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstitutionElements_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstitutionElements()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstitutionElements_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstitutionElements"), sizeof(FSubstitutionElements), Get_Z_Construct_UScriptStruct_FSubstitutionElements_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubstitutionElements_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstitutionElements_Hash() { return 4006601147U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
