// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DemogorgonStealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonStealthComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDemogorgonStealthComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDemogorgonStealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDemogorgonStealthComponent::execAuthority_OnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UDemogorgonStealthComponent::StaticRegisterNativesUDemogorgonStealthComponent()
	{
		UClass* Class = UDemogorgonStealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnLevelReadyToPlay", &UDemogorgonStealthComponent::execAuthority_OnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemogorgonStealthComponent, nullptr, "Authority_OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDemogorgonStealthComponent_NoRegister()
	{
		return UDemogorgonStealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDemogorgonStealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stealthEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__stealthEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemogorgonStealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDemogorgonStealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay, "Authority_OnLevelReadyToPlay" }, // 2871179326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonStealthComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DemogorgonStealthComponent.h" },
		{ "ModuleRelativePath", "Public/DemogorgonStealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonStealthComponent_Statics::NewProp__stealthEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/DemogorgonStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDemogorgonStealthComponent_Statics::NewProp__stealthEffect = { "_stealthEffect", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonStealthComponent, _stealthEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonStealthComponent_Statics::NewProp__stealthEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonStealthComponent_Statics::NewProp__stealthEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemogorgonStealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonStealthComponent_Statics::NewProp__stealthEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemogorgonStealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemogorgonStealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemogorgonStealthComponent_Statics::ClassParams = {
		&UDemogorgonStealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDemogorgonStealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonStealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDemogorgonStealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonStealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemogorgonStealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemogorgonStealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemogorgonStealthComponent, 231675605);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDemogorgonStealthComponent>()
	{
		return UDemogorgonStealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemogorgonStealthComponent(Z_Construct_UClass_UDemogorgonStealthComponent, &UDemogorgonStealthComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDemogorgonStealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemogorgonStealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
