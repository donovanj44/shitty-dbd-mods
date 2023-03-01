// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_Patrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Patrol() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_Patrol_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_Patrol();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation();
// End Cross Module References
	void UBTService_Patrol::StaticRegisterNativesUBTService_Patrol()
	{
	}
	UClass* Z_Construct_UClass_UBTService_Patrol_NoRegister()
	{
		return UBTService_Patrol::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_Patrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBGoToNextPatrolLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBGoToNextPatrolLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBPatrolLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBPatrolLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBPatrolPointOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBPatrolPointOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointsValidityCheckInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolPointsValidityCheckInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPatrolInvestigationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPatrolInvestigationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshFindLocationExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavMeshFindLocationExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBFilterKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBFilterKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_Patrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_Patrol.h" },
		{ "ModuleRelativePath", "Public/BTService_Patrol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBGoToNextPatrolLocation_MetaData[] = {
		{ "Category", "BTService_Patrol" },
		{ "ModuleRelativePath", "Public/BTService_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBGoToNextPatrolLocation = { "BBGoToNextPatrolLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol, BBGoToNextPatrolLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBGoToNextPatrolLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBGoToNextPatrolLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolLocation_MetaData[] = {
		{ "Category", "BTService_Patrol" },
		{ "ModuleRelativePath", "Public/BTService_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolLocation = { "BBPatrolLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol, BBPatrolLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolPointOwner_MetaData[] = {
		{ "Category", "BTService_Patrol" },
		{ "ModuleRelativePath", "Public/BTService_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolPointOwner = { "BBPatrolPointOwner", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol, BBPatrolPointOwner), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolPointOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolPointOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_PatrolPointsValidityCheckInterval_MetaData[] = {
		{ "Category", "BTService_Patrol" },
		{ "ModuleRelativePath", "Public/BTService_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_PatrolPointsValidityCheckInterval = { "PatrolPointsValidityCheckInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol, PatrolPointsValidityCheckInterval), METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_PatrolPointsValidityCheckInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_PatrolPointsValidityCheckInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_MinPatrolInvestigationDistance_MetaData[] = {
		{ "Category", "BTService_Patrol" },
		{ "ModuleRelativePath", "Public/BTService_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_MinPatrolInvestigationDistance = { "MinPatrolInvestigationDistance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol, MinPatrolInvestigationDistance), METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_MinPatrolInvestigationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_MinPatrolInvestigationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_NavMeshFindLocationExtents_MetaData[] = {
		{ "Category", "BTService_Patrol" },
		{ "ModuleRelativePath", "Public/BTService_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_NavMeshFindLocationExtents = { "NavMeshFindLocationExtents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol, NavMeshFindLocationExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_NavMeshFindLocationExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_NavMeshFindLocationExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_FilterOperation_MetaData[] = {
		{ "Category", "BTService_Patrol" },
		{ "ModuleRelativePath", "Public/BTService_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_FilterOperation = { "FilterOperation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol, FilterOperation), Z_Construct_UEnum_AIModule_EBasicKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_FilterOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_FilterOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBFilterKey_MetaData[] = {
		{ "Category", "BTService_Patrol" },
		{ "ModuleRelativePath", "Public/BTService_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBFilterKey = { "BBFilterKey", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol, BBFilterKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBFilterKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBFilterKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_Patrol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBGoToNextPatrolLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBPatrolPointOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_PatrolPointsValidityCheckInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_MinPatrolInvestigationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_NavMeshFindLocationExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_FilterOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Statics::NewProp_BBFilterKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_Patrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Patrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Patrol_Statics::ClassParams = {
		&UBTService_Patrol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_Patrol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_Patrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_Patrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_Patrol, 1030638118);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_Patrol>()
	{
		return UBTService_Patrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_Patrol(Z_Construct_UClass_UBTService_Patrol, &UBTService_Patrol::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_Patrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Patrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
