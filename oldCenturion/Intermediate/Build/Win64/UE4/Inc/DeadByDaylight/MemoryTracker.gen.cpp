// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MemoryTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemoryTracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMemoryTracker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMemoryTracker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void AMemoryTracker::StaticRegisterNativesAMemoryTracker()
	{
	}
	UClass* Z_Construct_UClass_AMemoryTracker_NoRegister()
	{
		return AMemoryTracker::StaticClass();
	}
	struct Z_Construct_UClass_AMemoryTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMemoryTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMemoryTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MemoryTracker.h" },
		{ "ModuleRelativePath", "Public/MemoryTracker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMemoryTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMemoryTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMemoryTracker_Statics::ClassParams = {
		&AMemoryTracker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMemoryTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMemoryTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMemoryTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMemoryTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMemoryTracker, 2362593311);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AMemoryTracker>()
	{
		return AMemoryTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMemoryTracker(Z_Construct_UClass_AMemoryTracker, &AMemoryTracker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AMemoryTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMemoryTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
