// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGInventoryItemButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGInventoryItemButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInventoryItemButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInventoryItemButton();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutItemButton();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGInventoryItemButton::execUpdateItemButton)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemButton(Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInventoryItemButton::execUpdateItemButtonProgressBar)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_GET_OBJECT(UProgressBar,Z_Param_itemProgressBar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemButtonProgressBar(Z_Param_item,Z_Param_itemProgressBar);
		P_NATIVE_END;
	}
	void UUMGInventoryItemButton::StaticRegisterNativesUUMGInventoryItemButton()
	{
		UClass* Class = UUMGInventoryItemButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateItemButton", &UUMGInventoryItemButton::execUpdateItemButton },
			{ "UpdateItemButtonProgressBar", &UUMGInventoryItemButton::execUpdateItemButtonProgressBar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics
	{
		struct UMGInventoryItemButton_eventUpdateItemButton_Parms
		{
			ACollectable* item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInventoryItemButton_eventUpdateItemButton_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInventoryItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInventoryItemButton, nullptr, "UpdateItemButton", nullptr, nullptr, sizeof(UMGInventoryItemButton_eventUpdateItemButton_Parms), Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics
	{
		struct UMGInventoryItemButton_eventUpdateItemButtonProgressBar_Parms
		{
			ACollectable* item;
			UProgressBar* itemProgressBar;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_itemProgressBar;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::NewProp_itemProgressBar_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::NewProp_itemProgressBar = { "itemProgressBar", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInventoryItemButton_eventUpdateItemButtonProgressBar_Parms, itemProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::NewProp_itemProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::NewProp_itemProgressBar_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInventoryItemButton_eventUpdateItemButtonProgressBar_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::NewProp_itemProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInventoryItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInventoryItemButton, nullptr, "UpdateItemButtonProgressBar", nullptr, nullptr, sizeof(UMGInventoryItemButton_eventUpdateItemButtonProgressBar_Parms), Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGInventoryItemButton_NoRegister()
	{
		return UUMGInventoryItemButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGInventoryItemButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGInventoryItemButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGLoadoutItemButton,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGInventoryItemButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButton, "UpdateItemButton" }, // 3609277413
		{ &Z_Construct_UFunction_UUMGInventoryItemButton_UpdateItemButtonProgressBar, "UpdateItemButtonProgressBar" }, // 3367449580
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGInventoryItemButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGInventoryItemButton.h" },
		{ "ModuleRelativePath", "Public/UMGInventoryItemButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGInventoryItemButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGInventoryItemButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGInventoryItemButton_Statics::ClassParams = {
		&UUMGInventoryItemButton::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGInventoryItemButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGInventoryItemButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGInventoryItemButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGInventoryItemButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGInventoryItemButton, 2624168010);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGInventoryItemButton>()
	{
		return UUMGInventoryItemButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGInventoryItemButton(Z_Construct_UClass_UUMGInventoryItemButton, &UUMGInventoryItemButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGInventoryItemButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGInventoryItemButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
