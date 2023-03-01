// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedAuthenticationUtilities/Public/UMGAutheticationProviderSelection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAutheticationProviderSelection() {}
// Cross Module References
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_UUMGAutheticationProviderSelection_NoRegister();
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_UUMGAutheticationProviderSelection();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
	SHAREDAUTHENTICATIONUTILITIES_API UEnum* Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAutheticationProviderSelection::execSetSelectedAuthenticationProvider)
	{
		P_GET_ENUM(ESharedAuthenticationProvider,Z_Param_provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedAuthenticationProvider(ESharedAuthenticationProvider(Z_Param_provider));
		P_NATIVE_END;
	}
	void UUMGAutheticationProviderSelection::StaticRegisterNativesUUMGAutheticationProviderSelection()
	{
		UClass* Class = UUMGAutheticationProviderSelection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSelectedAuthenticationProvider", &UUMGAutheticationProviderSelection::execSetSelectedAuthenticationProvider },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics
	{
		struct UMGAutheticationProviderSelection_eventSetSelectedAuthenticationProvider_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::NewProp_provider = { "provider", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAutheticationProviderSelection_eventSetSelectedAuthenticationProvider_Parms, provider), Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::NewProp_provider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::NewProp_provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::NewProp_provider_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAutheticationProviderSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAutheticationProviderSelection, nullptr, "SetSelectedAuthenticationProvider", nullptr, nullptr, sizeof(UMGAutheticationProviderSelection_eventSetSelectedAuthenticationProvider_Parms), Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAutheticationProviderSelection_NoRegister()
	{
		return UUMGAutheticationProviderSelection::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAutheticationProviderSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAutheticationProviderSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SharedAuthenticationUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAutheticationProviderSelection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider, "SetSelectedAuthenticationProvider" }, // 3185658486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAutheticationProviderSelection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAutheticationProviderSelection.h" },
		{ "ModuleRelativePath", "Public/UMGAutheticationProviderSelection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAutheticationProviderSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAutheticationProviderSelection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAutheticationProviderSelection_Statics::ClassParams = {
		&UUMGAutheticationProviderSelection::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAutheticationProviderSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAutheticationProviderSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAutheticationProviderSelection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAutheticationProviderSelection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAutheticationProviderSelection, 337863342);
	template<> SHAREDAUTHENTICATIONUTILITIES_API UClass* StaticClass<UUMGAutheticationProviderSelection>()
	{
		return UUMGAutheticationProviderSelection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAutheticationProviderSelection(Z_Construct_UClass_UUMGAutheticationProviderSelection, &UUMGAutheticationProviderSelection::StaticClass, TEXT("/Script/SharedAuthenticationUtilities"), TEXT("UUMGAutheticationProviderSelection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAutheticationProviderSelection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
