// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/ChainPlayerMovementStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainPlayerMovementStatusEffect() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainPlayerMovementStatusEffect_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainPlayerMovementStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_ARifleChain_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UChainPlayerMovementStatusEffect::execOnIsChainCollidingChanged)
	{
		P_GET_UBOOL(Z_Param_isColliding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIsChainCollidingChanged(Z_Param_isColliding);
		P_NATIVE_END;
	}
	void UChainPlayerMovementStatusEffect::StaticRegisterNativesUChainPlayerMovementStatusEffect()
	{
		UClass* Class = UChainPlayerMovementStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnIsChainCollidingChanged", &UChainPlayerMovementStatusEffect::execOnIsChainCollidingChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics
	{
		struct ChainPlayerMovementStatusEffect_eventOnIsChainCollidingChanged_Parms
		{
			bool isColliding;
		};
		static void NewProp_isColliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isColliding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::NewProp_isColliding_SetBit(void* Obj)
	{
		((ChainPlayerMovementStatusEffect_eventOnIsChainCollidingChanged_Parms*)Obj)->isColliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::NewProp_isColliding = { "isColliding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChainPlayerMovementStatusEffect_eventOnIsChainCollidingChanged_Parms), &Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::NewProp_isColliding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::NewProp_isColliding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChainPlayerMovementStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChainPlayerMovementStatusEffect, nullptr, "OnIsChainCollidingChanged", nullptr, nullptr, sizeof(ChainPlayerMovementStatusEffect_eventOnIsChainCollidingChanged_Parms), Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChainPlayerMovementStatusEffect_NoRegister()
	{
		return UChainPlayerMovementStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionMovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__collisionMovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseMovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseMovementSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged, "OnIsChainCollidingChanged" }, // 1653018830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChainPlayerMovementStatusEffect.h" },
		{ "ModuleRelativePath", "Public/ChainPlayerMovementStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__chain_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainPlayerMovementStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__chain = { "_chain", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainPlayerMovementStatusEffect, _chain), Z_Construct_UClass_ARifleChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__chain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__collisionMovementSpeedMultiplier_MetaData[] = {
		{ "Category", "ChainPlayerMovementStatusEffect" },
		{ "ModuleRelativePath", "Public/ChainPlayerMovementStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__collisionMovementSpeedMultiplier = { "_collisionMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainPlayerMovementStatusEffect, _collisionMovementSpeedMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__collisionMovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__collisionMovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__baseMovementSpeedMultiplier_MetaData[] = {
		{ "Category", "ChainPlayerMovementStatusEffect" },
		{ "ModuleRelativePath", "Public/ChainPlayerMovementStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__baseMovementSpeedMultiplier = { "_baseMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainPlayerMovementStatusEffect, _baseMovementSpeedMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__baseMovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__baseMovementSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__chain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__collisionMovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::NewProp__baseMovementSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChainPlayerMovementStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::ClassParams = {
		&UChainPlayerMovementStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChainPlayerMovementStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChainPlayerMovementStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChainPlayerMovementStatusEffect, 3596045672);
	template<> THEGUNSLINGER_API UClass* StaticClass<UChainPlayerMovementStatusEffect>()
	{
		return UChainPlayerMovementStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChainPlayerMovementStatusEffect(Z_Construct_UClass_UChainPlayerMovementStatusEffect, &UChainPlayerMovementStatusEffect::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UChainPlayerMovementStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChainPlayerMovementStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
