// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCharacterFreeTicketItemButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCharacterFreeTicketItemButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterFreeTicketItemButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCharacterFreeTicketItemButton::execBroadcastClickEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastClickEvent();
		P_NATIVE_END;
	}
	static FName NAME_UUMGCharacterFreeTicketItemButton_UpdateWidget = FName(TEXT("UpdateWidget"));
	void UUMGCharacterFreeTicketItemButton::UpdateWidget(const FString& bgPath, bool isSlasher, int32 durationInHours, int32 itemCount, FSlateColor const& iconColor)
	{
		UMGCharacterFreeTicketItemButton_eventUpdateWidget_Parms Parms;
		Parms.bgPath=bgPath;
		Parms.isSlasher=isSlasher ? true : false;
		Parms.durationInHours=durationInHours;
		Parms.itemCount=itemCount;
		Parms.iconColor=iconColor;
		ProcessEvent(FindFunctionChecked(NAME_UUMGCharacterFreeTicketItemButton_UpdateWidget),&Parms);
	}
	void UUMGCharacterFreeTicketItemButton::StaticRegisterNativesUUMGCharacterFreeTicketItemButton()
	{
		UClass* Class = UUMGCharacterFreeTicketItemButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastClickEvent", &UUMGCharacterFreeTicketItemButton::execBroadcastClickEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_BroadcastClickEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_BroadcastClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterFreeTicketItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_BroadcastClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterFreeTicketItemButton, nullptr, "BroadcastClickEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_BroadcastClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_BroadcastClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_BroadcastClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_BroadcastClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iconColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_iconColor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_durationInHours;
		static void NewProp_isSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bgPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bgPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_iconColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_iconColor = { "iconColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterFreeTicketItemButton_eventUpdateWidget_Parms, iconColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_iconColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_iconColor_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_itemCount = { "itemCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterFreeTicketItemButton_eventUpdateWidget_Parms, itemCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_durationInHours = { "durationInHours", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterFreeTicketItemButton_eventUpdateWidget_Parms, durationInHours), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_isSlasher_SetBit(void* Obj)
	{
		((UMGCharacterFreeTicketItemButton_eventUpdateWidget_Parms*)Obj)->isSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_isSlasher = { "isSlasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGCharacterFreeTicketItemButton_eventUpdateWidget_Parms), &Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_isSlasher_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_bgPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_bgPath = { "bgPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterFreeTicketItemButton_eventUpdateWidget_Parms, bgPath), METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_bgPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_bgPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_iconColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_itemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_durationInHours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_isSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::NewProp_bgPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterFreeTicketItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterFreeTicketItemButton, nullptr, "UpdateWidget", nullptr, nullptr, sizeof(UMGCharacterFreeTicketItemButton_eventUpdateWidget_Parms), Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_NoRegister()
	{
		return UUMGCharacterFreeTicketItemButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_BroadcastClickEvent, "BroadcastClickEvent" }, // 3103477470
		{ &Z_Construct_UFunction_UUMGCharacterFreeTicketItemButton_UpdateWidget, "UpdateWidget" }, // 1417246758
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCharacterFreeTicketItemButton.h" },
		{ "ModuleRelativePath", "Public/UMGCharacterFreeTicketItemButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCharacterFreeTicketItemButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_Statics::ClassParams = {
		&UUMGCharacterFreeTicketItemButton::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCharacterFreeTicketItemButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCharacterFreeTicketItemButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCharacterFreeTicketItemButton, 3183384542);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCharacterFreeTicketItemButton>()
	{
		return UUMGCharacterFreeTicketItemButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCharacterFreeTicketItemButton(Z_Construct_UClass_UUMGCharacterFreeTicketItemButton, &UUMGCharacterFreeTicketItemButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCharacterFreeTicketItemButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCharacterFreeTicketItemButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
