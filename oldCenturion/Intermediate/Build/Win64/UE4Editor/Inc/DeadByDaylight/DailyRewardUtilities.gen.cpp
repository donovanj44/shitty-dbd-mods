// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DailyRewardUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRewardUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDailyRewardUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDailyRewardUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDailyRewardUtilities::StaticRegisterNativesUDailyRewardUtilities()
	{
	}
	UClass* Z_Construct_UClass_UDailyRewardUtilities_NoRegister()
	{
		return UDailyRewardUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDailyRewardUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDailyRewardUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRewardUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DailyRewardUtilities.h" },
		{ "ModuleRelativePath", "Public/DailyRewardUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDailyRewardUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDailyRewardUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDailyRewardUtilities_Statics::ClassParams = {
		&UDailyRewardUtilities::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDailyRewardUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRewardUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDailyRewardUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDailyRewardUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDailyRewardUtilities, 862797720);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDailyRewardUtilities>()
	{
		return UDailyRewardUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDailyRewardUtilities(Z_Construct_UClass_UDailyRewardUtilities, &UDailyRewardUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDailyRewardUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDailyRewardUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
