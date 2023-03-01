// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaCalendarEventsTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaCalendarEventsTemplate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_NoRegister();
// End Cross Module References
	void UUMGAtlantaCalendarEventsTemplate::StaticRegisterNativesUUMGAtlantaCalendarEventsTemplate()
	{
	}
	UClass* Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_NoRegister()
	{
		return UUMGAtlantaCalendarEventsTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRewardGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DailyRewardGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGAtlantaBaseEventsTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaCalendarEventsTemplate.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCalendarEventsTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::NewProp_DailyRewardGrid_MetaData[] = {
		{ "Category", "UMGAtlantaCalendarEventsTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCalendarEventsTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::NewProp_DailyRewardGrid = { "DailyRewardGrid", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaCalendarEventsTemplate, DailyRewardGrid), Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::NewProp_DailyRewardGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::NewProp_DailyRewardGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::NewProp_DailyRewardGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaCalendarEventsTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::ClassParams = {
		&UUMGAtlantaCalendarEventsTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaCalendarEventsTemplate, 1396104554);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaCalendarEventsTemplate>()
	{
		return UUMGAtlantaCalendarEventsTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaCalendarEventsTemplate(Z_Construct_UClass_UUMGAtlantaCalendarEventsTemplate, &UUMGAtlantaCalendarEventsTemplate::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaCalendarEventsTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaCalendarEventsTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
