// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SelectiveVisibilityComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectiveVisibilityComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USelectiveVisibilityComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USelectiveVisibilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(USelectiveVisibilityComponent::execLocal_SetVisibility)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_UBOOL(Z_Param_bPropagateToChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_SetVisibility(Z_Param_bNewVisibility,Z_Param_bPropagateToChildren);
		P_NATIVE_END;
	}
	void USelectiveVisibilityComponent::StaticRegisterNativesUSelectiveVisibilityComponent()
	{
		UClass* Class = USelectiveVisibilityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Local_SetVisibility", &USelectiveVisibilityComponent::execLocal_SetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics
	{
		struct SelectiveVisibilityComponent_eventLocal_SetVisibility_Parms
		{
			bool bNewVisibility;
			bool bPropagateToChildren;
		};
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((SelectiveVisibilityComponent_eventLocal_SetVisibility_Parms*)Obj)->bPropagateToChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SelectiveVisibilityComponent_eventLocal_SetVisibility_Parms), &Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((SelectiveVisibilityComponent_eventLocal_SetVisibility_Parms*)Obj)->bNewVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SelectiveVisibilityComponent_eventLocal_SetVisibility_Parms), &Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::NewProp_bPropagateToChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectiveVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectiveVisibilityComponent, nullptr, "Local_SetVisibility", nullptr, nullptr, sizeof(SelectiveVisibilityComponent_eventLocal_SetVisibility_Parms), Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USelectiveVisibilityComponent_NoRegister()
	{
		return USelectiveVisibilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_USelectiveVisibilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectiveVisibilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectiveVisibilityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectiveVisibilityComponent_Local_SetVisibility, "Local_SetVisibility" }, // 3614315053
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectiveVisibilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SelectiveVisibilityComponent.h" },
		{ "ModuleRelativePath", "Public/SelectiveVisibilityComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectiveVisibilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectiveVisibilityComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelectiveVisibilityComponent_Statics::ClassParams = {
		&USelectiveVisibilityComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USelectiveVisibilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveVisibilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectiveVisibilityComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelectiveVisibilityComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelectiveVisibilityComponent, 1690017428);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USelectiveVisibilityComponent>()
	{
		return USelectiveVisibilityComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelectiveVisibilityComponent(Z_Construct_UClass_USelectiveVisibilityComponent, &USelectiveVisibilityComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USelectiveVisibilityComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectiveVisibilityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
