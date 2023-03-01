// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDemogorgon/Public/DemogorgonPounceInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonPounceInteraction() {}
// Cross Module References
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPounceInteraction_NoRegister();
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPounceInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheDemogorgon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargedAttackStateComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDemogorgonPounceInteraction::execOnCancelCooldownComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelCooldownComplete_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UDemogorgonPounceInteraction_OnCancelCooldownComplete = FName(TEXT("OnCancelCooldownComplete"));
	void UDemogorgonPounceInteraction::OnCancelCooldownComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDemogorgonPounceInteraction_OnCancelCooldownComplete),NULL);
	}
	static FName NAME_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged = FName(TEXT("OnChargedAttackReadyChanged"));
	void UDemogorgonPounceInteraction::OnChargedAttackReadyChanged(bool ready)
	{
		DemogorgonPounceInteraction_eventOnChargedAttackReadyChanged_Parms Parms;
		Parms.ready=ready ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged),&Parms);
	}
	static FName NAME_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent = FName(TEXT("TriggerChargeCancelAudioEvent"));
	void UDemogorgonPounceInteraction::TriggerChargeCancelAudioEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent),NULL);
	}
	static FName NAME_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent = FName(TEXT("TriggerHuntingAudioEvent"));
	void UDemogorgonPounceInteraction::TriggerHuntingAudioEvent(bool isHunting)
	{
		DemogorgonPounceInteraction_eventTriggerHuntingAudioEvent_Parms Parms;
		Parms.isHunting=isHunting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent),&Parms);
	}
	void UDemogorgonPounceInteraction::StaticRegisterNativesUDemogorgonPounceInteraction()
	{
		UClass* Class = UDemogorgonPounceInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelCooldownComplete", &UDemogorgonPounceInteraction::execOnCancelCooldownComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDemogorgonPounceInteraction_OnCancelCooldownComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonPounceInteraction_OnCancelCooldownComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPounceInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemogorgonPounceInteraction_OnCancelCooldownComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemogorgonPounceInteraction, nullptr, "OnCancelCooldownComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonPounceInteraction_OnCancelCooldownComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPounceInteraction_OnCancelCooldownComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemogorgonPounceInteraction_OnCancelCooldownComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemogorgonPounceInteraction_OnCancelCooldownComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics
	{
		static void NewProp_ready_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ready;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::NewProp_ready_SetBit(void* Obj)
	{
		((DemogorgonPounceInteraction_eventOnChargedAttackReadyChanged_Parms*)Obj)->ready = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::NewProp_ready = { "ready", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DemogorgonPounceInteraction_eventOnChargedAttackReadyChanged_Parms), &Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::NewProp_ready_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::NewProp_ready,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPounceInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemogorgonPounceInteraction, nullptr, "OnChargedAttackReadyChanged", nullptr, nullptr, sizeof(DemogorgonPounceInteraction_eventOnChargedAttackReadyChanged_Parms), Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPounceInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemogorgonPounceInteraction, nullptr, "TriggerChargeCancelAudioEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics
	{
		static void NewProp_isHunting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHunting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::NewProp_isHunting_SetBit(void* Obj)
	{
		((DemogorgonPounceInteraction_eventTriggerHuntingAudioEvent_Parms*)Obj)->isHunting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::NewProp_isHunting = { "isHunting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DemogorgonPounceInteraction_eventTriggerHuntingAudioEvent_Parms), &Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::NewProp_isHunting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::NewProp_isHunting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPounceInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemogorgonPounceInteraction, nullptr, "TriggerHuntingAudioEvent", nullptr, nullptr, sizeof(DemogorgonPounceInteraction_eventTriggerHuntingAudioEvent_Parms), Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDemogorgonPounceInteraction_NoRegister()
	{
		return UDemogorgonPounceInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UDemogorgonPounceInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningSlasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargedAttackState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chargedAttackState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDemogorgon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDemogorgonPounceInteraction_OnCancelCooldownComplete, "OnCancelCooldownComplete" }, // 2427853771
		{ &Z_Construct_UFunction_UDemogorgonPounceInteraction_OnChargedAttackReadyChanged, "OnChargedAttackReadyChanged" }, // 1029308261
		{ &Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent, "TriggerChargeCancelAudioEvent" }, // 754668845
		{ &Z_Construct_UFunction_UDemogorgonPounceInteraction_TriggerHuntingAudioEvent, "TriggerHuntingAudioEvent" }, // 929802166
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DemogorgonPounceInteraction.h" },
		{ "ModuleRelativePath", "Public/DemogorgonPounceInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__owningSlasher_MetaData[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPounceInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__owningSlasher = { "_owningSlasher", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPounceInteraction, _owningSlasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__owningSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__owningSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__chargedAttackState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DemogorgonPounceInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__chargedAttackState = { "_chargedAttackState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPounceInteraction, _chargedAttackState), Z_Construct_UClass_UChargedAttackStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__chargedAttackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__chargedAttackState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__owningSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::NewProp__chargedAttackState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemogorgonPounceInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::ClassParams = {
		&UDemogorgonPounceInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemogorgonPounceInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemogorgonPounceInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemogorgonPounceInteraction, 1635839461);
	template<> THEDEMOGORGON_API UClass* StaticClass<UDemogorgonPounceInteraction>()
	{
		return UDemogorgonPounceInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemogorgonPounceInteraction(Z_Construct_UClass_UDemogorgonPounceInteraction, &UDemogorgonPounceInteraction::StaticClass, TEXT("/Script/TheDemogorgon"), TEXT("UDemogorgonPounceInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemogorgonPounceInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
