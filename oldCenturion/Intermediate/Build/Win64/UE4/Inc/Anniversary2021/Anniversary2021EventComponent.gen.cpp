// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anniversary2021/Public/Anniversary2021EventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnniversary2021EventComponent() {}
// Cross Module References
	ANNIVERSARY2021_API UClass* Z_Construct_UClass_UAnniversary2021EventComponent_NoRegister();
	ANNIVERSARY2021_API UClass* Z_Construct_UClass_UAnniversary2021EventComponent();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawningEventComponent();
	UPackage* Z_Construct_UPackage__Script_Anniversary2021();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_UTimedRespawnableTrigger_NoRegister();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_UInteractionRespawnableTrigger_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnniversary2021EventComponent::execAuthority_OnIntroComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnIntroComplete();
		P_NATIVE_END;
	}
	void UAnniversary2021EventComponent::StaticRegisterNativesUAnniversary2021EventComponent()
	{
		UClass* Class = UAnniversary2021EventComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnIntroComplete", &UAnniversary2021EventComponent::execAuthority_OnIntroComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnniversary2021EventComponent_Authority_OnIntroComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnniversary2021EventComponent_Authority_OnIntroComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anniversary2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnniversary2021EventComponent_Authority_OnIntroComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnniversary2021EventComponent, nullptr, "Authority_OnIntroComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnniversary2021EventComponent_Authority_OnIntroComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnniversary2021EventComponent_Authority_OnIntroComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnniversary2021EventComponent_Authority_OnIntroComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnniversary2021EventComponent_Authority_OnIntroComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnniversary2021EventComponent_NoRegister()
	{
		return UAnniversary2021EventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAnniversary2021EventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timedRespawnableTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__timedRespawnableTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionRespawnableTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactionRespawnableTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnniversary2021EventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URespawningEventComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Anniversary2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnniversary2021EventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnniversary2021EventComponent_Authority_OnIntroComplete, "Authority_OnIntroComplete" }, // 1404813227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnniversary2021EventComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Anniversary2021EventComponent.h" },
		{ "ModuleRelativePath", "Public/Anniversary2021EventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__timedRespawnableTrigger_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anniversary2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__timedRespawnableTrigger = { "_timedRespawnableTrigger", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnniversary2021EventComponent, _timedRespawnableTrigger), Z_Construct_UClass_UTimedRespawnableTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__timedRespawnableTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__timedRespawnableTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__interactionRespawnableTrigger_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anniversary2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__interactionRespawnableTrigger = { "_interactionRespawnableTrigger", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnniversary2021EventComponent, _interactionRespawnableTrigger), Z_Construct_UClass_UInteractionRespawnableTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__interactionRespawnableTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__interactionRespawnableTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnniversary2021EventComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__timedRespawnableTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnniversary2021EventComponent_Statics::NewProp__interactionRespawnableTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnniversary2021EventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnniversary2021EventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnniversary2021EventComponent_Statics::ClassParams = {
		&UAnniversary2021EventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnniversary2021EventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnniversary2021EventComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnniversary2021EventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnniversary2021EventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnniversary2021EventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnniversary2021EventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnniversary2021EventComponent, 2135753218);
	template<> ANNIVERSARY2021_API UClass* StaticClass<UAnniversary2021EventComponent>()
	{
		return UAnniversary2021EventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnniversary2021EventComponent(Z_Construct_UClass_UAnniversary2021EventComponent, &UAnniversary2021EventComponent::StaticClass, TEXT("/Script/Anniversary2021"), TEXT("UAnniversary2021EventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnniversary2021EventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
