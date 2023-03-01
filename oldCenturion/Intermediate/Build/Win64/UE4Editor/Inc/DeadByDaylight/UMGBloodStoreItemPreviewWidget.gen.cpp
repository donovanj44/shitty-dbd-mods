// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBloodStoreItemPreviewWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBloodStoreItemPreviewWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBloodStoreItemPreviewWidget::execBroadcastPurchasePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastPurchasePressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBloodStoreItemPreviewWidget::execBroadcastRefreshPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastRefreshPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBloodStoreItemPreviewWidget::execBroadcastUnselectPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastUnselectPressed();
		P_NATIVE_END;
	}
	static FName NAME_UUMGBloodStoreItemPreviewWidget_DisplayItem = FName(TEXT("DisplayItem"));
	void UUMGBloodStoreItemPreviewWidget::DisplayItem(bool isItemPurchaseable, bool isItemAffordable)
	{
		UMGBloodStoreItemPreviewWidget_eventDisplayItem_Parms Parms;
		Parms.isItemPurchaseable=isItemPurchaseable ? true : false;
		Parms.isItemAffordable=isItemAffordable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemPreviewWidget_DisplayItem),&Parms);
	}
	static FName NAME_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton = FName(TEXT("ShowPurchaseButton"));
	void UUMGBloodStoreItemPreviewWidget::ShowPurchaseButton(bool NewShowPurchaseButton)
	{
		UMGBloodStoreItemPreviewWidget_eventShowPurchaseButton_Parms Parms;
		Parms.NewShowPurchaseButton=NewShowPurchaseButton ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton),&Parms);
	}
	static FName NAME_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton = FName(TEXT("ShowRefreshButton"));
	void UUMGBloodStoreItemPreviewWidget::ShowRefreshButton(bool NewShowRefreshButton, bool isRefreshFree)
	{
		UMGBloodStoreItemPreviewWidget_eventShowRefreshButton_Parms Parms;
		Parms.NewShowRefreshButton=NewShowRefreshButton ? true : false;
		Parms.isRefreshFree=isRefreshFree ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton),&Parms);
	}
	static FName NAME_UUMGBloodStoreItemPreviewWidget_UnselectItem = FName(TEXT("UnselectItem"));
	void UUMGBloodStoreItemPreviewWidget::UnselectItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemPreviewWidget_UnselectItem),NULL);
	}
	void UUMGBloodStoreItemPreviewWidget::StaticRegisterNativesUUMGBloodStoreItemPreviewWidget()
	{
		UClass* Class = UUMGBloodStoreItemPreviewWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastPurchasePressed", &UUMGBloodStoreItemPreviewWidget::execBroadcastPurchasePressed },
			{ "BroadcastRefreshPressed", &UUMGBloodStoreItemPreviewWidget::execBroadcastRefreshPressed },
			{ "BroadcastUnselectPressed", &UUMGBloodStoreItemPreviewWidget::execBroadcastUnselectPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastPurchasePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastPurchasePressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastPurchasePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget, nullptr, "BroadcastPurchasePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastPurchasePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastPurchasePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastPurchasePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastPurchasePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastRefreshPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastRefreshPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastRefreshPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget, nullptr, "BroadcastRefreshPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastRefreshPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastRefreshPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastRefreshPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastRefreshPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastUnselectPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastUnselectPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastUnselectPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget, nullptr, "BroadcastUnselectPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastUnselectPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastUnselectPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastUnselectPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastUnselectPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics
	{
		static void NewProp_isItemAffordable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isItemAffordable;
		static void NewProp_isItemPurchaseable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isItemPurchaseable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::NewProp_isItemAffordable_SetBit(void* Obj)
	{
		((UMGBloodStoreItemPreviewWidget_eventDisplayItem_Parms*)Obj)->isItemAffordable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::NewProp_isItemAffordable = { "isItemAffordable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreItemPreviewWidget_eventDisplayItem_Parms), &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::NewProp_isItemAffordable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::NewProp_isItemPurchaseable_SetBit(void* Obj)
	{
		((UMGBloodStoreItemPreviewWidget_eventDisplayItem_Parms*)Obj)->isItemPurchaseable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::NewProp_isItemPurchaseable = { "isItemPurchaseable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreItemPreviewWidget_eventDisplayItem_Parms), &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::NewProp_isItemPurchaseable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::NewProp_isItemAffordable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::NewProp_isItemPurchaseable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget, nullptr, "DisplayItem", nullptr, nullptr, sizeof(UMGBloodStoreItemPreviewWidget_eventDisplayItem_Parms), Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics
	{
		static void NewProp_NewShowPurchaseButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewShowPurchaseButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::NewProp_NewShowPurchaseButton_SetBit(void* Obj)
	{
		((UMGBloodStoreItemPreviewWidget_eventShowPurchaseButton_Parms*)Obj)->NewShowPurchaseButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::NewProp_NewShowPurchaseButton = { "NewShowPurchaseButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreItemPreviewWidget_eventShowPurchaseButton_Parms), &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::NewProp_NewShowPurchaseButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::NewProp_NewShowPurchaseButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget, nullptr, "ShowPurchaseButton", nullptr, nullptr, sizeof(UMGBloodStoreItemPreviewWidget_eventShowPurchaseButton_Parms), Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics
	{
		static void NewProp_isRefreshFree_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRefreshFree;
		static void NewProp_NewShowRefreshButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewShowRefreshButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::NewProp_isRefreshFree_SetBit(void* Obj)
	{
		((UMGBloodStoreItemPreviewWidget_eventShowRefreshButton_Parms*)Obj)->isRefreshFree = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::NewProp_isRefreshFree = { "isRefreshFree", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreItemPreviewWidget_eventShowRefreshButton_Parms), &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::NewProp_isRefreshFree_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::NewProp_NewShowRefreshButton_SetBit(void* Obj)
	{
		((UMGBloodStoreItemPreviewWidget_eventShowRefreshButton_Parms*)Obj)->NewShowRefreshButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::NewProp_NewShowRefreshButton = { "NewShowRefreshButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreItemPreviewWidget_eventShowRefreshButton_Parms), &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::NewProp_NewShowRefreshButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::NewProp_isRefreshFree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::NewProp_NewShowRefreshButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget, nullptr, "ShowRefreshButton", nullptr, nullptr, sizeof(UMGBloodStoreItemPreviewWidget_eventShowRefreshButton_Parms), Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_UnselectItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_UnselectItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_UnselectItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget, nullptr, "UnselectItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_UnselectItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_UnselectItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_UnselectItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_UnselectItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_NoRegister()
	{
		return UUMGBloodStoreItemPreviewWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__purchaseTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__purchaseTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemSelectionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__itemSelectionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemSelectionTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__itemSelectionTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__refreshTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__refreshTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nodeStatusText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__nodeStatusText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__refreshPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__refreshPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__itemPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__itemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__itemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastPurchasePressed, "BroadcastPurchasePressed" }, // 2549264108
		{ &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastRefreshPressed, "BroadcastRefreshPressed" }, // 1196332130
		{ &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_BroadcastUnselectPressed, "BroadcastUnselectPressed" }, // 2224854754
		{ &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_DisplayItem, "DisplayItem" }, // 1644592707
		{ &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowPurchaseButton, "ShowPurchaseButton" }, // 308854735
		{ &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_ShowRefreshButton, "ShowRefreshButton" }, // 1531311988
		{ &Z_Construct_UFunction_UUMGBloodStoreItemPreviewWidget_UnselectItem, "UnselectItem" }, // 293335407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBloodStoreItemPreviewWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__purchaseTitle_MetaData[] = {
		{ "Category", "UMGBloodStoreItemPreviewWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__purchaseTitle = { "_purchaseTitle", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _purchaseTitle), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__purchaseTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__purchaseTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionText_MetaData[] = {
		{ "Category", "UMGBloodStoreItemPreviewWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionText = { "_itemSelectionText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemSelectionText), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionTitle_MetaData[] = {
		{ "Category", "UMGBloodStoreItemPreviewWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionTitle = { "_itemSelectionTitle", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemSelectionTitle), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshTitle_MetaData[] = {
		{ "Category", "UMGBloodStoreItemPreviewWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshTitle = { "_refreshTitle", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _refreshTitle), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__nodeStatusText_MetaData[] = {
		{ "Category", "UMGBloodStoreItemPreviewWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__nodeStatusText = { "_nodeStatusText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _nodeStatusText), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__nodeStatusText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__nodeStatusText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshPrice_MetaData[] = {
		{ "Category", "UMGBloodStoreItemPreviewWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshPrice = { "_refreshPrice", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _refreshPrice), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemPrice_MetaData[] = {
		{ "Category", "UMGBloodStoreItemPreviewWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemPrice = { "_itemPrice", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemPrice), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemDescription_MetaData[] = {
		{ "Category", "UMGBloodStoreItemPreviewWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemDescription = { "_itemDescription", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemDescription), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemName_MetaData[] = {
		{ "Category", "UMGBloodStoreItemPreviewWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemPreviewWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemName = { "_itemName", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemName), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__purchaseTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemSelectionTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__nodeStatusText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__refreshPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::NewProp__itemName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBloodStoreItemPreviewWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::ClassParams = {
		&UUMGBloodStoreItemPreviewWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBloodStoreItemPreviewWidget, 2762533691);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBloodStoreItemPreviewWidget>()
	{
		return UUMGBloodStoreItemPreviewWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBloodStoreItemPreviewWidget(Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget, &UUMGBloodStoreItemPreviewWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBloodStoreItemPreviewWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBloodStoreItemPreviewWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
