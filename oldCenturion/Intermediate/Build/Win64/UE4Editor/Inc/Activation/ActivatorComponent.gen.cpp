// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Activation/Public/ActivatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivatorComponent() {}
// Cross Module References
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatorComponent_NoRegister();
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Activation();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActivatorComponent::execSetObjectState)
	{
		P_GET_OBJECT(UGameplayTagContainerComponent,Z_Param_objectState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectState(Z_Param_objectState);
		P_NATIVE_END;
	}
	void UActivatorComponent::StaticRegisterNativesUActivatorComponent()
	{
		UClass* Class = UActivatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetObjectState", &UActivatorComponent::execSetObjectState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics
	{
		struct ActivatorComponent_eventSetObjectState_Parms
		{
			UGameplayTagContainerComponent* objectState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::NewProp_objectState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::NewProp_objectState = { "objectState", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatorComponent_eventSetObjectState_Parms, objectState), Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::NewProp_objectState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::NewProp_objectState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::NewProp_objectState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatorComponent, nullptr, "SetObjectState", nullptr, nullptr, sizeof(ActivatorComponent_eventSetObjectState_Parms), Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatorComponent_SetObjectState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatorComponent_SetObjectState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivatorComponent_NoRegister()
	{
		return UActivatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActivatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__searchForActivatableSubAnimInstances_MetaData[];
#endif
		static void NewProp__searchForActivatableSubAnimInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__searchForActivatableSubAnimInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Activation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatorComponent_SetObjectState, "SetObjectState" }, // 2879435184
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActivatorComponent.h" },
		{ "ModuleRelativePath", "Public/ActivatorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatorComponent_Statics::NewProp__searchForActivatableSubAnimInstances_MetaData[] = {
		{ "Category", "ActivatorComponent" },
		{ "ModuleRelativePath", "Public/ActivatorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UActivatorComponent_Statics::NewProp__searchForActivatableSubAnimInstances_SetBit(void* Obj)
	{
		((UActivatorComponent*)Obj)->_searchForActivatableSubAnimInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActivatorComponent_Statics::NewProp__searchForActivatableSubAnimInstances = { "_searchForActivatableSubAnimInstances", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActivatorComponent), &Z_Construct_UClass_UActivatorComponent_Statics::NewProp__searchForActivatableSubAnimInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActivatorComponent_Statics::NewProp__searchForActivatableSubAnimInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatorComponent_Statics::NewProp__searchForActivatableSubAnimInstances_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatorComponent_Statics::NewProp__searchForActivatableSubAnimInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivatorComponent_Statics::ClassParams = {
		&UActivatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActivatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActivatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActivatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivatorComponent, 2284847027);
	template<> ACTIVATION_API UClass* StaticClass<UActivatorComponent>()
	{
		return UActivatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivatorComponent(Z_Construct_UClass_UActivatorComponent, &UActivatorComponent::StaticClass, TEXT("/Script/Activation"), TEXT("UActivatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
