// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniAttackPicker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniAttackPicker() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniAttackPicker_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniAttackPicker();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherAttackPickerComponent();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UOniAttackPicker::StaticRegisterNativesUOniAttackPicker()
	{
	}
	UClass* Z_Construct_UClass_UOniAttackPicker_NoRegister()
	{
		return UOniAttackPicker::StaticClass();
	}
	struct Z_Construct_UClass_UOniAttackPicker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniAttackPicker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlasherAttackPickerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniAttackPicker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniAttackPicker.h" },
		{ "ModuleRelativePath", "Public/OniAttackPicker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniAttackPicker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniAttackPicker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniAttackPicker_Statics::ClassParams = {
		&UOniAttackPicker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOniAttackPicker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniAttackPicker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniAttackPicker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniAttackPicker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniAttackPicker, 4119365378);
	template<> THEONI_API UClass* StaticClass<UOniAttackPicker>()
	{
		return UOniAttackPicker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniAttackPicker(Z_Construct_UClass_UOniAttackPicker, &UOniAttackPicker::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniAttackPicker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniAttackPicker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
