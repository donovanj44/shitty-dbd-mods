// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/CollectSerumInCrateInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectSerumInCrateInteraction() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UCollectSerumInCrateInteraction_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UCollectSerumInCrateInteraction();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UCollectItemInteraction();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UClass* Z_Construct_UClass_ASupplyCrateInteractable_NoRegister();
// End Cross Module References
	void UCollectSerumInCrateInteraction::StaticRegisterNativesUCollectSerumInCrateInteraction()
	{
	}
	UClass* Z_Construct_UClass_UCollectSerumInCrateInteraction_NoRegister()
	{
		return UCollectSerumInCrateInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningSupplyCrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningSupplyCrate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCollectItemInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CollectSerumInCrateInteraction.h" },
		{ "ModuleRelativePath", "Public/CollectSerumInCrateInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::NewProp__owningSupplyCrate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CollectSerumInCrateInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::NewProp__owningSupplyCrate = { "_owningSupplyCrate", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollectSerumInCrateInteraction, _owningSupplyCrate), Z_Construct_UClass_ASupplyCrateInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::NewProp__owningSupplyCrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::NewProp__owningSupplyCrate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::NewProp__owningSupplyCrate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectSerumInCrateInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::ClassParams = {
		&UCollectSerumInCrateInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectSerumInCrateInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollectSerumInCrateInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollectSerumInCrateInteraction, 516810322);
	template<> THEK24_API UClass* StaticClass<UCollectSerumInCrateInteraction>()
	{
		return UCollectSerumInCrateInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollectSerumInCrateInteraction(Z_Construct_UClass_UCollectSerumInCrateInteraction, &UCollectSerumInCrateInteraction::StaticClass, TEXT("/Script/TheK24"), TEXT("UCollectSerumInCrateInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectSerumInCrateInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
