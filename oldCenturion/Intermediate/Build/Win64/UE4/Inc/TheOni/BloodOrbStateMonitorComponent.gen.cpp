// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbStateMonitorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbStateMonitorComponent() {}
// Cross Module References
	THEONI_API UFunction* Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbStateMonitorComponent_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbStateMonitorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	THEONI_API UEnum* Z_Construct_UEnum_TheOni_EBloodOrbState();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics
	{
		struct _Script_TheOni_eventBloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic_Parms
		{
			ABloodOrb* bloodOrb;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::NewProp_bloodOrb = { "bloodOrb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TheOni_eventBloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic_Parms, bloodOrb), Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::NewProp_bloodOrb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbStateMonitorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheOni, nullptr, "BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheOni_eventBloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic_Parms), Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBloodOrbStateMonitorComponent::execOnBloodOrbDestroyed)
	{
		P_GET_OBJECT(ABloodOrb,Z_Param_bloodOrb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBloodOrbDestroyed(Z_Param_bloodOrb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbStateMonitorComponent::execOnBloodOrbSpawned)
	{
		P_GET_OBJECT(ABloodOrb,Z_Param_bloodOrb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBloodOrbSpawned(Z_Param_bloodOrb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbStateMonitorComponent::execOnBloodOrbStateChanged)
	{
		P_GET_ENUM(EBloodOrbState,Z_Param_oldState);
		P_GET_ENUM(EBloodOrbState,Z_Param_newState);
		P_GET_OBJECT(ABloodOrb,Z_Param_bloodOrb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBloodOrbStateChanged(EBloodOrbState(Z_Param_oldState),EBloodOrbState(Z_Param_newState),Z_Param_bloodOrb);
		P_NATIVE_END;
	}
	void UBloodOrbStateMonitorComponent::StaticRegisterNativesUBloodOrbStateMonitorComponent()
	{
		UClass* Class = UBloodOrbStateMonitorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBloodOrbDestroyed", &UBloodOrbStateMonitorComponent::execOnBloodOrbDestroyed },
			{ "OnBloodOrbSpawned", &UBloodOrbStateMonitorComponent::execOnBloodOrbSpawned },
			{ "OnBloodOrbStateChanged", &UBloodOrbStateMonitorComponent::execOnBloodOrbStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics
	{
		struct BloodOrbStateMonitorComponent_eventOnBloodOrbDestroyed_Parms
		{
			const ABloodOrb* bloodOrb;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bloodOrb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::NewProp_bloodOrb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::NewProp_bloodOrb = { "bloodOrb", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbStateMonitorComponent_eventOnBloodOrbDestroyed_Parms, bloodOrb), Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::NewProp_bloodOrb_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::NewProp_bloodOrb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::NewProp_bloodOrb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbStateMonitorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbStateMonitorComponent, nullptr, "OnBloodOrbDestroyed", nullptr, nullptr, sizeof(BloodOrbStateMonitorComponent_eventOnBloodOrbDestroyed_Parms), Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics
	{
		struct BloodOrbStateMonitorComponent_eventOnBloodOrbSpawned_Parms
		{
			const ABloodOrb* bloodOrb;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bloodOrb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb = { "bloodOrb", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbStateMonitorComponent_eventOnBloodOrbSpawned_Parms, bloodOrb), Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbStateMonitorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbStateMonitorComponent, nullptr, "OnBloodOrbSpawned", nullptr, nullptr, sizeof(BloodOrbStateMonitorComponent_eventOnBloodOrbSpawned_Parms), Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics
	{
		struct BloodOrbStateMonitorComponent_eventOnBloodOrbStateChanged_Parms
		{
			EBloodOrbState oldState;
			EBloodOrbState newState;
			const ABloodOrb* bloodOrb;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bloodOrb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_bloodOrb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_bloodOrb = { "bloodOrb", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbStateMonitorComponent_eventOnBloodOrbStateChanged_Parms, bloodOrb), Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_bloodOrb_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_bloodOrb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbStateMonitorComponent_eventOnBloodOrbStateChanged_Parms, newState), Z_Construct_UEnum_TheOni_EBloodOrbState, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_oldState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_oldState = { "oldState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbStateMonitorComponent_eventOnBloodOrbStateChanged_Parms, oldState), Z_Construct_UEnum_TheOni_EBloodOrbState, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_oldState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_oldState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_oldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_bloodOrb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_oldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::NewProp_oldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbStateMonitorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbStateMonitorComponent, nullptr, "OnBloodOrbStateChanged", nullptr, nullptr, sizeof(BloodOrbStateMonitorComponent_eventOnBloodOrbStateChanged_Parms), Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodOrbStateMonitorComponent_NoRegister()
	{
		return UBloodOrbStateMonitorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBloodOrbAbsorbedCosmetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBloodOrbAbsorbedCosmetic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed, "OnBloodOrbDestroyed" }, // 551023375
		{ &Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbSpawned, "OnBloodOrbSpawned" }, // 1047976946
		{ &Z_Construct_UFunction_UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged, "OnBloodOrbStateChanged" }, // 1622743700
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodOrbStateMonitorComponent.h" },
		{ "ModuleRelativePath", "Public/BloodOrbStateMonitorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::NewProp_OnBloodOrbAbsorbedCosmetic_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodOrbStateMonitorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::NewProp_OnBloodOrbAbsorbedCosmetic = { "OnBloodOrbAbsorbedCosmetic", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbStateMonitorComponent, OnBloodOrbAbsorbedCosmetic), Z_Construct_UDelegateFunction_TheOni_BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::NewProp_OnBloodOrbAbsorbedCosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::NewProp_OnBloodOrbAbsorbedCosmetic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::NewProp_OnBloodOrbAbsorbedCosmetic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbStateMonitorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::ClassParams = {
		&UBloodOrbStateMonitorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbStateMonitorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbStateMonitorComponent, 1639031810);
	template<> THEONI_API UClass* StaticClass<UBloodOrbStateMonitorComponent>()
	{
		return UBloodOrbStateMonitorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbStateMonitorComponent(Z_Construct_UClass_UBloodOrbStateMonitorComponent, &UBloodOrbStateMonitorComponent::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbStateMonitorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbStateMonitorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
