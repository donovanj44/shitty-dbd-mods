// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/ReloadKnives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadKnives() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UReloadKnives_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UReloadKnives();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBaseLockerInteraction();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	void UReloadKnives::StaticRegisterNativesUReloadKnives()
	{
	}
	UClass* Z_Construct_UClass_UReloadKnives_NoRegister()
	{
		return UReloadKnives::StaticClass();
	}
	struct Z_Construct_UClass_UReloadKnives_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReloadKnives_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLockerInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadKnives_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ReloadKnives.h" },
		{ "ModuleRelativePath", "Public/ReloadKnives.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReloadKnives_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadKnives>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReloadKnives_Statics::ClassParams = {
		&UReloadKnives::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReloadKnives_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReloadKnives_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReloadKnives()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReloadKnives_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReloadKnives, 3131246301);
	template<> THEK23_API UClass* StaticClass<UReloadKnives>()
	{
		return UReloadKnives::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReloadKnives(Z_Construct_UClass_UReloadKnives, &UReloadKnives::StaticClass, TEXT("/Script/TheK23"), TEXT("UReloadKnives"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadKnives);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
