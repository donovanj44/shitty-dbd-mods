// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractableTransformOptimizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableTransformOptimizer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractableTransformOptimizer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractableTransformOptimizer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UInteractableTransformOptimizer::StaticRegisterNativesUInteractableTransformOptimizer()
	{
	}
	UClass* Z_Construct_UClass_UInteractableTransformOptimizer_NoRegister()
	{
		return UInteractableTransformOptimizer::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableTransformOptimizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__optimizeTransformUpdate_MetaData[];
#endif
		static void NewProp__optimizeTransformUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__optimizeTransformUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableTransformOptimizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableTransformOptimizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableTransformOptimizer.h" },
		{ "ModuleRelativePath", "Public/InteractableTransformOptimizer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableTransformOptimizer_Statics::NewProp__optimizeTransformUpdate_MetaData[] = {
		{ "Category", "InteractableTransformOptimizer" },
		{ "ModuleRelativePath", "Public/InteractableTransformOptimizer.h" },
	};
#endif
	void Z_Construct_UClass_UInteractableTransformOptimizer_Statics::NewProp__optimizeTransformUpdate_SetBit(void* Obj)
	{
		((UInteractableTransformOptimizer*)Obj)->_optimizeTransformUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractableTransformOptimizer_Statics::NewProp__optimizeTransformUpdate = { "_optimizeTransformUpdate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractableTransformOptimizer), &Z_Construct_UClass_UInteractableTransformOptimizer_Statics::NewProp__optimizeTransformUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractableTransformOptimizer_Statics::NewProp__optimizeTransformUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableTransformOptimizer_Statics::NewProp__optimizeTransformUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractableTransformOptimizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableTransformOptimizer_Statics::NewProp__optimizeTransformUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableTransformOptimizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableTransformOptimizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractableTransformOptimizer_Statics::ClassParams = {
		&UInteractableTransformOptimizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractableTransformOptimizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableTransformOptimizer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableTransformOptimizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableTransformOptimizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableTransformOptimizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractableTransformOptimizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractableTransformOptimizer, 1485240276);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInteractableTransformOptimizer>()
	{
		return UInteractableTransformOptimizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractableTransformOptimizer(Z_Construct_UClass_UInteractableTransformOptimizer, &UInteractableTransformOptimizer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInteractableTransformOptimizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableTransformOptimizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
