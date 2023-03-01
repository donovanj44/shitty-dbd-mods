// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EventsFactory.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventsFactory() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEventsFactory_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEventsFactory();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UEventsFactory::StaticRegisterNativesUEventsFactory()
	{
	}
	UClass* Z_Construct_UClass_UEventsFactory_NoRegister()
	{
		return UEventsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEventsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventsFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventsFactory.h" },
		{ "ModuleRelativePath", "Public/EventsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventsFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventsFactory_Statics::ClassParams = {
		&UEventsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventsFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventsFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventsFactory, 3837860847);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEventsFactory>()
	{
		return UEventsFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventsFactory(Z_Construct_UClass_UEventsFactory, &UEventsFactory::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEventsFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventsFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
