// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StoreScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStoreScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStoreScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStoreScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaStoreScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationScreenWidget_NoRegister();
// End Cross Module References
	void UStoreScreenUMG::StaticRegisterNativesUStoreScreenUMG()
	{
	}
	UClass* Z_Construct_UClass_UStoreScreenUMG_NoRegister()
	{
		return UStoreScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UStoreScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__storeScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__customizationScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoreScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StoreScreenUMG.h" },
		{ "ModuleRelativePath", "Public/StoreScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__storeScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StoreScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__storeScreen = { "_storeScreen", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreScreenUMG, _storeScreen), Z_Construct_UClass_UUMGAtlantaStoreScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__storeScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__storeScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__customizationScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StoreScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__customizationScreen = { "_customizationScreen", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreScreenUMG, _customizationScreen), Z_Construct_UClass_UUMGCustomizationScreenWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__customizationScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__customizationScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__storeScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreScreenUMG_Statics::NewProp__customizationScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreScreenUMG_Statics::ClassParams = {
		&UStoreScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStoreScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreScreenUMG, 2053050709);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStoreScreenUMG>()
	{
		return UStoreScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreScreenUMG(Z_Construct_UClass_UStoreScreenUMG, &UStoreScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStoreScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
