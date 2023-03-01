// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ObjectPlacementValidationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPlacementValidationStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacementValidationStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacementValidationStrategy();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UObjectPlacementValidationStrategy::StaticRegisterNativesUObjectPlacementValidationStrategy()
	{
	}
	UClass* Z_Construct_UClass_UObjectPlacementValidationStrategy_NoRegister()
	{
		return UObjectPlacementValidationStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPlacementValidationStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPlacementValidationStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacementValidationStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectPlacementValidationStrategy.h" },
		{ "ModuleRelativePath", "Public/ObjectPlacementValidationStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPlacementValidationStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPlacementValidationStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPlacementValidationStrategy_Statics::ClassParams = {
		&UObjectPlacementValidationStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPlacementValidationStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacementValidationStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPlacementValidationStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectPlacementValidationStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectPlacementValidationStrategy, 1580654570);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UObjectPlacementValidationStrategy>()
	{
		return UObjectPlacementValidationStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectPlacementValidationStrategy(Z_Construct_UClass_UObjectPlacementValidationStrategy, &UObjectPlacementValidationStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UObjectPlacementValidationStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPlacementValidationStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
