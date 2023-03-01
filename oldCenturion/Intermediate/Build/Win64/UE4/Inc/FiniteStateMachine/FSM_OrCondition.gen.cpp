// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FiniteStateMachine/Public/FSM_OrCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSM_OrCondition() {}
// Cross Module References
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_OrCondition_NoRegister();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_OrCondition();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Condition();
	UPackage* Z_Construct_UPackage__Script_FiniteStateMachine();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Condition_NoRegister();
// End Cross Module References
	void UFSM_OrCondition::StaticRegisterNativesUFSM_OrCondition()
	{
	}
	UClass* Z_Construct_UClass_UFSM_OrCondition_NoRegister()
	{
		return UFSM_OrCondition::StaticClass();
	}
	struct Z_Construct_UClass_UFSM_OrCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__conditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__conditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSM_OrCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFSM_Condition,
		(UObject* (*)())Z_Construct_UPackage__Script_FiniteStateMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_OrCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FSM_OrCondition.h" },
		{ "ModuleRelativePath", "Public/FSM_OrCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_OrCondition_Statics::NewProp__conditions_MetaData[] = {
		{ "Category", "FSM_OrCondition" },
		{ "ModuleRelativePath", "Public/FSM_OrCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFSM_OrCondition_Statics::NewProp__conditions = { "_conditions", nullptr, (EPropertyFlags)0x0020080000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_OrCondition, _conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFSM_OrCondition_Statics::NewProp__conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_OrCondition_Statics::NewProp__conditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFSM_OrCondition_Statics::NewProp__conditions_Inner = { "_conditions", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFSM_Condition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSM_OrCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_OrCondition_Statics::NewProp__conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_OrCondition_Statics::NewProp__conditions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSM_OrCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSM_OrCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFSM_OrCondition_Statics::ClassParams = {
		&UFSM_OrCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSM_OrCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_OrCondition_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFSM_OrCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_OrCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSM_OrCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFSM_OrCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFSM_OrCondition, 1149932960);
	template<> FINITESTATEMACHINE_API UClass* StaticClass<UFSM_OrCondition>()
	{
		return UFSM_OrCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFSM_OrCondition(Z_Construct_UClass_UFSM_OrCondition, &UFSM_OrCondition::StaticClass, TEXT("/Script/FiniteStateMachine"), TEXT("UFSM_OrCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSM_OrCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
