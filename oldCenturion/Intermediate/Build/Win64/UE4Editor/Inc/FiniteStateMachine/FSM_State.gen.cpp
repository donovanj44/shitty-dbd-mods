// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FiniteStateMachine/Public/FSM_State.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSM_State() {}
// Cross Module References
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_State_NoRegister();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_State();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FiniteStateMachine();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFiniteStateMachine_NoRegister();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Transition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UFSM_State::StaticRegisterNativesUFSM_State()
	{
	}
	UClass* Z_Construct_UClass_UFSM_State_NoRegister()
	{
		return UFSM_State::StaticClass();
	}
	struct Z_Construct_UClass_UFSM_State_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__startTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentChildState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentChildState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__parentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__parentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__transitions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__transitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultChildStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__defaultChildStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldTick_MetaData[];
#endif
		static void NewProp__shouldTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__stateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSM_State_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FiniteStateMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_State_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FSM_State.h" },
		{ "ModuleRelativePath", "Public/FSM_State.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_State_Statics::NewProp__startTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/FSM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSM_State_Statics::NewProp__startTimestamp = { "_startTimestamp", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_State, _startTimestamp), METADATA_PARAMS(Z_Construct_UClass_UFSM_State_Statics::NewProp__startTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::NewProp__startTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_State_Statics::NewProp__currentChildState_MetaData[] = {
		{ "ModuleRelativePath", "Public/FSM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFSM_State_Statics::NewProp__currentChildState = { "_currentChildState", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_State, _currentChildState), Z_Construct_UClass_UFSM_State_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFSM_State_Statics::NewProp__currentChildState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::NewProp__currentChildState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_State_Statics::NewProp__parentState_MetaData[] = {
		{ "ModuleRelativePath", "Public/FSM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFSM_State_Statics::NewProp__parentState = { "_parentState", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_State, _parentState), Z_Construct_UClass_UFSM_State_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFSM_State_Statics::NewProp__parentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::NewProp__parentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_State_Statics::NewProp__stateMachine_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FSM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFSM_State_Statics::NewProp__stateMachine = { "_stateMachine", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_State, _stateMachine), Z_Construct_UClass_UFiniteStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFSM_State_Statics::NewProp__stateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::NewProp__stateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_State_Statics::NewProp__transitions_MetaData[] = {
		{ "Category", "FSM_State" },
		{ "ModuleRelativePath", "Public/FSM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFSM_State_Statics::NewProp__transitions = { "_transitions", nullptr, (EPropertyFlags)0x0020080000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_State, _transitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFSM_State_Statics::NewProp__transitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::NewProp__transitions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFSM_State_Statics::NewProp__transitions_Inner = { "_transitions", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFSM_Transition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_State_Statics::NewProp__defaultChildStateClass_MetaData[] = {
		{ "Category", "FSM_State" },
		{ "ModuleRelativePath", "Public/FSM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFSM_State_Statics::NewProp__defaultChildStateClass = { "_defaultChildStateClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_State, _defaultChildStateClass), Z_Construct_UClass_UFSM_State_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFSM_State_Statics::NewProp__defaultChildStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::NewProp__defaultChildStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_State_Statics::NewProp__shouldTick_MetaData[] = {
		{ "Category", "FSM_State" },
		{ "ModuleRelativePath", "Public/FSM_State.h" },
	};
#endif
	void Z_Construct_UClass_UFSM_State_Statics::NewProp__shouldTick_SetBit(void* Obj)
	{
		((UFSM_State*)Obj)->_shouldTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSM_State_Statics::NewProp__shouldTick = { "_shouldTick", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSM_State), &Z_Construct_UClass_UFSM_State_Statics::NewProp__shouldTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSM_State_Statics::NewProp__shouldTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::NewProp__shouldTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_State_Statics::NewProp__stateName_MetaData[] = {
		{ "Category", "FSM_State" },
		{ "ModuleRelativePath", "Public/FSM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFSM_State_Statics::NewProp__stateName = { "_stateName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSM_State, _stateName), METADATA_PARAMS(Z_Construct_UClass_UFSM_State_Statics::NewProp__stateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::NewProp__stateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSM_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_State_Statics::NewProp__startTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_State_Statics::NewProp__currentChildState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_State_Statics::NewProp__parentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_State_Statics::NewProp__stateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_State_Statics::NewProp__transitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_State_Statics::NewProp__transitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_State_Statics::NewProp__defaultChildStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_State_Statics::NewProp__shouldTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_State_Statics::NewProp__stateName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSM_State_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSM_State>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFSM_State_Statics::ClassParams = {
		&UFSM_State::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSM_State_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFSM_State_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_State_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSM_State()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFSM_State_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFSM_State, 2038774030);
	template<> FINITESTATEMACHINE_API UClass* StaticClass<UFSM_State>()
	{
		return UFSM_State::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFSM_State(Z_Construct_UClass_UFSM_State, &UFSM_State::StaticClass, TEXT("/Script/FiniteStateMachine"), TEXT("UFSM_State"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSM_State);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
