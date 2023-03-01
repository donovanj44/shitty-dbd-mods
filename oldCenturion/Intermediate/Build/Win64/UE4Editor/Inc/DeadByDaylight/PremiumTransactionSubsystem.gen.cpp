// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PremiumTransactionSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePremiumTransactionSubsystem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPremiumTransactionSubsystem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPremiumTransactionSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPremiumTransactionSubsystem::StaticRegisterNativesUPremiumTransactionSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UPremiumTransactionSubsystem_NoRegister()
	{
		return UPremiumTransactionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPremiumTransactionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPremiumTransactionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPremiumTransactionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PremiumTransactionSubsystem.h" },
		{ "ModuleRelativePath", "Public/PremiumTransactionSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPremiumTransactionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPremiumTransactionSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPremiumTransactionSubsystem_Statics::ClassParams = {
		&UPremiumTransactionSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPremiumTransactionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPremiumTransactionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPremiumTransactionSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPremiumTransactionSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPremiumTransactionSubsystem, 3455265141);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPremiumTransactionSubsystem>()
	{
		return UPremiumTransactionSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPremiumTransactionSubsystem(Z_Construct_UClass_UPremiumTransactionSubsystem, &UPremiumTransactionSubsystem::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPremiumTransactionSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPremiumTransactionSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
