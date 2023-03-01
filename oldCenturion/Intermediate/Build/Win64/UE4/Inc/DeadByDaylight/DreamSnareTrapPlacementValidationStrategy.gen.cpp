// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DreamSnareTrapPlacementValidationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamSnareTrapPlacementValidationStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDefaultObjectPlacementValidationStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDreamSnareTrapPlacementValidationStrategy::StaticRegisterNativesUDreamSnareTrapPlacementValidationStrategy()
	{
	}
	UClass* Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_NoRegister()
	{
		return UDreamSnareTrapPlacementValidationStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxElevationDifferentialOnTrapEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxElevationDifferentialOnTrapEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrapRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrapRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfGroundTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumberOfGroundTest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultObjectPlacementValidationStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DreamSnareTrapPlacementValidationStrategy.h" },
		{ "ModuleRelativePath", "Public/DreamSnareTrapPlacementValidationStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_MaxElevationDifferentialOnTrapEdge_MetaData[] = {
		{ "Category", "DreamSnareTrapPlacementValidationStrategy" },
		{ "ModuleRelativePath", "Public/DreamSnareTrapPlacementValidationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_MaxElevationDifferentialOnTrapEdge = { "MaxElevationDifferentialOnTrapEdge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDreamSnareTrapPlacementValidationStrategy, MaxElevationDifferentialOnTrapEdge), METADATA_PARAMS(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_MaxElevationDifferentialOnTrapEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_MaxElevationDifferentialOnTrapEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_TrapRadius_MetaData[] = {
		{ "Category", "DreamSnareTrapPlacementValidationStrategy" },
		{ "ModuleRelativePath", "Public/DreamSnareTrapPlacementValidationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_TrapRadius = { "TrapRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDreamSnareTrapPlacementValidationStrategy, TrapRadius), METADATA_PARAMS(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_TrapRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_TrapRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_NumberOfGroundTest_MetaData[] = {
		{ "Category", "DreamSnareTrapPlacementValidationStrategy" },
		{ "ModuleRelativePath", "Public/DreamSnareTrapPlacementValidationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_NumberOfGroundTest = { "NumberOfGroundTest", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDreamSnareTrapPlacementValidationStrategy, NumberOfGroundTest), METADATA_PARAMS(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_NumberOfGroundTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_NumberOfGroundTest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_MaxElevationDifferentialOnTrapEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_TrapRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::NewProp_NumberOfGroundTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamSnareTrapPlacementValidationStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::ClassParams = {
		&UDreamSnareTrapPlacementValidationStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDreamSnareTrapPlacementValidationStrategy, 1804558950);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDreamSnareTrapPlacementValidationStrategy>()
	{
		return UDreamSnareTrapPlacementValidationStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDreamSnareTrapPlacementValidationStrategy(Z_Construct_UClass_UDreamSnareTrapPlacementValidationStrategy, &UDreamSnareTrapPlacementValidationStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDreamSnareTrapPlacementValidationStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamSnareTrapPlacementValidationStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
