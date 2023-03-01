// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Penalty/Public/PenaltyTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePenaltyTracker() {}
// Cross Module References
	PENALTY_API UClass* Z_Construct_UClass_UPenaltyTracker_NoRegister();
	PENALTY_API UClass* Z_Construct_UClass_UPenaltyTracker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Penalty();
// End Cross Module References
	void UPenaltyTracker::StaticRegisterNativesUPenaltyTracker()
	{
	}
	UClass* Z_Construct_UClass_UPenaltyTracker_NoRegister()
	{
		return UPenaltyTracker::StaticClass();
	}
	struct Z_Construct_UClass_UPenaltyTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPenaltyTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Penalty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPenaltyTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PenaltyTracker.h" },
		{ "ModuleRelativePath", "Public/PenaltyTracker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPenaltyTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPenaltyTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPenaltyTracker_Statics::ClassParams = {
		&UPenaltyTracker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPenaltyTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPenaltyTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPenaltyTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPenaltyTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPenaltyTracker, 4219494887);
	template<> PENALTY_API UClass* StaticClass<UPenaltyTracker>()
	{
		return UPenaltyTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPenaltyTracker(Z_Construct_UClass_UPenaltyTracker, &UPenaltyTracker::StaticClass, TEXT("/Script/Penalty"), TEXT("UPenaltyTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPenaltyTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
