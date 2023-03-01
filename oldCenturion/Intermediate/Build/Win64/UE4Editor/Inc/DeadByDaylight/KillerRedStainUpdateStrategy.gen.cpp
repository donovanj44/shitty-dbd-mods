// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerRedStainUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerRedStainUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerRedStainUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerRedStainUpdateStrategy();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UKillerRedStainUpdateStrategy::execOnHeadHiddenChanged)
	{
		P_GET_UBOOL(Z_Param_isHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeadHiddenChanged(Z_Param_isHidden);
		P_NATIVE_END;
	}
	void UKillerRedStainUpdateStrategy::StaticRegisterNativesUKillerRedStainUpdateStrategy()
	{
		UClass* Class = UKillerRedStainUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHeadHiddenChanged", &UKillerRedStainUpdateStrategy::execOnHeadHiddenChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics
	{
		struct KillerRedStainUpdateStrategy_eventOnHeadHiddenChanged_Parms
		{
			bool isHidden;
		};
		static void NewProp_isHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::NewProp_isHidden_SetBit(void* Obj)
	{
		((KillerRedStainUpdateStrategy_eventOnHeadHiddenChanged_Parms*)Obj)->isHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::NewProp_isHidden = { "isHidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillerRedStainUpdateStrategy_eventOnHeadHiddenChanged_Parms), &Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::NewProp_isHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::NewProp_isHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerRedStainUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerRedStainUpdateStrategy, nullptr, "OnHeadHiddenChanged", nullptr, nullptr, sizeof(KillerRedStainUpdateStrategy_eventOnHeadHiddenChanged_Parms), Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerRedStainUpdateStrategy_NoRegister()
	{
		return UKillerRedStainUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hideRedStainStateTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hideRedStainStateTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stealthRatioToRedStainIntensityCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stealthRatioToRedStainIntensityCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerRedStainUpdateStrategy_OnHeadHiddenChanged, "OnHeadHiddenChanged" }, // 1875900513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerRedStainUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/KillerRedStainUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__hideRedStainStateTags_MetaData[] = {
		{ "Category", "KillerRedStainUpdateStrategy" },
		{ "ModuleRelativePath", "Public/KillerRedStainUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__hideRedStainStateTags = { "_hideRedStainStateTags", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerRedStainUpdateStrategy, _hideRedStainStateTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__hideRedStainStateTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__hideRedStainStateTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__stealthRatioToRedStainIntensityCurve_MetaData[] = {
		{ "Category", "KillerRedStainUpdateStrategy" },
		{ "ModuleRelativePath", "Public/KillerRedStainUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__stealthRatioToRedStainIntensityCurve = { "_stealthRatioToRedStainIntensityCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerRedStainUpdateStrategy, _stealthRatioToRedStainIntensityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__stealthRatioToRedStainIntensityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__stealthRatioToRedStainIntensityCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__hideRedStainStateTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::NewProp__stealthRatioToRedStainIntensityCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerRedStainUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::ClassParams = {
		&UKillerRedStainUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerRedStainUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerRedStainUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerRedStainUpdateStrategy, 2440768178);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerRedStainUpdateStrategy>()
	{
		return UKillerRedStainUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerRedStainUpdateStrategy(Z_Construct_UClass_UKillerRedStainUpdateStrategy, &UKillerRedStainUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerRedStainUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerRedStainUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
