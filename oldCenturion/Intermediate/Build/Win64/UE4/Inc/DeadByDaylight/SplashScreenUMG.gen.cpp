// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SplashScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplashScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USplashScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USplashScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USplashScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSplashScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USplashScreenUMG::execTriggerAnyKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerAnyKey();
		P_NATIVE_END;
	}
	void USplashScreenUMG::StaticRegisterNativesUSplashScreenUMG()
	{
		UClass* Class = USplashScreenUMG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerAnyKey", &USplashScreenUMG::execTriggerAnyKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplashScreenUMG_TriggerAnyKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplashScreenUMG_TriggerAnyKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplashScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreenUMG_TriggerAnyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplashScreenUMG, nullptr, "TriggerAnyKey", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplashScreenUMG_TriggerAnyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreenUMG_TriggerAnyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplashScreenUMG_TriggerAnyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplashScreenUMG_TriggerAnyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USplashScreenUMG_NoRegister()
	{
		return USplashScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_USplashScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__splashScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__splashScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplashScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplashScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USplashScreenUMG_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplashScreenUMG_TriggerAnyKey, "TriggerAnyKey" }, // 3031484441
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplashScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplashScreenUMG.h" },
		{ "ModuleRelativePath", "Public/SplashScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplashScreenUMG_Statics::NewProp__splashScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplashScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplashScreenUMG_Statics::NewProp__splashScreen = { "_splashScreen", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplashScreenUMG, _splashScreen), Z_Construct_UClass_UUMGSplashScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USplashScreenUMG_Statics::NewProp__splashScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplashScreenUMG_Statics::NewProp__splashScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplashScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplashScreenUMG_Statics::NewProp__splashScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplashScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplashScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplashScreenUMG_Statics::ClassParams = {
		&USplashScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USplashScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USplashScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USplashScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplashScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplashScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplashScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplashScreenUMG, 222366615);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USplashScreenUMG>()
	{
		return USplashScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplashScreenUMG(Z_Construct_UClass_USplashScreenUMG, &USplashScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USplashScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplashScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
