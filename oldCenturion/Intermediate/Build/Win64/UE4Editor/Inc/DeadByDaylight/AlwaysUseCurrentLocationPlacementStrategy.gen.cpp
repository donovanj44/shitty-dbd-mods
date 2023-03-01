// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AlwaysUseCurrentLocationPlacementStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlwaysUseCurrentLocationPlacementStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacementUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAlwaysUseCurrentLocationPlacementStrategy::StaticRegisterNativesUAlwaysUseCurrentLocationPlacementStrategy()
	{
	}
	UClass* Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_NoRegister()
	{
		return UAlwaysUseCurrentLocationPlacementStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectPlacementUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AlwaysUseCurrentLocationPlacementStrategy.h" },
		{ "ModuleRelativePath", "Public/AlwaysUseCurrentLocationPlacementStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlwaysUseCurrentLocationPlacementStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_Statics::ClassParams = {
		&UAlwaysUseCurrentLocationPlacementStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAlwaysUseCurrentLocationPlacementStrategy, 3293077421);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAlwaysUseCurrentLocationPlacementStrategy>()
	{
		return UAlwaysUseCurrentLocationPlacementStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAlwaysUseCurrentLocationPlacementStrategy(Z_Construct_UClass_UAlwaysUseCurrentLocationPlacementStrategy, &UAlwaysUseCurrentLocationPlacementStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAlwaysUseCurrentLocationPlacementStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlwaysUseCurrentLocationPlacementStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
