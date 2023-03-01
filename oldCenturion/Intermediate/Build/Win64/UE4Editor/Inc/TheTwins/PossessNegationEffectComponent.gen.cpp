// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/PossessNegationEffectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePossessNegationEffectComponent() {}
// Cross Module References
	THETWINS_API UFunction* Z_Construct_UDelegateFunction_TheTwins_PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_UPossessNegationEffectComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UPossessNegationEffectComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheTwins_PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheTwins_PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessNegationEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheTwins_PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheTwins, nullptr, "PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheTwins_PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheTwins_PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheTwins_PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheTwins_PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPossessNegationEffectComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UPossessNegationEffectComponent::StaticRegisterNativesUPossessNegationEffectComponent()
	{
		UClass* Class = UPossessNegationEffectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UPossessNegationEffectComponent::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPossessNegationEffectComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessNegationEffectComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessNegationEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessNegationEffectComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessNegationEffectComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessNegationEffectComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessNegationEffectComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessNegationEffectComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessNegationEffectComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPossessNegationEffectComponent_NoRegister()
	{
		return UPossessNegationEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPossessNegationEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCantPossessSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayCantPossessSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPossessNegationEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPossessNegationEffectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPossessNegationEffectComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 3837365334
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPossessNegationEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PossessNegationEffectComponent.h" },
		{ "ModuleRelativePath", "Public/PossessNegationEffectComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPossessNegationEffectComponent_Statics::NewProp_PlayCantPossessSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/PossessNegationEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPossessNegationEffectComponent_Statics::NewProp_PlayCantPossessSound = { "PlayCantPossessSound", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPossessNegationEffectComponent, PlayCantPossessSound), Z_Construct_UDelegateFunction_TheTwins_PossessNegationEffectComponentPlayCantPossessSound__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPossessNegationEffectComponent_Statics::NewProp_PlayCantPossessSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPossessNegationEffectComponent_Statics::NewProp_PlayCantPossessSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPossessNegationEffectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPossessNegationEffectComponent_Statics::NewProp_PlayCantPossessSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPossessNegationEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPossessNegationEffectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPossessNegationEffectComponent_Statics::ClassParams = {
		&UPossessNegationEffectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPossessNegationEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPossessNegationEffectComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPossessNegationEffectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPossessNegationEffectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPossessNegationEffectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPossessNegationEffectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPossessNegationEffectComponent, 3912074211);
	template<> THETWINS_API UClass* StaticClass<UPossessNegationEffectComponent>()
	{
		return UPossessNegationEffectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPossessNegationEffectComponent(Z_Construct_UClass_UPossessNegationEffectComponent, &UPossessNegationEffectComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UPossessNegationEffectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPossessNegationEffectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
