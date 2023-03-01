// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathStrategy_FleeLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathStrategy_FleeLoop() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_FleeLoop_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_FleeLoop();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_Flee();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIFleeLoopStrategy();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAIRoll();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder_EvadeLoop_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer();
// End Cross Module References
	void UPathStrategy_FleeLoop::StaticRegisterNativesUPathStrategy_FleeLoop()
	{
	}
	UClass* Z_Construct_UClass_UPathStrategy_FleeLoop_NoRegister()
	{
		return UPathStrategy_FleeLoop::StaticClass();
	}
	struct Z_Construct_UClass_UPathStrategy_FleeLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddDistanceToRequiredBranchEvadeGap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddDistanceToRequiredBranchEvadeGap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectBranchUnderNavLinkDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RejectBranchUnderNavLinkDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectBranchPointNearerHostileSourceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RejectBranchPointNearerHostileSourceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectLoopBranchUnderEndPointsDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RejectLoopBranchUnderEndPointsDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchRolls_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BranchRolls;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BranchRolls_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BranchRolls_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchRolls_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBranchUnderEndPathDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CanBranchUnderEndPathDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeLoopStrategyPathBuilders_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FleeLoopStrategyPathBuilders;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FleeLoopStrategyPathBuilders_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FleeLoopStrategyPathBuilders_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FleeLoopStrategyPathBuilders_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStateFleeLoopStrategyTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GameStateFleeLoopStrategyTable;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameStateFleeLoopStrategyTable_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameStateFleeLoopStrategyTable_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameStateFleeLoopStrategyTable_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathStrategy_Flee,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathStrategy_FleeLoop.h" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLoop.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_AddDistanceToRequiredBranchEvadeGap_MetaData[] = {
		{ "Category", "PathStrategy_FleeLoop" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_AddDistanceToRequiredBranchEvadeGap = { "AddDistanceToRequiredBranchEvadeGap", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy_FleeLoop, AddDistanceToRequiredBranchEvadeGap), METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_AddDistanceToRequiredBranchEvadeGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_AddDistanceToRequiredBranchEvadeGap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchUnderNavLinkDistance_MetaData[] = {
		{ "Category", "PathStrategy_FleeLoop" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchUnderNavLinkDistance = { "RejectBranchUnderNavLinkDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy_FleeLoop, RejectBranchUnderNavLinkDistance), METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchUnderNavLinkDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchUnderNavLinkDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchPointNearerHostileSourceDistance_MetaData[] = {
		{ "Category", "PathStrategy_FleeLoop" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchPointNearerHostileSourceDistance = { "RejectBranchPointNearerHostileSourceDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy_FleeLoop, RejectBranchPointNearerHostileSourceDistance), METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchPointNearerHostileSourceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchPointNearerHostileSourceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectLoopBranchUnderEndPointsDistance_MetaData[] = {
		{ "Category", "PathStrategy_FleeLoop" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectLoopBranchUnderEndPointsDistance = { "RejectLoopBranchUnderEndPointsDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy_FleeLoop, RejectLoopBranchUnderEndPointsDistance), METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectLoopBranchUnderEndPointsDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectLoopBranchUnderEndPointsDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls_MetaData[] = {
		{ "Category", "PathStrategy_FleeLoop" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls = { "BranchRolls", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy_FleeLoop, BranchRolls), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls_Key_KeyProp = { "BranchRolls_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDBots_EAIFleeLoopStrategy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls_ValueProp = { "BranchRolls", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAIRoll, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_CanBranchUnderEndPathDistance_MetaData[] = {
		{ "Category", "PathStrategy_FleeLoop" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_CanBranchUnderEndPathDistance = { "CanBranchUnderEndPathDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy_FleeLoop, CanBranchUnderEndPathDistance), METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_CanBranchUnderEndPathDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_CanBranchUnderEndPathDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders_MetaData[] = {
		{ "Category", "PathStrategy_FleeLoop" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders = { "FleeLoopStrategyPathBuilders", nullptr, (EPropertyFlags)0x0010000000010009, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy_FleeLoop, FleeLoopStrategyPathBuilders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders_Key_KeyProp = { "FleeLoopStrategyPathBuilders_Key", nullptr, (EPropertyFlags)0x0000000000000009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDBots_EAIFleeLoopStrategy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders_ValueProp = { "FleeLoopStrategyPathBuilders", nullptr, (EPropertyFlags)0x0000000000000009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPathBuilder_EvadeLoop_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable_MetaData[] = {
		{ "Category", "PathStrategy_FleeLoop" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable = { "GameStateFleeLoopStrategyTable", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy_FleeLoop, GameStateFleeLoopStrategyTable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable_Key_KeyProp = { "GameStateFleeLoopStrategyTable_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable_ValueProp = { "GameStateFleeLoopStrategyTable", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameStateEvadeLoopStrategyMapContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_AddDistanceToRequiredBranchEvadeGap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchUnderNavLinkDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectBranchPointNearerHostileSourceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_RejectLoopBranchUnderEndPointsDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_BranchRolls_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_CanBranchUnderEndPathDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_FleeLoopStrategyPathBuilders_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::NewProp_GameStateFleeLoopStrategyTable_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathStrategy_FleeLoop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::ClassParams = {
		&UPathStrategy_FleeLoop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathStrategy_FleeLoop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathStrategy_FleeLoop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathStrategy_FleeLoop, 1278396618);
	template<> DBDBOTS_API UClass* StaticClass<UPathStrategy_FleeLoop>()
	{
		return UPathStrategy_FleeLoop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathStrategy_FleeLoop(Z_Construct_UClass_UPathStrategy_FleeLoop, &UPathStrategy_FleeLoop::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathStrategy_FleeLoop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathStrategy_FleeLoop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
