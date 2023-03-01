// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplinteredStates/Public/SplinteredStatesSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplinteredStatesSubsystem() {}
// Cross Module References
	SPLINTEREDSTATES_API UClass* Z_Construct_UClass_USplinteredStatesSubsystem_NoRegister();
	SPLINTEREDSTATES_API UClass* Z_Construct_UClass_USplinteredStatesSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_SplinteredStates();
// End Cross Module References
	void USplinteredStatesSubsystem::StaticRegisterNativesUSplinteredStatesSubsystem()
	{
	}
	UClass* Z_Construct_UClass_USplinteredStatesSubsystem_NoRegister()
	{
		return USplinteredStatesSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USplinteredStatesSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplinteredStatesSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SplinteredStates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplinteredStatesSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplinteredStatesSubsystem.h" },
		{ "ModuleRelativePath", "Public/SplinteredStatesSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplinteredStatesSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplinteredStatesSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplinteredStatesSubsystem_Statics::ClassParams = {
		&USplinteredStatesSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USplinteredStatesSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplinteredStatesSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplinteredStatesSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplinteredStatesSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplinteredStatesSubsystem, 1672388145);
	template<> SPLINTEREDSTATES_API UClass* StaticClass<USplinteredStatesSubsystem>()
	{
		return USplinteredStatesSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplinteredStatesSubsystem(Z_Construct_UClass_USplinteredStatesSubsystem, &USplinteredStatesSubsystem::StaticClass, TEXT("/Script/SplinteredStates"), TEXT("USplinteredStatesSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplinteredStatesSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
