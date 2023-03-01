// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLoadoutBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLoadoutBaseWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutBaseWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutBaseWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELoadoutSlot();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGLoadoutBaseWidget::execSetLoadoutData)
	{
		P_GET_TARRAY_REF(FInventorySlotData,Z_Param_Out_loadoutData);
		P_GET_UBOOL(Z_Param_NewUsingMatchRules);
		P_GET_UBOOL(Z_Param_NewPerkSlotsLockedByAdmin);
		P_GET_ENUM(ELoadoutSlot,Z_Param_loadoutSlot);
		P_GET_UBOOL(Z_Param_NewIsSlasher);
		P_GET_UBOOL(Z_Param_isClickable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutData(Z_Param_Out_loadoutData,Z_Param_NewUsingMatchRules,Z_Param_NewPerkSlotsLockedByAdmin,ELoadoutSlot(Z_Param_loadoutSlot),Z_Param_NewIsSlasher,Z_Param_isClickable);
		P_NATIVE_END;
	}
	static FName NAME_UUMGLoadoutBaseWidget_SetDividerImageColor = FName(TEXT("SetDividerImageColor"));
	void UUMGLoadoutBaseWidget::SetDividerImageColor(FLinearColor color)
	{
		UMGLoadoutBaseWidget_eventSetDividerImageColor_Parms Parms;
		Parms.color=color;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLoadoutBaseWidget_SetDividerImageColor),&Parms);
	}
	static FName NAME_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton = FName(TEXT("SetIsSelectedLoadoutItemButton"));
	void UUMGLoadoutBaseWidget::SetIsSelectedLoadoutItemButton(ELoadoutSlot loadoutSlot)
	{
		UMGLoadoutBaseWidget_eventSetIsSelectedLoadoutItemButton_Parms Parms;
		Parms.loadoutSlot=loadoutSlot;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton),&Parms);
	}
	void UUMGLoadoutBaseWidget::StaticRegisterNativesUUMGLoadoutBaseWidget()
	{
		UClass* Class = UUMGLoadoutBaseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLoadoutData", &UUMGLoadoutBaseWidget::execSetLoadoutData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutBaseWidget_eventSetDividerImageColor_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutBaseWidget, nullptr, "SetDividerImageColor", nullptr, nullptr, sizeof(UMGLoadoutBaseWidget_eventSetDividerImageColor_Parms), Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_loadoutSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_loadoutSlot_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::NewProp_loadoutSlot = { "loadoutSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutBaseWidget_eventSetIsSelectedLoadoutItemButton_Parms, loadoutSlot), Z_Construct_UEnum_DeadByDaylight_ELoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::NewProp_loadoutSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::NewProp_loadoutSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::NewProp_loadoutSlot_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutBaseWidget, nullptr, "SetIsSelectedLoadoutItemButton", nullptr, nullptr, sizeof(UMGLoadoutBaseWidget_eventSetIsSelectedLoadoutItemButton_Parms), Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics
	{
		struct UMGLoadoutBaseWidget_eventSetLoadoutData_Parms
		{
			TArray<FInventorySlotData> loadoutData;
			bool NewUsingMatchRules;
			bool NewPerkSlotsLockedByAdmin;
			ELoadoutSlot loadoutSlot;
			bool NewIsSlasher;
			bool isClickable;
		};
		static void NewProp_isClickable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isClickable;
		static void NewProp_NewIsSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsSlasher;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_loadoutSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_loadoutSlot_Underlying;
		static void NewProp_NewPerkSlotsLockedByAdmin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewPerkSlotsLockedByAdmin;
		static void NewProp_NewUsingMatchRules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewUsingMatchRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loadoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_loadoutData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_loadoutData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_isClickable_SetBit(void* Obj)
	{
		((UMGLoadoutBaseWidget_eventSetLoadoutData_Parms*)Obj)->isClickable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_isClickable = { "isClickable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLoadoutBaseWidget_eventSetLoadoutData_Parms), &Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_isClickable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewIsSlasher_SetBit(void* Obj)
	{
		((UMGLoadoutBaseWidget_eventSetLoadoutData_Parms*)Obj)->NewIsSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewIsSlasher = { "NewIsSlasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLoadoutBaseWidget_eventSetLoadoutData_Parms), &Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewIsSlasher_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutSlot = { "loadoutSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutBaseWidget_eventSetLoadoutData_Parms, loadoutSlot), Z_Construct_UEnum_DeadByDaylight_ELoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewPerkSlotsLockedByAdmin_SetBit(void* Obj)
	{
		((UMGLoadoutBaseWidget_eventSetLoadoutData_Parms*)Obj)->NewPerkSlotsLockedByAdmin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewPerkSlotsLockedByAdmin = { "NewPerkSlotsLockedByAdmin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLoadoutBaseWidget_eventSetLoadoutData_Parms), &Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewPerkSlotsLockedByAdmin_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewUsingMatchRules_SetBit(void* Obj)
	{
		((UMGLoadoutBaseWidget_eventSetLoadoutData_Parms*)Obj)->NewUsingMatchRules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewUsingMatchRules = { "NewUsingMatchRules", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLoadoutBaseWidget_eventSetLoadoutData_Parms), &Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewUsingMatchRules_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutData = { "loadoutData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutBaseWidget_eventSetLoadoutData_Parms, loadoutData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutData_Inner = { "loadoutData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_isClickable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewIsSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewPerkSlotsLockedByAdmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_NewUsingMatchRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::NewProp_loadoutData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutBaseWidget, nullptr, "SetLoadoutData", nullptr, nullptr, sizeof(UMGLoadoutBaseWidget_eventSetLoadoutData_Parms), Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLoadoutBaseWidget_NoRegister()
	{
		return UUMGLoadoutBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasher_MetaData[];
#endif
		static void NewProp_IsSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkSlotsLockedByAdmin_MetaData[];
#endif
		static void NewProp_PerkSlotsLockedByAdmin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PerkSlotsLockedByAdmin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingMatchRules_MetaData[];
#endif
		static void NewProp_UsingMatchRules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsingMatchRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutItemButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadoutItemButtons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutItemButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkFourthButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerkFourthButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkThirdButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerkThirdButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkSecondButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerkSecondButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkFirstButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerkFirstButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OfferingButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonSecondButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddonSecondButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonFirstButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddonFirstButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemOrPowerButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOrPowerButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetDividerImageColor, "SetDividerImageColor" }, // 1380265243
		{ &Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetIsSelectedLoadoutItemButton, "SetIsSelectedLoadoutItemButton" }, // 3039378808
		{ &Z_Construct_UFunction_UUMGLoadoutBaseWidget_SetLoadoutData, "SetLoadoutData" }, // 1829502914
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLoadoutBaseWidget.h" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_IsSlasher_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_IsSlasher_SetBit(void* Obj)
	{
		((UUMGLoadoutBaseWidget*)Obj)->IsSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_IsSlasher = { "IsSlasher", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGLoadoutBaseWidget), &Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_IsSlasher_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_IsSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_IsSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSlotsLockedByAdmin_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSlotsLockedByAdmin_SetBit(void* Obj)
	{
		((UUMGLoadoutBaseWidget*)Obj)->PerkSlotsLockedByAdmin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSlotsLockedByAdmin = { "PerkSlotsLockedByAdmin", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGLoadoutBaseWidget), &Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSlotsLockedByAdmin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSlotsLockedByAdmin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSlotsLockedByAdmin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_UsingMatchRules_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_UsingMatchRules_SetBit(void* Obj)
	{
		((UUMGLoadoutBaseWidget*)Obj)->UsingMatchRules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_UsingMatchRules = { "UsingMatchRules", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGLoadoutBaseWidget), &Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_UsingMatchRules_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_UsingMatchRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_UsingMatchRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_LoadoutItemButtons_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_LoadoutItemButtons = { "LoadoutItemButtons", nullptr, (EPropertyFlags)0x002008800000201c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutBaseWidget, LoadoutItemButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_LoadoutItemButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_LoadoutItemButtons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_LoadoutItemButtons_Inner = { "LoadoutItemButtons", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFourthButton_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFourthButton = { "PerkFourthButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutBaseWidget, PerkFourthButton), Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFourthButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFourthButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkThirdButton_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkThirdButton = { "PerkThirdButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutBaseWidget, PerkThirdButton), Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkThirdButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkThirdButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSecondButton_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSecondButton = { "PerkSecondButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutBaseWidget, PerkSecondButton), Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSecondButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSecondButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFirstButton_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFirstButton = { "PerkFirstButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutBaseWidget, PerkFirstButton), Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFirstButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFirstButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_OfferingButton_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_OfferingButton = { "OfferingButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutBaseWidget, OfferingButton), Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_OfferingButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_OfferingButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonSecondButton_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonSecondButton = { "AddonSecondButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutBaseWidget, AddonSecondButton), Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonSecondButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonSecondButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonFirstButton_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonFirstButton = { "AddonFirstButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutBaseWidget, AddonFirstButton), Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonFirstButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonFirstButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_ItemOrPowerButton_MetaData[] = {
		{ "Category", "UMGLoadoutBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_ItemOrPowerButton = { "ItemOrPowerButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutBaseWidget, ItemOrPowerButton), Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_ItemOrPowerButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_ItemOrPowerButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_IsSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSlotsLockedByAdmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_UsingMatchRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_LoadoutItemButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_LoadoutItemButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFourthButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkThirdButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkSecondButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_PerkFirstButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_OfferingButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonSecondButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_AddonFirstButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::NewProp_ItemOrPowerButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLoadoutBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::ClassParams = {
		&UUMGLoadoutBaseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLoadoutBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLoadoutBaseWidget, 1201005832);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLoadoutBaseWidget>()
	{
		return UUMGLoadoutBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLoadoutBaseWidget(Z_Construct_UClass_UUMGLoadoutBaseWidget, &UUMGLoadoutBaseWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLoadoutBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLoadoutBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
