// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RecentGameEventTracker.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecentGameEventTracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URecentGameEventTracker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URecentGameEventTracker();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void URecentGameEventTracker::StaticRegisterNativesURecentGameEventTracker()
	{
	}
	UClass* Z_Construct_UClass_URecentGameEventTracker_NoRegister()
	{
		return URecentGameEventTracker::StaticClass();
	}
	struct Z_Construct_UClass_URecentGameEventTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecentGameEventTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecentGameEventTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RecentGameEventTracker.h" },
		{ "ModuleRelativePath", "Public/RecentGameEventTracker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecentGameEventTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecentGameEventTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URecentGameEventTracker_Statics::ClassParams = {
		&URecentGameEventTracker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URecentGameEventTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecentGameEventTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecentGameEventTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URecentGameEventTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URecentGameEventTracker, 1302114992);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URecentGameEventTracker>()
	{
		return URecentGameEventTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URecentGameEventTracker(Z_Construct_UClass_URecentGameEventTracker, &URecentGameEventTracker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URecentGameEventTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecentGameEventTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
