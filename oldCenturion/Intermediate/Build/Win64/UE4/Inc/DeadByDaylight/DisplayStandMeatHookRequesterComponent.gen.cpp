// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DisplayStandMeatHookRequesterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayStandMeatHookRequesterComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCharmIdSlot();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMenuMeatHook_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDisplayStandMeatHookRequesterComponent::execOnMeatHookDisplayed)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_TARRAY(FCharmIdSlot,Z_Param_charmIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMeatHookDisplayed(Z_Param_actor,Z_Param_charmIDs);
		P_NATIVE_END;
	}
	void UDisplayStandMeatHookRequesterComponent::StaticRegisterNativesUDisplayStandMeatHookRequesterComponent()
	{
		UClass* Class = UDisplayStandMeatHookRequesterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMeatHookDisplayed", &UDisplayStandMeatHookRequesterComponent::execOnMeatHookDisplayed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics
	{
		struct DisplayStandMeatHookRequesterComponent_eventOnMeatHookDisplayed_Parms
		{
			AActor* actor;
			TArray<FCharmIdSlot> charmIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_charmIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_charmIDs_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::NewProp_charmIDs = { "charmIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisplayStandMeatHookRequesterComponent_eventOnMeatHookDisplayed_Parms, charmIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::NewProp_charmIDs_Inner = { "charmIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmIdSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisplayStandMeatHookRequesterComponent_eventOnMeatHookDisplayed_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::NewProp_charmIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::NewProp_charmIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayStandMeatHookRequesterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent, nullptr, "OnMeatHookDisplayed", nullptr, nullptr, sizeof(DisplayStandMeatHookRequesterComponent_eventOnMeatHookDisplayed_Parms), Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_NoRegister()
	{
		return UDisplayStandMeatHookRequesterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meatHookClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__meatHookClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayStandMeatHookRequesterComponent_OnMeatHookDisplayed, "OnMeatHookDisplayed" }, // 1764837750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisplayStandMeatHookRequesterComponent.h" },
		{ "ModuleRelativePath", "Public/DisplayStandMeatHookRequesterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::NewProp__meatHookClass_MetaData[] = {
		{ "Category", "DisplayStandMeatHookRequesterComponent" },
		{ "ModuleRelativePath", "Public/DisplayStandMeatHookRequesterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::NewProp__meatHookClass = { "_meatHookClass", nullptr, (EPropertyFlags)0x0044000000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandMeatHookRequesterComponent, _meatHookClass), Z_Construct_UClass_AMenuMeatHook_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::NewProp__meatHookClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::NewProp__meatHookClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::NewProp__meatHookClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayStandMeatHookRequesterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::ClassParams = {
		&UDisplayStandMeatHookRequesterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisplayStandMeatHookRequesterComponent, 685652056);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDisplayStandMeatHookRequesterComponent>()
	{
		return UDisplayStandMeatHookRequesterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisplayStandMeatHookRequesterComponent(Z_Construct_UClass_UDisplayStandMeatHookRequesterComponent, &UDisplayStandMeatHookRequesterComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDisplayStandMeatHookRequesterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayStandMeatHookRequesterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
