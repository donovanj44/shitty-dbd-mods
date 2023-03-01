// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EventHookComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventHookComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEventHookComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEventHookComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEventObjectComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UEventHookComponent::execSetOutlineCarryingColorToDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutlineCarryingColorToDefault();
		P_NATIVE_END;
	}
	void UEventHookComponent::StaticRegisterNativesUEventHookComponent()
	{
		UClass* Class = UEventHookComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOutlineCarryingColorToDefault", &UEventHookComponent::execSetOutlineCarryingColorToDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventHookComponent_SetOutlineCarryingColorToDefault_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventHookComponent_SetOutlineCarryingColorToDefault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventHookComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventHookComponent_SetOutlineCarryingColorToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventHookComponent, nullptr, "SetOutlineCarryingColorToDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventHookComponent_SetOutlineCarryingColorToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventHookComponent_SetOutlineCarryingColorToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventHookComponent_SetOutlineCarryingColorToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventHookComponent_SetOutlineCarryingColorToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventHookComponent_NoRegister()
	{
		return UEventHookComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEventHookComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventHookComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventObjectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventHookComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventHookComponent_SetOutlineCarryingColorToDefault, "SetOutlineCarryingColorToDefault" }, // 3953356473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventHookComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventHookComponent.h" },
		{ "ModuleRelativePath", "Public/EventHookComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventHookComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventHookComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventHookComponent_Statics::ClassParams = {
		&UEventHookComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventHookComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventHookComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventHookComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventHookComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventHookComponent, 2718580986);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEventHookComponent>()
	{
		return UEventHookComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventHookComponent(Z_Construct_UClass_UEventHookComponent, &UEventHookComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEventHookComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventHookComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
