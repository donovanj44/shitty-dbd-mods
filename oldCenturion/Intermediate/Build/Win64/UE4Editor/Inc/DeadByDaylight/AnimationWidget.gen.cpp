// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AnimationWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationWidget::execGetPlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationWidget::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_rate);
		P_NATIVE_END;
	}
	void UAnimationWidget::StaticRegisterNativesUAnimationWidget()
	{
		UClass* Class = UAnimationWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayRate", &UAnimationWidget::execGetPlayRate },
			{ "SetPlayRate", &UAnimationWidget::execSetPlayRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics
	{
		struct AnimationWidget_eventGetPlayRate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationWidget_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationWidget, nullptr, "GetPlayRate", nullptr, nullptr, sizeof(AnimationWidget_eventGetPlayRate_Parms), Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationWidget_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationWidget_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics
	{
		struct AnimationWidget_eventSetPlayRate_Parms
		{
			float rate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::NewProp_rate = { "rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationWidget_eventSetPlayRate_Parms, rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::NewProp_rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationWidget, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(AnimationWidget_eventSetPlayRate_Parms), Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationWidget_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationWidget_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationWidget_NoRegister()
	{
		return UAnimationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__playRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationWidget_GetPlayRate, "GetPlayRate" }, // 703906958
		{ &Z_Construct_UFunction_UAnimationWidget_SetPlayRate, "SetPlayRate" }, // 3017217956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationWidget.h" },
		{ "ModuleRelativePath", "Public/AnimationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationWidget_Statics::NewProp__playRate_MetaData[] = {
		{ "Category", "AnimationWidget" },
		{ "ModuleRelativePath", "Public/AnimationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationWidget_Statics::NewProp__playRate = { "_playRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationWidget, _playRate), METADATA_PARAMS(Z_Construct_UClass_UAnimationWidget_Statics::NewProp__playRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidget_Statics::NewProp__playRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationWidget_Statics::NewProp__playRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationWidget_Statics::ClassParams = {
		&UAnimationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationWidget, 2476609388);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAnimationWidget>()
	{
		return UAnimationWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationWidget(Z_Construct_UClass_UAnimationWidget, &UAnimationWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAnimationWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
