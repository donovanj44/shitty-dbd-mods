// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDTags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTags() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTags_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTags();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDTags::StaticRegisterNativesUDBDTags()
	{
	}
	UClass* Z_Construct_UClass_UDBDTags_NoRegister()
	{
		return UDBDTags::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTags_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDTags_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTags_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDTags.h" },
		{ "ModuleRelativePath", "Public/DBDTags.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTags_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTags>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTags_Statics::ClassParams = {
		&UDBDTags::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDTags_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTags_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTags()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTags_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTags, 2938795078);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDTags>()
	{
		return UDBDTags::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTags(Z_Construct_UClass_UDBDTags, &UDBDTags::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDTags"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTags);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
