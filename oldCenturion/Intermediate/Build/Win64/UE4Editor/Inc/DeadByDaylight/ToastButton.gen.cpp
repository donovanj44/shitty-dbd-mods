// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ToastButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToastButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FToastButton();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FToastButton::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FToastButton_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToastButton, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ToastButton"), sizeof(FToastButton), Get_Z_Construct_UScriptStruct_FToastButton_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FToastButton>()
{
	return FToastButton::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToastButton(FToastButton::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ToastButton"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFToastButton
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFToastButton()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ToastButton")),new UScriptStruct::TCppStructOps<FToastButton>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFToastButton;
	struct Z_Construct_UScriptStruct_FToastButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRegression_MetaData[];
#endif
		static void NewProp_IsRegression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRegression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ButtonText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToastButton_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToastButton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToastButton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToastButton>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_IsRegression_MetaData[] = {
		{ "Category", "ToastButton" },
		{ "ModuleRelativePath", "Public/ToastButton.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_IsRegression_SetBit(void* Obj)
	{
		((FToastButton*)Obj)->IsRegression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_IsRegression = { "IsRegression", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FToastButton), &Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_IsRegression_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_IsRegression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_IsRegression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_ButtonText_MetaData[] = {
		{ "Category", "ToastButton" },
		{ "ModuleRelativePath", "Public/ToastButton.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToastButton, ButtonText), METADATA_PARAMS(Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_ButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_ButtonText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToastButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_IsRegression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToastButton_Statics::NewProp_ButtonText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToastButton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ToastButton",
		sizeof(FToastButton),
		alignof(FToastButton),
		Z_Construct_UScriptStruct_FToastButton_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToastButton_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToastButton_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToastButton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToastButton()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToastButton_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToastButton"), sizeof(FToastButton), Get_Z_Construct_UScriptStruct_FToastButton_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToastButton_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToastButton_Hash() { return 2469660837U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
