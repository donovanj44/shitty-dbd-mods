// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/BasePoolableActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePoolableActorComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBasePoolableActorComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBasePoolableActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics
	{
		struct _Script_GameplayUtilities_eventBasePoolableActorComponentOnAcquiredChanged_Parms
		{
			bool acquired;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acquired_MetaData[];
#endif
		static void NewProp_acquired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_acquired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_SetBit(void* Obj)
	{
		((_Script_GameplayUtilities_eventBasePoolableActorComponentOnAcquiredChanged_Parms*)Obj)->acquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired = { "acquired", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameplayUtilities_eventBasePoolableActorComponentOnAcquiredChanged_Parms), &Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePoolableActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayUtilities, nullptr, "BasePoolableActorComponentOnAcquiredChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameplayUtilities_eventBasePoolableActorComponentOnAcquiredChanged_Parms), Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBasePoolableActorComponent::execIsAcquired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAcquired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePoolableActorComponent::execSetAcquired)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAcquired(Z_Param_active);
		P_NATIVE_END;
	}
	void UBasePoolableActorComponent::StaticRegisterNativesUBasePoolableActorComponent()
	{
		UClass* Class = UBasePoolableActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAcquired", &UBasePoolableActorComponent::execIsAcquired },
			{ "SetAcquired", &UBasePoolableActorComponent::execSetAcquired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics
	{
		struct BasePoolableActorComponent_eventIsAcquired_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasePoolableActorComponent_eventIsAcquired_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BasePoolableActorComponent_eventIsAcquired_Parms), &Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePoolableActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePoolableActorComponent, nullptr, "IsAcquired", nullptr, nullptr, sizeof(BasePoolableActorComponent_eventIsAcquired_Parms), Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics
	{
		struct BasePoolableActorComponent_eventSetAcquired_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::NewProp_active_SetBit(void* Obj)
	{
		((BasePoolableActorComponent_eventSetAcquired_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BasePoolableActorComponent_eventSetAcquired_Parms), &Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePoolableActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePoolableActorComponent, nullptr, "SetAcquired", nullptr, nullptr, sizeof(BasePoolableActorComponent_eventSetAcquired_Parms), Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBasePoolableActorComponent_NoRegister()
	{
		return UBasePoolableActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBasePoolableActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAcquiredChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAcquiredChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePoolableActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBasePoolableActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasePoolableActorComponent_IsAcquired, "IsAcquired" }, // 2572568785
		{ &Z_Construct_UFunction_UBasePoolableActorComponent_SetAcquired, "SetAcquired" }, // 3804005504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePoolableActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BasePoolableActorComponent.h" },
		{ "ModuleRelativePath", "Public/BasePoolableActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePoolableActorComponent_Statics::NewProp_OnAcquiredChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasePoolableActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePoolableActorComponent_Statics::NewProp_OnAcquiredChanged = { "OnAcquiredChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePoolableActorComponent, OnAcquiredChanged), Z_Construct_UDelegateFunction_GameplayUtilities_BasePoolableActorComponentOnAcquiredChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePoolableActorComponent_Statics::NewProp_OnAcquiredChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePoolableActorComponent_Statics::NewProp_OnAcquiredChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePoolableActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePoolableActorComponent_Statics::NewProp_OnAcquiredChanged,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBasePoolableActorComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPoolableActor_NoRegister, (int32)VTABLE_OFFSET(UBasePoolableActorComponent, IPoolableActor), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePoolableActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePoolableActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasePoolableActorComponent_Statics::ClassParams = {
		&UBasePoolableActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBasePoolableActorComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasePoolableActorComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBasePoolableActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePoolableActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePoolableActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasePoolableActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasePoolableActorComponent, 2354894837);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UBasePoolableActorComponent>()
	{
		return UBasePoolableActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasePoolableActorComponent(Z_Construct_UClass_UBasePoolableActorComponent, &UBasePoolableActorComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UBasePoolableActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePoolableActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
