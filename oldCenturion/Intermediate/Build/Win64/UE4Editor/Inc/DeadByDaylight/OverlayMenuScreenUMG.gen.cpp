// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OverlayMenuScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayMenuScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOverlayMenuScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOverlayMenuScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOverlayMenuScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaSettingScreen_NoRegister();
// End Cross Module References
	void UOverlayMenuScreenUMG::StaticRegisterNativesUOverlayMenuScreenUMG()
	{
	}
	UClass* Z_Construct_UClass_UOverlayMenuScreenUMG_NoRegister()
	{
		return UOverlayMenuScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UOverlayMenuScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlOverlayMenuScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlOverlayMenuScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOverlayMenuScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OverlayMenuScreenUMG.h" },
		{ "ModuleRelativePath", "Public/OverlayMenuScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::NewProp__atlOverlayMenuScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OverlayMenuScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::NewProp__atlOverlayMenuScreen = { "_atlOverlayMenuScreen", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOverlayMenuScreenUMG, _atlOverlayMenuScreen), Z_Construct_UClass_UUMGAtlantaSettingScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::NewProp__atlOverlayMenuScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::NewProp__atlOverlayMenuScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::NewProp__atlOverlayMenuScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayMenuScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::ClassParams = {
		&UOverlayMenuScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverlayMenuScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOverlayMenuScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOverlayMenuScreenUMG, 664235725);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOverlayMenuScreenUMG>()
	{
		return UOverlayMenuScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOverlayMenuScreenUMG(Z_Construct_UClass_UOverlayMenuScreenUMG, &UOverlayMenuScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOverlayMenuScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayMenuScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
