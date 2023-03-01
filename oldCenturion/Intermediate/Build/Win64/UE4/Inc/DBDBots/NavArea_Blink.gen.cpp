// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavArea_Blink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Blink() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UNavArea_Blink_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavArea_Blink();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UNavArea_Blink::StaticRegisterNativesUNavArea_Blink()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_Blink_NoRegister()
	{
		return UNavArea_Blink::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_Blink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_Blink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Blink_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavArea_Blink.h" },
		{ "ModuleRelativePath", "Public/NavArea_Blink.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_Blink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Blink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Blink_Statics::ClassParams = {
		&UNavArea_Blink::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_Blink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Blink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea_Blink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavArea_Blink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavArea_Blink, 1078793743);
	template<> DBDBOTS_API UClass* StaticClass<UNavArea_Blink>()
	{
		return UNavArea_Blink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_Blink(Z_Construct_UClass_UNavArea_Blink, &UNavArea_Blink::StaticClass, TEXT("/Script/DBDBots"), TEXT("UNavArea_Blink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Blink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
