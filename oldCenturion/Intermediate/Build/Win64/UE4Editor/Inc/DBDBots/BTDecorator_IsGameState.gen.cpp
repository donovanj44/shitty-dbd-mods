// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_IsGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsGameState() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsGameState_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsGameState();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation();
// End Cross Module References
	void UBTDecorator_IsGameState::StaticRegisterNativesUBTDecorator_IsGameState()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsGameState_NoRegister()
	{
		return UBTDecorator_IsGameState::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbSurvivorsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbSurvivorsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorsLeftOp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurvivorsLeftOp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbRemainingObjectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbRemainingObjectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingObjectiveOp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemainingObjectiveOp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsGameState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_IsGameState.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsGameState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbSurvivorsLeft_MetaData[] = {
		{ "Category", "BTDecorator_IsGameState" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbSurvivorsLeft = { "NbSurvivorsLeft", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsGameState, NbSurvivorsLeft), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbSurvivorsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbSurvivorsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_SurvivorsLeftOp_MetaData[] = {
		{ "Category", "BTDecorator_IsGameState" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_SurvivorsLeftOp = { "SurvivorsLeftOp", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsGameState, SurvivorsLeftOp), Z_Construct_UEnum_AIModule_EArithmeticKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_SurvivorsLeftOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_SurvivorsLeftOp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbRemainingObjectives_MetaData[] = {
		{ "Category", "BTDecorator_IsGameState" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbRemainingObjectives = { "NbRemainingObjectives", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsGameState, NbRemainingObjectives), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbRemainingObjectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbRemainingObjectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_RemainingObjectiveOp_MetaData[] = {
		{ "Category", "BTDecorator_IsGameState" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_RemainingObjectiveOp = { "RemainingObjectiveOp", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsGameState, RemainingObjectiveOp), Z_Construct_UEnum_AIModule_EArithmeticKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_RemainingObjectiveOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_RemainingObjectiveOp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbSurvivorsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_SurvivorsLeftOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_NbRemainingObjectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsGameState_Statics::NewProp_RemainingObjectiveOp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsGameState_Statics::ClassParams = {
		&UBTDecorator_IsGameState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsGameState, 1835058103);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_IsGameState>()
	{
		return UBTDecorator_IsGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsGameState(Z_Construct_UClass_UBTDecorator_IsGameState, &UBTDecorator_IsGameState::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_IsGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
