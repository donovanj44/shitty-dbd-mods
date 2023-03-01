// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DelayedHealEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelayedHealEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDelayedHealEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDelayedHealEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDelayedHealEffect::execAuthority_OnActivationTimerComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnActivationTimerComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDelayedHealEffect::execAuthority_OnOwningCamperHealthChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_before);
		P_GET_ENUM(ECamperDamageState,Z_Param_after);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOwningCamperHealthChanged(ECamperDamageState(Z_Param_before),ECamperDamageState(Z_Param_after));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDelayedHealEffect::execAuthority_OnOwningCamperPickedUp)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOwningCamperPickedUp(Z_Param_picker);
		P_NATIVE_END;
	}
	void UDelayedHealEffect::StaticRegisterNativesUDelayedHealEffect()
	{
		UClass* Class = UDelayedHealEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnActivationTimerComplete", &UDelayedHealEffect::execAuthority_OnActivationTimerComplete },
			{ "Authority_OnOwningCamperHealthChanged", &UDelayedHealEffect::execAuthority_OnOwningCamperHealthChanged },
			{ "Authority_OnOwningCamperPickedUp", &UDelayedHealEffect::execAuthority_OnOwningCamperPickedUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDelayedHealEffect_Authority_OnActivationTimerComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDelayedHealEffect_Authority_OnActivationTimerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelayedHealEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDelayedHealEffect_Authority_OnActivationTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDelayedHealEffect, nullptr, "Authority_OnActivationTimerComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDelayedHealEffect_Authority_OnActivationTimerComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayedHealEffect_Authority_OnActivationTimerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDelayedHealEffect_Authority_OnActivationTimerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDelayedHealEffect_Authority_OnActivationTimerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics
	{
		struct DelayedHealEffect_eventAuthority_OnOwningCamperHealthChanged_Parms
		{
			ECamperDamageState before;
			ECamperDamageState after;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_after;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_after_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_before;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_before_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::NewProp_after = { "after", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelayedHealEffect_eventAuthority_OnOwningCamperHealthChanged_Parms, after), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::NewProp_after_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::NewProp_before = { "before", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelayedHealEffect_eventAuthority_OnOwningCamperHealthChanged_Parms, before), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::NewProp_before_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::NewProp_after,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::NewProp_after_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::NewProp_before,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::NewProp_before_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelayedHealEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDelayedHealEffect, nullptr, "Authority_OnOwningCamperHealthChanged", nullptr, nullptr, sizeof(DelayedHealEffect_eventAuthority_OnOwningCamperHealthChanged_Parms), Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics
	{
		struct DelayedHealEffect_eventAuthority_OnOwningCamperPickedUp_Parms
		{
			ADBDPlayer* picker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::NewProp_picker = { "picker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelayedHealEffect_eventAuthority_OnOwningCamperPickedUp_Parms, picker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::NewProp_picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelayedHealEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDelayedHealEffect, nullptr, "Authority_OnOwningCamperPickedUp", nullptr, nullptr, sizeof(DelayedHealEffect_eventAuthority_OnOwningCamperPickedUp_Parms), Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDelayedHealEffect_NoRegister()
	{
		return UDelayedHealEffect::StaticClass();
	}
	struct Z_Construct_UClass_UDelayedHealEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDelayedHealEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDelayedHealEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDelayedHealEffect_Authority_OnActivationTimerComplete, "Authority_OnActivationTimerComplete" }, // 1757440889
		{ &Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperHealthChanged, "Authority_OnOwningCamperHealthChanged" }, // 3602281522
		{ &Z_Construct_UFunction_UDelayedHealEffect_Authority_OnOwningCamperPickedUp, "Authority_OnOwningCamperPickedUp" }, // 1972201464
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelayedHealEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DelayedHealEffect.h" },
		{ "ModuleRelativePath", "Public/DelayedHealEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDelayedHealEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDelayedHealEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDelayedHealEffect_Statics::ClassParams = {
		&UDelayedHealEffect::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDelayedHealEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDelayedHealEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDelayedHealEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDelayedHealEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDelayedHealEffect, 1240031324);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDelayedHealEffect>()
	{
		return UDelayedHealEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDelayedHealEffect(Z_Construct_UClass_UDelayedHealEffect, &UDelayedHealEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDelayedHealEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDelayedHealEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
