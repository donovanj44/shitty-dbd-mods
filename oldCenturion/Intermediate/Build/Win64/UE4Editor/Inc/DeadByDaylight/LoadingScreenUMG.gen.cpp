// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoadingScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadingScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadingScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadingScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadingScreenWidget_NoRegister();
// End Cross Module References
	void ULoadingScreenUMG::StaticRegisterNativesULoadingScreenUMG()
	{
	}
	UClass* Z_Construct_UClass_ULoadingScreenUMG_NoRegister()
	{
		return ULoadingScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__loadingScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULoadingScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadingScreenUMG.h" },
		{ "ModuleRelativePath", "Public/LoadingScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenUMG_Statics::NewProp__loadingScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadingScreenUMG_Statics::NewProp__loadingScreen = { "_loadingScreen", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenUMG, _loadingScreen), Z_Construct_UClass_UUMGLoadingScreenWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenUMG_Statics::NewProp__loadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenUMG_Statics::NewProp__loadingScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenUMG_Statics::NewProp__loadingScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenUMG_Statics::ClassParams = {
		&ULoadingScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadingScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenUMG, 3077717355);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULoadingScreenUMG>()
	{
		return ULoadingScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenUMG(Z_Construct_UClass_ULoadingScreenUMG, &ULoadingScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULoadingScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
