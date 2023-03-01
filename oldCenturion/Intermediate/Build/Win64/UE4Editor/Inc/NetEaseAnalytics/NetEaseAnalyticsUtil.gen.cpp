// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetEaseAnalytics/Public/NetEaseAnalyticsUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetEaseAnalyticsUtil() {}
// Cross Module References
	NETEASEANALYTICS_API UClass* Z_Construct_UClass_UNetEaseAnalyticsUtil_NoRegister();
	NETEASEANALYTICS_API UClass* Z_Construct_UClass_UNetEaseAnalyticsUtil();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NetEaseAnalytics();
// End Cross Module References
	void UNetEaseAnalyticsUtil::StaticRegisterNativesUNetEaseAnalyticsUtil()
	{
	}
	UClass* Z_Construct_UClass_UNetEaseAnalyticsUtil_NoRegister()
	{
		return UNetEaseAnalyticsUtil::StaticClass();
	}
	struct Z_Construct_UClass_UNetEaseAnalyticsUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetEaseAnalyticsUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetEaseAnalytics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetEaseAnalyticsUtil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetEaseAnalyticsUtil.h" },
		{ "ModuleRelativePath", "Public/NetEaseAnalyticsUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetEaseAnalyticsUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetEaseAnalyticsUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetEaseAnalyticsUtil_Statics::ClassParams = {
		&UNetEaseAnalyticsUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNetEaseAnalyticsUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetEaseAnalyticsUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetEaseAnalyticsUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetEaseAnalyticsUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetEaseAnalyticsUtil, 1825294639);
	template<> NETEASEANALYTICS_API UClass* StaticClass<UNetEaseAnalyticsUtil>()
	{
		return UNetEaseAnalyticsUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetEaseAnalyticsUtil(Z_Construct_UClass_UNetEaseAnalyticsUtil, &UNetEaseAnalyticsUtil::StaticClass, TEXT("/Script/NetEaseAnalytics"), TEXT("UNetEaseAnalyticsUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetEaseAnalyticsUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
