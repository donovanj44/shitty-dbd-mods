// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoudNoiseEventSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoudNoiseEventSystem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoudNoiseEventSystem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoudNoiseEventSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ULoudNoiseEventSystem::StaticRegisterNativesULoudNoiseEventSystem()
	{
	}
	UClass* Z_Construct_UClass_ULoudNoiseEventSystem_NoRegister()
	{
		return ULoudNoiseEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_ULoudNoiseEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoudNoiseEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseEventSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoudNoiseEventSystem.h" },
		{ "ModuleRelativePath", "Public/LoudNoiseEventSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoudNoiseEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudNoiseEventSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoudNoiseEventSystem_Statics::ClassParams = {
		&ULoudNoiseEventSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoudNoiseEventSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoudNoiseEventSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoudNoiseEventSystem, 3757060781);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULoudNoiseEventSystem>()
	{
		return ULoudNoiseEventSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoudNoiseEventSystem(Z_Construct_UClass_ULoudNoiseEventSystem, &ULoudNoiseEventSystem::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULoudNoiseEventSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudNoiseEventSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
