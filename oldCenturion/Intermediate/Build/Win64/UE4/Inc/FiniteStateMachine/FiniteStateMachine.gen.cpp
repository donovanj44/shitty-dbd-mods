// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FiniteStateMachine/Public/FiniteStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFiniteStateMachine() {}
// Cross Module References
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFiniteStateMachine_NoRegister();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFiniteStateMachine();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FiniteStateMachine();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_State_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FINITESTATEMACHINE_API UEnum* Z_Construct_UEnum_FiniteStateMachine_EFiniteStateMachineStatus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UFiniteStateMachine::StaticRegisterNativesUFiniteStateMachine()
	{
	}
	UClass* Z_Construct_UClass_UFiniteStateMachine_NoRegister()
	{
		return UFiniteStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UFiniteStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__stateInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stateInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateMachineOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stateMachineOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentStateMachineStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currentStateMachineStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currentStateMachineStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__defaultStateClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFiniteStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FiniteStateMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFiniteStateMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FiniteStateMachine.h" },
		{ "ModuleRelativePath", "Public/FiniteStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/FiniteStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateInstances = { "_stateInstances", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFiniteStateMachine, _stateInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateInstances_Inner = { "_stateInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFSM_State_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateMachineOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/FiniteStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateMachineOwner = { "_stateMachineOwner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFiniteStateMachine, _stateMachineOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateMachineOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateMachineOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentStateMachineStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/FiniteStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentStateMachineStatus = { "_currentStateMachineStatus", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFiniteStateMachine, _currentStateMachineStatus), Z_Construct_UEnum_FiniteStateMachine_EFiniteStateMachineStatus, METADATA_PARAMS(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentStateMachineStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentStateMachineStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentStateMachineStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentState_MetaData[] = {
		{ "ModuleRelativePath", "Public/FiniteStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentState = { "_currentState", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFiniteStateMachine, _currentState), Z_Construct_UClass_UFSM_State_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__defaultStateClass_MetaData[] = {
		{ "Category", "FiniteStateMachine" },
		{ "ModuleRelativePath", "Public/FiniteStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__defaultStateClass = { "_defaultStateClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFiniteStateMachine, _defaultStateClass), Z_Construct_UClass_UFSM_State_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__defaultStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__defaultStateClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFiniteStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__stateMachineOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentStateMachineStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentStateMachineStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__currentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFiniteStateMachine_Statics::NewProp__defaultStateClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFiniteStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFiniteStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFiniteStateMachine_Statics::ClassParams = {
		&UFiniteStateMachine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFiniteStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFiniteStateMachine_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFiniteStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFiniteStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFiniteStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFiniteStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFiniteStateMachine, 1845767266);
	template<> FINITESTATEMACHINE_API UClass* StaticClass<UFiniteStateMachine>()
	{
		return UFiniteStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFiniteStateMachine(Z_Construct_UClass_UFiniteStateMachine, &UFiniteStateMachine::StaticClass, TEXT("/Script/FiniteStateMachine"), TEXT("UFiniteStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFiniteStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
