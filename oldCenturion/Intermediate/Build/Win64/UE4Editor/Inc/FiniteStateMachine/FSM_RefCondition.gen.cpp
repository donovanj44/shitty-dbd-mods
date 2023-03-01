// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FiniteStateMachine/Public/FSM_RefCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSM_RefCondition() {}
// Cross Module References
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_RefCondition_NoRegister();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_RefCondition();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Condition();
	UPackage* Z_Construct_UPackage__Script_FiniteStateMachine();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Condition_NoRegister();
// End Cross Module References
	void UFSM_RefCondition::StaticRegisterNativesUFSM_RefCondition()
	{
	}
	UClass* Z_Construct_UClass_UFSM_RefCondition_NoRegister()
	{
		return UFSM_RefCondition::StaticClass();
	}
	struct Z_Construct_UClass_UFSM_RefCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__refcondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__refcondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSM_RefCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFSM_Condition,
		(UObject* (*)())Z_Construct_UPackage__Script_FiniteStateMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_RefCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FSM_RefCondition.h" },
		{ "ModuleRelativePath", "Public/FSM_RefCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_RefCondition_Statics::NewProp__refcondition_MetaData[] = {
		{ "Category", "FSM_RefCondition" },
		{ "ModuleRelativePath", "Public/FSM_RefCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFSM_RefCondition_Statics::NewProp__refcondition = { "_refcondition", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_RefCondition, _refcondition), Z_Construct_UClass_UFSM_Condition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFSM_RefCondition_Statics::NewProp__refcondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_RefCondition_Statics::NewProp__refcondition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSM_RefCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_RefCondition_Statics::NewProp__refcondition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSM_RefCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSM_RefCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFSM_RefCondition_Statics::ClassParams = {
		&UFSM_RefCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSM_RefCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_RefCondition_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFSM_RefCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_RefCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSM_RefCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFSM_RefCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFSM_RefCondition, 2883060454);
	template<> FINITESTATEMACHINE_API UClass* StaticClass<UFSM_RefCondition>()
	{
		return UFSM_RefCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFSM_RefCondition(Z_Construct_UClass_UFSM_RefCondition, &UFSM_RefCondition::StaticClass, TEXT("/Script/FiniteStateMachine"), TEXT("UFSM_RefCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSM_RefCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
