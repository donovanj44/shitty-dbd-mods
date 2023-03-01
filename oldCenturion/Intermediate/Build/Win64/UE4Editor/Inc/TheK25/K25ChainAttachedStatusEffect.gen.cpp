// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainAttachedStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainAttachedStatusEffect() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainAttachedStatusEffect_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainAttachedStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25ChainAttachedStatusEffect::execOnRep_ChainAttachementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ChainAttachementComponent();
		P_NATIVE_END;
	}
	void UK25ChainAttachedStatusEffect::StaticRegisterNativesUK25ChainAttachedStatusEffect()
	{
		UClass* Class = UK25ChainAttachedStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ChainAttachementComponent", &UK25ChainAttachedStatusEffect::execOnRep_ChainAttachementComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainAttachedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainAttachedStatusEffect, nullptr, "OnRep_ChainAttachementComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25ChainAttachedStatusEffect_NoRegister()
	{
		return UK25ChainAttachedStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedNumberOfChainsAttached_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__cachedNumberOfChainsAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAttachmentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainAttachmentComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__percentageReductionSpeedPerChainCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__percentageReductionSpeedPerChainCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent, "OnRep_ChainAttachementComponent" }, // 2940889612
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainAttachedStatusEffect.h" },
		{ "ModuleRelativePath", "Public/K25ChainAttachedStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__cachedNumberOfChainsAttached_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ChainAttachedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__cachedNumberOfChainsAttached = { "_cachedNumberOfChainsAttached", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainAttachedStatusEffect, _cachedNumberOfChainsAttached), METADATA_PARAMS(Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__cachedNumberOfChainsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__cachedNumberOfChainsAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__chainAttachmentComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25ChainAttachedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__chainAttachmentComponent = { "_chainAttachmentComponent", "OnRep_ChainAttachementComponent", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainAttachedStatusEffect, _chainAttachmentComponent), Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__chainAttachmentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__chainAttachmentComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__percentageReductionSpeedPerChainCurve_MetaData[] = {
		{ "Category", "K25ChainAttachedStatusEffect" },
		{ "ModuleRelativePath", "Public/K25ChainAttachedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__percentageReductionSpeedPerChainCurve = { "_percentageReductionSpeedPerChainCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainAttachedStatusEffect, _percentageReductionSpeedPerChainCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__percentageReductionSpeedPerChainCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__percentageReductionSpeedPerChainCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__cachedNumberOfChainsAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__chainAttachmentComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::NewProp__percentageReductionSpeedPerChainCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainAttachedStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::ClassParams = {
		&UK25ChainAttachedStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainAttachedStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainAttachedStatusEffect, 1394184961);
	template<> THEK25_API UClass* StaticClass<UK25ChainAttachedStatusEffect>()
	{
		return UK25ChainAttachedStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainAttachedStatusEffect(Z_Construct_UClass_UK25ChainAttachedStatusEffect, &UK25ChainAttachedStatusEffect::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainAttachedStatusEffect"), false, nullptr, nullptr, nullptr);

	void UK25ChainAttachedStatusEffect::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__chainAttachmentComponent(TEXT("_chainAttachmentComponent"));

		const bool bIsValid = true
			&& Name__chainAttachmentComponent == ClassReps[(int32)ENetFields_Private::_chainAttachmentComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UK25ChainAttachedStatusEffect"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainAttachedStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
