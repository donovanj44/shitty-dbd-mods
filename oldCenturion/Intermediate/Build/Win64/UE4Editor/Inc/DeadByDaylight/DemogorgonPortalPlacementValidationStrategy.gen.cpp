// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DemogorgonPortalPlacementValidationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonPortalPlacementValidationStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDefaultObjectPlacementValidationStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargedAttackStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister();
// End Cross Module References
	void UDemogorgonPortalPlacementValidationStrategy::StaticRegisterNativesUDemogorgonPortalPlacementValidationStrategy()
	{
	}
	UClass* Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_NoRegister()
	{
		return UDemogorgonPortalPlacementValidationStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxElevationDifferentialOnPortalEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxElevationDifferentialOnPortalEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalEdgeTestRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__portalEdgeTestRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfGroundTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__numberOfGroundTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceForWorldCollisionDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__distanceForWorldCollisionDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargedAttackState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chargedAttackState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalPlacerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalPlacerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultObjectPlacementValidationStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DemogorgonPortalPlacementValidationStrategy.h" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalPlacementValidationStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__maxElevationDifferentialOnPortalEdge_MetaData[] = {
		{ "Category", "DemogorgonPortalPlacementValidationStrategy" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalPlacementValidationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__maxElevationDifferentialOnPortalEdge = { "_maxElevationDifferentialOnPortalEdge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalPlacementValidationStrategy, _maxElevationDifferentialOnPortalEdge), METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__maxElevationDifferentialOnPortalEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__maxElevationDifferentialOnPortalEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalEdgeTestRadius_MetaData[] = {
		{ "Category", "DemogorgonPortalPlacementValidationStrategy" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalPlacementValidationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalEdgeTestRadius = { "_portalEdgeTestRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalPlacementValidationStrategy, _portalEdgeTestRadius), METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalEdgeTestRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalEdgeTestRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__numberOfGroundTest_MetaData[] = {
		{ "Category", "DemogorgonPortalPlacementValidationStrategy" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalPlacementValidationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__numberOfGroundTest = { "_numberOfGroundTest", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalPlacementValidationStrategy, _numberOfGroundTest), METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__numberOfGroundTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__numberOfGroundTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__distanceForWorldCollisionDetection_MetaData[] = {
		{ "Category", "DemogorgonPortalPlacementValidationStrategy" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalPlacementValidationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__distanceForWorldCollisionDetection = { "_distanceForWorldCollisionDetection", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalPlacementValidationStrategy, _distanceForWorldCollisionDetection), METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__distanceForWorldCollisionDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__distanceForWorldCollisionDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__chargedAttackState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalPlacementValidationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__chargedAttackState = { "_chargedAttackState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalPlacementValidationStrategy, _chargedAttackState), Z_Construct_UClass_UChargedAttackStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__chargedAttackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__chargedAttackState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalPlacerState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalPlacementValidationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalPlacerState = { "_portalPlacerState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalPlacementValidationStrategy, _portalPlacerState), Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalPlacerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalPlacerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__maxElevationDifferentialOnPortalEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalEdgeTestRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__numberOfGroundTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__distanceForWorldCollisionDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__chargedAttackState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::NewProp__portalPlacerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemogorgonPortalPlacementValidationStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::ClassParams = {
		&UDemogorgonPortalPlacementValidationStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemogorgonPortalPlacementValidationStrategy, 1553533941);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDemogorgonPortalPlacementValidationStrategy>()
	{
		return UDemogorgonPortalPlacementValidationStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemogorgonPortalPlacementValidationStrategy(Z_Construct_UClass_UDemogorgonPortalPlacementValidationStrategy, &UDemogorgonPortalPlacementValidationStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDemogorgonPortalPlacementValidationStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemogorgonPortalPlacementValidationStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
