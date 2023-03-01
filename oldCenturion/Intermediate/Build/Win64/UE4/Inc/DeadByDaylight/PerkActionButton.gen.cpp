// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkActionButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkActionButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkActionButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkActionButton();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutItemButton();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_UPerkActionButton_CallHidePerkLevel = FName(TEXT("CallHidePerkLevel"));
	void UPerkActionButton::CallHidePerkLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPerkActionButton_CallHidePerkLevel),NULL);
	}
	static FName NAME_UPerkActionButton_CallSetPerkLevel = FName(TEXT("CallSetPerkLevel"));
	void UPerkActionButton::CallSetPerkLevel(const int32 level)
	{
		PerkActionButton_eventCallSetPerkLevel_Parms Parms;
		Parms.level=level;
		ProcessEvent(FindFunctionChecked(NAME_UPerkActionButton_CallSetPerkLevel),&Parms);
	}
	static FName NAME_UPerkActionButton_SetCanEverBeActivated = FName(TEXT("SetCanEverBeActivated"));
	void UPerkActionButton::SetCanEverBeActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPerkActionButton_SetCanEverBeActivated),NULL);
	}
	static FName NAME_UPerkActionButton_SetIsActivatable = FName(TEXT("SetIsActivatable"));
	void UPerkActionButton::SetIsActivatable(bool isClickable)
	{
		PerkActionButton_eventSetIsActivatable_Parms Parms;
		Parms.isClickable=isClickable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPerkActionButton_SetIsActivatable),&Parms);
	}
	static FName NAME_UPerkActionButton_UpdateWidgetPercentage = FName(TEXT("UpdateWidgetPercentage"));
	void UPerkActionButton::UpdateWidgetPercentage(float percentage)
	{
		PerkActionButton_eventUpdateWidgetPercentage_Parms Parms;
		Parms.percentage=percentage;
		ProcessEvent(FindFunctionChecked(NAME_UPerkActionButton_UpdateWidgetPercentage),&Parms);
	}
	void UPerkActionButton::StaticRegisterNativesUPerkActionButton()
	{
	}
	struct Z_Construct_UFunction_UPerkActionButton_CallHidePerkLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkActionButton_CallHidePerkLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkActionButton_CallHidePerkLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkActionButton, nullptr, "CallHidePerkLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkActionButton_CallHidePerkLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkActionButton_CallHidePerkLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkActionButton_CallHidePerkLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkActionButton_CallHidePerkLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::NewProp_level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkActionButton_eventCallSetPerkLevel_Parms, level), METADATA_PARAMS(Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::NewProp_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::NewProp_level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkActionButton, nullptr, "CallSetPerkLevel", nullptr, nullptr, sizeof(PerkActionButton_eventCallSetPerkLevel_Parms), Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkActionButton_SetCanEverBeActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkActionButton_SetCanEverBeActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkActionButton_SetCanEverBeActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkActionButton, nullptr, "SetCanEverBeActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkActionButton_SetCanEverBeActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkActionButton_SetCanEverBeActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkActionButton_SetCanEverBeActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkActionButton_SetCanEverBeActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics
	{
		static void NewProp_isClickable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isClickable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::NewProp_isClickable_SetBit(void* Obj)
	{
		((PerkActionButton_eventSetIsActivatable_Parms*)Obj)->isClickable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::NewProp_isClickable = { "isClickable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkActionButton_eventSetIsActivatable_Parms), &Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::NewProp_isClickable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::NewProp_isClickable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkActionButton, nullptr, "SetIsActivatable", nullptr, nullptr, sizeof(PerkActionButton_eventSetIsActivatable_Parms), Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkActionButton_SetIsActivatable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkActionButton_SetIsActivatable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkActionButton_eventUpdateWidgetPercentage_Parms, percentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::NewProp_percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkActionButton, nullptr, "UpdateWidgetPercentage", nullptr, nullptr, sizeof(PerkActionButton_eventUpdateWidgetPercentage_Parms), Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerkActionButton_NoRegister()
	{
		return UPerkActionButton::StaticClass();
	}
	struct Z_Construct_UClass_UPerkActionButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressbarVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressbarVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressbarVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickableImageVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClickableImageVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClickableImageVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickableButtonVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClickableButtonVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClickableButtonVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedImageVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectedImageVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedImageVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activatable_MetaData[];
#endif
		static void NewProp_Activatable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Activatable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextUnlockLevelTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextUnlockLevelTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkActionButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGLoadoutItemButton,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerkActionButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkActionButton_CallHidePerkLevel, "CallHidePerkLevel" }, // 3885424027
		{ &Z_Construct_UFunction_UPerkActionButton_CallSetPerkLevel, "CallSetPerkLevel" }, // 3724015306
		{ &Z_Construct_UFunction_UPerkActionButton_SetCanEverBeActivated, "SetCanEverBeActivated" }, // 34968953
		{ &Z_Construct_UFunction_UPerkActionButton_SetIsActivatable, "SetIsActivatable" }, // 30002673
		{ &Z_Construct_UFunction_UPerkActionButton_UpdateWidgetPercentage, "UpdateWidgetPercentage" }, // 1863110911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkActionButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerkActionButton.h" },
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkActionButton_Statics::NewProp_IdleTime_MetaData[] = {
		{ "Category", "PerkActionButton" },
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_IdleTime = { "IdleTime", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkActionButton, IdleTime), METADATA_PARAMS(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_IdleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_IdleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ProgressbarVisibility_MetaData[] = {
		{ "Category", "PerkActionButton" },
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ProgressbarVisibility = { "ProgressbarVisibility", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkActionButton, ProgressbarVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ProgressbarVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ProgressbarVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ProgressbarVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableImageVisibility_MetaData[] = {
		{ "Category", "PerkActionButton" },
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableImageVisibility = { "ClickableImageVisibility", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkActionButton, ClickableImageVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableImageVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableImageVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableImageVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableButtonVisibility_MetaData[] = {
		{ "Category", "PerkActionButton" },
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableButtonVisibility = { "ClickableButtonVisibility", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkActionButton, ClickableButtonVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableButtonVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableButtonVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableButtonVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkActionButton_Statics::NewProp_SelectedImageVisibility_MetaData[] = {
		{ "Category", "PerkActionButton" },
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_SelectedImageVisibility = { "SelectedImageVisibility", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkActionButton, SelectedImageVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_SelectedImageVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_SelectedImageVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_SelectedImageVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkActionButton_Statics::NewProp_Activatable_MetaData[] = {
		{ "Category", "PerkActionButton" },
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	void Z_Construct_UClass_UPerkActionButton_Statics::NewProp_Activatable_SetBit(void* Obj)
	{
		((UPerkActionButton*)Obj)->Activatable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_Activatable = { "Activatable", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPerkActionButton), &Z_Construct_UClass_UPerkActionButton_Statics::NewProp_Activatable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_Activatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_Activatable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkActionButton_Statics::NewProp_TextUnlockLevelTitle_MetaData[] = {
		{ "Category", "PerkActionButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkActionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkActionButton_Statics::NewProp_TextUnlockLevelTitle = { "TextUnlockLevelTitle", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkActionButton, TextUnlockLevelTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_TextUnlockLevelTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkActionButton_Statics::NewProp_TextUnlockLevelTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkActionButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_IdleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ProgressbarVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ProgressbarVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableImageVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableImageVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableButtonVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_ClickableButtonVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_SelectedImageVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_SelectedImageVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_Activatable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkActionButton_Statics::NewProp_TextUnlockLevelTitle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkActionButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkActionButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkActionButton_Statics::ClassParams = {
		&UPerkActionButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPerkActionButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerkActionButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkActionButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkActionButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkActionButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkActionButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkActionButton, 1968808601);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkActionButton>()
	{
		return UPerkActionButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkActionButton(Z_Construct_UClass_UPerkActionButton, &UPerkActionButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkActionButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkActionButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
