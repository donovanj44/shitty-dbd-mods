// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NavigationScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavigationScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavigationScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavigationScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyScreen_NoRegister();
// End Cross Module References
	void UNavigationScreenUMG::StaticRegisterNativesUNavigationScreenUMG()
	{
	}
	UClass* Z_Construct_UClass_UNavigationScreenUMG_NoRegister()
	{
		return UNavigationScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlNavigationScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlNavigationScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationScreenUMG.h" },
		{ "ModuleRelativePath", "Public/NavigationScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationScreenUMG_Statics::NewProp__atlNavigationScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationScreenUMG_Statics::NewProp__atlNavigationScreen = { "_atlNavigationScreen", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationScreenUMG, _atlNavigationScreen), Z_Construct_UClass_UUMGLobbyScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigationScreenUMG_Statics::NewProp__atlNavigationScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationScreenUMG_Statics::NewProp__atlNavigationScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationScreenUMG_Statics::NewProp__atlNavigationScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationScreenUMG_Statics::ClassParams = {
		&UNavigationScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationScreenUMG, 3482588165);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNavigationScreenUMG>()
	{
		return UNavigationScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationScreenUMG(Z_Construct_UClass_UNavigationScreenUMG, &UNavigationScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNavigationScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
