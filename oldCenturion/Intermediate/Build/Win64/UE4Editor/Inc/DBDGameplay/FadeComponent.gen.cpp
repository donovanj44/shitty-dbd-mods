// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/FadeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFadeComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFadeComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFadeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics
	{
		struct _Script_DBDGameplay_eventFadeComponentOnFadePercentChanged_Parms
		{
			float fadePercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadePercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::NewProp_fadePercent = { "fadePercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDGameplay_eventFadeComponentOnFadePercentChanged_Parms, fadePercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::NewProp_fadePercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDGameplay, nullptr, "FadeComponentOnFadePercentChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDGameplay_eventFadeComponentOnFadePercentChanged_Parms), Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFadeComponent::execGetFadePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFadePercent();
		P_NATIVE_END;
	}
	void UFadeComponent::StaticRegisterNativesUFadeComponent()
	{
		UClass* Class = UFadeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFadePercent", &UFadeComponent::execGetFadePercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics
	{
		struct FadeComponent_eventGetFadePercent_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FadeComponent_eventGetFadePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFadeComponent, nullptr, "GetFadePercent", nullptr, nullptr, sizeof(FadeComponent_eventGetFadePercent_Parms), Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFadeComponent_GetFadePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFadeComponent_GetFadePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFadeComponent_NoRegister()
	{
		return UFadeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFadeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fadeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFadePercentChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFadePercentChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFadeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFadeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFadeComponent_GetFadePercent, "GetFadePercent" }, // 4016362282
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFadeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FadeComponent.h" },
		{ "ModuleRelativePath", "Public/FadeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFadeComponent_Statics::NewProp__fadeDuration_MetaData[] = {
		{ "Category", "FadeComponent" },
		{ "ModuleRelativePath", "Public/FadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFadeComponent_Statics::NewProp__fadeDuration = { "_fadeDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFadeComponent, _fadeDuration), METADATA_PARAMS(Z_Construct_UClass_UFadeComponent_Statics::NewProp__fadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFadeComponent_Statics::NewProp__fadeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFadeComponent_Statics::NewProp_OnFadePercentChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/FadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFadeComponent_Statics::NewProp_OnFadePercentChanged = { "OnFadePercentChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFadeComponent, OnFadePercentChanged), Z_Construct_UDelegateFunction_DBDGameplay_FadeComponentOnFadePercentChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFadeComponent_Statics::NewProp_OnFadePercentChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFadeComponent_Statics::NewProp_OnFadePercentChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFadeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFadeComponent_Statics::NewProp__fadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFadeComponent_Statics::NewProp_OnFadePercentChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFadeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFadeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFadeComponent_Statics::ClassParams = {
		&UFadeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFadeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFadeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFadeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFadeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFadeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFadeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFadeComponent, 3676319751);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UFadeComponent>()
	{
		return UFadeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFadeComponent(Z_Construct_UClass_UFadeComponent, &UFadeComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UFadeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFadeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
