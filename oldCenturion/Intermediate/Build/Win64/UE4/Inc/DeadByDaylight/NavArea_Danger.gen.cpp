// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NavArea_Danger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Danger() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavArea_Danger_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavArea_Danger();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UNavArea_Danger::StaticRegisterNativesUNavArea_Danger()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_Danger_NoRegister()
	{
		return UNavArea_Danger::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_Danger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_Danger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Danger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavArea_Danger.h" },
		{ "ModuleRelativePath", "Public/NavArea_Danger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_Danger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Danger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Danger_Statics::ClassParams = {
		&UNavArea_Danger::StaticClass,
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
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_Danger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Danger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea_Danger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavArea_Danger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavArea_Danger, 40077236);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNavArea_Danger>()
	{
		return UNavArea_Danger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_Danger(Z_Construct_UClass_UNavArea_Danger, &UNavArea_Danger::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNavArea_Danger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Danger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
