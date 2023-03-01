// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaBaseEventsTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaBaseEventsTemplate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UUMGAtlantaBaseEventsTemplate::StaticRegisterNativesUUMGAtlantaBaseEventsTemplate()
	{
	}
	UClass* Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_NoRegister()
	{
		return UUMGAtlantaBaseEventsTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaBaseEventsTemplate.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaBaseEventsTemplate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaBaseEventsTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_Statics::ClassParams = {
		&UUMGAtlantaBaseEventsTemplate::StaticClass,
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
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaBaseEventsTemplate, 2558355040);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaBaseEventsTemplate>()
	{
		return UUMGAtlantaBaseEventsTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaBaseEventsTemplate(Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate, &UUMGAtlantaBaseEventsTemplate::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaBaseEventsTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaBaseEventsTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
