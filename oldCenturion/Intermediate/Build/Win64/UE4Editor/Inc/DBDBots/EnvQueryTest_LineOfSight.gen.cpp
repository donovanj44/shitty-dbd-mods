// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EnvQueryTest_LineOfSight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_LineOfSight() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryTest_LineOfSight_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryTest_LineOfSight();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	void UEnvQueryTest_LineOfSight::StaticRegisterNativesUEnvQueryTest_LineOfSight()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_LineOfSight_NoRegister()
	{
		return UEnvQueryTest_LineOfSight::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invert_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Invert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuerierContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_QuerierContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryTest_LineOfSight.h" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_LineOfSight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_Invert_MetaData[] = {
		{ "Category", "EnvQueryTest_LineOfSight" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_LineOfSight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_Invert = { "Invert", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_LineOfSight, Invert), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_Invert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_Invert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ItemHeightOffset_MetaData[] = {
		{ "Category", "EnvQueryTest_LineOfSight" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_LineOfSight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ItemHeightOffset = { "ItemHeightOffset", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_LineOfSight, ItemHeightOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ItemHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ItemHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ToContext_MetaData[] = {
		{ "Category", "EnvQueryTest_LineOfSight" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_LineOfSight.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ToContext = { "ToContext", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_LineOfSight, ToContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ToContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ToContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_QuerierContext_MetaData[] = {
		{ "Category", "EnvQueryTest_LineOfSight" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_LineOfSight.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_QuerierContext = { "QuerierContext", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_LineOfSight, QuerierContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_QuerierContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_QuerierContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_Invert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ItemHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_ToContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::NewProp_QuerierContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_LineOfSight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::ClassParams = {
		&UEnvQueryTest_LineOfSight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_LineOfSight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryTest_LineOfSight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_LineOfSight, 3282568901);
	template<> DBDBOTS_API UClass* StaticClass<UEnvQueryTest_LineOfSight>()
	{
		return UEnvQueryTest_LineOfSight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_LineOfSight(Z_Construct_UClass_UEnvQueryTest_LineOfSight, &UEnvQueryTest_LineOfSight::StaticClass, TEXT("/Script/DBDBots"), TEXT("UEnvQueryTest_LineOfSight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_LineOfSight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
