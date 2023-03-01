// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EventSubstitionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventSubstitionData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEventSubstitionData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayElementAddition();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDependencyElementAddition();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDependencyElementSubstitutions();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayElementSubstitutions();
// End Cross Module References
class UScriptStruct* FEventSubstitionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEventSubstitionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventSubstitionData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EventSubstitionData"), sizeof(FEventSubstitionData), Get_Z_Construct_UScriptStruct_FEventSubstitionData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEventSubstitionData>()
{
	return FEventSubstitionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventSubstitionData(FEventSubstitionData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EventSubstitionData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEventSubstitionData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEventSubstitionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventSubstitionData")),new UScriptStruct::TCppStructOps<FEventSubstitionData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEventSubstitionData;
	struct Z_Construct_UScriptStruct_FEventSubstitionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameplayElementAdditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__gameplayElementAdditions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gameplayElementAdditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dependencyElementAdditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__dependencyElementAdditions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dependencyElementAdditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dependencySubstitutionElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__dependencySubstitutionElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dependencySubstitutionElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameplaySubstitutionElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__gameplaySubstitutionElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gameplaySubstitutionElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseNumOfSubstitutionPerGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__baseNumOfSubstitutionPerGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowSubstitutionInKYF_MetaData[];
#endif
		static void NewProp__allowSubstitutionInKYF_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowSubstitutionInKYF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventSubstitionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventSubstitionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventSubstitionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplayElementAdditions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventSubstitionData" },
		{ "ModuleRelativePath", "Public/EventSubstitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplayElementAdditions = { "_gameplayElementAdditions", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventSubstitionData, _gameplayElementAdditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplayElementAdditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplayElementAdditions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplayElementAdditions_Inner = { "_gameplayElementAdditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayElementAddition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencyElementAdditions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventSubstitionData" },
		{ "ModuleRelativePath", "Public/EventSubstitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencyElementAdditions = { "_dependencyElementAdditions", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventSubstitionData, _dependencyElementAdditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencyElementAdditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencyElementAdditions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencyElementAdditions_Inner = { "_dependencyElementAdditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDependencyElementAddition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencySubstitutionElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventSubstitionData" },
		{ "ModuleRelativePath", "Public/EventSubstitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencySubstitutionElements = { "_dependencySubstitutionElements", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventSubstitionData, _dependencySubstitutionElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencySubstitutionElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencySubstitutionElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencySubstitutionElements_Inner = { "_dependencySubstitutionElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDependencyElementSubstitutions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplaySubstitutionElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventSubstitionData" },
		{ "ModuleRelativePath", "Public/EventSubstitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplaySubstitutionElements = { "_gameplaySubstitutionElements", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventSubstitionData, _gameplaySubstitutionElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplaySubstitutionElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplaySubstitutionElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplaySubstitutionElements_Inner = { "_gameplaySubstitutionElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayElementSubstitutions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__baseNumOfSubstitutionPerGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventSubstitionData" },
		{ "ModuleRelativePath", "Public/EventSubstitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__baseNumOfSubstitutionPerGroup = { "_baseNumOfSubstitutionPerGroup", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventSubstitionData, _baseNumOfSubstitutionPerGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__baseNumOfSubstitutionPerGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__baseNumOfSubstitutionPerGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__allowSubstitutionInKYF_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventSubstitionData" },
		{ "ModuleRelativePath", "Public/EventSubstitionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__allowSubstitutionInKYF_SetBit(void* Obj)
	{
		((FEventSubstitionData*)Obj)->_allowSubstitutionInKYF = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__allowSubstitutionInKYF = { "_allowSubstitutionInKYF", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEventSubstitionData), &Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__allowSubstitutionInKYF_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__allowSubstitutionInKYF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__allowSubstitutionInKYF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventSubstitionData" },
		{ "ModuleRelativePath", "Public/EventSubstitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventSubstitionData, _name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventSubstitionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplayElementAdditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplayElementAdditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencyElementAdditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencyElementAdditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencySubstitutionElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__dependencySubstitutionElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplaySubstitutionElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__gameplaySubstitutionElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__baseNumOfSubstitutionPerGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__allowSubstitutionInKYF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventSubstitionData_Statics::NewProp__name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventSubstitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EventSubstitionData",
		sizeof(FEventSubstitionData),
		alignof(FEventSubstitionData),
		Z_Construct_UScriptStruct_FEventSubstitionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventSubstitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventSubstitionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventSubstitionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventSubstitionData"), sizeof(FEventSubstitionData), Get_Z_Construct_UScriptStruct_FEventSubstitionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventSubstitionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventSubstitionData_Hash() { return 3696241192U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
