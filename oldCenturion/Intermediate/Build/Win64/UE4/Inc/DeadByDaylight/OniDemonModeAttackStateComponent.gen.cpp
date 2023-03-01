// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OniDemonModeAttackStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniDemonModeAttackStateComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOniDemonModeAttackStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOniDemonModeAttackStateComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargedAttackStateComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventOniDemonModeAttackStateComponentOnChargedAttackReadyChanged_Parms
		{
			bool bIsReady;
		};
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventOniDemonModeAttackStateComponentOnChargedAttackReadyChanged_Parms*)Obj)->bIsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventOniDemonModeAttackStateComponentOnChargedAttackReadyChanged_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::NewProp_bIsReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniDemonModeAttackStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventOniDemonModeAttackStateComponentOnChargedAttackReadyChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOniDemonModeAttackStateComponent::execMulticast_ClearChargingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ClearChargingState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOniDemonModeAttackStateComponent::execServer_ClearChargingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ClearChargingState_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState = FName(TEXT("Multicast_ClearChargingState"));
	void UOniDemonModeAttackStateComponent::Multicast_ClearChargingState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState),NULL);
	}
	static FName NAME_UOniDemonModeAttackStateComponent_Server_ClearChargingState = FName(TEXT("Server_ClearChargingState"));
	void UOniDemonModeAttackStateComponent::Server_ClearChargingState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOniDemonModeAttackStateComponent_Server_ClearChargingState),NULL);
	}
	void UOniDemonModeAttackStateComponent::StaticRegisterNativesUOniDemonModeAttackStateComponent()
	{
		UClass* Class = UOniDemonModeAttackStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ClearChargingState", &UOniDemonModeAttackStateComponent::execMulticast_ClearChargingState },
			{ "Server_ClearChargingState", &UOniDemonModeAttackStateComponent::execServer_ClearChargingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniDemonModeAttackStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOniDemonModeAttackStateComponent, nullptr, "Multicast_ClearChargingState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Server_ClearChargingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Server_ClearChargingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniDemonModeAttackStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Server_ClearChargingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOniDemonModeAttackStateComponent, nullptr, "Server_ClearChargingState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Server_ClearChargingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Server_ClearChargingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Server_ClearChargingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Server_ClearChargingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOniDemonModeAttackStateComponent_NoRegister()
	{
		return UOniDemonModeAttackStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChargedAttackReadyChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChargedAttackReadyChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargedAttackStateComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Multicast_ClearChargingState, "Multicast_ClearChargingState" }, // 1110131416
		{ &Z_Construct_UFunction_UOniDemonModeAttackStateComponent_Server_ClearChargingState, "Server_ClearChargingState" }, // 1377914989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniDemonModeAttackStateComponent.h" },
		{ "ModuleRelativePath", "Public/OniDemonModeAttackStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::NewProp_OnChargedAttackReadyChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/OniDemonModeAttackStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::NewProp_OnChargedAttackReadyChanged = { "OnChargedAttackReadyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOniDemonModeAttackStateComponent, OnChargedAttackReadyChanged), Z_Construct_UDelegateFunction_DeadByDaylight_OniDemonModeAttackStateComponentOnChargedAttackReadyChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::NewProp_OnChargedAttackReadyChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::NewProp_OnChargedAttackReadyChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::NewProp_OnChargedAttackReadyChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniDemonModeAttackStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::ClassParams = {
		&UOniDemonModeAttackStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniDemonModeAttackStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniDemonModeAttackStateComponent, 310760910);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOniDemonModeAttackStateComponent>()
	{
		return UOniDemonModeAttackStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniDemonModeAttackStateComponent(Z_Construct_UClass_UOniDemonModeAttackStateComponent, &UOniDemonModeAttackStateComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOniDemonModeAttackStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniDemonModeAttackStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
