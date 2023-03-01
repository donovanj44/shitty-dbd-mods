// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAddonButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAddonButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAddonButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAddonButton();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInventoryItemButton();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAddonButton::execUpdateAddonButton)
	{
		P_GET_OBJECT(UItemAddon,Z_Param_addon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAddonButton(Z_Param_addon);
		P_NATIVE_END;
	}
	void UUMGAddonButton::StaticRegisterNativesUUMGAddonButton()
	{
		UClass* Class = UUMGAddonButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAddonButton", &UUMGAddonButton::execUpdateAddonButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics
	{
		struct UMGAddonButton_eventUpdateAddonButton_Parms
		{
			UItemAddon* addon;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_addon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::NewProp_addon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::NewProp_addon = { "addon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAddonButton_eventUpdateAddonButton_Parms, addon), Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::NewProp_addon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::NewProp_addon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::NewProp_addon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAddonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAddonButton, nullptr, "UpdateAddonButton", nullptr, nullptr, sizeof(UMGAddonButton_eventUpdateAddonButton_Parms), Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAddonButton_NoRegister()
	{
		return UUMGAddonButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAddonButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAddonButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGInventoryItemButton,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAddonButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAddonButton_UpdateAddonButton, "UpdateAddonButton" }, // 3710124079
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAddonButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAddonButton.h" },
		{ "ModuleRelativePath", "Public/UMGAddonButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAddonButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAddonButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAddonButton_Statics::ClassParams = {
		&UUMGAddonButton::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGAddonButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAddonButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAddonButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAddonButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAddonButton, 3150866107);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAddonButton>()
	{
		return UUMGAddonButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAddonButton(Z_Construct_UClass_UUMGAddonButton, &UUMGAddonButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAddonButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAddonButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
