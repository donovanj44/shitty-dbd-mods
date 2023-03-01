// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/InjectSerumOther.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInjectSerumOther() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UInjectSerumOther_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UInjectSerumOther();
	THEK24_API UClass* Z_Construct_UClass_UInjectSerumInteraction();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UInjectSerumOther::StaticRegisterNativesUInjectSerumOther()
	{
	}
	UClass* Z_Construct_UClass_UInjectSerumOther_NoRegister()
	{
		return UInjectSerumOther::StaticClass();
	}
	struct Z_Construct_UClass_UInjectSerumOther_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInjectSerumOther_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInjectSerumInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInjectSerumOther_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "InjectSerumOther.h" },
		{ "ModuleRelativePath", "Public/InjectSerumOther.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInjectSerumOther_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInjectSerumOther>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInjectSerumOther_Statics::ClassParams = {
		&UInjectSerumOther::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInjectSerumOther_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInjectSerumOther_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInjectSerumOther()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInjectSerumOther_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInjectSerumOther, 1687049499);
	template<> THEK24_API UClass* StaticClass<UInjectSerumOther>()
	{
		return UInjectSerumOther::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInjectSerumOther(Z_Construct_UClass_UInjectSerumOther, &UInjectSerumOther::StaticClass, TEXT("/Script/TheK24"), TEXT("UInjectSerumOther"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInjectSerumOther);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
