// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightAttackPicker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightAttackPicker() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightAttackPicker_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightAttackPicker();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherAttackPickerComponent();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UBlightAttackPicker::StaticRegisterNativesUBlightAttackPicker()
	{
	}
	UClass* Z_Construct_UClass_UBlightAttackPicker_NoRegister()
	{
		return UBlightAttackPicker::StaticClass();
	}
	struct Z_Construct_UClass_UBlightAttackPicker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightAttackPicker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlasherAttackPickerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightAttackPicker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightAttackPicker.h" },
		{ "ModuleRelativePath", "Public/BlightAttackPicker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightAttackPicker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightAttackPicker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightAttackPicker_Statics::ClassParams = {
		&UBlightAttackPicker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlightAttackPicker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightAttackPicker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightAttackPicker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightAttackPicker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightAttackPicker, 3651040391);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightAttackPicker>()
	{
		return UBlightAttackPicker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightAttackPicker(Z_Construct_UClass_UBlightAttackPicker, &UBlightAttackPicker::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightAttackPicker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightAttackPicker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
