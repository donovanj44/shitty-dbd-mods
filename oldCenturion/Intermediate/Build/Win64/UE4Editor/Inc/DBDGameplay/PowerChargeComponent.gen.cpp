// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/PowerChargeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerChargeComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics
	{
		struct _Script_DBDGameplay_eventPowerChargeComponentOnPowerChargeChanged_Parms
		{
			float currentChargePercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentChargePercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::NewProp_currentChargePercent = { "currentChargePercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDGameplay_eventPowerChargeComponentOnPowerChargeChanged_Parms, currentChargePercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::NewProp_currentChargePercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerChargeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDGameplay, nullptr, "PowerChargeComponentOnPowerChargeChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDGameplay_eventPowerChargeComponentOnPowerChargeChanged_Parms), Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPowerChargeComponent::execOnCurrentChargeChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentChargeChanged(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPowerChargeComponent::execOnRep_CurrentCharge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentCharge();
		P_NATIVE_END;
	}
	void UPowerChargeComponent::StaticRegisterNativesUPowerChargeComponent()
	{
		UClass* Class = UPowerChargeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCurrentChargeChanged", &UPowerChargeComponent::execOnCurrentChargeChanged },
			{ "OnRep_CurrentCharge", &UPowerChargeComponent::execOnRep_CurrentCharge },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics
	{
		struct PowerChargeComponent_eventOnCurrentChargeChanged_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerChargeComponent_eventOnCurrentChargeChanged_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerChargeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerChargeComponent, nullptr, "OnCurrentChargeChanged", nullptr, nullptr, sizeof(PowerChargeComponent_eventOnCurrentChargeChanged_Parms), Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerChargeComponent_OnRep_CurrentCharge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerChargeComponent_OnRep_CurrentCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerChargeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerChargeComponent_OnRep_CurrentCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerChargeComponent, nullptr, "OnRep_CurrentCharge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerChargeComponent_OnRep_CurrentCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerChargeComponent_OnRep_CurrentCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerChargeComponent_OnRep_CurrentCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerChargeComponent_OnRep_CurrentCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister()
	{
		return UPowerChargeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPowerChargeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forceFullCharge_MetaData[];
#endif
		static void NewProp__forceFullCharge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__forceFullCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currentCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPowerChargeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPowerChargeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerChargeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPowerChargeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPowerChargeComponent_OnCurrentChargeChanged, "OnCurrentChargeChanged" }, // 2665841760
		{ &Z_Construct_UFunction_UPowerChargeComponent_OnRep_CurrentCharge, "OnRep_CurrentCharge" }, // 1775040866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerChargeComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerChargeComponent.h" },
		{ "ModuleRelativePath", "Public/PowerChargeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__forceFullCharge_MetaData[] = {
		{ "ModuleRelativePath", "Public/PowerChargeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__forceFullCharge_SetBit(void* Obj)
	{
		((UPowerChargeComponent*)Obj)->_forceFullCharge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__forceFullCharge = { "_forceFullCharge", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPowerChargeComponent), &Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__forceFullCharge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__forceFullCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__forceFullCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__currentCharge_MetaData[] = {
		{ "ModuleRelativePath", "Public/PowerChargeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__currentCharge = { "_currentCharge", "OnRep_CurrentCharge", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerChargeComponent, _currentCharge), Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue, METADATA_PARAMS(Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__currentCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__currentCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp_OnPowerChargeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/PowerChargeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp_OnPowerChargeChanged = { "OnPowerChargeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerChargeComponent, OnPowerChargeChanged), Z_Construct_UDelegateFunction_DBDGameplay_PowerChargeComponentOnPowerChargeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp_OnPowerChargeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp_OnPowerChargeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerChargeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__forceFullCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp__currentCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerChargeComponent_Statics::NewProp_OnPowerChargeChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerChargeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerChargeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerChargeComponent_Statics::ClassParams = {
		&UPowerChargeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPowerChargeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerChargeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerChargeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerChargeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerChargeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerChargeComponent, 2822667076);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UPowerChargeComponent>()
	{
		return UPowerChargeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerChargeComponent(Z_Construct_UClass_UPowerChargeComponent, &UPowerChargeComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UPowerChargeComponent"), false, nullptr, nullptr, nullptr);

	void UPowerChargeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__currentCharge(TEXT("_currentCharge"));
		static const FName Name__forceFullCharge(TEXT("_forceFullCharge"));

		const bool bIsValid = true
			&& Name__currentCharge == ClassReps[(int32)ENetFields_Private::_currentCharge].Property->GetFName()
			&& Name__forceFullCharge == ClassReps[(int32)ENetFields_Private::_forceFullCharge].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPowerChargeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerChargeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
