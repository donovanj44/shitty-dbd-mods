// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchiveTierPurchasePopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveTierPurchasePopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveTierPurchasePopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveTierPurchasePopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveTierPurchasePopupScreen::execOnConfirmPurchase)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tiersToPurchaseNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmPurchase(Z_Param_tiersToPurchaseNumber);
		P_NATIVE_END;
	}
	void UArchiveTierPurchasePopupScreen::StaticRegisterNativesUArchiveTierPurchasePopupScreen()
	{
		UClass* Class = UArchiveTierPurchasePopupScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConfirmPurchase", &UArchiveTierPurchasePopupScreen::execOnConfirmPurchase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics
	{
		struct ArchiveTierPurchasePopupScreen_eventOnConfirmPurchase_Parms
		{
			int32 tiersToPurchaseNumber;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tiersToPurchaseNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::NewProp_tiersToPurchaseNumber = { "tiersToPurchaseNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTierPurchasePopupScreen_eventOnConfirmPurchase_Parms, tiersToPurchaseNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::NewProp_tiersToPurchaseNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTierPurchasePopupScreen, nullptr, "OnConfirmPurchase", nullptr, nullptr, sizeof(ArchiveTierPurchasePopupScreen_eventOnConfirmPurchase_Parms), Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveTierPurchasePopupScreen_NoRegister()
	{
		return UArchiveTierPurchasePopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveTierPurchasePopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveTierPurchasePopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveTierPurchasePopupScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveTierPurchasePopupScreen_OnConfirmPurchase, "OnConfirmPurchase" }, // 3862807332
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchiveTierPurchasePopupScreen.h" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveTierPurchasePopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveTierPurchasePopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveTierPurchasePopupScreen_Statics::ClassParams = {
		&UArchiveTierPurchasePopupScreen::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveTierPurchasePopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveTierPurchasePopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveTierPurchasePopupScreen, 2259775216);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArchiveTierPurchasePopupScreen>()
	{
		return UArchiveTierPurchasePopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveTierPurchasePopupScreen(Z_Construct_UClass_UArchiveTierPurchasePopupScreen, &UArchiveTierPurchasePopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArchiveTierPurchasePopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveTierPurchasePopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
