// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoadingScreenScaleform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenScaleform() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadingScreenScaleform_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadingScreenScaleform();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadingScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(ULoadingScreenScaleform::execOnLoadingTextTimerComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadingTextTimerComplete();
		P_NATIVE_END;
	}
	void ULoadingScreenScaleform::StaticRegisterNativesULoadingScreenScaleform()
	{
		UClass* Class = ULoadingScreenScaleform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoadingTextTimerComplete", &ULoadingScreenScaleform::execOnLoadingTextTimerComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadingScreenScaleform_OnLoadingTextTimerComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingScreenScaleform_OnLoadingTextTimerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingScreenScaleform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenScaleform_OnLoadingTextTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenScaleform, nullptr, "OnLoadingTextTimerComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingScreenScaleform_OnLoadingTextTimerComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenScaleform_OnLoadingTextTimerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingScreenScaleform_OnLoadingTextTimerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingScreenScaleform_OnLoadingTextTimerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadingScreenScaleform_NoRegister()
	{
		return ULoadingScreenScaleform::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenScaleform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenScaleform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULoadingScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadingScreenScaleform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadingScreenScaleform_OnLoadingTextTimerComplete, "OnLoadingTextTimerComplete" }, // 1343587058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenScaleform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadingScreenScaleform.h" },
		{ "ModuleRelativePath", "Public/LoadingScreenScaleform.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenScaleform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenScaleform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenScaleform_Statics::ClassParams = {
		&ULoadingScreenScaleform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenScaleform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenScaleform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenScaleform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenScaleform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenScaleform, 2338477121);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULoadingScreenScaleform>()
	{
		return ULoadingScreenScaleform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenScaleform(Z_Construct_UClass_ULoadingScreenScaleform, &ULoadingScreenScaleform::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULoadingScreenScaleform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenScaleform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
