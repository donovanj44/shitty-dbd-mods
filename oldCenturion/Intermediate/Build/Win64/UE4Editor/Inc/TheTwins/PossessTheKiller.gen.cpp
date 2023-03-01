// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/PossessTheKiller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePossessTheKiller() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UPossessTheKiller_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UPossessTheKiller();
	THETWINS_API UClass* Z_Construct_UClass_UPossessPlayer();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UPossessTheKiller::StaticRegisterNativesUPossessTheKiller()
	{
	}
	UClass* Z_Construct_UClass_UPossessTheKiller_NoRegister()
	{
		return UPossessTheKiller::StaticClass();
	}
	struct Z_Construct_UClass_UPossessTheKiller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPossessTheKiller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPossessPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPossessTheKiller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PossessTheKiller.h" },
		{ "ModuleRelativePath", "Public/PossessTheKiller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPossessTheKiller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPossessTheKiller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPossessTheKiller_Statics::ClassParams = {
		&UPossessTheKiller::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPossessTheKiller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPossessTheKiller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPossessTheKiller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPossessTheKiller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPossessTheKiller, 1964236607);
	template<> THETWINS_API UClass* StaticClass<UPossessTheKiller>()
	{
		return UPossessTheKiller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPossessTheKiller(Z_Construct_UClass_UPossessTheKiller, &UPossessTheKiller::StaticClass, TEXT("/Script/TheTwins"), TEXT("UPossessTheKiller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPossessTheKiller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
