// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchivesSpecialBehavioursHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesSpecialBehavioursHelper() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchivesSpecialBehavioursHelper_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchivesSpecialBehavioursHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UArchivesSpecialBehavioursHelper::StaticRegisterNativesUArchivesSpecialBehavioursHelper()
	{
	}
	UClass* Z_Construct_UClass_UArchivesSpecialBehavioursHelper_NoRegister()
	{
		return UArchivesSpecialBehavioursHelper::StaticClass();
	}
	struct Z_Construct_UClass_UArchivesSpecialBehavioursHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchivesSpecialBehavioursHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchivesSpecialBehavioursHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchivesSpecialBehavioursHelper.h" },
		{ "ModuleRelativePath", "Public/ArchivesSpecialBehavioursHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchivesSpecialBehavioursHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchivesSpecialBehavioursHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchivesSpecialBehavioursHelper_Statics::ClassParams = {
		&UArchivesSpecialBehavioursHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchivesSpecialBehavioursHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchivesSpecialBehavioursHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchivesSpecialBehavioursHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchivesSpecialBehavioursHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchivesSpecialBehavioursHelper, 1406195623);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArchivesSpecialBehavioursHelper>()
	{
		return UArchivesSpecialBehavioursHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchivesSpecialBehavioursHelper(Z_Construct_UClass_UArchivesSpecialBehavioursHelper, &UArchivesSpecialBehavioursHelper::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArchivesSpecialBehavioursHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchivesSpecialBehavioursHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
