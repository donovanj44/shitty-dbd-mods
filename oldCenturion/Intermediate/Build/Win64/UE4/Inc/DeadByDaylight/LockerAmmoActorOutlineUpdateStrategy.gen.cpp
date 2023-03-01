// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LockerAmmoActorOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockerAmmoActorOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDefaultOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ULockerAmmoActorOutlineUpdateStrategy::StaticRegisterNativesULockerAmmoActorOutlineUpdateStrategy()
	{
	}
	UClass* Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_NoRegister()
	{
		return ULockerAmmoActorOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LockerAmmoActorOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/LockerAmmoActorOutlineUpdateStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockerAmmoActorOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_Statics::ClassParams = {
		&ULockerAmmoActorOutlineUpdateStrategy::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULockerAmmoActorOutlineUpdateStrategy, 2984969931);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULockerAmmoActorOutlineUpdateStrategy>()
	{
		return ULockerAmmoActorOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULockerAmmoActorOutlineUpdateStrategy(Z_Construct_UClass_ULockerAmmoActorOutlineUpdateStrategy, &ULockerAmmoActorOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULockerAmmoActorOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockerAmmoActorOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
