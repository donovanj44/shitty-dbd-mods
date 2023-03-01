// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchiveBaseScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveBaseScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveBaseScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveBaseScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveBaseScreen::execOnSelectHelpButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectHelpButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveBaseScreen::execOnTabSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTabSelected(Z_Param_index);
		P_NATIVE_END;
	}
	void UArchiveBaseScreen::StaticRegisterNativesUArchiveBaseScreen()
	{
		UClass* Class = UArchiveBaseScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSelectHelpButton", &UArchiveBaseScreen::execOnSelectHelpButton },
			{ "OnTabSelected", &UArchiveBaseScreen::execOnTabSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveBaseScreen_OnSelectHelpButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveBaseScreen_OnSelectHelpButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveBaseScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveBaseScreen_OnSelectHelpButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveBaseScreen, nullptr, "OnSelectHelpButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveBaseScreen_OnSelectHelpButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveBaseScreen_OnSelectHelpButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveBaseScreen_OnSelectHelpButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveBaseScreen_OnSelectHelpButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics
	{
		struct ArchiveBaseScreen_eventOnTabSelected_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveBaseScreen_eventOnTabSelected_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveBaseScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveBaseScreen, nullptr, "OnTabSelected", nullptr, nullptr, sizeof(ArchiveBaseScreen_eventOnTabSelected_Parms), Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveBaseScreen_NoRegister()
	{
		return UArchiveBaseScreen::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveBaseScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveBaseScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveBaseScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveBaseScreen_OnSelectHelpButton, "OnSelectHelpButton" }, // 2200469819
		{ &Z_Construct_UFunction_UArchiveBaseScreen_OnTabSelected, "OnTabSelected" }, // 2122346677
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveBaseScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchiveBaseScreen.h" },
		{ "ModuleRelativePath", "Public/ArchiveBaseScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveBaseScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveBaseScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveBaseScreen_Statics::ClassParams = {
		&UArchiveBaseScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveBaseScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveBaseScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveBaseScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveBaseScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveBaseScreen, 1558850761);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArchiveBaseScreen>()
	{
		return UArchiveBaseScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveBaseScreen(Z_Construct_UClass_UArchiveBaseScreen, &UArchiveBaseScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArchiveBaseScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveBaseScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
