// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FiniteStateMachine/Public/FSM_Transition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSM_Transition() {}
// Cross Module References
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Transition_NoRegister();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Transition();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_FiniteStateMachine();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Condition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_State_NoRegister();
// End Cross Module References
	void UFSM_Transition::StaticRegisterNativesUFSM_Transition()
	{
	}
	UClass* Z_Construct_UClass_UFSM_Transition_NoRegister()
	{
		return UFSM_Transition::StaticClass();
	}
	struct Z_Construct_UClass_UFSM_Transition_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transitionStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__transitionStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transitionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__transitionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSM_Transition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FiniteStateMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_Transition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FSM_Transition.h" },
		{ "ModuleRelativePath", "Public/FSM_Transition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_Transition_Statics::NewProp__conditions_MetaData[] = {
		{ "Category", "FSM_Transition" },
		{ "ModuleRelativePath", "Public/FSM_Transition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFSM_Transition_Statics::NewProp__conditions = { "_conditions", nullptr, (EPropertyFlags)0x0020080000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_Transition, _conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFSM_Transition_Statics::NewProp__conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Transition_Statics::NewProp__conditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFSM_Transition_Statics::NewProp__conditions_Inner = { "_conditions", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFSM_Condition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionStateClass_MetaData[] = {
		{ "Category", "FSM_Transition" },
		{ "ModuleRelativePath", "Public/FSM_Transition.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionStateClass = { "_transitionStateClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_Transition, _transitionStateClass), Z_Construct_UClass_UFSM_State_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionName_MetaData[] = {
		{ "Category", "FSM_Transition" },
		{ "ModuleRelativePath", "Public/FSM_Transition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionName = { "_transitionName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_Transition, _transitionName), METADATA_PARAMS(Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSM_Transition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_Transition_Statics::NewProp__conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_Transition_Statics::NewProp__conditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_Transition_Statics::NewProp__transitionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSM_Transition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSM_Transition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFSM_Transition_Statics::ClassParams = {
		&UFSM_Transition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSM_Transition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Transition_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFSM_Transition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Transition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSM_Transition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFSM_Transition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFSM_Transition, 667350778);
	template<> FINITESTATEMACHINE_API UClass* StaticClass<UFSM_Transition>()
	{
		return UFSM_Transition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFSM_Transition(Z_Construct_UClass_UFSM_Transition, &UFSM_Transition::StaticClass, TEXT("/Script/FiniteStateMachine"), TEXT("UFSM_Transition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSM_Transition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
