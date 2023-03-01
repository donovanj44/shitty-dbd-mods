// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LocalPlayerTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalPlayerTrackerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULocalPlayerTrackerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULocalPlayerTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalPlayerTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULocalPlayerTrackerComponent::execTriggerOnLocallyObservedChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerOnLocallyObservedChanged();
		P_NATIVE_END;
	}
	void ULocalPlayerTrackerComponent::StaticRegisterNativesULocalPlayerTrackerComponent()
	{
		UClass* Class = ULocalPlayerTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerOnLocallyObservedChanged", &ULocalPlayerTrackerComponent::execTriggerOnLocallyObservedChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalPlayerTrackerComponent_TriggerOnLocallyObservedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalPlayerTrackerComponent_TriggerOnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalPlayerTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerTrackerComponent_TriggerOnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerTrackerComponent, nullptr, "TriggerOnLocallyObservedChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalPlayerTrackerComponent_TriggerOnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerTrackerComponent_TriggerOnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalPlayerTrackerComponent_TriggerOnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalPlayerTrackerComponent_TriggerOnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalPlayerTrackerComponent_NoRegister()
	{
		return ULocalPlayerTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackerOnLocallyObservedChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TrackerOnLocallyObservedChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalPlayerTrackerComponent_TriggerOnLocallyObservedChanged, "TriggerOnLocallyObservedChanged" }, // 601975381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LocalPlayerTrackerComponent.h" },
		{ "ModuleRelativePath", "Public/LocalPlayerTrackerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::NewProp_TrackerOnLocallyObservedChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalPlayerTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::NewProp_TrackerOnLocallyObservedChanged = { "TrackerOnLocallyObservedChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalPlayerTrackerComponent, TrackerOnLocallyObservedChanged), Z_Construct_UDelegateFunction_DeadByDaylight_LocalPlayerTrackerComponentTrackerOnLocallyObservedChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::NewProp_TrackerOnLocallyObservedChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::NewProp_TrackerOnLocallyObservedChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::NewProp_TrackerOnLocallyObservedChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalPlayerTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::ClassParams = {
		&ULocalPlayerTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalPlayerTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalPlayerTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalPlayerTrackerComponent, 1362931258);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULocalPlayerTrackerComponent>()
	{
		return ULocalPlayerTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalPlayerTrackerComponent(Z_Construct_UClass_ULocalPlayerTrackerComponent, &ULocalPlayerTrackerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULocalPlayerTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalPlayerTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
