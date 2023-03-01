// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_Patrol_PointOfInterest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Patrol_PointOfInterest() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_Patrol_PointOfInterest_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_Patrol_PointOfInterest();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_Patrol();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_Patrol_PointOfInterest::StaticRegisterNativesUBTService_Patrol_PointOfInterest()
	{
	}
	UClass* Z_Construct_UClass_UBTService_Patrol_PointOfInterest_NoRegister()
	{
		return UBTService_Patrol_PointOfInterest::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAroundPatrolPointAboveStimulusStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveAroundPatrolPointAboveStimulusStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBMoveAroundPatrolLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBMoveAroundPatrolLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEnterPatrolRefreshPointsDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnEnterPatrolRefreshPointsDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_Patrol,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_Patrol_PointOfInterest.h" },
		{ "ModuleRelativePath", "Public/BTService_Patrol_PointOfInterest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_MoveAroundPatrolPointAboveStimulusStrength_MetaData[] = {
		{ "Category", "BTService_Patrol_PointOfInterest" },
		{ "ModuleRelativePath", "Public/BTService_Patrol_PointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_MoveAroundPatrolPointAboveStimulusStrength = { "MoveAroundPatrolPointAboveStimulusStrength", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol_PointOfInterest, MoveAroundPatrolPointAboveStimulusStrength), METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_MoveAroundPatrolPointAboveStimulusStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_MoveAroundPatrolPointAboveStimulusStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_BBMoveAroundPatrolLocation_MetaData[] = {
		{ "Category", "BTService_Patrol_PointOfInterest" },
		{ "ModuleRelativePath", "Public/BTService_Patrol_PointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_BBMoveAroundPatrolLocation = { "BBMoveAroundPatrolLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol_PointOfInterest, BBMoveAroundPatrolLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_BBMoveAroundPatrolLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_BBMoveAroundPatrolLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_OnEnterPatrolRefreshPointsDelay_MetaData[] = {
		{ "Category", "BTService_Patrol_PointOfInterest" },
		{ "ModuleRelativePath", "Public/BTService_Patrol_PointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_OnEnterPatrolRefreshPointsDelay = { "OnEnterPatrolRefreshPointsDelay", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol_PointOfInterest, OnEnterPatrolRefreshPointsDelay), METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_OnEnterPatrolRefreshPointsDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_OnEnterPatrolRefreshPointsDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_MoveAroundPatrolPointAboveStimulusStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_BBMoveAroundPatrolLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::NewProp_OnEnterPatrolRefreshPointsDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Patrol_PointOfInterest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::ClassParams = {
		&UBTService_Patrol_PointOfInterest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_Patrol_PointOfInterest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_Patrol_PointOfInterest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_Patrol_PointOfInterest, 3726615136);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_Patrol_PointOfInterest>()
	{
		return UBTService_Patrol_PointOfInterest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_Patrol_PointOfInterest(Z_Construct_UClass_UBTService_Patrol_PointOfInterest, &UBTService_Patrol_PointOfInterest::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_Patrol_PointOfInterest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Patrol_PointOfInterest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
