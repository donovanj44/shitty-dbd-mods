// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/PerspectiveDependentAnimSequenceSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerspectiveDependentAnimSequenceSelector() {}
// Cross Module References
	DBDANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FPerspectiveDependentAnimSequenceSelector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANIMATION_API uint32 Get_Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector, Z_Construct_UPackage__Script_DBDAnimation(), TEXT("PerspectiveDependentAnimSequenceSelector"), sizeof(FPerspectiveDependentAnimSequenceSelector), Get_Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Hash());
	}
	return Singleton;
}
template<> DBDANIMATION_API UScriptStruct* StaticStruct<FPerspectiveDependentAnimSequenceSelector>()
{
	return FPerspectiveDependentAnimSequenceSelector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector(FPerspectiveDependentAnimSequenceSelector::StaticStruct, TEXT("/Script/DBDAnimation"), TEXT("PerspectiveDependentAnimSequenceSelector"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnimation_StaticRegisterNativesFPerspectiveDependentAnimSequenceSelector
{
	FScriptStruct_DBDAnimation_StaticRegisterNativesFPerspectiveDependentAnimSequenceSelector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerspectiveDependentAnimSequenceSelector")),new UScriptStruct::TCppStructOps<FPerspectiveDependentAnimSequenceSelector>);
	}
} ScriptStruct_DBDAnimation_StaticRegisterNativesFPerspectiveDependentAnimSequenceSelector;
	struct Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__firstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__thirdPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__thirdPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__current_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__current;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PerspectiveDependentAnimSequenceSelector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerspectiveDependentAnimSequenceSelector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__firstPerson_MetaData[] = {
		{ "Category", "PerspectiveDependentAnimSequenceSelector" },
		{ "ModuleRelativePath", "Public/PerspectiveDependentAnimSequenceSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__firstPerson = { "_firstPerson", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerspectiveDependentAnimSequenceSelector, _firstPerson), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__firstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__firstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__thirdPerson_MetaData[] = {
		{ "Category", "PerspectiveDependentAnimSequenceSelector" },
		{ "ModuleRelativePath", "Public/PerspectiveDependentAnimSequenceSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__thirdPerson = { "_thirdPerson", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerspectiveDependentAnimSequenceSelector, _thirdPerson), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__thirdPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__thirdPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__current_MetaData[] = {
		{ "Category", "PerspectiveDependentAnimSequenceSelector" },
		{ "ModuleRelativePath", "Public/PerspectiveDependentAnimSequenceSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__current = { "_current", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerspectiveDependentAnimSequenceSelector, _current), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__current_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__firstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__thirdPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::NewProp__current,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
		nullptr,
		&NewStructOps,
		"PerspectiveDependentAnimSequenceSelector",
		sizeof(FPerspectiveDependentAnimSequenceSelector),
		alignof(FPerspectiveDependentAnimSequenceSelector),
		Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnimation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerspectiveDependentAnimSequenceSelector"), sizeof(FPerspectiveDependentAnimSequenceSelector), Get_Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector_Hash() { return 1572511631U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
