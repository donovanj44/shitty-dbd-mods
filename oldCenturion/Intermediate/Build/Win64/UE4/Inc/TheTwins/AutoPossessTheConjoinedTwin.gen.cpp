// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/AutoPossessTheConjoinedTwin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoPossessTheConjoinedTwin() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UAutoPossessTheConjoinedTwin_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UAutoPossessTheConjoinedTwin();
	THETWINS_API UClass* Z_Construct_UClass_UPossessTheConjoinedTwin();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UAutoPossessTheConjoinedTwin::StaticRegisterNativesUAutoPossessTheConjoinedTwin()
	{
	}
	UClass* Z_Construct_UClass_UAutoPossessTheConjoinedTwin_NoRegister()
	{
		return UAutoPossessTheConjoinedTwin::StaticClass();
	}
	struct Z_Construct_UClass_UAutoPossessTheConjoinedTwin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoPossessTheConjoinedTwin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPossessTheConjoinedTwin,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoPossessTheConjoinedTwin_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AutoPossessTheConjoinedTwin.h" },
		{ "ModuleRelativePath", "Public/AutoPossessTheConjoinedTwin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoPossessTheConjoinedTwin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoPossessTheConjoinedTwin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoPossessTheConjoinedTwin_Statics::ClassParams = {
		&UAutoPossessTheConjoinedTwin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAutoPossessTheConjoinedTwin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoPossessTheConjoinedTwin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoPossessTheConjoinedTwin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoPossessTheConjoinedTwin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoPossessTheConjoinedTwin, 2382870659);
	template<> THETWINS_API UClass* StaticClass<UAutoPossessTheConjoinedTwin>()
	{
		return UAutoPossessTheConjoinedTwin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoPossessTheConjoinedTwin(Z_Construct_UClass_UAutoPossessTheConjoinedTwin, &UAutoPossessTheConjoinedTwin::StaticClass, TEXT("/Script/TheTwins"), TEXT("UAutoPossessTheConjoinedTwin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoPossessTheConjoinedTwin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
