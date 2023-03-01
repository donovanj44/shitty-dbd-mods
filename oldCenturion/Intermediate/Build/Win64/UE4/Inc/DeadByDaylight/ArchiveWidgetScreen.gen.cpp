// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchiveWidgetScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveWidgetScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveWidgetScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveWidgetScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveWidgetScreen::execOnQuestsButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestsButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveWidgetScreen::execOnRewardsButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardsButtonClick();
		P_NATIVE_END;
	}
	void UArchiveWidgetScreen::StaticRegisterNativesUArchiveWidgetScreen()
	{
		UClass* Class = UArchiveWidgetScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuestsButtonClick", &UArchiveWidgetScreen::execOnQuestsButtonClick },
			{ "OnRewardsButtonClick", &UArchiveWidgetScreen::execOnRewardsButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveWidgetScreen_OnQuestsButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveWidgetScreen_OnQuestsButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveWidgetScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveWidgetScreen_OnQuestsButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveWidgetScreen, nullptr, "OnQuestsButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveWidgetScreen_OnQuestsButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveWidgetScreen_OnQuestsButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveWidgetScreen_OnQuestsButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveWidgetScreen_OnQuestsButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveWidgetScreen_OnRewardsButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveWidgetScreen_OnRewardsButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveWidgetScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveWidgetScreen_OnRewardsButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveWidgetScreen, nullptr, "OnRewardsButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveWidgetScreen_OnRewardsButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveWidgetScreen_OnRewardsButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveWidgetScreen_OnRewardsButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveWidgetScreen_OnRewardsButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveWidgetScreen_NoRegister()
	{
		return UArchiveWidgetScreen::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveWidgetScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveWidgetScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveWidgetScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveWidgetScreen_OnQuestsButtonClick, "OnQuestsButtonClick" }, // 2713273553
		{ &Z_Construct_UFunction_UArchiveWidgetScreen_OnRewardsButtonClick, "OnRewardsButtonClick" }, // 3775707299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveWidgetScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchiveWidgetScreen.h" },
		{ "ModuleRelativePath", "Public/ArchiveWidgetScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveWidgetScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveWidgetScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveWidgetScreen_Statics::ClassParams = {
		&UArchiveWidgetScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveWidgetScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveWidgetScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveWidgetScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveWidgetScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveWidgetScreen, 92958082);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArchiveWidgetScreen>()
	{
		return UArchiveWidgetScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveWidgetScreen(Z_Construct_UClass_UArchiveWidgetScreen, &UArchiveWidgetScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArchiveWidgetScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveWidgetScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
