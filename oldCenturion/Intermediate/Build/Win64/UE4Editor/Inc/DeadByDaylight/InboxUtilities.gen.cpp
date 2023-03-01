// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InboxUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInboxUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInboxUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInboxUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UInboxUtilities::StaticRegisterNativesUInboxUtilities()
	{
	}
	UClass* Z_Construct_UClass_UInboxUtilities_NoRegister()
	{
		return UInboxUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UInboxUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInboxUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInboxUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InboxUtilities.h" },
		{ "ModuleRelativePath", "Public/InboxUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInboxUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInboxUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInboxUtilities_Statics::ClassParams = {
		&UInboxUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInboxUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInboxUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInboxUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInboxUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInboxUtilities, 4102557641);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInboxUtilities>()
	{
		return UInboxUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInboxUtilities(Z_Construct_UClass_UInboxUtilities, &UInboxUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInboxUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInboxUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
