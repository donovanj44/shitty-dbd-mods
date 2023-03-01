// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTTask_Interact.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Interact() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_Interact_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_Interact();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_Interact::StaticRegisterNativesUBTTask_Interact()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Interact_NoRegister()
	{
		return UBTTask_Interact::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Interact_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailStartInteractTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FailStartInteractTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropagateCooldownOnInteractable_MetaData[];
#endif
		static void NewProp_PropagateCooldownOnInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PropagateCooldownOnInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailFocusCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnFailFocusCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Input_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBInteractorObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBInteractorObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Interact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Interact_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_Interact.h" },
		{ "ModuleRelativePath", "Public/BTTask_Interact.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_FailStartInteractTimeLimit_MetaData[] = {
		{ "Category", "BTTask_Interact" },
		{ "ModuleRelativePath", "Public/BTTask_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_FailStartInteractTimeLimit = { "FailStartInteractTimeLimit", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_Interact, FailStartInteractTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_FailStartInteractTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_FailStartInteractTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_PropagateCooldownOnInteractable_MetaData[] = {
		{ "Category", "BTTask_Interact" },
		{ "ModuleRelativePath", "Public/BTTask_Interact.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_PropagateCooldownOnInteractable_SetBit(void* Obj)
	{
		((UBTTask_Interact*)Obj)->PropagateCooldownOnInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_PropagateCooldownOnInteractable = { "PropagateCooldownOnInteractable", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTTask_Interact), &Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_PropagateCooldownOnInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_PropagateCooldownOnInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_PropagateCooldownOnInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_OnFailFocusCooldownDuration_MetaData[] = {
		{ "Category", "BTTask_Interact" },
		{ "ModuleRelativePath", "Public/BTTask_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_OnFailFocusCooldownDuration = { "OnFailFocusCooldownDuration", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_Interact, OnFailFocusCooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_OnFailFocusCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_OnFailFocusCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "BTTask_Interact" },
		{ "ModuleRelativePath", "Public/BTTask_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_Interact, Input), Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes, METADATA_PARAMS(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_Input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_BBInteractorObj_MetaData[] = {
		{ "Category", "BTTask_Interact" },
		{ "ModuleRelativePath", "Public/BTTask_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_BBInteractorObj = { "BBInteractorObj", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_Interact, BBInteractorObj), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_BBInteractorObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_BBInteractorObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_FailStartInteractTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_PropagateCooldownOnInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_OnFailFocusCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_Input_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Interact_Statics::NewProp_BBInteractorObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Interact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Interact>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Interact_Statics::ClassParams = {
		&UBTTask_Interact::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_Interact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Interact_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Interact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Interact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Interact()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_Interact_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_Interact, 3519213351);
	template<> DBDBOTS_API UClass* StaticClass<UBTTask_Interact>()
	{
		return UBTTask_Interact::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Interact(Z_Construct_UClass_UBTTask_Interact, &UBTTask_Interact::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTTask_Interact"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Interact);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
