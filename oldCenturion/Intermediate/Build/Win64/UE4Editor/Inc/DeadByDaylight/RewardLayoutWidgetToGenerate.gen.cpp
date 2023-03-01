// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RewardLayoutWidgetToGenerate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardLayoutWidgetToGenerate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRewardSlotTutorialPopupRewardWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FRewardLayoutWidgetToGenerate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RewardLayoutWidgetToGenerate"), sizeof(FRewardLayoutWidgetToGenerate), Get_Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRewardLayoutWidgetToGenerate>()
{
	return FRewardLayoutWidgetToGenerate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRewardLayoutWidgetToGenerate(FRewardLayoutWidgetToGenerate::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RewardLayoutWidgetToGenerate"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRewardLayoutWidgetToGenerate
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRewardLayoutWidgetToGenerate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RewardLayoutWidgetToGenerate")),new UScriptStruct::TCppStructOps<FRewardLayoutWidgetToGenerate>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRewardLayoutWidgetToGenerate;
	struct Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SpacerWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyRewardWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CurrencyRewardWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRewardWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CharacterRewardWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RewardLayoutWidgetToGenerate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardLayoutWidgetToGenerate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_SpacerWidget_MetaData[] = {
		{ "Category", "RewardLayoutWidgetToGenerate" },
		{ "ModuleRelativePath", "Public/RewardLayoutWidgetToGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_SpacerWidget = { "SpacerWidget", nullptr, (EPropertyFlags)0x0014000002010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardLayoutWidgetToGenerate, SpacerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_SpacerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_SpacerWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CurrencyRewardWidget_MetaData[] = {
		{ "Category", "RewardLayoutWidgetToGenerate" },
		{ "ModuleRelativePath", "Public/RewardLayoutWidgetToGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CurrencyRewardWidget = { "CurrencyRewardWidget", nullptr, (EPropertyFlags)0x0014000002010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardLayoutWidgetToGenerate, CurrencyRewardWidget), Z_Construct_UClass_UUMGRewardSlotTutorialPopupRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CurrencyRewardWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CurrencyRewardWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CharacterRewardWidget_MetaData[] = {
		{ "Category", "RewardLayoutWidgetToGenerate" },
		{ "ModuleRelativePath", "Public/RewardLayoutWidgetToGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CharacterRewardWidget = { "CharacterRewardWidget", nullptr, (EPropertyFlags)0x0014000002010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardLayoutWidgetToGenerate, CharacterRewardWidget), Z_Construct_UClass_UUMGRewardSlotTutorialPopupRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CharacterRewardWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CharacterRewardWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_SpacerWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CurrencyRewardWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::NewProp_CharacterRewardWidget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"RewardLayoutWidgetToGenerate",
		sizeof(FRewardLayoutWidgetToGenerate),
		alignof(FRewardLayoutWidgetToGenerate),
		Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RewardLayoutWidgetToGenerate"), sizeof(FRewardLayoutWidgetToGenerate), Get_Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRewardLayoutWidgetToGenerate_Hash() { return 1618784485U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
