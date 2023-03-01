// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/OwningPlayerInLamentConfigurationRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwningPlayerInLamentConfigurationRange() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UOwningPlayerInLamentConfigurationRange::StaticRegisterNativesUOwningPlayerInLamentConfigurationRange()
	{
	}
	UClass* Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_NoRegister()
	{
		return UOwningPlayerInLamentConfigurationRange::StaticClass();
	}
	struct Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OwningPlayerInLamentConfigurationRange.h" },
		{ "ModuleRelativePath", "Public/OwningPlayerInLamentConfigurationRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOwningPlayerInLamentConfigurationRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_Statics::ClassParams = {
		&UOwningPlayerInLamentConfigurationRange::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOwningPlayerInLamentConfigurationRange, 209396097);
	template<> THEK25_API UClass* StaticClass<UOwningPlayerInLamentConfigurationRange>()
	{
		return UOwningPlayerInLamentConfigurationRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOwningPlayerInLamentConfigurationRange(Z_Construct_UClass_UOwningPlayerInLamentConfigurationRange, &UOwningPlayerInLamentConfigurationRange::StaticClass, TEXT("/Script/TheK25"), TEXT("UOwningPlayerInLamentConfigurationRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOwningPlayerInLamentConfigurationRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
