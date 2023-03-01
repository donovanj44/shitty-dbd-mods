// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedAuthenticationUtilities/Public/UMGAuthenticationProviderSelection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAuthenticationProviderSelection() {}
// Cross Module References
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_UUMGAuthenticationProviderSelection_NoRegister();
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_UUMGAuthenticationProviderSelection();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
	SHAREDAUTHENTICATIONUTILITIES_API UEnum* Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAuthenticationProviderSelection::execSetSelectedAuthenticationProvider)
	{
		P_GET_ENUM(ESharedAuthenticationProvider,Z_Param_provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedAuthenticationProvider(ESharedAuthenticationProvider(Z_Param_provider));
		P_NATIVE_END;
	}
	static FName NAME_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup = FName(TEXT("SetMigrateWarningMessageAndShowPopup"));
	void UUMGAuthenticationProviderSelection::SetMigrateWarningMessageAndShowPopup(const FString& playerName)
	{
		UMGAuthenticationProviderSelection_eventSetMigrateWarningMessageAndShowPopup_Parms Parms;
		Parms.playerName=playerName;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup),&Parms);
	}
	static FName NAME_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup = FName(TEXT("ShowMigrationFailedPopup"));
	void UUMGAuthenticationProviderSelection::ShowMigrationFailedPopup()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup),NULL);
	}
	static FName NAME_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility = FName(TEXT("UpdateWidgetsVisibility"));
	void UUMGAuthenticationProviderSelection::UpdateWidgetsVisibility()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility),NULL);
	}
	void UUMGAuthenticationProviderSelection::StaticRegisterNativesUUMGAuthenticationProviderSelection()
	{
		UClass* Class = UUMGAuthenticationProviderSelection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSelectedAuthenticationProvider", &UUMGAuthenticationProviderSelection::execSetSelectedAuthenticationProvider },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::NewProp_playerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAuthenticationProviderSelection_eventSetMigrateWarningMessageAndShowPopup_Parms, playerName), METADATA_PARAMS(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::NewProp_playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::NewProp_playerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::NewProp_playerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAuthenticationProviderSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAuthenticationProviderSelection, nullptr, "SetMigrateWarningMessageAndShowPopup", nullptr, nullptr, sizeof(UMGAuthenticationProviderSelection_eventSetMigrateWarningMessageAndShowPopup_Parms), Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics
	{
		struct UMGAuthenticationProviderSelection_eventSetSelectedAuthenticationProvider_Parms
		{
			ESharedAuthenticationProvider provider;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_provider;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_provider_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::NewProp_provider = { "provider", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAuthenticationProviderSelection_eventSetSelectedAuthenticationProvider_Parms, provider), Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::NewProp_provider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::NewProp_provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::NewProp_provider_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAuthenticationProviderSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAuthenticationProviderSelection, nullptr, "SetSelectedAuthenticationProvider", nullptr, nullptr, sizeof(UMGAuthenticationProviderSelection_eventSetSelectedAuthenticationProvider_Parms), Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAuthenticationProviderSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAuthenticationProviderSelection, nullptr, "ShowMigrationFailedPopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAuthenticationProviderSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAuthenticationProviderSelection, nullptr, "UpdateWidgetsVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAuthenticationProviderSelection_NoRegister()
	{
		return UUMGAuthenticationProviderSelection::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAsia_MetaData[];
#endif
		static void NewProp__isAsia_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAsia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SharedAuthenticationUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup, "SetMigrateWarningMessageAndShowPopup" }, // 46524732
		{ &Z_Construct_UFunction_UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider, "SetSelectedAuthenticationProvider" }, // 359693224
		{ &Z_Construct_UFunction_UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup, "ShowMigrationFailedPopup" }, // 73655757
		{ &Z_Construct_UFunction_UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility, "UpdateWidgetsVisibility" }, // 1898992410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAuthenticationProviderSelection.h" },
		{ "ModuleRelativePath", "Public/UMGAuthenticationProviderSelection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::NewProp__isAsia_MetaData[] = {
		{ "Category", "UMGAuthenticationProviderSelection" },
		{ "ModuleRelativePath", "Public/UMGAuthenticationProviderSelection.h" },
	};
#endif
	void Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::NewProp__isAsia_SetBit(void* Obj)
	{
		((UUMGAuthenticationProviderSelection*)Obj)->_isAsia = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::NewProp__isAsia = { "_isAsia", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGAuthenticationProviderSelection), &Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::NewProp__isAsia_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::NewProp__isAsia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::NewProp__isAsia_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::NewProp__isAsia,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAuthenticationProviderSelection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::ClassParams = {
		&UUMGAuthenticationProviderSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAuthenticationProviderSelection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAuthenticationProviderSelection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAuthenticationProviderSelection, 593824226);
	template<> SHAREDAUTHENTICATIONUTILITIES_API UClass* StaticClass<UUMGAuthenticationProviderSelection>()
	{
		return UUMGAuthenticationProviderSelection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAuthenticationProviderSelection(Z_Construct_UClass_UUMGAuthenticationProviderSelection, &UUMGAuthenticationProviderSelection::StaticClass, TEXT("/Script/SharedAuthenticationUtilities"), TEXT("UUMGAuthenticationProviderSelection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAuthenticationProviderSelection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
