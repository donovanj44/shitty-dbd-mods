// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkSelectionPopupScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkSelectionPopupScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSelectionPopupScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSelectionPopupScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPerkSelectionPopupScreenUMG::StaticRegisterNativesUPerkSelectionPopupScreenUMG()
	{
	}
	UClass* Z_Construct_UClass_UPerkSelectionPopupScreenUMG_NoRegister()
	{
		return UPerkSelectionPopupScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UPerkSelectionPopupScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkSelectionPopupScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionPopupScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerkSelectionPopupScreenUMG.h" },
		{ "ModuleRelativePath", "Public/PerkSelectionPopupScreenUMG.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkSelectionPopupScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkSelectionPopupScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkSelectionPopupScreenUMG_Statics::ClassParams = {
		&UPerkSelectionPopupScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionPopupScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionPopupScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkSelectionPopupScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkSelectionPopupScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkSelectionPopupScreenUMG, 90044021);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkSelectionPopupScreenUMG>()
	{
		return UPerkSelectionPopupScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkSelectionPopupScreenUMG(Z_Construct_UClass_UPerkSelectionPopupScreenUMG, &UPerkSelectionPopupScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkSelectionPopupScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkSelectionPopupScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
