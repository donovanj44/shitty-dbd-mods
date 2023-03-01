// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ChaseeCharacterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaseeCharacterComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChaseeCharacterComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChaseeCharacterComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChaseComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UChaseeCharacterComponent::execAuthority_OnGeneratorPercentChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentCompletionChange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalPercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnGeneratorPercentChanged(Z_Param_chargeableComponent,Z_Param_percentCompletionChange,Z_Param_totalPercentComplete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaseeCharacterComponent::execAuthority_OnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UChaseeCharacterComponent::StaticRegisterNativesUChaseeCharacterComponent()
	{
		UClass* Class = UChaseeCharacterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnGeneratorPercentChanged", &UChaseeCharacterComponent::execAuthority_OnGeneratorPercentChanged },
			{ "Authority_OnLevelReadyToPlay", &UChaseeCharacterComponent::execAuthority_OnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics
	{
		struct ChaseeCharacterComponent_eventAuthority_OnGeneratorPercentChanged_Parms
		{
			UChargeableComponent* chargeableComponent;
			float percentCompletionChange;
			float totalPercentComplete;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalPercentComplete;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentCompletionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::NewProp_totalPercentComplete = { "totalPercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaseeCharacterComponent_eventAuthority_OnGeneratorPercentChanged_Parms, totalPercentComplete), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::NewProp_percentCompletionChange = { "percentCompletionChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaseeCharacterComponent_eventAuthority_OnGeneratorPercentChanged_Parms, percentCompletionChange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaseeCharacterComponent_eventAuthority_OnGeneratorPercentChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::NewProp_totalPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::NewProp_percentCompletionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaseeCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaseeCharacterComponent, nullptr, "Authority_OnGeneratorPercentChanged", nullptr, nullptr, sizeof(ChaseeCharacterComponent_eventAuthority_OnGeneratorPercentChanged_Parms), Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaseeCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaseeCharacterComponent, nullptr, "Authority_OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChaseeCharacterComponent_NoRegister()
	{
		return UChaseeCharacterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChaseeCharacterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaseeCharacterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaseeCharacterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnGeneratorPercentChanged, "Authority_OnGeneratorPercentChanged" }, // 1078771489
		{ &Z_Construct_UFunction_UChaseeCharacterComponent_Authority_OnLevelReadyToPlay, "Authority_OnLevelReadyToPlay" }, // 1091439964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaseeCharacterComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaseeCharacterComponent.h" },
		{ "ModuleRelativePath", "Public/ChaseeCharacterComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaseeCharacterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaseeCharacterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaseeCharacterComponent_Statics::ClassParams = {
		&UChaseeCharacterComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaseeCharacterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaseeCharacterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaseeCharacterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaseeCharacterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaseeCharacterComponent, 2676143807);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UChaseeCharacterComponent>()
	{
		return UChaseeCharacterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaseeCharacterComponent(Z_Construct_UClass_UChaseeCharacterComponent, &UChaseeCharacterComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UChaseeCharacterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaseeCharacterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
