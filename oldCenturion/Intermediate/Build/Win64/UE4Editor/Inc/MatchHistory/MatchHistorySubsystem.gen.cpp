// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MatchHistory/Public/MatchHistorySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchHistorySubsystem() {}
// Cross Module References
	MATCHHISTORY_API UClass* Z_Construct_UClass_UMatchHistorySubsystem_NoRegister();
	MATCHHISTORY_API UClass* Z_Construct_UClass_UMatchHistorySubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_MatchHistory();
// End Cross Module References
	void UMatchHistorySubsystem::StaticRegisterNativesUMatchHistorySubsystem()
	{
	}
	UClass* Z_Construct_UClass_UMatchHistorySubsystem_NoRegister()
	{
		return UMatchHistorySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMatchHistorySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchHistorySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MatchHistory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchHistorySubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MatchHistorySubsystem.h" },
		{ "ModuleRelativePath", "Public/MatchHistorySubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchHistorySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchHistorySubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatchHistorySubsystem_Statics::ClassParams = {
		&UMatchHistorySubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMatchHistorySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchHistorySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchHistorySubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatchHistorySubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatchHistorySubsystem, 2911553100);
	template<> MATCHHISTORY_API UClass* StaticClass<UMatchHistorySubsystem>()
	{
		return UMatchHistorySubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatchHistorySubsystem(Z_Construct_UClass_UMatchHistorySubsystem, &UMatchHistorySubsystem::StaticClass, TEXT("/Script/MatchHistory"), TEXT("UMatchHistorySubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchHistorySubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
