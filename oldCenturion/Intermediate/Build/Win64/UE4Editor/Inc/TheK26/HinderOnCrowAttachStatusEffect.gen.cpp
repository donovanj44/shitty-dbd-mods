// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/HinderOnCrowAttachStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHinderOnCrowAttachStatusEffect() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UHinderOnCrowAttachStatusEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseLingeringStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UHinderOnCrowAttachStatusEffect::execOnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	void UHinderOnCrowAttachStatusEffect::StaticRegisterNativesUHinderOnCrowAttachStatusEffect()
	{
		UClass* Class = UHinderOnCrowAttachStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerSet", &UHinderOnCrowAttachStatusEffect::execOnKillerSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics
	{
		struct HinderOnCrowAttachStatusEffect_eventOnKillerSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HinderOnCrowAttachStatusEffect_eventOnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HinderOnCrowAttachStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHinderOnCrowAttachStatusEffect, nullptr, "OnKillerSet", nullptr, nullptr, sizeof(HinderOnCrowAttachStatusEffect_eventOnKillerSet_Parms), Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_NoRegister()
	{
		return UHinderOnCrowAttachStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hinderOnIdleLingerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hinderOnIdleLingerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onCrowAttachStateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__onCrowAttachStateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLingeringStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHinderOnCrowAttachStatusEffect_OnKillerSet, "OnKillerSet" }, // 4041271524
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HinderOnCrowAttachStatusEffect.h" },
		{ "ModuleRelativePath", "Public/HinderOnCrowAttachStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__hinderOnIdleLingerTime_MetaData[] = {
		{ "Category", "HinderOnCrowAttachStatusEffect" },
		{ "ModuleRelativePath", "Public/HinderOnCrowAttachStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__hinderOnIdleLingerTime = { "_hinderOnIdleLingerTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHinderOnCrowAttachStatusEffect, _hinderOnIdleLingerTime), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__hinderOnIdleLingerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__hinderOnIdleLingerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag_MetaData[] = {
		{ "Category", "HinderOnCrowAttachStatusEffect" },
		{ "ModuleRelativePath", "Public/HinderOnCrowAttachStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag = { "_onCrowAttachStateTag", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHinderOnCrowAttachStatusEffect, _onCrowAttachStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__hinderOnIdleLingerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHinderOnCrowAttachStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::ClassParams = {
		&UHinderOnCrowAttachStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHinderOnCrowAttachStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHinderOnCrowAttachStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHinderOnCrowAttachStatusEffect, 2970326798);
	template<> THEK26_API UClass* StaticClass<UHinderOnCrowAttachStatusEffect>()
	{
		return UHinderOnCrowAttachStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHinderOnCrowAttachStatusEffect(Z_Construct_UClass_UHinderOnCrowAttachStatusEffect, &UHinderOnCrowAttachStatusEffect::StaticClass, TEXT("/Script/TheK26"), TEXT("UHinderOnCrowAttachStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHinderOnCrowAttachStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
