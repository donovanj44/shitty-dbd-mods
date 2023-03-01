// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ChargedAttackStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChargedAttackStateComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargedAttackStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargedAttackStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UChargedAttackStateComponent::execGetChargingPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChargingPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargedAttackStateComponent::execGetIsCharging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsCharging();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargedAttackStateComponent::execSetChargingPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_chargePercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChargingPercent(Z_Param_chargePercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChargedAttackStateComponent::execSetIsCharging)
	{
		P_GET_UBOOL(Z_Param_isCharging);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsCharging(Z_Param_isCharging);
		P_NATIVE_END;
	}
	void UChargedAttackStateComponent::StaticRegisterNativesUChargedAttackStateComponent()
	{
		UClass* Class = UChargedAttackStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChargingPercent", &UChargedAttackStateComponent::execGetChargingPercent },
			{ "GetIsCharging", &UChargedAttackStateComponent::execGetIsCharging },
			{ "SetChargingPercent", &UChargedAttackStateComponent::execSetChargingPercent },
			{ "SetIsCharging", &UChargedAttackStateComponent::execSetIsCharging },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics
	{
		struct ChargedAttackStateComponent_eventGetChargingPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargedAttackStateComponent_eventGetChargingPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargedAttackStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargedAttackStateComponent, nullptr, "GetChargingPercent", nullptr, nullptr, sizeof(ChargedAttackStateComponent_eventGetChargingPercent_Parms), Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics
	{
		struct ChargedAttackStateComponent_eventGetIsCharging_Parms
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
	void Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChargedAttackStateComponent_eventGetIsCharging_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChargedAttackStateComponent_eventGetIsCharging_Parms), &Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargedAttackStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargedAttackStateComponent, nullptr, "GetIsCharging", nullptr, nullptr, sizeof(ChargedAttackStateComponent_eventGetIsCharging_Parms), Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics
	{
		struct ChargedAttackStateComponent_eventSetChargingPercent_Parms
		{
			float chargePercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chargePercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::NewProp_chargePercent = { "chargePercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargedAttackStateComponent_eventSetChargingPercent_Parms, chargePercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::NewProp_chargePercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargedAttackStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargedAttackStateComponent, nullptr, "SetChargingPercent", nullptr, nullptr, sizeof(ChargedAttackStateComponent_eventSetChargingPercent_Parms), Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics
	{
		struct ChargedAttackStateComponent_eventSetIsCharging_Parms
		{
			bool isCharging;
		};
		static void NewProp_isCharging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCharging;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::NewProp_isCharging_SetBit(void* Obj)
	{
		((ChargedAttackStateComponent_eventSetIsCharging_Parms*)Obj)->isCharging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::NewProp_isCharging = { "isCharging", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChargedAttackStateComponent_eventSetIsCharging_Parms), &Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::NewProp_isCharging_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::NewProp_isCharging,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargedAttackStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargedAttackStateComponent, nullptr, "SetIsCharging", nullptr, nullptr, sizeof(ChargedAttackStateComponent_eventSetIsCharging_Parms), Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChargedAttackStateComponent_NoRegister()
	{
		return UChargedAttackStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChargedAttackStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChargedAttackStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChargedAttackStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChargedAttackStateComponent_GetChargingPercent, "GetChargingPercent" }, // 206713499
		{ &Z_Construct_UFunction_UChargedAttackStateComponent_GetIsCharging, "GetIsCharging" }, // 1996595773
		{ &Z_Construct_UFunction_UChargedAttackStateComponent_SetChargingPercent, "SetChargingPercent" }, // 2019540042
		{ &Z_Construct_UFunction_UChargedAttackStateComponent_SetIsCharging, "SetIsCharging" }, // 3829053623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargedAttackStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChargedAttackStateComponent.h" },
		{ "ModuleRelativePath", "Public/ChargedAttackStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChargedAttackStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChargedAttackStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChargedAttackStateComponent_Statics::ClassParams = {
		&UChargedAttackStateComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChargedAttackStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChargedAttackStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChargedAttackStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChargedAttackStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChargedAttackStateComponent, 372500310);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UChargedAttackStateComponent>()
	{
		return UChargedAttackStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChargedAttackStateComponent(Z_Construct_UClass_UChargedAttackStateComponent, &UChargedAttackStateComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UChargedAttackStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChargedAttackStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
