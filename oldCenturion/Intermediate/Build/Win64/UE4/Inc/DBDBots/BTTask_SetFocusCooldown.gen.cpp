// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTTask_SetFocusCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetFocusCooldown() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_SetFocusCooldown_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_SetFocusCooldown();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_SetFocusCooldown::StaticRegisterNativesUBTTask_SetFocusCooldown()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_SetFocusCooldown_NoRegister()
	{
		return UBTTask_SetFocusCooldown::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfiniteDuration_MetaData[];
#endif
		static void NewProp_InfiniteDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InfiniteDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ContextName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBOnObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBOnObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_SetFocusCooldown.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetFocusCooldown.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "BTTask_SetFocusCooldown" },
		{ "ModuleRelativePath", "Public/BTTask_SetFocusCooldown.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetFocusCooldown, Duration), METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_InfiniteDuration_MetaData[] = {
		{ "Category", "BTTask_SetFocusCooldown" },
		{ "ModuleRelativePath", "Public/BTTask_SetFocusCooldown.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_InfiniteDuration_SetBit(void* Obj)
	{
		((UBTTask_SetFocusCooldown*)Obj)->InfiniteDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_InfiniteDuration = { "InfiniteDuration", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTTask_SetFocusCooldown), &Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_InfiniteDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_InfiniteDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_InfiniteDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_ContextName_MetaData[] = {
		{ "Category", "BTTask_SetFocusCooldown" },
		{ "ModuleRelativePath", "Public/BTTask_SetFocusCooldown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_ContextName = { "ContextName", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetFocusCooldown, ContextName), METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_ContextName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_ContextName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_BBOnObject_MetaData[] = {
		{ "Category", "BTTask_SetFocusCooldown" },
		{ "ModuleRelativePath", "Public/BTTask_SetFocusCooldown.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_BBOnObject = { "BBOnObject", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetFocusCooldown, BBOnObject), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_BBOnObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_BBOnObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_InfiniteDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_ContextName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::NewProp_BBOnObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetFocusCooldown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::ClassParams = {
		&UBTTask_SetFocusCooldown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SetFocusCooldown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_SetFocusCooldown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_SetFocusCooldown, 362799452);
	template<> DBDBOTS_API UClass* StaticClass<UBTTask_SetFocusCooldown>()
	{
		return UBTTask_SetFocusCooldown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_SetFocusCooldown(Z_Construct_UClass_UBTTask_SetFocusCooldown, &UBTTask_SetFocusCooldown::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTTask_SetFocusCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetFocusCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif