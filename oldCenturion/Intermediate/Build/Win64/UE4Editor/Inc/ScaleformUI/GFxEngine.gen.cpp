// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/GFxEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFxEngine() {}
// Cross Module References
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxEngine_NoRegister();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxEngine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FGCReference();
// End Cross Module References
	void UGFxEngine::StaticRegisterNativesUGFxEngine()
	{
	}
	UClass* Z_Construct_UClass_UGFxEngine_NoRegister()
	{
		return UGFxEngine::StaticClass();
	}
	struct Z_Construct_UClass_UGFxEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GCReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GCReferences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GCReferences_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFxEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFxEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GFxEngine.h" },
		{ "ModuleRelativePath", "Public/GFxEngine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFxEngine_Statics::NewProp_RefCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/GFxEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGFxEngine_Statics::NewProp_RefCount = { "RefCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGFxEngine, RefCount), METADATA_PARAMS(Z_Construct_UClass_UGFxEngine_Statics::NewProp_RefCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFxEngine_Statics::NewProp_RefCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFxEngine_Statics::NewProp_GCReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/GFxEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFxEngine_Statics::NewProp_GCReferences = { "GCReferences", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGFxEngine, GCReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGFxEngine_Statics::NewProp_GCReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFxEngine_Statics::NewProp_GCReferences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFxEngine_Statics::NewProp_GCReferences_Inner = { "GCReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGCReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFxEngine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFxEngine_Statics::NewProp_RefCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFxEngine_Statics::NewProp_GCReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFxEngine_Statics::NewProp_GCReferences_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFxEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFxEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGFxEngine_Statics::ClassParams = {
		&UGFxEngine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFxEngine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFxEngine_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGFxEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGFxEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGFxEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGFxEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGFxEngine, 1531468370);
	template<> SCALEFORMUI_API UClass* StaticClass<UGFxEngine>()
	{
		return UGFxEngine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGFxEngine(Z_Construct_UClass_UGFxEngine, &UGFxEngine::StaticClass, TEXT("/Script/ScaleformUI"), TEXT("UGFxEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFxEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
