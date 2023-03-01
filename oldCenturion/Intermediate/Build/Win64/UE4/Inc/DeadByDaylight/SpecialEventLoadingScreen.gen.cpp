// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialEventLoadingScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventLoadingScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpecialEventLoadingScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpecialEventLoadingScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(USpecialEventLoadingScreen::execOnLoadingTextTimerComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadingTextTimerComplete();
		P_NATIVE_END;
	}
	void USpecialEventLoadingScreen::StaticRegisterNativesUSpecialEventLoadingScreen()
	{
		UClass* Class = USpecialEventLoadingScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoadingTextTimerComplete", &USpecialEventLoadingScreen::execOnLoadingTextTimerComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpecialEventLoadingScreen_OnLoadingTextTimerComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpecialEventLoadingScreen_OnLoadingTextTimerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpecialEventLoadingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpecialEventLoadingScreen_OnLoadingTextTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpecialEventLoadingScreen, nullptr, "OnLoadingTextTimerComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpecialEventLoadingScreen_OnLoadingTextTimerComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventLoadingScreen_OnLoadingTextTimerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpecialEventLoadingScreen_OnLoadingTextTimerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpecialEventLoadingScreen_OnLoadingTextTimerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpecialEventLoadingScreen_NoRegister()
	{
		return USpecialEventLoadingScreen::StaticClass();
	}
	struct Z_Construct_UClass_USpecialEventLoadingScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpecialEventLoadingScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpecialEventLoadingScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpecialEventLoadingScreen_OnLoadingTextTimerComplete, "OnLoadingTextTimerComplete" }, // 3112301216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpecialEventLoadingScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpecialEventLoadingScreen.h" },
		{ "ModuleRelativePath", "Public/SpecialEventLoadingScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpecialEventLoadingScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpecialEventLoadingScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpecialEventLoadingScreen_Statics::ClassParams = {
		&USpecialEventLoadingScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpecialEventLoadingScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpecialEventLoadingScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpecialEventLoadingScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpecialEventLoadingScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpecialEventLoadingScreen, 1217160113);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USpecialEventLoadingScreen>()
	{
		return USpecialEventLoadingScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpecialEventLoadingScreen(Z_Construct_UClass_USpecialEventLoadingScreen, &USpecialEventLoadingScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USpecialEventLoadingScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpecialEventLoadingScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
