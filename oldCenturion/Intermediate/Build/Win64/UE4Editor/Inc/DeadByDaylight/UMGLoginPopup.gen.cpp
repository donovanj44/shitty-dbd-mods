// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLoginPopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLoginPopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoginPopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoginPopup();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAuthentificationProviderListWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGLoginPopup::execChooseProvider)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseProvider(Z_Param_provider);
		P_NATIVE_END;
	}
	void UUMGLoginPopup::StaticRegisterNativesUUMGLoginPopup()
	{
		UClass* Class = UUMGLoginPopup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChooseProvider", &UUMGLoginPopup::execChooseProvider },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics
	{
		struct UMGLoginPopup_eventChooseProvider_Parms
		{
			uint8 provider;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_provider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::NewProp_provider_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::NewProp_provider = { "provider", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoginPopup_eventChooseProvider_Parms, provider), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::NewProp_provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::NewProp_provider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::NewProp_provider,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoginPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoginPopup, nullptr, "ChooseProvider", nullptr, nullptr, sizeof(UMGLoginPopup_eventChooseProvider_Parms), Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLoginPopup_NoRegister()
	{
		return UUMGLoginPopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLoginPopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthenticationProviderList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuthenticationProviderList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLoginPopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGenericPopup,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLoginPopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLoginPopup_ChooseProvider, "ChooseProvider" }, // 1824971767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoginPopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLoginPopup.h" },
		{ "ModuleRelativePath", "Public/UMGLoginPopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoginPopup_Statics::NewProp_AuthenticationProviderList_MetaData[] = {
		{ "Category", "UMGLoginPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoginPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoginPopup_Statics::NewProp_AuthenticationProviderList = { "AuthenticationProviderList", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoginPopup, AuthenticationProviderList), Z_Construct_UClass_UUMGAuthentificationProviderListWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoginPopup_Statics::NewProp_AuthenticationProviderList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoginPopup_Statics::NewProp_AuthenticationProviderList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLoginPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoginPopup_Statics::NewProp_AuthenticationProviderList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLoginPopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLoginPopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLoginPopup_Statics::ClassParams = {
		&UUMGLoginPopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLoginPopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoginPopup_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLoginPopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoginPopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLoginPopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLoginPopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLoginPopup, 291128752);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLoginPopup>()
	{
		return UUMGLoginPopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLoginPopup(Z_Construct_UClass_UUMGLoginPopup, &UUMGLoginPopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLoginPopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLoginPopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
