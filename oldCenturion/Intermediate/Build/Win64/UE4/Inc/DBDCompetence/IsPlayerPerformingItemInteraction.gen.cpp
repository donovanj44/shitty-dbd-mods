// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsPlayerPerformingItemInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsPlayerPerformingItemInteraction() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsPlayerPerformingItemInteraction_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsPlayerPerformingItemInteraction();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseIsPlayerPerformingInteraction();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIsPlayerPerformingItemInteraction::execOnCollectableChargeStateChange)
	{
		P_GET_UBOOL(Z_Param_empty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectableChargeStateChange(Z_Param_empty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsPlayerPerformingItemInteraction::execOnCollectableDropped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectableDropped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsPlayerPerformingItemInteraction::execOnCollectablePickedUp)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectablePickedUp(Z_Param_player);
		P_NATIVE_END;
	}
	void UIsPlayerPerformingItemInteraction::StaticRegisterNativesUIsPlayerPerformingItemInteraction()
	{
		UClass* Class = UIsPlayerPerformingItemInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollectableChargeStateChange", &UIsPlayerPerformingItemInteraction::execOnCollectableChargeStateChange },
			{ "OnCollectableDropped", &UIsPlayerPerformingItemInteraction::execOnCollectableDropped },
			{ "OnCollectablePickedUp", &UIsPlayerPerformingItemInteraction::execOnCollectablePickedUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics
	{
		struct IsPlayerPerformingItemInteraction_eventOnCollectableChargeStateChange_Parms
		{
			bool empty;
		};
		static void NewProp_empty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_empty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::NewProp_empty_SetBit(void* Obj)
	{
		((IsPlayerPerformingItemInteraction_eventOnCollectableChargeStateChange_Parms*)Obj)->empty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::NewProp_empty = { "empty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IsPlayerPerformingItemInteraction_eventOnCollectableChargeStateChange_Parms), &Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::NewProp_empty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::NewProp_empty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsPlayerPerformingItemInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsPlayerPerformingItemInteraction, nullptr, "OnCollectableChargeStateChange", nullptr, nullptr, sizeof(IsPlayerPerformingItemInteraction_eventOnCollectableChargeStateChange_Parms), Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableDropped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsPlayerPerformingItemInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsPlayerPerformingItemInteraction, nullptr, "OnCollectableDropped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics
	{
		struct IsPlayerPerformingItemInteraction_eventOnCollectablePickedUp_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsPlayerPerformingItemInteraction_eventOnCollectablePickedUp_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsPlayerPerformingItemInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsPlayerPerformingItemInteraction, nullptr, "OnCollectablePickedUp", nullptr, nullptr, sizeof(IsPlayerPerformingItemInteraction_eventOnCollectablePickedUp_Parms), Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsPlayerPerformingItemInteraction_NoRegister()
	{
		return UIsPlayerPerformingItemInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UIsPlayerPerformingItemInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsPlayerPerformingItemInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseIsPlayerPerformingInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsPlayerPerformingItemInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange, "OnCollectableChargeStateChange" }, // 4291656872
		{ &Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectableDropped, "OnCollectableDropped" }, // 4276286925
		{ &Z_Construct_UFunction_UIsPlayerPerformingItemInteraction_OnCollectablePickedUp, "OnCollectablePickedUp" }, // 2005491122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerPerformingItemInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsPlayerPerformingItemInteraction.h" },
		{ "ModuleRelativePath", "Public/IsPlayerPerformingItemInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsPlayerPerformingItemInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsPlayerPerformingItemInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsPlayerPerformingItemInteraction_Statics::ClassParams = {
		&UIsPlayerPerformingItemInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsPlayerPerformingItemInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerPerformingItemInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsPlayerPerformingItemInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsPlayerPerformingItemInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsPlayerPerformingItemInteraction, 343510671);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsPlayerPerformingItemInteraction>()
	{
		return UIsPlayerPerformingItemInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsPlayerPerformingItemInteraction(Z_Construct_UClass_UIsPlayerPerformingItemInteraction, &UIsPlayerPerformingItemInteraction::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsPlayerPerformingItemInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsPlayerPerformingItemInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
