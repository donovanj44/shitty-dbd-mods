// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FiniteStateMachine/Public/FSM_HasStateRanForXSecondsCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSM_HasStateRanForXSecondsCondition() {}
// Cross Module References
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_NoRegister();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Condition();
	UPackage* Z_Construct_UPackage__Script_FiniteStateMachine();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UFSM_HasStateRanForXSecondsCondition::StaticRegisterNativesUFSM_HasStateRanForXSecondsCondition()
	{
	}
	UClass* Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_NoRegister()
	{
		return UFSM_HasStateRanForXSecondsCondition::StaticClass();
	}
	struct Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minTimeInSecondsToSatisfyCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minTimeInSecondsToSatisfyCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFSM_Condition,
		(UObject* (*)())Z_Construct_UPackage__Script_FiniteStateMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FSM_HasStateRanForXSecondsCondition.h" },
		{ "ModuleRelativePath", "Public/FSM_HasStateRanForXSecondsCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::NewProp__minTimeInSecondsToSatisfyCondition_MetaData[] = {
		{ "Category", "FSM_HasStateRanForXSecondsCondition" },
		{ "ModuleRelativePath", "Public/FSM_HasStateRanForXSecondsCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::NewProp__minTimeInSecondsToSatisfyCondition = { "_minTimeInSecondsToSatisfyCondition", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_HasStateRanForXSecondsCondition, _minTimeInSecondsToSatisfyCondition), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::NewProp__minTimeInSecondsToSatisfyCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::NewProp__minTimeInSecondsToSatisfyCondition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::NewProp__minTimeInSecondsToSatisfyCondition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSM_HasStateRanForXSecondsCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::ClassParams = {
		&UFSM_HasStateRanForXSecondsCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFSM_HasStateRanForXSecondsCondition, 3069990790);
	template<> FINITESTATEMACHINE_API UClass* StaticClass<UFSM_HasStateRanForXSecondsCondition>()
	{
		return UFSM_HasStateRanForXSecondsCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFSM_HasStateRanForXSecondsCondition(Z_Construct_UClass_UFSM_HasStateRanForXSecondsCondition, &UFSM_HasStateRanForXSecondsCondition::StaticClass, TEXT("/Script/FiniteStateMachine"), TEXT("UFSM_HasStateRanForXSecondsCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSM_HasStateRanForXSecondsCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
