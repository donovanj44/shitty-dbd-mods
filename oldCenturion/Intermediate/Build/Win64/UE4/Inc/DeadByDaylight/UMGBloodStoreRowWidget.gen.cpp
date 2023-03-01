// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBloodStoreRowWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBloodStoreRowWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreRowWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreRowWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreItemWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodStoreRowStyle();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBloodStoreRowWidget::execBroadcastBloodNodeSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastBloodNodeSelected(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBloodStoreRowWidget::execBroadcastUnlockAnimationFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastUnlockAnimationFinished();
		P_NATIVE_END;
	}
	static FName NAME_UUMGBloodStoreRowWidget_LockRow = FName(TEXT("LockRow"));
	void UUMGBloodStoreRowWidget::LockRow(bool playAnim)
	{
		UMGBloodStoreRowWidget_eventLockRow_Parms Parms;
		Parms.playAnim=playAnim ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreRowWidget_LockRow),&Parms);
	}
	static FName NAME_UUMGBloodStoreRowWidget_UnlockRow = FName(TEXT("UnlockRow"));
	void UUMGBloodStoreRowWidget::UnlockRow(bool playAnim)
	{
		UMGBloodStoreRowWidget_eventUnlockRow_Parms Parms;
		Parms.playAnim=playAnim ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreRowWidget_UnlockRow),&Parms);
	}
	void UUMGBloodStoreRowWidget::StaticRegisterNativesUUMGBloodStoreRowWidget()
	{
		UClass* Class = UUMGBloodStoreRowWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastBloodNodeSelected", &UUMGBloodStoreRowWidget::execBroadcastBloodNodeSelected },
			{ "BroadcastUnlockAnimationFinished", &UUMGBloodStoreRowWidget::execBroadcastUnlockAnimationFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics
	{
		struct UMGBloodStoreRowWidget_eventBroadcastBloodNodeSelected_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBloodStoreRowWidget_eventBroadcastBloodNodeSelected_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreRowWidget, nullptr, "BroadcastBloodNodeSelected", nullptr, nullptr, sizeof(UMGBloodStoreRowWidget_eventBroadcastBloodNodeSelected_Parms), Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastUnlockAnimationFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastUnlockAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastUnlockAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreRowWidget, nullptr, "BroadcastUnlockAnimationFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastUnlockAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastUnlockAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastUnlockAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastUnlockAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics
	{
		static void NewProp_playAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::NewProp_playAnim_SetBit(void* Obj)
	{
		((UMGBloodStoreRowWidget_eventLockRow_Parms*)Obj)->playAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::NewProp_playAnim = { "playAnim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreRowWidget_eventLockRow_Parms), &Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::NewProp_playAnim_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::NewProp_playAnim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreRowWidget, nullptr, "LockRow", nullptr, nullptr, sizeof(UMGBloodStoreRowWidget_eventLockRow_Parms), Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics
	{
		static void NewProp_playAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::NewProp_playAnim_SetBit(void* Obj)
	{
		((UMGBloodStoreRowWidget_eventUnlockRow_Parms*)Obj)->playAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::NewProp_playAnim = { "playAnim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreRowWidget_eventUnlockRow_Parms), &Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::NewProp_playAnim_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::NewProp_playAnim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreRowWidget, nullptr, "UnlockRow", nullptr, nullptr, sizeof(UMGBloodStoreRowWidget_eventUnlockRow_Parms), Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBloodStoreRowWidget_NoRegister()
	{
		return UUMGBloodStoreRowWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__itemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__itemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__itemPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rowStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__rowStyle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__rowStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__requiredItemNbr_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__requiredItemNbr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__purchasedItemsNbr_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__purchasedItemsNbr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardLockedStatusPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HardLockedStatusPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockStatusPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockStatusPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastBloodNodeSelected, "BroadcastBloodNodeSelected" }, // 3672298271
		{ &Z_Construct_UFunction_UUMGBloodStoreRowWidget_BroadcastUnlockAnimationFinished, "BroadcastUnlockAnimationFinished" }, // 1585306062
		{ &Z_Construct_UFunction_UUMGBloodStoreRowWidget_LockRow, "LockRow" }, // 1472663780
		{ &Z_Construct_UFunction_UUMGBloodStoreRowWidget_UnlockRow, "UnlockRow" }, // 459241651
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBloodStoreRowWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemClass = { "_itemClass", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreRowWidget, _itemClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemWidgetClass_MetaData[] = {
		{ "Category", "UMGBloodStoreRowWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemWidgetClass = { "_itemWidgetClass", nullptr, (EPropertyFlags)0x0044000002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreRowWidget, _itemWidgetClass), Z_Construct_UClass_UUMGBloodStoreItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemPadding_MetaData[] = {
		{ "Category", "UMGBloodStoreRowWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemPadding = { "_itemPadding", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreRowWidget, _itemPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__rowStyle_MetaData[] = {
		{ "Category", "UMGBloodStoreRowWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__rowStyle = { "_rowStyle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreRowWidget, _rowStyle), Z_Construct_UEnum_DeadByDaylight_EBloodStoreRowStyle, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__rowStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__rowStyle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__rowStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__requiredItemNbr_MetaData[] = {
		{ "Category", "UMGBloodStoreRowWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__requiredItemNbr = { "_requiredItemNbr", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreRowWidget, _requiredItemNbr), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__requiredItemNbr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__requiredItemNbr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__purchasedItemsNbr_MetaData[] = {
		{ "Category", "UMGBloodStoreRowWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__purchasedItemsNbr = { "_purchasedItemsNbr", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreRowWidget, _purchasedItemsNbr), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__purchasedItemsNbr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__purchasedItemsNbr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_HardLockedStatusPanel_MetaData[] = {
		{ "Category", "UMGBloodStoreRowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_HardLockedStatusPanel = { "HardLockedStatusPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreRowWidget, HardLockedStatusPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_HardLockedStatusPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_HardLockedStatusPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_LockStatusPanel_MetaData[] = {
		{ "Category", "UMGBloodStoreRowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_LockStatusPanel = { "LockStatusPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreRowWidget, LockStatusPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_LockStatusPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_LockStatusPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_ItemContainer_MetaData[] = {
		{ "Category", "UMGBloodStoreRowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreRowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_ItemContainer = { "ItemContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreRowWidget, ItemContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_ItemContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_ItemContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__itemPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__rowStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__rowStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__requiredItemNbr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp__purchasedItemsNbr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_HardLockedStatusPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_LockStatusPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::NewProp_ItemContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBloodStoreRowWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::ClassParams = {
		&UUMGBloodStoreRowWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBloodStoreRowWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBloodStoreRowWidget, 4130436109);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBloodStoreRowWidget>()
	{
		return UUMGBloodStoreRowWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBloodStoreRowWidget(Z_Construct_UClass_UUMGBloodStoreRowWidget, &UUMGBloodStoreRowWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBloodStoreRowWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBloodStoreRowWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
