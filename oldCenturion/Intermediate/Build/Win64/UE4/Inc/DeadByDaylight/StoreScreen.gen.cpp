// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StoreScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStoreScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStoreScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UStoreScreen::execOnBuyCurrencyBundle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuyCurrencyBundle(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnCatalogSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCatalogSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnEquipItem)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipItem(Z_Param_itemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnFeaturedBannerDlcSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dlcId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFeaturedBannerDlcSelected(Z_Param_dlcId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnFeaturedBannerItemSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_UBOOL(Z_Param_isOutfit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFeaturedBannerItemSelected(Z_Param_itemId,Z_Param_isOutfit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnFeaturedButtonSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_linkIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFeaturedButtonSelected(Z_Param_linkIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnFeaturedCharacterSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFeaturedCharacterSelected(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnFeaturedStoreItemSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_GET_UBOOL(Z_Param_isOutfit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFeaturedStoreItemSelected(Z_Param_itemId,Z_Param_isOutfit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnFiltersUpdated)
	{
		P_GET_UBOOL(Z_Param_all);
		P_GET_UBOOL(Z_Param_rarityCommon);
		P_GET_UBOOL(Z_Param_rarityUncommon);
		P_GET_UBOOL(Z_Param_rarityRare);
		P_GET_UBOOL(Z_Param_rarityVeryRare);
		P_GET_UBOOL(Z_Param_rarityUltraRare);
		P_GET_UBOOL(Z_Param_rarityArtifact);
		P_GET_UBOOL(Z_Param_rarityLegendary);
		P_GET_UBOOL(Z_Param_raritySpecialEvent);
		P_GET_UBOOL(Z_Param_includeAllOwnedItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFiltersUpdated(Z_Param_all,Z_Param_rarityCommon,Z_Param_rarityUncommon,Z_Param_rarityRare,Z_Param_rarityVeryRare,Z_Param_rarityUltraRare,Z_Param_rarityArtifact,Z_Param_rarityLegendary,Z_Param_raritySpecialEvent,Z_Param_includeAllOwnedItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnMarketSlotButtonClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_slotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMarketSlotButtonClick(Z_Param_slotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnNotEnoughTokens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotEnoughTokens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnPromoCodeButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPromoCodeButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnRotateCharacter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mouseDistanceChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRotateCharacter(Z_Param_mouseDistanceChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnSearchInputChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_searchInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSearchInputChanged(Z_Param_searchInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnStoreCatalogCategorySelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_categoryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoreCatalogCategorySelected(Z_Param_categoryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnStoreCharacterSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoreCharacterSelected(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnStoreItemLinkSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoreItemLinkSelected(Z_Param_itemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnStoreItemSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_itemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoreItemSelected(Z_Param_itemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnStorySelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStorySelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnTabSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTabSelected(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnUnlockDlc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dlcId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnlockDlc(Z_Param_dlcId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreScreen::execOnUnlockWithCurrency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_currencyId);
		P_GET_PROPERTY(FStrProperty,Z_Param_combinedItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnlockWithCurrency(Z_Param_currencyId,Z_Param_combinedItem);
		P_NATIVE_END;
	}
	void UStoreScreen::StaticRegisterNativesUStoreScreen()
	{
		UClass* Class = UStoreScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBuyCurrencyBundle", &UStoreScreen::execOnBuyCurrencyBundle },
			{ "OnCatalogSelected", &UStoreScreen::execOnCatalogSelected },
			{ "OnEquipItem", &UStoreScreen::execOnEquipItem },
			{ "OnFeaturedBannerDlcSelected", &UStoreScreen::execOnFeaturedBannerDlcSelected },
			{ "OnFeaturedBannerItemSelected", &UStoreScreen::execOnFeaturedBannerItemSelected },
			{ "OnFeaturedButtonSelected", &UStoreScreen::execOnFeaturedButtonSelected },
			{ "OnFeaturedCharacterSelected", &UStoreScreen::execOnFeaturedCharacterSelected },
			{ "OnFeaturedStoreItemSelected", &UStoreScreen::execOnFeaturedStoreItemSelected },
			{ "OnFiltersUpdated", &UStoreScreen::execOnFiltersUpdated },
			{ "OnMarketSlotButtonClick", &UStoreScreen::execOnMarketSlotButtonClick },
			{ "OnNotEnoughTokens", &UStoreScreen::execOnNotEnoughTokens },
			{ "OnPromoCodeButtonClicked", &UStoreScreen::execOnPromoCodeButtonClicked },
			{ "OnRotateCharacter", &UStoreScreen::execOnRotateCharacter },
			{ "OnSearchInputChanged", &UStoreScreen::execOnSearchInputChanged },
			{ "OnStoreCatalogCategorySelected", &UStoreScreen::execOnStoreCatalogCategorySelected },
			{ "OnStoreCharacterSelected", &UStoreScreen::execOnStoreCharacterSelected },
			{ "OnStoreItemLinkSelected", &UStoreScreen::execOnStoreItemLinkSelected },
			{ "OnStoreItemSelected", &UStoreScreen::execOnStoreItemSelected },
			{ "OnStorySelected", &UStoreScreen::execOnStorySelected },
			{ "OnTabSelected", &UStoreScreen::execOnTabSelected },
			{ "OnUnlockDlc", &UStoreScreen::execOnUnlockDlc },
			{ "OnUnlockWithCurrency", &UStoreScreen::execOnUnlockWithCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics
	{
		struct StoreScreen_eventOnBuyCurrencyBundle_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnBuyCurrencyBundle_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnBuyCurrencyBundle", nullptr, nullptr, sizeof(StoreScreen_eventOnBuyCurrencyBundle_Parms), Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnCatalogSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnCatalogSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnCatalogSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnCatalogSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnCatalogSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnCatalogSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnCatalogSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnCatalogSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics
	{
		struct StoreScreen_eventOnEquipItem_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnEquipItem_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnEquipItem", nullptr, nullptr, sizeof(StoreScreen_eventOnEquipItem_Parms), Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnEquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnEquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics
	{
		struct StoreScreen_eventOnFeaturedBannerDlcSelected_Parms
		{
			FString dlcId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dlcId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dlcId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::NewProp_dlcId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::NewProp_dlcId = { "dlcId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnFeaturedBannerDlcSelected_Parms, dlcId), METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::NewProp_dlcId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::NewProp_dlcId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::NewProp_dlcId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnFeaturedBannerDlcSelected", nullptr, nullptr, sizeof(StoreScreen_eventOnFeaturedBannerDlcSelected_Parms), Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics
	{
		struct StoreScreen_eventOnFeaturedBannerItemSelected_Parms
		{
			FString itemId;
			bool isOutfit;
		};
		static void NewProp_isOutfit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOutfit;
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
	void Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::NewProp_isOutfit_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFeaturedBannerItemSelected_Parms*)Obj)->isOutfit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::NewProp_isOutfit = { "isOutfit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFeaturedBannerItemSelected_Parms), &Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::NewProp_isOutfit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnFeaturedBannerItemSelected_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::NewProp_isOutfit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnFeaturedBannerItemSelected", nullptr, nullptr, sizeof(StoreScreen_eventOnFeaturedBannerItemSelected_Parms), Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics
	{
		struct StoreScreen_eventOnFeaturedButtonSelected_Parms
		{
			int32 linkIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_linkIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::NewProp_linkIndex = { "linkIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnFeaturedButtonSelected_Parms, linkIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::NewProp_linkIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnFeaturedButtonSelected", nullptr, nullptr, sizeof(StoreScreen_eventOnFeaturedButtonSelected_Parms), Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics
	{
		struct StoreScreen_eventOnFeaturedCharacterSelected_Parms
		{
			int32 characterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnFeaturedCharacterSelected_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnFeaturedCharacterSelected", nullptr, nullptr, sizeof(StoreScreen_eventOnFeaturedCharacterSelected_Parms), Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics
	{
		struct StoreScreen_eventOnFeaturedStoreItemSelected_Parms
		{
			FString itemId;
			bool isOutfit;
		};
		static void NewProp_isOutfit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOutfit;
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
	void Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::NewProp_isOutfit_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFeaturedStoreItemSelected_Parms*)Obj)->isOutfit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::NewProp_isOutfit = { "isOutfit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFeaturedStoreItemSelected_Parms), &Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::NewProp_isOutfit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnFeaturedStoreItemSelected_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::NewProp_isOutfit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnFeaturedStoreItemSelected", nullptr, nullptr, sizeof(StoreScreen_eventOnFeaturedStoreItemSelected_Parms), Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics
	{
		struct StoreScreen_eventOnFiltersUpdated_Parms
		{
			bool all;
			bool rarityCommon;
			bool rarityUncommon;
			bool rarityRare;
			bool rarityVeryRare;
			bool rarityUltraRare;
			bool rarityArtifact;
			bool rarityLegendary;
			bool raritySpecialEvent;
			bool includeAllOwnedItems;
		};
		static void NewProp_includeAllOwnedItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeAllOwnedItems;
		static void NewProp_raritySpecialEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_raritySpecialEvent;
		static void NewProp_rarityLegendary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rarityLegendary;
		static void NewProp_rarityArtifact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rarityArtifact;
		static void NewProp_rarityUltraRare_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rarityUltraRare;
		static void NewProp_rarityVeryRare_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rarityVeryRare;
		static void NewProp_rarityRare_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rarityRare;
		static void NewProp_rarityUncommon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rarityUncommon;
		static void NewProp_rarityCommon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rarityCommon;
		static void NewProp_all_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_all;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_includeAllOwnedItems_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->includeAllOwnedItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_includeAllOwnedItems = { "includeAllOwnedItems", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_includeAllOwnedItems_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_raritySpecialEvent_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->raritySpecialEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_raritySpecialEvent = { "raritySpecialEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_raritySpecialEvent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityLegendary_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->rarityLegendary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityLegendary = { "rarityLegendary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityLegendary_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityArtifact_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->rarityArtifact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityArtifact = { "rarityArtifact", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityArtifact_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityUltraRare_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->rarityUltraRare = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityUltraRare = { "rarityUltraRare", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityUltraRare_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityVeryRare_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->rarityVeryRare = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityVeryRare = { "rarityVeryRare", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityVeryRare_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityRare_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->rarityRare = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityRare = { "rarityRare", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityRare_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityUncommon_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->rarityUncommon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityUncommon = { "rarityUncommon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityUncommon_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityCommon_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->rarityCommon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityCommon = { "rarityCommon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityCommon_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_all_SetBit(void* Obj)
	{
		((StoreScreen_eventOnFiltersUpdated_Parms*)Obj)->all = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_all = { "all", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreScreen_eventOnFiltersUpdated_Parms), &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_all_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_includeAllOwnedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_raritySpecialEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityLegendary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityArtifact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityUltraRare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityVeryRare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityRare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityUncommon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_rarityCommon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::NewProp_all,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnFiltersUpdated", nullptr, nullptr, sizeof(StoreScreen_eventOnFiltersUpdated_Parms), Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics
	{
		struct StoreScreen_eventOnMarketSlotButtonClick_Parms
		{
			int32 slotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::NewProp_slotIndex = { "slotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnMarketSlotButtonClick_Parms, slotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnMarketSlotButtonClick", nullptr, nullptr, sizeof(StoreScreen_eventOnMarketSlotButtonClick_Parms), Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnNotEnoughTokens_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnNotEnoughTokens_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnNotEnoughTokens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnNotEnoughTokens", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnNotEnoughTokens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnNotEnoughTokens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnNotEnoughTokens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnNotEnoughTokens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnPromoCodeButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnPromoCodeButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnPromoCodeButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnPromoCodeButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnPromoCodeButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnPromoCodeButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnPromoCodeButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnPromoCodeButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics
	{
		struct StoreScreen_eventOnRotateCharacter_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::NewProp_mouseDistanceChange = { "mouseDistanceChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnRotateCharacter_Parms, mouseDistanceChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::NewProp_mouseDistanceChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnRotateCharacter", nullptr, nullptr, sizeof(StoreScreen_eventOnRotateCharacter_Parms), Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnRotateCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnRotateCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics
	{
		struct StoreScreen_eventOnSearchInputChanged_Parms
		{
			FString searchInput;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::NewProp_searchInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::NewProp_searchInput = { "searchInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnSearchInputChanged_Parms, searchInput), METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::NewProp_searchInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::NewProp_searchInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::NewProp_searchInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnSearchInputChanged", nullptr, nullptr, sizeof(StoreScreen_eventOnSearchInputChanged_Parms), Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics
	{
		struct StoreScreen_eventOnStoreCatalogCategorySelected_Parms
		{
			int32 categoryIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_categoryIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::NewProp_categoryIndex = { "categoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnStoreCatalogCategorySelected_Parms, categoryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::NewProp_categoryIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnStoreCatalogCategorySelected", nullptr, nullptr, sizeof(StoreScreen_eventOnStoreCatalogCategorySelected_Parms), Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics
	{
		struct StoreScreen_eventOnStoreCharacterSelected_Parms
		{
			int32 characterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnStoreCharacterSelected_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnStoreCharacterSelected", nullptr, nullptr, sizeof(StoreScreen_eventOnStoreCharacterSelected_Parms), Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics
	{
		struct StoreScreen_eventOnStoreItemLinkSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnStoreItemLinkSelected_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnStoreItemLinkSelected", nullptr, nullptr, sizeof(StoreScreen_eventOnStoreItemLinkSelected_Parms), Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics
	{
		struct StoreScreen_eventOnStoreItemSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnStoreItemSelected_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnStoreItemSelected", nullptr, nullptr, sizeof(StoreScreen_eventOnStoreItemSelected_Parms), Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnStorySelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnStorySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnStorySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnStorySelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnStorySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnStorySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnStorySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnStorySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics
	{
		struct StoreScreen_eventOnTabSelected_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnTabSelected_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnTabSelected", nullptr, nullptr, sizeof(StoreScreen_eventOnTabSelected_Parms), Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics
	{
		struct StoreScreen_eventOnUnlockDlc_Parms
		{
			FString dlcId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dlcId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dlcId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::NewProp_dlcId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::NewProp_dlcId = { "dlcId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnUnlockDlc_Parms, dlcId), METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::NewProp_dlcId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::NewProp_dlcId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::NewProp_dlcId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnUnlockDlc", nullptr, nullptr, sizeof(StoreScreen_eventOnUnlockDlc_Parms), Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnUnlockDlc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnUnlockDlc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics
	{
		struct StoreScreen_eventOnUnlockWithCurrency_Parms
		{
			int32 currencyId;
			FString combinedItem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_combinedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_combinedItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currencyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::NewProp_combinedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::NewProp_combinedItem = { "combinedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnUnlockWithCurrency_Parms, combinedItem), METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::NewProp_combinedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::NewProp_combinedItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::NewProp_currencyId = { "currencyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreScreen_eventOnUnlockWithCurrency_Parms, currencyId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::NewProp_combinedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::NewProp_currencyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreScreen, nullptr, "OnUnlockWithCurrency", nullptr, nullptr, sizeof(StoreScreen_eventOnUnlockWithCurrency_Parms), Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreScreen_NoRegister()
	{
		return UStoreScreen::StaticClass();
	}
	struct Z_Construct_UClass_UStoreScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreScreen_OnBuyCurrencyBundle, "OnBuyCurrencyBundle" }, // 2642657781
		{ &Z_Construct_UFunction_UStoreScreen_OnCatalogSelected, "OnCatalogSelected" }, // 3430638886
		{ &Z_Construct_UFunction_UStoreScreen_OnEquipItem, "OnEquipItem" }, // 682361077
		{ &Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerDlcSelected, "OnFeaturedBannerDlcSelected" }, // 2100618674
		{ &Z_Construct_UFunction_UStoreScreen_OnFeaturedBannerItemSelected, "OnFeaturedBannerItemSelected" }, // 1572080265
		{ &Z_Construct_UFunction_UStoreScreen_OnFeaturedButtonSelected, "OnFeaturedButtonSelected" }, // 4030909430
		{ &Z_Construct_UFunction_UStoreScreen_OnFeaturedCharacterSelected, "OnFeaturedCharacterSelected" }, // 2272182336
		{ &Z_Construct_UFunction_UStoreScreen_OnFeaturedStoreItemSelected, "OnFeaturedStoreItemSelected" }, // 4043384193
		{ &Z_Construct_UFunction_UStoreScreen_OnFiltersUpdated, "OnFiltersUpdated" }, // 3431695016
		{ &Z_Construct_UFunction_UStoreScreen_OnMarketSlotButtonClick, "OnMarketSlotButtonClick" }, // 1646909117
		{ &Z_Construct_UFunction_UStoreScreen_OnNotEnoughTokens, "OnNotEnoughTokens" }, // 3948867356
		{ &Z_Construct_UFunction_UStoreScreen_OnPromoCodeButtonClicked, "OnPromoCodeButtonClicked" }, // 1300515469
		{ &Z_Construct_UFunction_UStoreScreen_OnRotateCharacter, "OnRotateCharacter" }, // 1650401835
		{ &Z_Construct_UFunction_UStoreScreen_OnSearchInputChanged, "OnSearchInputChanged" }, // 2072263259
		{ &Z_Construct_UFunction_UStoreScreen_OnStoreCatalogCategorySelected, "OnStoreCatalogCategorySelected" }, // 4180548591
		{ &Z_Construct_UFunction_UStoreScreen_OnStoreCharacterSelected, "OnStoreCharacterSelected" }, // 2897166303
		{ &Z_Construct_UFunction_UStoreScreen_OnStoreItemLinkSelected, "OnStoreItemLinkSelected" }, // 3668911889
		{ &Z_Construct_UFunction_UStoreScreen_OnStoreItemSelected, "OnStoreItemSelected" }, // 131782379
		{ &Z_Construct_UFunction_UStoreScreen_OnStorySelected, "OnStorySelected" }, // 1777859516
		{ &Z_Construct_UFunction_UStoreScreen_OnTabSelected, "OnTabSelected" }, // 1856124131
		{ &Z_Construct_UFunction_UStoreScreen_OnUnlockDlc, "OnUnlockDlc" }, // 205253581
		{ &Z_Construct_UFunction_UStoreScreen_OnUnlockWithCurrency, "OnUnlockWithCurrency" }, // 3122028907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StoreScreen.h" },
		{ "ModuleRelativePath", "Public/StoreScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreScreen_Statics::ClassParams = {
		&UStoreScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreScreen, 3081107614);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStoreScreen>()
	{
		return UStoreScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreScreen(Z_Construct_UClass_UStoreScreen, &UStoreScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStoreScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
