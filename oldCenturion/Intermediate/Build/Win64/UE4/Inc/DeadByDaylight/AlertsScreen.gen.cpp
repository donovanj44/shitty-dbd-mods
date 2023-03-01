// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AlertsScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlertsScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAlertsScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAlertsScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UAlertsScreen::execRewardAlertSequenceCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RewardAlertSequenceCompleted();
		P_NATIVE_END;
	}
	void UAlertsScreen::StaticRegisterNativesUAlertsScreen()
	{
		UClass* Class = UAlertsScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RewardAlertSequenceCompleted", &UAlertsScreen::execRewardAlertSequenceCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlertsScreen_RewardAlertSequenceCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlertsScreen_RewardAlertSequenceCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlertsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlertsScreen_RewardAlertSequenceCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlertsScreen, nullptr, "RewardAlertSequenceCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAlertsScreen_RewardAlertSequenceCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlertsScreen_RewardAlertSequenceCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAlertsScreen_RewardAlertSequenceCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAlertsScreen_RewardAlertSequenceCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAlertsScreen_NoRegister()
	{
		return UAlertsScreen::StaticClass();
	}
	struct Z_Construct_UClass_UAlertsScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlertsScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlertsScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlertsScreen_RewardAlertSequenceCompleted, "RewardAlertSequenceCompleted" }, // 1617369186
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlertsScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AlertsScreen.h" },
		{ "ModuleRelativePath", "Public/AlertsScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlertsScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlertsScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAlertsScreen_Statics::ClassParams = {
		&UAlertsScreen::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAlertsScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlertsScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlertsScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAlertsScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAlertsScreen, 2983597249);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAlertsScreen>()
	{
		return UAlertsScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAlertsScreen(Z_Construct_UClass_UAlertsScreen, &UAlertsScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAlertsScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlertsScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
