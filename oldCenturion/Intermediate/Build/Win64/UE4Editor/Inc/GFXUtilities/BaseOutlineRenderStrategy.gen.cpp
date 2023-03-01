// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/BaseOutlineRenderStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseOutlineRenderStrategy() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBaseOutlineRenderStrategy_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBaseOutlineRenderStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBatchMeshCommands_NoRegister();
// End Cross Module References
	void UBaseOutlineRenderStrategy::StaticRegisterNativesUBaseOutlineRenderStrategy()
	{
	}
	UClass* Z_Construct_UClass_UBaseOutlineRenderStrategy_NoRegister()
	{
		return UBaseOutlineRenderStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__batchCommands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__batchCommands;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__batchCommands_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseOutlineRenderStrategy.h" },
		{ "ModuleRelativePath", "Public/BaseOutlineRenderStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::NewProp__batchCommands_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseOutlineRenderStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::NewProp__batchCommands = { "_batchCommands", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseOutlineRenderStrategy, _batchCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::NewProp__batchCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::NewProp__batchCommands_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::NewProp__batchCommands_Inner = { "_batchCommands", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBatchMeshCommands_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::NewProp__batchCommands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::NewProp__batchCommands_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseOutlineRenderStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::ClassParams = {
		&UBaseOutlineRenderStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseOutlineRenderStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseOutlineRenderStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseOutlineRenderStrategy, 1610430937);
	template<> GFXUTILITIES_API UClass* StaticClass<UBaseOutlineRenderStrategy>()
	{
		return UBaseOutlineRenderStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseOutlineRenderStrategy(Z_Construct_UClass_UBaseOutlineRenderStrategy, &UBaseOutlineRenderStrategy::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UBaseOutlineRenderStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseOutlineRenderStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
