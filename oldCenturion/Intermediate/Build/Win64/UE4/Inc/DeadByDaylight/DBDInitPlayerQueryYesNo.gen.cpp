// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDInitPlayerQueryYesNo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDInitPlayerQueryYesNo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDInitPlayerQueryYesNo_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDInitPlayerQueryYesNo();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDInitPlayerQuery();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDInitPlayerQueryYesNo::StaticRegisterNativesUDBDInitPlayerQueryYesNo()
	{
	}
	UClass* Z_Construct_UClass_UDBDInitPlayerQueryYesNo_NoRegister()
	{
		return UDBDInitPlayerQueryYesNo::StaticClass();
	}
	struct Z_Construct_UClass_UDBDInitPlayerQueryYesNo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDInitPlayerQueryYesNo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDInitPlayerQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInitPlayerQueryYesNo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDInitPlayerQueryYesNo.h" },
		{ "ModuleRelativePath", "Public/DBDInitPlayerQueryYesNo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDInitPlayerQueryYesNo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDInitPlayerQueryYesNo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDInitPlayerQueryYesNo_Statics::ClassParams = {
		&UDBDInitPlayerQueryYesNo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDInitPlayerQueryYesNo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInitPlayerQueryYesNo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDInitPlayerQueryYesNo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDInitPlayerQueryYesNo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDInitPlayerQueryYesNo, 1551304478);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDInitPlayerQueryYesNo>()
	{
		return UDBDInitPlayerQueryYesNo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDInitPlayerQueryYesNo(Z_Construct_UClass_UDBDInitPlayerQueryYesNo, &UDBDInitPlayerQueryYesNo::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDInitPlayerQueryYesNo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDInitPlayerQueryYesNo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
