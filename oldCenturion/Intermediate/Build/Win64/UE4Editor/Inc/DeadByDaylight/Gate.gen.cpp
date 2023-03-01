// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Gate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGate_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void AGate::StaticRegisterNativesAGate()
	{
	}
	UClass* Z_Construct_UClass_AGate_NoRegister()
	{
		return AGate::StaticClass();
	}
	struct Z_Construct_UClass_AGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionInputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractionInputs;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionInputs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gate.h" },
		{ "ModuleRelativePath", "Public/Gate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGate_Statics::NewProp_InteractionOutput_MetaData[] = {
		{ "Category", "Gate" },
		{ "ModuleRelativePath", "Public/Gate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGate_Statics::NewProp_InteractionOutput = { "InteractionOutput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGate, InteractionOutput), METADATA_PARAMS(Z_Construct_UClass_AGate_Statics::NewProp_InteractionOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGate_Statics::NewProp_InteractionOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGate_Statics::NewProp_InteractionInputs_MetaData[] = {
		{ "Category", "Gate" },
		{ "ModuleRelativePath", "Public/Gate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGate_Statics::NewProp_InteractionInputs = { "InteractionInputs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGate, InteractionInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGate_Statics::NewProp_InteractionInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGate_Statics::NewProp_InteractionInputs_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGate_Statics::NewProp_InteractionInputs_Inner = { "InteractionInputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGate_Statics::NewProp_InteractionOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGate_Statics::NewProp_InteractionInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGate_Statics::NewProp_InteractionInputs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGate_Statics::ClassParams = {
		&AGate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGate_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AGate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGate, 1742849100);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AGate>()
	{
		return AGate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGate(Z_Construct_UClass_AGate, &AGate::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AGate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
