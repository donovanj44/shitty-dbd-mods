// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchiveRewardsScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveRewardsScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveRewardsScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveRewardsScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveBaseScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveRewardsScreen::execOnPurchasePremiumPass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPurchasePremiumPass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveRewardsScreen::execOnPurchaseTier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPurchaseTier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveRewardsScreen::execOnRewardCurrencyClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardCurrencyClicked(Z_Param_currencyType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveRewardsScreen::execOnRewardItemClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardItemClicked(Z_Param_itemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveRewardsScreen::execOnRotateCharacter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mouseDistanceChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRotateCharacter(Z_Param_mouseDistanceChange);
		P_NATIVE_END;
	}
	void UArchiveRewardsScreen::StaticRegisterNativesUArchiveRewardsScreen()
	{
		UClass* Class = UArchiveRewardsScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPurchasePremiumPass", &UArchiveRewardsScreen::execOnPurchasePremiumPass },
			{ "OnPurchaseTier", &UArchiveRewardsScreen::execOnPurchaseTier },
			{ "OnRewardCurrencyClicked", &UArchiveRewardsScreen::execOnRewardCurrencyClicked },
			{ "OnRewardItemClicked", &UArchiveRewardsScreen::execOnRewardItemClicked },
			{ "OnRotateCharacter", &UArchiveRewardsScreen::execOnRotateCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchasePremiumPass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchasePremiumPass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchasePremiumPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRewardsScreen, nullptr, "OnPurchasePremiumPass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchasePremiumPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchasePremiumPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchasePremiumPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchasePremiumPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchaseTier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchaseTier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchaseTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRewardsScreen, nullptr, "OnPurchaseTier", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchaseTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchaseTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchaseTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchaseTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics
	{
		struct ArchiveRewardsScreen_eventOnRewardCurrencyClicked_Parms
		{
			int32 currencyType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRewardsScreen_eventOnRewardCurrencyClicked_Parms, currencyType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::NewProp_currencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRewardsScreen, nullptr, "OnRewardCurrencyClicked", nullptr, nullptr, sizeof(ArchiveRewardsScreen_eventOnRewardCurrencyClicked_Parms), Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics
	{
		struct ArchiveRewardsScreen_eventOnRewardItemClicked_Parms
		{
			FString itemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRewardsScreen_eventOnRewardItemClicked_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRewardsScreen, nullptr, "OnRewardItemClicked", nullptr, nullptr, sizeof(ArchiveRewardsScreen_eventOnRewardItemClicked_Parms), Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics
	{
		struct ArchiveRewardsScreen_eventOnRotateCharacter_Parms
		{
			float mouseDistanceChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mouseDistanceChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::NewProp_mouseDistanceChange = { "mouseDistanceChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveRewardsScreen_eventOnRotateCharacter_Parms, mouseDistanceChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::NewProp_mouseDistanceChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveRewardsScreen, nullptr, "OnRotateCharacter", nullptr, nullptr, sizeof(ArchiveRewardsScreen_eventOnRotateCharacter_Parms), Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveRewardsScreen_NoRegister()
	{
		return UArchiveRewardsScreen::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveRewardsScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveRewardsScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchiveBaseScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveRewardsScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchasePremiumPass, "OnPurchasePremiumPass" }, // 1324625859
		{ &Z_Construct_UFunction_UArchiveRewardsScreen_OnPurchaseTier, "OnPurchaseTier" }, // 60542538
		{ &Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardCurrencyClicked, "OnRewardCurrencyClicked" }, // 1086422475
		{ &Z_Construct_UFunction_UArchiveRewardsScreen_OnRewardItemClicked, "OnRewardItemClicked" }, // 3882920124
		{ &Z_Construct_UFunction_UArchiveRewardsScreen_OnRotateCharacter, "OnRotateCharacter" }, // 2676397697
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveRewardsScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchiveRewardsScreen.h" },
		{ "ModuleRelativePath", "Public/ArchiveRewardsScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveRewardsScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveRewardsScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveRewardsScreen_Statics::ClassParams = {
		&UArchiveRewardsScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveRewardsScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveRewardsScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveRewardsScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveRewardsScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveRewardsScreen, 2496998564);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArchiveRewardsScreen>()
	{
		return UArchiveRewardsScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveRewardsScreen(Z_Construct_UClass_UArchiveRewardsScreen, &UArchiveRewardsScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArchiveRewardsScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveRewardsScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
