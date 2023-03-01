// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyProgressBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyProgressBar() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyProgressBar_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyProgressBar();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyPip_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGTallyProgressBar::execGetPipsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPipsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyProgressBar::execSetPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPercent(Z_Param_value);
		P_NATIVE_END;
	}
	void UUMGTallyProgressBar::StaticRegisterNativesUUMGTallyProgressBar()
	{
		UClass* Class = UUMGTallyProgressBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPipsCount", &UUMGTallyProgressBar::execGetPipsCount },
			{ "SetPercent", &UUMGTallyProgressBar::execSetPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics
	{
		struct UMGTallyProgressBar_eventGetPipsCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyProgressBar_eventGetPipsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyProgressBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyProgressBar, nullptr, "GetPipsCount", nullptr, nullptr, sizeof(UMGTallyProgressBar_eventGetPipsCount_Parms), Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics
	{
		struct UMGTallyProgressBar_eventSetPercent_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyProgressBar_eventSetPercent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyProgressBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyProgressBar, nullptr, "SetPercent", nullptr, nullptr, sizeof(UMGTallyProgressBar_eventSetPercent_Parms), Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyProgressBar_NoRegister()
	{
		return UUMGTallyProgressBar::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyProgressBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pipsAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pipsAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pipsClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pipsClasses;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__pipsClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyProgressBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyProgressBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyProgressBar_GetPipsCount, "GetPipsCount" }, // 1094981977
		{ &Z_Construct_UFunction_UUMGTallyProgressBar_SetPercent, "SetPercent" }, // 929650073
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyProgressBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyProgressBar.h" },
		{ "ModuleRelativePath", "Public/UMGTallyProgressBar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsAlignment_MetaData[] = {
		{ "Category", "UMGTallyProgressBar" },
		{ "ModuleRelativePath", "Public/UMGTallyProgressBar.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsAlignment = { "_pipsAlignment", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyProgressBar, _pipsAlignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsClasses_MetaData[] = {
		{ "Category", "UMGTallyProgressBar" },
		{ "ModuleRelativePath", "Public/UMGTallyProgressBar.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsClasses = { "_pipsClasses", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyProgressBar, _pipsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsClasses_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsClasses_Inner = { "_pipsClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGTallyPip_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_PipsContainer_MetaData[] = {
		{ "Category", "UMGTallyProgressBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyProgressBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_PipsContainer = { "PipsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyProgressBar, PipsContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_PipsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_PipsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "Category", "UMGTallyProgressBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyProgressBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyProgressBar, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_ProgressBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp__pipsClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_PipsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyProgressBar_Statics::NewProp_ProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyProgressBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyProgressBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyProgressBar_Statics::ClassParams = {
		&UUMGTallyProgressBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyProgressBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyProgressBar_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyProgressBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyProgressBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyProgressBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyProgressBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyProgressBar, 2434772213);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyProgressBar>()
	{
		return UUMGTallyProgressBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyProgressBar(Z_Construct_UClass_UUMGTallyProgressBar, &UUMGTallyProgressBar::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyProgressBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyProgressBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
