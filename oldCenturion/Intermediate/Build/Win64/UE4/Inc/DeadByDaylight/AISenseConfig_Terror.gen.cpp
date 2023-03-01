// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AISenseConfig_Terror.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Terror() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISenseConfig_Terror_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISenseConfig_Terror();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAITerrorLevel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISense_Terror_NoRegister();
// End Cross Module References
	void UAISenseConfig_Terror::StaticRegisterNativesUAISenseConfig_Terror()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Terror_NoRegister()
	{
		return UAISenseConfig_Terror::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Terror_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrorRanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TerrorRanges;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TerrorRanges_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TerrorRanges_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TerrorRanges_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBreathingSoundRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBreathingSoundRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Implementation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Terror_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Terror_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISenseConfig_Terror.h" },
		{ "ModuleRelativePath", "Public/AISenseConfig_Terror.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "AISenseConfig_Terror" },
		{ "ModuleRelativePath", "Public/AISenseConfig_Terror.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Terror, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_DetectionByAffiliation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_DetectionByAffiliation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges_MetaData[] = {
		{ "Category", "AISenseConfig_Terror" },
		{ "ModuleRelativePath", "Public/AISenseConfig_Terror.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges = { "TerrorRanges", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Terror, TerrorRanges), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges_Key_KeyProp = { "TerrorRanges_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EAITerrorLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges_ValueProp = { "TerrorRanges", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_MaxBreathingSoundRange_MetaData[] = {
		{ "Category", "AISenseConfig_Terror" },
		{ "ModuleRelativePath", "Public/AISenseConfig_Terror.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_MaxBreathingSoundRange = { "MaxBreathingSoundRange", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Terror, MaxBreathingSoundRange), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_MaxBreathingSoundRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_MaxBreathingSoundRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "AISenseConfig_Terror" },
		{ "ModuleRelativePath", "Public/AISenseConfig_Terror.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Terror, Implementation), Z_Construct_UClass_UAISense_Terror_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_Implementation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_Implementation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Terror_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_DetectionByAffiliation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_TerrorRanges_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_MaxBreathingSoundRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Terror_Statics::NewProp_Implementation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Terror_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Terror>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Terror_Statics::ClassParams = {
		&UAISenseConfig_Terror::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Terror_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Terror_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Terror_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Terror_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Terror()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseConfig_Terror_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_Terror, 486804428);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAISenseConfig_Terror>()
	{
		return UAISenseConfig_Terror::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Terror(Z_Construct_UClass_UAISenseConfig_Terror, &UAISenseConfig_Terror::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAISenseConfig_Terror"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Terror);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
